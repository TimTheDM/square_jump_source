#include<vector>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "stage_init.h"
#include "tim_stages.h"

std::vector<fixture> mimeMaze(sf::Texture& spike) {
  std::vector<fixture> mimeMaze;
  //initial box
  fixture fix1(false, false, spike, 200, 25, 0, 775);
  fixture fix2(false, false, spike, 25, 200, 0, 575);
  fixture fix3(false, false, spike, 25, 75, 175, 725);
  fixture fix4(false, false, spike, 150, 25, 175, 665);
  fixture fix5(false, false, spike, 150, 25, 175, 725);
  fixture fix6(false, false, spike, 135, 25, 0, 575);
  fixture fix7(false, false, spike, 25, 30, 175, 575);
  fixture fix8(false, false, spike, 25, 100, 200, 575);
  //spike chamber
  fixture fix9(false, false, spike, 25, 75, 300, 725);
  fixture fix10(true, false, spike, 0, 0, 325, 750);
  fixture fix11(true, false, spike, 0, 0, 375, 750);
  fixture fix12(true, false, spike, 0, 0, 425, 750);
  fixture fix13(true, false, spike, 0, 0, 450, 750);
  fixture fix14(false, false, spike, 25, 300, 500, 525);
  fixture fix15(false, false, spike, 25, 350, 300, 325);
  fixture fix16(false, false, spike, 25, 150, 500, 325);
  fixture fix17(false, false, spike, 100, 25, 300, 300);
  fixture fix18(false, false, spike, 75, 25, 450, 300);
  //chamber above start
  fixture fix19(false, false, spike, 25, 300, 0, 275);
  fixture fix20(false, false, spike, 25, 300, 200, 275);
  fixture fix21(false, false, spike, 100, 25, 100, 425);
  fixture fix22(false, false, spike, 100, 25, 25, 275);
  fixture fix23(false, false, spike, 25, 150, 200, 125);
  fixture fix24(false, false, spike, 25, 275, 0, 25);
  fixture fix25(false, false, spike, 175, 25, 225, 125);
  fixture fix26(false, false, spike, 550, 25, 0, 25);
  fixture fix27(false, false, spike, 100, 25, 450, 125);
  fixture fix28(false, false, spike, 25, 100, 550, 25);
  fixture fix29(true, false, spike, 0, 0, 500, 125);
  fix29.hazard.rotate(-90);
  fixture fix30(false, false, spike, 25, 150, 375, 150);
  fixture fix31(false, false, spike, 25, 150, 450, 150);
  //Chamber 3, with pit traps
  fixture fix32(false, false, spike, 125, 25, 500, 525);
  fixture fix33(false, false, spike, 125, 25, 500, 450);
  fixture fix34(false, false, spike, 25, 100, 625, 525);
  fixture fix35(false, false, spike, 25, 100, 625, 375);
  fixture fix36(false, false, spike, 225, 25, 650, 375);
  fixture fix37(false, false, spike, 50, 25, 650, 600);
  fixture fix38(false, false, spike, 50, 25, 750, 600);
  fixture fix39(false, false, spike, 25, 25, 850, 600);
  fixture fix40(false, false, spike, 25, 250, 875, 375);
  fixture fix41(false, false, spike, 25, 75, 675, 625);
  fixture fix42(false, false, spike, 50, 75, 750, 625);
  fixture fix43(false, false, spike, 125, 25, 675, 700);
  fixture fix44(true, false, spike, 0, 0, 700, 650);
  //final hallway to finish
  fixture fix45(false, false, spike, 450, 25, 500, 775);
  fixture fix46(false, false, spike, 175, 25, 500, 700);
  fixture fix47(false, false, spike, 25, 100, 850, 625);
  fixture fix48(false, false, spike, 225, 25, 875, 700);
  fixture fix49(false, false, spike, 225, 25, 950, 770);
  fixture fix50(false, false, spike, 25, 150, 1150, 625);
  fixture fix51(false, false, spike, 25, 75, 1175, 550);
  fixture fix52(false, false, spike, 25, 250, 1150, 300);
  fixture fix53(false, false, spike, 25, 250, 1075, 450);
  fixture fix54(false, false, spike, 25, 250, 1075, 125);
  fixture fix55(false, false, spike, 25, 175, 1150, 50);
  fixture fix56(false, false, spike, 275, 25, 875, 50);
  fixture fix57(false, false, spike, 25, 300, 875, 75);
  fixture fix58(false, false, spike, 25, 475, 1000, 125);
  fixture fix59(false, false, spike, 100, 25, 1000, 125);
  fixture fix60(false, false, spike, 100, 25, 900, 575);
  fixture fix61(false, false, spike, 25, 75, 1050, 375);
  fixture fix62(false, false, spike, 25, 75, 1175, 225);
  fixture fix63(false, false, spike, 50, 75, 900, 375);
  fixture fix64(true, false, spike, 0, 0, 950, 525);
  fixture fix65(false, true, spike, 30, 30, 900, 525);
  fix65.platform.setFillColor(sf::Color(255, 255, 255));
  
  mimeMaze.push_back(fix1);
  mimeMaze.push_back(fix2);
  mimeMaze.push_back(fix3);
  mimeMaze.push_back(fix4);
  mimeMaze.push_back(fix5);
  mimeMaze.push_back(fix6);
  mimeMaze.push_back(fix7);
  mimeMaze.push_back(fix8);
  mimeMaze.push_back(fix9);
  mimeMaze.push_back(fix10);
  mimeMaze.push_back(fix11);
  mimeMaze.push_back(fix12);
  mimeMaze.push_back(fix13);
  mimeMaze.push_back(fix14);
  mimeMaze.push_back(fix15);
  mimeMaze.push_back(fix16);
  mimeMaze.push_back(fix17);
  mimeMaze.push_back(fix18);
  mimeMaze.push_back(fix19);
  mimeMaze.push_back(fix20);
  mimeMaze.push_back(fix21);
  mimeMaze.push_back(fix22);
  mimeMaze.push_back(fix23);
  mimeMaze.push_back(fix24);
  mimeMaze.push_back(fix25);
  mimeMaze.push_back(fix26);
  mimeMaze.push_back(fix27);
  mimeMaze.push_back(fix28);
  mimeMaze.push_back(fix29);
  mimeMaze.push_back(fix30);
  mimeMaze.push_back(fix31);
  mimeMaze.push_back(fix32);
  mimeMaze.push_back(fix33);
  mimeMaze.push_back(fix34);
  mimeMaze.push_back(fix35);
  mimeMaze.push_back(fix36);
  mimeMaze.push_back(fix37);
  mimeMaze.push_back(fix38);
  mimeMaze.push_back(fix39);
  mimeMaze.push_back(fix40);
  mimeMaze.push_back(fix41);
  mimeMaze.push_back(fix42);
  mimeMaze.push_back(fix43);
  mimeMaze.push_back(fix44);
  mimeMaze.push_back(fix45);
  mimeMaze.push_back(fix46);
  mimeMaze.push_back(fix47);
  mimeMaze.push_back(fix48);
  mimeMaze.push_back(fix49);
  mimeMaze.push_back(fix50);
  mimeMaze.push_back(fix51);
  mimeMaze.push_back(fix52);
  mimeMaze.push_back(fix53);
  mimeMaze.push_back(fix54);
  mimeMaze.push_back(fix55);
  mimeMaze.push_back(fix56);
  mimeMaze.push_back(fix57);
  mimeMaze.push_back(fix58);
  mimeMaze.push_back(fix59);
  mimeMaze.push_back(fix60);
  mimeMaze.push_back(fix61);
  mimeMaze.push_back(fix62);
  mimeMaze.push_back(fix63);
  mimeMaze.push_back(fix64);
  mimeMaze.push_back(fix65);

  for(int i = 0;i < mimeMaze.size();i++) {
    if (!mimeMaze.at(i).isHazard && !mimeMaze.at(i).isWinPoint) {
      mimeMaze.at(i).platform.setFillColor(sf::Color(0, 0, 0));
    }
  }

  return mimeMaze;
}

