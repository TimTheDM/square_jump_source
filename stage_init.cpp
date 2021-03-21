#include<vector>
#include <SFML/Graphics.hpp>
#include "stage_init.h"

std::vector<fixture>* stageInit();

std::vector<fixture>* stageInit() {
  std::vector<fixture>* stages = new std::vector<fixture>[STAGE_TOTAL];
  static sf::Texture spikes;
  spikes.loadFromFile("spikes.png");
  stages[0] = easyCarson(spikes);
  return stages;
}

player::player() {
  this->acceleration = 0.0;
  sf::RectangleShape pSprite(sf::Vector2f(PLAYER_SIZE, PLAYER_SIZE));
  pSprite.setPosition(START_X, START_Y);
  pSprite.setFillColor(sf::Color(0, 255, 255));
  this->pSprite = pSprite;
}

fixture::fixture(bool isHazard, bool isWinPoint, sf::Texture& hazardText, int width, int length, int xOffset, int yOffset) {
  this->isHazard = isHazard;
  this->isWinPoint = isWinPoint;

  if(isHazard) {
    sf::Sprite placeholder;
    placeholder.setTexture(hazardText);
    placeholder.setPosition(xOffset, yOffset);
    this->hazard = placeholder;
  } else {
    sf::RectangleShape placeholder(sf::Vector2f(width, length));
    placeholder.setPosition(xOffset, yOffset);
    placeholder.setFillColor(sf::Color(255, 255, 0));
    this->platform = placeholder;
  }
}

std::vector<fixture> collisionPlayground(sf::Texture& spike) {
  std::vector<fixture> cPlayground;
  fixture fix1(false, false, spike, 1200, 50, 0, 750);
  fixture fix2(false, false, spike, 50, 800, 0, 0);
  fixture fix3(false, false, spike, 150, 50, 300, 650);
  fixture fix4(false, false, spike, 150, 50, 550, 550);
  fixture fix5(false, false, spike, 150, 50, 800, 450);
  fixture fix6(true, false, spike, 0, 0, 950, 700);
  fixture fix7(true, false, spike, 0, 0, 1000, 700);
  fixture fix8(true, false, spike, 0, 0, 1050, 700);
  fixture fix9(true, false, spike, 0, 0, 1100, 700);
  fixture fix10(true, false, spike, 0, 0, 1150, 700);
  fixture fix11(false, false, spike, 150, 50, 550, 300);
  fixture fix12(false, false, spike, 400, 50, 0, 50);
  fixture fix13(false, false, spike, 400, 50, 0, 150);
  fixture fix14(true, false, spike, 0, 0, 100, 550);
  fixture fix15(true, false, spike, 0, 0, 100, 500);
  fixture fix16(true, false, spike, 0, 0, 100, 450);
  fixture fix17(true, false, spike, 0, 0, 100, 400);
  fixture fix18(false, true, spike, 50, 50, 1050, 200);
  fix14.hazard.rotate(90);
  fix15.hazard.rotate(90);
  fix16.hazard.rotate(90);
  fix17.hazard.rotate(90);
  fix18.platform.setFillColor(sf::Color(255,255,255));
  cPlayground.push_back(fix1);
  cPlayground.push_back(fix2);
  cPlayground.push_back(fix3);
  cPlayground.push_back(fix4);
  cPlayground.push_back(fix5);
  cPlayground.push_back(fix6);
  cPlayground.push_back(fix7);
  cPlayground.push_back(fix8);
  cPlayground.push_back(fix9);
  cPlayground.push_back(fix10);
  cPlayground.push_back(fix11);
  cPlayground.push_back(fix12);
  cPlayground.push_back(fix13);
  cPlayground.push_back(fix14);
  cPlayground.push_back(fix15);
  cPlayground.push_back(fix16);
  cPlayground.push_back(fix17);
  cPlayground.push_back(fix18);
  return cPlayground;
}

