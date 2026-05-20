* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

body {
    font-family: 'Inter', sans-serif;
    background-color: #fefaf5;
    color: #2c2418;
    line-height: 1.5;
}

.page-wrapper {
    overflow-x: hidden;
}

.container {
    max-width: 1280px;
    margin: 0 auto;
    padding: 0 32px;
}

/* typography */
.section__title {
    font-family: 'Playfair Display', serif;
    font-size: 2.4rem;
    font-weight: 700;
    margin-bottom: 2rem;
    position: relative;
    display: inline-block;
    letter-spacing: -0.01em;
    background: linear-gradient(135deg, #2c2418, #8b5a2b);
    background-clip: text;
    -webkit-background-clip: text;
    color: transparent;
}

.section__title::after {
    content: '';
    position: absolute;
    bottom: -10px;
    left: 0;
    width: 70px;
    height: 3px;
    background: #c49a6c;
    border-radius: 2px;
}

/* header */
.header {
    background: rgba(255, 251, 245, 0.96);
    backdrop-filter: blur(8px);
    position: sticky;
    top: 0;
    z-index: 100;
    border-bottom: 1px solid #e8ddd0;
    padding: 1rem 0;
}

.header__inner {
    display: flex;
    justify-content: space-between;
    align-items: center;
}

.logo {
    display: flex;
    align-items: center;
    gap: 0.5rem;
    font-family: 'Playfair Display', serif;
    font-size: 1.7rem;
    font-weight: 800;
}

.logo__icon {
    font-size: 1.9rem;
}

.logo__text {
    background: linear-gradient(120deg, #6b3a1f, #b97f45);
    background-clip: text;
    -webkit-background-clip: text;
    color: transparent;
}

.nav__list {
    display: flex;
    gap: 2rem;
    list-style: none;
}

.nav__link {
    text-decoration: none;
    font-weight: 500;
    color: #3e2a1f;
    transition: 0.2s;
    font-size: 1rem;
}

.nav__link:hover {
    color: #b45f2b;
}

.nav__toggle {
    display: none;
    background: none;
    border: none;
    font-size: 1.8rem;
    cursor: pointer;
    color: #4a3520;
}

/* hero */
.hero {
    padding: 3rem 0 4rem 0;
    background: linear-gradient(145deg, #fff7ef 0%, #f9ede0 100%);
}

.hero__container {
    display: flex;
    gap: 3rem;
    align-items: center;
    flex-wrap: wrap;
}

.hero__content {
    flex: 1;
}

.hero__badge {
    display: inline-block;
    background: #e7d9cc;
    padding: 0.3rem 1rem;
    border-radius: 40px;
    font-size: 0.85rem;
    font-weight: 600;
    color: #6e4d2e;
    margin-bottom: 1.2rem;
}

.hero__title {
    font-family: 'Playfair Display', serif;
    font-size: clamp(2.5rem, 7vw, 4rem);
    font-weight: 800;
    line-height: 1.2;
    margin-bottom: 1rem;
    color: #271e14;
}

.hero__subtitle {
    font-size: 1.2rem;
    color: #5c4b36;
    margin: 1.2rem 0 1.8rem;
    max-width: 550px;
}

.hero__btn {
    background: #926d42;
    border: none;
    color: white;
    padding: 0.8rem 2rem;
    border-radius: 40px;
    font-weight: 600;
    font-size: 1rem;
    cursor: pointer;
    transition: all 0.25s;
    box-shadow: 0 6px 14px rgba(110, 65, 30, 0.2);
}

.hero__btn:hover {
    background: #7b5633;
    transform: translateY(-2px);
}

.hero__image {
    flex: 0.8;
    display: flex;
    justify-content: center;
}

.portrait-frame {
    width: 280px;
    height: 280px;
    border-radius: 50%;
    overflow: hidden;
    box-shadow: 0 25px 35px -12px rgba(0,0,0,0.25);
    border: 4px solid #f2e3d4;
}

.portrait-img {
    width: 100%;
    height: 100%;
    object-fit: cover;
}

/* bio section */
.section {
    padding: 5rem 0;
}

.bio__grid {
    display: flex;
    gap: 3rem;
    flex-wrap: wrap;
}

.bio__text {
    flex: 2;
    font-size: 1.05rem;
    color: #3d2c1c;
}

.bio__text p {
    margin-bottom: 1.2rem;
}

.bio__fact {
    flex: 1;
    background: #f7efe7;
    padding: 1.8rem;
    border-radius: 28px;
    box-shadow: 0 8px 20px rgba(0,0,0,0.03);
}

.bio__fact h3 {
    font-family: 'Playfair Display', serif;
    font-size: 1.5rem;
    margin-bottom: 1rem;
}

.bio__fact ul {
    list-style: none;
}

.bio__fact li {
    margin-bottom: 0.8rem;
    display: flex;
    align-items: center;
    gap: 8px;
}

/* works cards */
.works__grid {
    display: grid;
    grid-template-columns: repeat(auto-fill, minmax(260px, 1fr));
    gap: 2rem;
    margin-top: 1.5rem;
}

.work-card {
    background: #ffffff;
    border-radius: 24px;
    overflow: hidden;
    transition: all 0.2s;
    box-shadow: 0 6px 12px rgba(0,0,0,0.05);
    border: 1px solid #f0e2d4;
}

.work-card:hover {
    transform: translateY(-6px);
    border-color: #d9c6b2;
    box-shadow: 0 20px 25px -12px rgba(0,0,0,0.12);
}

.work-card__cover {
    height: 140px;
    background: linear-gradient(120deg, #e2cdb5, #f8e5d4);
    display: flex;
    align-items: center;
    justify-content: center;
    font-size: 3rem;
}

.work-card__content {
    padding: 1.2rem;
}

.work-card__title {
    font-family: 'Playfair Display', serif;
    font-size: 1.3rem;
    font-weight: 700;
    margin-bottom: 0.4rem;
}

.work-card__year {
    font-size: 0.8rem;
    color: #9c7b5c;
    margin-bottom: 0.6rem;
}

.work-card__desc {
    font-size: 0.9rem;
    color: #5a4430;
}

/* timeline */
.timeline__wrapper {
    display: flex;
    flex-direction: column;
    gap: 1rem;
    max-width: 800px;
    margin: 0 auto;
}

.timeline-item {
    background: white;
    border-radius: 60px;
    padding: 0.8rem 1.5rem;
    display: flex;
    align-items: baseline;
    gap: 1.2rem;
    flex-wrap: wrap;
    border-left: 4px solid #b87a47;
    box-shadow: 0 2px 6px rgba(0,0,0,0.03);
}

.timeline-year {
    font-weight: 800;
    font-size: 1.2rem;
    min-width: 80px;
    color: #9b5e2c;
}

.timeline-event {
    color: #2f241b;
}

/* gallery */
.gallery__grid {
    display: grid;
    grid-template-columns: repeat(auto-fit, minmax(200px, 1fr));
    gap: 1.5rem;
}

.gallery-item {
    border-radius: 24px;
    overflow: hidden;
    background: #f0e2d6;
    aspect-ratio: 1 / 1;
    box-shadow: 0 10px 18px rgba(0,0,0,0.1);
}

.gallery-item img {
    width: 100%;
    height: 100%;
    object-fit: cover;
    transition: 0.3s;
}

.gallery-item img:hover {
    transform: scale(1.02);
}

/* quotes */
.quotes {
    background: #faf3ea;
}

.quote-card {
    max-width: 700px;
    margin: 0 auto;
    text-align: center;
    background: white;
    padding: 2.5rem 2rem;
    border-radius: 48px;
    box-shadow: 0 20px 40px -16px rgba(0,0,0,0.12);
}

.quote__icon {
    font-size: 3rem;
    font-family: serif;
    color: #c79a6e;
    margin-bottom: 0.5rem;
}

.quote__text {
    font-size: 1.35rem;
    line-height: 1.4;
    font-family: 'Playfair Display', serif;
    font-weight: 500;
    margin: 1rem 0;
    color: #2c2418;
}

.quote__author {
    font-style: italic;
    margin-bottom: 2rem;
    color: #8f673f;
}

.quote__btn {
    background: #e7cfba;
    border: none;
    padding: 0.6rem 1.5rem;
    border-radius: 40px;
    font-weight: 600;
    cursor: pointer;
    transition: 0.2s;
    color: #4f2e16;
}

.quote__btn:hover {
    background: #dbbd9e;
    transform: scale(0.98);
}

/* footer */
.footer {
    background: #2c2418;
    color: #cbbfae;
    padding: 2rem 0;
    text-align: center;
}

.footer__quote {
    margin-top: 1rem;
    font-size: 0.85rem;
    font-style: italic;
}

/* адаптив */
@media (max-width: 768px) {
    .container {
        padding: 0 20px;
    }
    .nav__list {
        display: none;
        flex-direction: column;
        background: #fff9f2;
        position: absolute;
        top: 70px;
        left: 0;
        width: 100%;
        padding: 1.5rem;
        gap: 1rem;
        border-bottom: 1px solid #e3d5c6;
        box-shadow: 0 16px 20px rgba(0,0,0,0.05);
    }
    .nav__list.active {
        display: flex;
    }
    .nav__toggle {
        display: block;
    }
    .hero__container {
        flex-direction: column-reverse;
        text-align: center;
    }
    .hero__subtitle {
        margin-left: auto;
        margin-right: auto;
    }
    .bio__grid {
        flex-direction: column;
    }
    .section__title::after {
        left: 50%;
        transform: translateX(-50%);
    }
    .section__title {
        display: block;
        text-align: center;
    }
    .timeline-item {
        border-radius: 28px;
        flex-direction: column;
        align-items: flex-start;
    }
}
