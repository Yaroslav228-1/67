const worksData = [
    { title: "Евгений Онегин", year: "1823–1831", desc: "Роман в стихах, энциклопедия русской жизни.", icon: "📖" },
    { title: "Руслан и Людмила", year: "1820", desc: "Волшебная поэма, полная приключений и иронии.", icon: "⚔️" },
    { title: "Капитанская дочка", year: "1836", desc: "Исторический роман о пугачёвщине и чести.", icon: "🎭" },
    { title: "Медный всадник", year: "1833", desc: "Поэма о Петербурге и маленьком человеке.", icon: "🏛️" },
    { title: "Борис Годунов", year: "1825", desc: "Народная драма о власти и совести.", icon: "👑" },
    { title: "Сказка о царе Салтане", year: "1831", desc: "Волшебная сказка в стихах, любимая детьми.", icon: "🐿️" }
];

// Хронология жизни
const timelineEvents = [
    { year: "1799", event: "Рождение в Москве, в Немецкой слободе." },
    { year: "1811", event: "Поступление в Царскосельский лицей." },
    { year: "1817", event: "Окончание лицея, служба в Коллегии иностранных дел." },
    { year: "1820", event: "Южная ссылка (Кишинёв, Одесса)." },
    { year: "1824", event: "Ссылка в Михайловское." },
    { year: "1830", event: "Болдинская осень — невероятный творческий подъём." },
    { year: "1831", event: "Женитьба на Наталье Гончаровой." },
    { year: "1837", event: "Дуэль с Дантесом, смерть поэта." }
];

// Галерея изображений (используем публичные изображения Пушкина из викимедиа)
const galleryImages = [
    "https://upload.wikimedia.org/wikipedia/commons/thumb/e/ec/Alexander_Pushkin_by_Kiprensky.jpg/400px-Alexander_Pushkin_by_Kiprensky.jpg",
    "https://upload.wikimedia.org/wikipedia/commons/thumb/5/5e/Alexander_Pushkin_self_portrait_1820s.jpg/400px-Alexander_Pushkin_self_portrait_1820s.jpg",
    "https://upload.wikimedia.org/wikipedia/commons/thumb/0/0c/Pushkin_self_portrait_Onegin_1830.jpg/400px-Pushkin_self_portrait_Onegin_1830.jpg",
    "https://upload.wikimedia.org/wikipedia/commons/thumb/7/7d/Tropinin_pushkin.jpg/400px-Tropinin_pushkin.jpg",
    "https://upload.wikimedia.org/wikipedia/commons/thumb/7/74/Pushkin_drawing_Onegin.jpg/400px-Pushkin_drawing_Onegin.jpg",
    "https://upload.wikimedia.org/wikipedia/commons/thumb/2/28/Pushkin_NN.jpg/400px-Pushkin_NN.jpg"
];

// Цитаты Пушкина (массив)
const quotesArray = [
    { text: "Я памятник себе воздвиг нерукотворный, к нему не зарастет народная тропа.", author: "«Я памятник себе воздвиг...»" },
    { text: "Унылая пора! Очей очарованье! Приятна мне твоя прощальная краса.", author: "«Осень»" },
    { text: "Любви все возрасты покорны.", author: "«Евгений Онегин»" },
    { text: "Чем меньше женщину мы любим, тем легче нравимся мы ей.", author: "«Евгений Онегин»" },
    { text: "Береги честь смолоду.", author: "«Капитанская дочка»" },
    { text: "Привычка свыше нам дана: замена счастию она.", author: "«Евгений Онегин»" },
    { text: "И долго буду тем любезен я народу, что чувства добрые я лирой пробуждал.", author: "«Памятник»" },
    { text: "Сказка ложь, да в ней намёк! Добрым молодцам урок.", author: "«Сказка о золотом петушке»" }
];

// Функция отрисовки карточек произведений
function renderWorks() {
    const grid = document.getElementById('worksGrid');
    if (!grid) return;
    grid.innerHTML = '';
    worksData.forEach(work => {
        const card = document.createElement('div');
        card.className = 'work-card';
        card.innerHTML = `
            <div class="work-card__cover">${work.icon}</div>
            <div class="work-card__content">
                <div class="work-card__title">${work.title}</div>
                <div class="work-card__year">${work.year}</div>
                <div class="work-card__desc">${work.desc}</div>
            </div>
        `;
        grid.appendChild(card);
    });
}

// Хронология
function renderTimeline() {
    const container = document.getElementById('timelineList');
    if (!container) return;
    container.innerHTML = '';
    timelineEvents.forEach(item => {
        const el = document.createElement('div');
        el.className = 'timeline-item';
        el.innerHTML = `<div class="timeline-year">${item.year}</div><div class="timeline-event">${item.event}</div>`;
        container.appendChild(el);
    });
}