std::vector<fixture> spikeEverest(sf::Texture& spike) {
  std::vector<fixture> spikeEverest;
  
  //ascent spikes

  spikeEverest.push_back(*new fixture(true, false, spike, 0, 0, 185, 160));

  for (int i = 750;i >= 50;i -= 50) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, 60, i);
    spikeWall->hazard.rotate(90);
    spikeEverest.push_back(*spikeWall);
  }

  for (int i = 800;i >= 250;i -= 50) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, 160, i);
    spikeWall->hazard.rotate(-90);
    spikeEverest.push_back(*spikeWall);
  }

  for (int i = 400;i >= 0;i -= 50) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, i, 50);
    spikeWall->hazard.rotate(180);
    spikeEverest.push_back(*spikeWall);
  }

  for (int i = 300;i >= 250;i -= 25) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, i, i-50);
    if (i == 300) spikeWall->hazard.move(0, 50);
    else if (i == 275) spikeWall->hazard.move(0, 25);
    spikeWall->hazard.rotate(90);
    spikeEverest.push_back(*spikeWall);
  }

  for (int i = 50;i >= 0;i -= 25) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, -i+350, i+425);
    if (i == 50) spikeWall->hazard.move(0, 50);
    else if (i == 25) spikeWall->hazard.move(0, 25);
    spikeWall->hazard.rotate(-90);
    spikeEverest.push_back(*spikeWall);
  }

  for (int i = 50;i >= 0;i -= 25) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, i+250, i+550);
    if (i == 50) spikeWall->hazard.move(0, 50);
    else if (i == 25) spikeWall->hazard.move(0, 25);
    spikeWall->hazard.rotate(90);
    spikeEverest.push_back(*spikeWall);
  }

  for (int i = 250;i >= 0;i -= 50) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, 375, i+115);
    spikeWall->hazard.rotate(-90);
    spikeEverest.push_back(*spikeWall);
  }

  for (int i = 150;i >= 0;i -= 50) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, 250, i+350);
    spikeWall->hazard.rotate(90);
    spikeEverest.push_back(*spikeWall);
  }

  for (int i = 100;i >= 0;i -= 50) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, 375, i+575);
    spikeWall->hazard.rotate(-90);
    spikeEverest.push_back(*spikeWall);
  }

  for (int i = 250;i >= 0;i -= 50) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, i+195, 750);
    spikeEverest.push_back(*spikeWall);
  }

  for (int i = 100;i >= 0;i -= 50) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, i+700, 700);
    spikeWall->hazard.rotate(180);
    spikeEverest.push_back(*spikeWall);
  }  

  for (int i = 0;i >= 0;i -= 50) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, i+580, 750);
    spikeEverest.push_back(*spikeWall);
  }

  for (int i = 350;i >= 0;i -= 50) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, i+400, 625);
    spikeEverest.push_back(*spikeWall);
  }

  for (int i = 350;i >= 0;i -= 50) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, i+575, 475);
    spikeWall->hazard.rotate(180);
    spikeEverest.push_back(*spikeWall);
  }

  for (int i = 250;i >= 0;i -= 50) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, 875, i+500);
    spikeWall->hazard.rotate(-90);
    spikeEverest.push_back(*spikeWall);
  }

  for (int i = 350;i >= 0;i -= 50) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, 450, i+225);
    spikeWall->hazard.rotate(90);
    spikeEverest.push_back(*spikeWall);
  }

  for (int i = 100;i >= 0;i -= 50) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, i+625, 275);
    spikeEverest.push_back(*spikeWall);
  }

  for (int i = 50;i >= 0;i -= 50) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, i+525, 350);
    spikeEverest.push_back(*spikeWall);
  }

  for (int i = 100;i >= 0;i -= 50) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, i+750, 200);
    spikeEverest.push_back(*spikeWall);
  }

  for (int i = 50;i >= 0;i -= 50) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, i+800, 75);
    spikeWall->hazard.rotate(180);
    spikeEverest.push_back(*spikeWall);
  }

  for (int i = 50;i >= 0;i -= 50) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, i+675, 150);
    spikeWall->hazard.rotate(180);
    spikeEverest.push_back(*spikeWall);
  }

  for (int i = 150;i >= 0;i -= 50) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, i+450, 225);
    spikeWall->hazard.rotate(180);
    spikeEverest.push_back(*spikeWall);
  }

  for (int i = 0;i >= 0;i -= 50) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, i+600, 350);
    spikeWall->hazard.rotate(-90);
    spikeEverest.push_back(*spikeWall);
  }

  for (int i = 0;i >= 0;i -= 50) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, i+725, 275);
    spikeWall->hazard.rotate(-90);
    spikeEverest.push_back(*spikeWall);
  }

  for (int i = 0;i >= 0;i -= 50) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, i+850, 200);
    spikeWall->hazard.rotate(-90);
    spikeEverest.push_back(*spikeWall);
  }

  for (int i = 100;i >= 0;i -= 25) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, -i+1125, i+150);
    if (i == 100) spikeWall->hazard.move(0, 100);
    else if (i == 75) spikeWall->hazard.move(0, 75);
    else if (i == 50) spikeWall->hazard.move(0, 50);
    else if (i == 25) spikeWall->hazard.move(0, 25);
    spikeWall->hazard.rotate(-90);
    spikeEverest.push_back(*spikeWall);
  }

  for (int i = 100;i >= 0;i -= 25) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, i+975, i+375);
    if (i == 100) spikeWall->hazard.move(0, 100);
    else if (i == 75) spikeWall->hazard.move(0, 75);
    else if (i == 50) spikeWall->hazard.move(0, 50);
    else if (i == 25) spikeWall->hazard.move(0, 25);
    spikeWall->hazard.rotate(90);
    spikeEverest.push_back(*spikeWall);
  }

  for (int i = 100;i >= 0;i -= 25) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, i+1059, i+400);
    if (i == 100) spikeWall->hazard.move(0, 100);
    else if (i == 75) spikeWall->hazard.move(0, 75);
    else if (i == 50) spikeWall->hazard.move(0, 50);
    else if (i == 25) spikeWall->hazard.move(0, 25);
    spikeWall->hazard.rotate(-90);
    spikeEverest.push_back(*spikeWall);
  }

  for (int i = 75;i >= 0;i -= 25) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, -i+1025, i+100);
    if (i == 100) spikeWall->hazard.move(0, 100);
    else if (i == 75) spikeWall->hazard.move(0, 75);
    else if (i == 50) spikeWall->hazard.move(0, 50);
    else if (i == 25) spikeWall->hazard.move(0, 25);
    spikeWall->hazard.rotate(90);
    spikeEverest.push_back(*spikeWall);
  }

  for (int i = 150;i >= 0;i -= 50) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, 1150, i+625);
    spikeWall->hazard.rotate(-90);
    spikeEverest.push_back(*spikeWall);
  }

  for (int i = 150;i >= 0;i -= 50) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, 1075, i+625);
    spikeWall->hazard.rotate(90);
    spikeEverest.push_back(*spikeWall);
  }

  for (int i = 50;i >= 0;i -= 50) {
    fixture* spikeWall = new fixture(true, false, spike, 0, 0, i+1075, 750);
    spikeEverest.push_back(*spikeWall);
  }

  spikeEverest.push_back(*new fixture(true, false, spike, 0, 0, 850, 750));

  //first ascent
  spikeEverest.push_back(*new fixture(false, false, spike, 75, 25, 75, 675));
  spikeEverest.push_back(*new fixture(false, false, spike, 25, 800, 0, 0));
  spikeEverest.push_back(*new fixture(false, false, spike, 25, 600, 200, 200));
  spikeEverest.push_back(*new fixture(false, false, spike, 45, 25, 75, 500));
  spikeEverest.push_back(*new fixture(false, false, spike, 45, 25, 100, 325));
  spikeEverest.push_back(*new fixture(false, false, spike, 45, 25, 75, 195));
  spikeEverest.push_back(*new fixture(false, false, spike, 400, 25, 0, 0));
  spikeEverest.push_back(*new fixture(false, false, spike, 25, 650, 400, 0));
  spikeEverest.push_back(*new fixture(false, false, spike, 25, 50, 225, 300));
  spikeEverest.push_back(*new fixture(false, false, spike, 25, 50, 375, 425));
  spikeEverest.push_back(*new fixture(false, false, spike, 50, 50, 350, 475));
  spikeEverest.push_back(*new fixture(false, false, spike, 25, 50, 225, 650));
  //hallway interim
  fixture jutSpike(true, false, spike, 0, 0, 325, 700);
  jutSpike.hazard.rotate(90);
  spikeEverest.push_back(jutSpike);
  spikeEverest.push_back(*new fixture(false, false, spike, 50, 100, 225, 700));
  spikeEverest.push_back(*new fixture(false, false, spike, 75, 25, 375, 725));
  spikeEverest.push_back(*new fixture(false, false, spike, 625, 25, 275, 775));
  spikeEverest.push_back(*new fixture(false, false, spike, 400, 25, 400, 650));
  spikeEverest.push_back(*new fixture(false, false, spike, 25, 350, 900, 450));
  spikeEverest.push_back(*new fixture(false, false, spike, 400, 25, 525, 425));
  spikeEverest.push_back(*new fixture(false, false, spike, 50, 25, 775, 605));
  spikeEverest.push_back(*new fixture(false, false, spike, 75, 25, 625, 510));
  spikeEverest.push_back(*new fixture(false, false, spike, 75, 25, 625, 600));
  spikeEverest.push_back(*new fixture(false, false, spike, 25, 115, 700, 510));
  spikeEverest.push_back(*new fixture(false, false, spike, 50, 25, 475, 550));
  spikeEverest.push_back(*new fixture(false, false, spike, 50, 25, 415, 425));
  spikeEverest.push_back(*new fixture(false, false, spike, 100, 25, 525, 375));
  spikeEverest.push_back(*new fixture(false, false, spike, 100, 25, 650, 300));
  spikeEverest.push_back(*new fixture(false, false, spike, 100, 25, 775, 225));
  spikeEverest.push_back(*new fixture(false, false, spike, 25, 275, 900, 150));
  spikeEverest.push_back(*new fixture(false, false, spike, 225, 25, 400, 175));
  spikeEverest.push_back(*new fixture(false, false, spike, 100, 25, 650, 100));
  spikeEverest.push_back(*new fixture(false, false, spike, 100, 25, 775, 25));
  spikeEverest.push_back(*new fixture(false, false, spike, 100, 25, 900, 0));
  spikeEverest.push_back(*new fixture(false, false, spike, 100, 25, 525, 400));
  spikeEverest.push_back(*new fixture(false, false, spike, 25, 125, 625, 300));
  spikeEverest.push_back(*new fixture(false, false, spike, 25, 100, 750, 225));
  spikeEverest.push_back(*new fixture(false, false, spike, 25, 100, 750, 25));
  spikeEverest.push_back(*new fixture(false, false, spike, 25, 100, 625, 100));
  spikeEverest.push_back(*new fixture(false, false, spike, 25, 100, 875, 150));
  spikeEverest.push_back(*new fixture(false, false, spike, 25, 50, 875, 0));
  spikeEverest.push_back(*new fixture(false, false, spike, 25, 25, 550, 350));
  spikeEverest.push_back(*new fixture(false, false, spike, 25, 25, 675, 275));
  spikeEverest.push_back(*new fixture(false, false, spike, 25, 25, 800, 200));
  //The drop...
  spikeEverest.push_back(*new fixture(false, false, spike, 300, 25, 900, 0));
  spikeEverest.push_back(*new fixture(false, false, spike, 25, 800, 1175, 0));
  spikeEverest.push_back(*new fixture(false, false, spike, 275, 25, 900, 775));
  spikeEverest.push_back(*new fixture(false, false, spike, 25, 50, 925, 150));
  spikeEverest.push_back(*new fixture(false, false, spike, 100, 50, 925, 100));
  fixture winPoint(false, true, spike, 25, 25, 1100, 700);
  winPoint.platform.setFillColor(sf::Color(255, 255, 255));
  spikeEverest.push_back(winPoint);
  //Finishing touches
  spikeEverest.push_back(*new fixture(false, false, spike, 25, 50, 1150, 150));
  spikeEverest.push_back(*new fixture(false, false, spike, 50, 50, 1125, 200));
  spikeEverest.push_back(*new fixture(false, false, spike, 75, 50, 1100, 250));
  spikeEverest.push_back(*new fixture(false, false, spike, 100, 50, 1075, 300));
  spikeEverest.push_back(*new fixture(false, false, spike, 75, 50, 1100, 350));
  spikeEverest.push_back(*new fixture(false, false, spike, 50, 50, 1125, 400));
  spikeEverest.push_back(*new fixture(false, false, spike, 25, 50, 1150, 450));
  spikeEverest.push_back(*new fixture(false, false, spike, 25, 50, 925, 425));
  spikeEverest.push_back(*new fixture(false, false, spike, 50, 50, 925, 475));
  spikeEverest.push_back(*new fixture(false, false, spike, 75, 50, 925, 525));
  spikeEverest.push_back(*new fixture(false, false, spike, 100, 300, 925, 575));
  spikeEverest.push_back(*new fixture(false, false, spike, 200, 200, 425, 0));
  spikeEverest.push_back(*new fixture(false, false, spike, 125, 100, 625, 0));
  spikeEverest.push_back(*new fixture(false, false, spike, 125, 25, 750, 0));
  spikeEverest.push_back(*new fixture(false, false, spike, 150, 175, 750, 250));
  spikeEverest.push_back(*new fixture(false, false, spike, 100, 100, 650, 325));

  return spikeEverest;
}