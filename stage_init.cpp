#include<vector>
#include <SFML/Graphics.hpp>
#include "stage_init.h"

std::vector<fixture>* stageInit();

std::vector<fixture>* stageInit() {
  std::vector<fixture>* stages = new std::vector<fixture>[STAGE_TOTAL];
  static sf::Texture spikes;
  spikes.loadFromFile("spikes.png");
  stages[0] = collisionPlayground(spikes);
  //stages[1] = stageTwo(spikes);
  stages[1] = stageFour(spikes);
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

//The Long Way
std::vector<fixture> stageTwo(sf::Texture& spike)
{
    std::vector<fixture> sTwo;
    //window boundaries
    fixture fix1(false, false, spike, 25, 800, 0, 0);
    fixture fix2(false, false, spike, 25, 800, 1175, 0);
    fixture fix3(false, false, spike, 1150, 25, 25, 0);
    fixture fix4(false, false, spike, 1150, 25, 25, 775);

    sTwo.push_back(fix1);
    sTwo.push_back(fix2);
    sTwo.push_back(fix3);
    sTwo.push_back(fix4);
    return sTwo;
}

//Lotsa Hops
std::vector<fixture> stageFour(sf::Texture& spike)
{
    std::vector<fixture> sFour;
    //bottom floor and spike pit
    //**************************
    fixture fix1(false, false, spike, 275, 25, 25, 775);
    //spike walls below screen and spikes
    fixture fix2(false, false, spike, 1, 175, 299, 800);
    fixture fix3(true, false, spike, 0, 0, 300, 975);
    fixture fix4(true, false, spike, 0, 0, 350, 975);
    fixture fix5(false, false, spike, 1, 175, 401, 800);
    //***********************************
    fixture fix6(false, false, spike, 800, 25, 400, 775);
    //bottom floor right wall spike
    fixture fix34(true, false, spike, 0, 0, 1125, 775);
    fix34.hazard.rotate(270);
    //*****************************
    //bottom floor spikes
    fixture fix64(true, false, spike, 0, 0, 475, 725);
    fixture fix65(true, false, spike, 0, 0, 625, 725);
    fixture fix66(true, false, spike, 0, 0, 775, 725);
    fixture fix67(true, false, spike, 0, 0, 925, 725);
    //*******************
    //bottom floor left wall spikes
    fixture fix68(true, false, spike, 0, 0, 75, 725);
    fix68.hazard.rotate(90);
    fixture fix69(true, false, spike, 0, 0, 75, 675);
    fix69.hazard.rotate(90);


    //window side walls and ceiling
    fixture fix8(false, false, spike, 25, 800, 1175, 0);
    fixture fix9(false, false, spike, 25, 800, 0, 0);
    fixture fix41(false, false, spike, 1150, 25, 25, 0);
    //*****************************


    //second layer floor
    fixture fix7(false, false, spike, 1100, 25, 25, 625);
    //******************

    //second layer spike array
    //leftmost spike array
    fixture fix11(true, false, spike, 0, 0, 25, 575);
    fixture fix12(true, false, spike, 0, 0, 75, 575);
    fixture fix13(true, false, spike, 0, 0, 125, 575);
    fixture fix14(true, false, spike, 0, 0, 175, 575);
    //********************
    //rightmost spike array
    fixture fix15(true, false, spike, 0, 0, 1000, 575);
    fixture fix16(true, false, spike, 0, 0, 950, 575);
    fixture fix17(true, false, spike, 0, 0, 900, 575);
    fixture fix18(true, false, spike, 0, 0, 850, 575);
    //*********************
    //ceiling spike array
    fixture fix19(true, false, spike, 0, 0, 850, 425);
    fix19.hazard.rotate(180);
    fixture fix20(true, false, spike, 0, 0, 800, 425);
    fix20.hazard.rotate(180);
    fixture fix21(true, false, spike, 0, 0, 750, 425);
    fix21.hazard.rotate(180);
    fixture fix22(true, false, spike, 0, 0, 700, 425);
    fix22.hazard.rotate(180);
    fixture fix23(true, false, spike, 0, 0, 650, 425);
    fix23.hazard.rotate(180);
    fixture fix24(true, false, spike, 0, 0, 600, 425);
    fix24.hazard.rotate(180);
    fixture fix25(true, false, spike, 0, 0, 550, 425);
    fix25.hazard.rotate(180);
    fixture fix26(true, false, spike, 0, 0, 500, 425);
    fix26.hazard.rotate(180);
    fixture fix27(true, false, spike, 0, 0, 450, 425);
    fix27.hazard.rotate(180);
    fixture fix36(true, false, spike, 0, 0, 450, 425);
    fix36.hazard.rotate(180);
    fixture fix37(true, false, spike, 0, 0, 400, 425);
    fix37.hazard.rotate(180);
    fixture fix38(true, false, spike, 0, 0, 350, 425);
    fix38.hazard.rotate(180);
    fixture fix39(true, false, spike, 0, 0, 300, 425);
    fix39.hazard.rotate(180);
    fixture fix40(true, false, spike, 0, 0, 250, 425);
    fix40.hazard.rotate(180);
    //*********************
    //second left spike array
    fixture fix28(true, false, spike, 0, 0, 475, 575);
    fixture fix29(true, false, spike, 0, 0, 425, 575);
    fixture fix30(true, false, spike, 0, 0, 400, 575);
    //***********************
    //second right spike array
    fixture fix31(true, false, spike, 0, 0, 700, 575);
    fixture fix32(true, false, spike, 0, 0, 650, 575);
    fixture fix33(true, false, spike, 0, 0, 625, 575);
    //************************

    //second floor step to third floor
    fixture fix35(false, false, spike, 25, 25, 25, 475);
    //********************************


    //third layer floor
    fixture fix10(false, false, spike, 1100, 25, 75, 350);
    //*****************
    //ladder array
    fixture fix42(false, false, spike, 25, 325, 100, 50);
    fixture fix43(false, false, spike, 25, 25, 25, 200);
    //************
    //third layer bridge
    fixture fix44(false, false, spike, 1025, 25, 125, 50);
    //******************
    //platform to win and win point
    fixture fix45(false, false, spike, 25, 25, 125, 200);
    fixture fix46(false, true, spike, 50, 50, 250, 75);
    fix46.platform.setFillColor(sf::Color(255,255,255));
    //*****************************

    //third floor spike array
    //leftmost spikes
    fixture fix47(true, false, spike, 0, 0, 125, 300);
    fixture fix48(true, false, spike, 0, 0, 175, 300);
    fixture fix49(true, false, spike, 0, 0, 225, 300);
    fixture fix50(true, false, spike, 0, 0, 275, 300);
    //***************
    //second left spikes
    fixture fix51(true, false, spike, 0, 0, 400, 300);
    fixture fix52(true, false, spike, 0, 0, 425, 300);
    fixture fix53(true, false, spike, 0, 0, 475, 300);
    fixture fix54(true, false, spike, 0, 0, 525, 300);
    //******************
    //middle spikes
    fixture fix55(true, false, spike, 0, 0, 650, 300);
    fixture fix56(true, false, spike, 0, 0, 675, 300);
    fixture fix57(true, false, spike, 0, 0, 725, 300);
    fixture fix58(true, false, spike, 0, 0, 775, 300);
    //*************
    //second right spikes
    fixture fix59(true, false, spike, 0, 0, 900, 300);
    fixture fix60(true, false, spike, 0, 0, 925, 300);
    fixture fix61(true, false, spike, 0, 0, 975, 300);
    //*******************
    //rightmost spikes
    fixture fix62(true, false, spike, 0, 0, 1100, 300);
    fixture fix63(true, false, spike, 0, 0, 1125, 300);
    //****************


    sFour.push_back(fix1);
    sFour.push_back(fix2);
    sFour.push_back(fix3);
    sFour.push_back(fix4);
    sFour.push_back(fix5);
    sFour.push_back(fix6);
    sFour.push_back(fix7);
    sFour.push_back(fix8);
    sFour.push_back(fix9);
    sFour.push_back(fix10);
    sFour.push_back(fix11);
    sFour.push_back(fix12);
    sFour.push_back(fix13);
    sFour.push_back(fix14);
    sFour.push_back(fix15);
    sFour.push_back(fix16);
    sFour.push_back(fix17);
    sFour.push_back(fix18);
    sFour.push_back(fix19);
    sFour.push_back(fix20);
    sFour.push_back(fix21);
    sFour.push_back(fix22);
    sFour.push_back(fix23);
    sFour.push_back(fix24);
    sFour.push_back(fix25);
    sFour.push_back(fix26);
    sFour.push_back(fix27);
    sFour.push_back(fix28);
    sFour.push_back(fix29);
    sFour.push_back(fix30);
    sFour.push_back(fix31);
    sFour.push_back(fix32);
    sFour.push_back(fix33);
    sFour.push_back(fix34);
    sFour.push_back(fix35);
    sFour.push_back(fix36);
    sFour.push_back(fix37);
    sFour.push_back(fix38);
    sFour.push_back(fix39);
    sFour.push_back(fix40);
    sFour.push_back(fix41);
    sFour.push_back(fix42);
    sFour.push_back(fix43);
    sFour.push_back(fix44);
    sFour.push_back(fix45);
    sFour.push_back(fix46);
    sFour.push_back(fix47);
    sFour.push_back(fix48);
    sFour.push_back(fix49);
    sFour.push_back(fix50);
    sFour.push_back(fix51);
    sFour.push_back(fix52);
    sFour.push_back(fix53);
    sFour.push_back(fix54);
    sFour.push_back(fix55);
    sFour.push_back(fix56);
    sFour.push_back(fix57);
    sFour.push_back(fix58);
    sFour.push_back(fix59);
    sFour.push_back(fix60);
    sFour.push_back(fix61);
    sFour.push_back(fix62);
    sFour.push_back(fix63);
    sFour.push_back(fix64);
    sFour.push_back(fix65);
    sFour.push_back(fix66);
    sFour.push_back(fix67);
    sFour.push_back(fix68);
    sFour.push_back(fix69);
    return sFour;
}