// Галерея
function renderGallery() {
    const galleryGrid = document.getElementById('galleryGrid');
    if (!galleryGrid) return;
    galleryGrid.innerHTML = '';
    galleryImages.forEach(src => {
        const item = document.createElement('div');
        item.className = 'gallery-item';
        const img = document.createElement('img');
        img.src = src;
        img.alt = "Портрет Пушкина / иллюстрация";
        img.loading = "lazy";
        // fallback на случай битых ссылок
        img.onerror = () => { img.src = 'https://upload.wikimedia.org/wikipedia/commons/thumb/e/ec/Alexander_Pushkin_by_Kiprensky.jpg/400px-Alexander_Pushkin_by_Kiprensky.jpg'; };
        item.appendChild(img);
        galleryGrid.appendChild(item);
    });
}

// Генератор случайной цитаты
let currentQuoteIndex = 0;
function updateRandomQuote() {
    const randomIndex = Math.floor(Math.random() * quotesArray.length);
    const quote = quotesArray[randomIndex];
    const quoteTextEl = document.getElementById('quoteText');
    const quoteAuthorEl = document.getElementById('quoteAuthor');
    if (quoteTextEl && quoteAuthorEl) {
        quoteTextEl.textContent = quote.text;
        quoteAuthorEl.textContent = `— ${quote.author}`;
    }
}

// "Случайное стихотворение" — интерактивный алерт + уведомление
function showRandomPoem() {
    const poems = [
        "«Я помню чудное мгновенье...»",
        "«Зимнее утро» (Мороз и солнце; день чудесный!)",
        "«Пророк» (Духовной жаждою томим...)",
        "«К Чаадаеву» (Любви, надежды, тихой славы...)",
        "«Анчар» (В пустыне чахлой и скупой...)"
    ];
    const randomPoem = poems[Math.floor(Math.random() * poems.length)];
    alert(`✨ Случайное стихотворение Александра Пушкина:\n\n${randomPoem}\n\n«Чтение — лучшее учение».`);
}

// Мобильное меню
function initMobileMenu() {
    const toggleBtn = document.getElementById('navToggle');
    const navList = document.getElementById('navList');
    if (toggleBtn && navList) {
        toggleBtn.addEventListener('click', () => {
            navList.classList.toggle('active');
        });
        // Закрывать при клике на ссылку
        document.querySelectorAll('.nav__link').forEach(link => {
            link.addEventListener('click', () => {
                navList.classList.remove('active');
            });
        });
    }
}

// Добавляем плавный скролл для навигации
function initSmoothScroll() {
    document.querySelectorAll('.nav__link, .hero__btn[href="#"]').forEach(anchor => {
        anchor.addEventListener('click', function(e) {
            const href = this.getAttribute('href');
            if (href && href !== '#' && href.startsWith('#')) {
                e.preventDefault();
                const targetId = href.substring(1);
                const target = document.getElementById(targetId);
                if (target) {
                    target.scrollIntoView({ behavior: 'smooth', block: 'start' });
                }
            }
        });
    });
    // отдельно для герой-кнопки она ведет на random, но добавим ссылки из меню
    const menuLinks = document.querySelectorAll('.nav__list a');
    menuLinks.forEach(link => {
        link.addEventListener('click', (e) => {
            const href = link.getAttribute('href');
            if (href && href !== '#' && href.startsWith('#')) {
                e.preventDefault();
                const elem = document.querySelector(href);
                if (elem) elem.scrollIntoView({ behavior: 'smooth' });
            }
        });
    });
}

// инициализация после загрузки DOM
document.addEventListener('DOMContentLoaded', () => {
    renderWorks();
    renderTimeline();
    renderGallery();
    initMobileMenu();
    initSmoothScroll();

    // Обработчик кнопки случайной цитаты
    const newQuoteBtn = document.getElementById('newQuoteBtn');
    if (newQuoteBtn) newQuoteBtn.addEventListener('click', updateRandomQuote);
    
    const randomPoemBtn = document.getElementById('randomPoemBtn');
    if (randomPoemBtn) randomPoemBtn.addEventListener('click', showRandomPoem);
    
    // задаём первую цитату неслучайно (по умолчанию из массива)
    const defaultQuote = quotesArray[0];
    const quoteTextEl = document.getElementById('quoteText');
    const quoteAuthorEl = document.getElementById('quoteAuthor');
    if (quoteTextEl && quoteAuthorEl) {
        quoteTextEl.textContent = defaultQuote.text;
        quoteAuthorEl.textContent = `— ${defaultQuote.author}`;
    }
});