std::vector<fixture> easyCarson(sf::Texture& spike) {
  std::vector<fixture> pitfall;
  fixture victory(false, true, spike, 50, 50, 675, 675);
  victory.platform.setFillColor(sf::Color(255,255,255));
  fixture victoryFlag(false, false, spike, 25, 100, 650, 675);
  fixture optionalVictory(false, true, spike, 25, 25, 455, 750);
  optionalVictory.platform.setFillColor(sf::Color(255,0,0));

  fixture floor(false, false, spike, 1200, 25, 0, 775);
  fixture leftWall(false, false, spike, 25, 1200, 0, 0);
  fixture rightWall(false, false, spike, 25, 1200, 1175, 0);
  fixture towerBase(false, false, spike, 25, 1200, 600, 300);

  fixture rightPlat1(false, false, spike, 275, 25, 350, 500);
  fixture rightPlat2(false, false, spike, 50, 25, 550, 400);

  fixture leftPlat1(false, false, spike, 100, 25, 0, 600);
  fixture leftPlat2(false, false, spike, 200, 25, 0, 350);
  fixture leftPlat3(false, false, spike, 200, 25, 0, 295);
  fixture leftPlat4(false, false, spike, 100, 25, 0, 150);

  fixture floatPlat1(false, false, spike, 60, 25, 545, 150);
  fixture floatPlat2(false, false, spike, 50, 25, 250, 35);
  fixture floatPlat3(false, false, spike, 25, 60, 325, 0);

  fixture floatSpike1(true, false, spike, 50, 50, 600, 225);
  floatSpike1.hazard.rotate(180);
  fixture floatSpike2(true, false, spike, 50, 50, 550, 100);

  fixture maze1(false, false, spike, 400, 25, 600, 275);
  fixture maze2(false, false, spike, 400, 25, 775, 425);
  fixture maze3(false, false, spike, 500, 25, 600, 550);
  fixture maze4(false, false, spike, 25, 300, 775, 600);
  fixture maze5 (false, false, spike, 50, 25, 830, 670);

  fixture mazeSpike1(true, false, spike, 50, 50, 950, 375);
  fixture mazeSpike2(true, false, spike, 50, 50, 900, 350);
  mazeSpike2.hazard.rotate(180);
  fixture mazeSpike3(true, false, spike, 50, 50, 1100, 500);
  mazeSpike3.hazard.rotate(180);
  fixture mazeSpike4(true, false, spike, 50, 50, 1125, 725);
  fixture mazeSpike5(true, false, spike, 50, 50, 1100, 725);
  fixture mazeSpike6(true, false, spike, 50, 50, 900, 625);
  mazeSpike6.hazard.rotate(180);

  fixture leftSidePit1(true, false, spike, 50, 50, 150, 725);
  fixture leftSidePit2(true, false, spike, 50, 50, 200, 725);
  fixture leftSidePit3(true, false, spike, 50, 50, 250, 725);
  fixture leftSidePit4(true, false, spike, 50, 50, 330, 725);
  fixture leftSidePit5(true, false, spike, 50, 50, 380, 725);
  fixture leftSidePit6(true, false, spike, 50, 50, 510, 725);
  fixture leftSidePit7(true, false, spike, 50, 50, 560, 725);

  pitfall.push_back(victory);
  pitfall.push_back(victoryFlag);
  pitfall.push_back(optionalVictory);
  pitfall.push_back(floor);
  pitfall.push_back(leftWall);
  pitfall.push_back(rightWall);
  pitfall.push_back(towerBase);

  pitfall.push_back(leftPlat1);
  pitfall.push_back(leftPlat2);
  pitfall.push_back(leftPlat3);
  pitfall.push_back(leftPlat4);

  pitfall.push_back(rightPlat1);
  pitfall.push_back(rightPlat2);

  pitfall.push_back(floatPlat1);
  pitfall.push_back(floatPlat2);
  pitfall.push_back(floatPlat3);

  pitfall.push_back(floatSpike1);
  pitfall.push_back(floatSpike2);

  pitfall.push_back(maze1);
  pitfall.push_back(maze2);
  pitfall.push_back(maze3);
  pitfall.push_back(maze4);
  pitfall.push_back(maze5);

  pitfall.push_back(mazeSpike1);
  pitfall.push_back(mazeSpike2);
  pitfall.push_back(mazeSpike3);
  pitfall.push_back(mazeSpike4);
  pitfall.push_back(mazeSpike5);
  pitfall.push_back(mazeSpike6);

  pitfall.push_back(leftSidePit1);
  pitfall.push_back(leftSidePit2);
  pitfall.push_back(leftSidePit3);
  pitfall.push_back(leftSidePit4);
  pitfall.push_back(leftSidePit5);
  pitfall.push_back(leftSidePit6);
  pitfall.push_back(leftSidePit7);
  return pitfall;
}
