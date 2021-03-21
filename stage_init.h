//header file for stage_init

const int PLAYER_SIZE = 25;
const int STAGE_TOTAL = 3;
const int START_X = 100;
const int START_Y = 650;

class fixture {
  public:
    sf::RectangleShape platform;
    sf::Sprite hazard;
    bool isHazard;
    bool isWinPoint;
    fixture(bool, bool, sf::Texture&, int, int, int, int);
    sf::RectangleShape* getPlatform();
    sf::Sprite* getHazard();
};

class player {
  public:
    float acceleration;
    sf::RectangleShape pSprite;
    player();
};

std::vector<fixture>* stageInit();
std::vector<fixture> collisionPlayground(sf::Texture&);
std::vector<fixture> hardCarson(sf::Texture&);
std::vector<fixture> easyCarson(sf::Texture&);
