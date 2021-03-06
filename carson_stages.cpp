#include<vector>
#include <SFML/Graphics.hpp>
#include "stage_init.h"
#include "carson_stages.h"

std::vector<fixture> hardCarson(sf::Texture& spike) {
  std::vector<fixture> pitfall;
  fixture victory(false, true, spike, 50, 50, 675, 675);
  victory.platform.setFillColor(sf::Color(255,255,255));
  fixture victoryFlag(false, false, spike, 25, 100, 650, 675);
  fixture optionalVictory(false, true, spike, 25, 25, 455, 750);
  optionalVictory.platform.setFillColor(sf::Color(255,255,255));

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

  fixture leftSidePit1(true, false, spike, 50, 50, 149, 725);
  fixture leftSidePit2(true, false, spike, 50, 50, 199, 725);
  fixture leftSidePit3(true, false, spike, 50, 50, 249, 725);
  fixture leftSidePit4(true, false, spike, 50, 50, 326, 725);
  fixture leftSidePit5(true, false, spike, 50, 50, 376, 725);
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

std::vector<fixture> easyCarson(sf::Texture& spike) {
  std::vector<fixture> trees;
  fixture victory(false, true, spike, 50, 50, 1075, 675);
  victory.platform.setFillColor(sf::Color(255,255,255));
  fixture victoryFlag(false, false, spike, 25, 100, 1050, 675);
  fixture optionalVictory(false, true, spike, 25, 25, 455, 750);
  optionalVictory.platform.setFillColor(sf::Color(255,0,0));

  fixture floor1(false, false, spike, 300, 25, 0, 775);
  fixture leftWall(false, false, spike, 25, 1200, 0, 0);
  fixture rightWall(false, false, spike, 25, 1200, 1175, 0);
  fixture ceiling(false, false, spike, 1200, 25, 0, 0);

  fixture tree1(false, false, spike, 25, 1100, 300, 100);
  tree1.platform.setFillColor(sf::Color(139,69,19));

  fixture tree1Plat1(false, false, spike, 150, 25, 150, 700);
  tree1Plat1.platform.setFillColor(sf::Color(0,200,0));
  fixture tree1Plat2(false, false, spike, 100, 25, 200, 580);
  tree1Plat2.platform.setFillColor(sf::Color(0,200,0));

  fixture tree1Plat3(false, false, spike, 50, 25, 250, 420);
  tree1Plat3.platform.setFillColor(sf::Color(0,200,0));
  fixture tree1Plat4(false, false, spike, 25, 25, 275, 230);
  tree1Plat4.platform.setFillColor(sf::Color(0,200,0));

  fixture trunk1(false, false, spike, 50, 100, 950, 675);
  trunk1.platform.setFillColor(sf::Color(139,69,19));

  fixture bottomless1(true, false, spike, 50, 50, 325, 800);
  fixture bottomless2(true, false, spike, 50, 50, 375, 800);
  fixture bottomless3(true, false, spike, 50, 50, 425, 800);
  fixture bottomless4(true, false, spike, 50, 50, 475, 800);
  fixture bottomless5(true, false, spike, 50, 50, 525, 800);
  fixture bottomless6(true, false, spike, 50, 50, 575, 800);
  fixture bottomless7(true, false, spike, 50, 50, 625, 800);
  fixture bottomless8(true, false, spike, 50, 50, 675, 800);
  fixture bottomless9(true, false, spike, 50, 50, 725, 800);

  fixture floor2(false, false, spike, 600, 25, 725, 775);

  fixture brush1(true, false, spike, 50, 50, 760, 725);

  trees.push_back(victory);
  trees.push_back(victoryFlag);
  trees.push_back(floor1);
  trees.push_back(floor2);
  trees.push_back(leftWall);
  trees.push_back(rightWall);
  trees.push_back(ceiling);

  trees.push_back(tree1);
  trees.push_back(tree1Plat1);
  trees.push_back(tree1Plat2);
  trees.push_back(tree1Plat3);
  trees.push_back(tree1Plat4);

  trees.push_back(trunk1);

  trees.push_back(bottomless1);
  trees.push_back(bottomless2);
  trees.push_back(bottomless3);
  trees.push_back(bottomless4);
  trees.push_back(bottomless5);
  trees.push_back(bottomless6);
  trees.push_back(bottomless7);
  trees.push_back(bottomless8);
  trees.push_back(bottomless9);
  trees.push_back(brush1);
  return trees;
}