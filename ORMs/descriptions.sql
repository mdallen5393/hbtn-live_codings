USE orm_db;

CREATE TABLE IF NOT EXISTS descriptions (
    id INT NOT NULL AUTO_INCREMENT,
    person_id INT NOT NULL,
    word VARCHAR(256) NOT NULL,
    PRIMARY KEY (id),
    FOREIGN KEY(person_id) REFERENCES people(id)
);

INSERT INTO descriptions (person_id, word) VALUES
    (1, 'able'), (1, 'aromatic'),
    (2, 'beloved'), (2, 'burdensome'),
    (3, 'cheerful'), (3, 'creepy'),
    (4, 'dependable'), (4, 'dim'),
    (5, 'enchanging'), (5, 'exhausted'),
    (6, 'fancy'), (6, 'flaky'),
    (7, 'generous'), (7, 'grouchy'),
    (8, 'heavenly'), (8, 'hairy'),
    (9, 'happy'), (9, 'haunting'),
    (10, 'illustrious'), (10, 'irritating'),
    (11, 'jolly'), (11, 'juvenile'),
    (12, 'kind'), (12, 'kooky'),
    (13, 'likeable'), (13, 'lost'),
    (14, 'majectic'), (14, 'misguided');
