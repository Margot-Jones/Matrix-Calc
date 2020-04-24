#include "result.h"
#include <SFML/Graphics.hpp>
#include "arithmetic_functions.h"
#include <iostream>

using namespace sf;

Image to_doimage;
Texture to_dotexture;
Sprite to_do;
Image heroimage;
Image headerimage;
Image underlineimage;
Texture herotexture;
Texture headertexture;
Texture underlinetexture;
Sprite underline;
Sprite header;
Sprite line;
Sprite addition;
Sprite difference;
Sprite transpose;
Sprite multiplConst;
Sprite multiplication;
Image sizeimage;
Texture sizetexture;
Sprite two;
Sprite three;
Sprite four;
Sprite five;
Image equalimage;
Texture equaltexture;
Sprite equal;
Image rectangular;
Texture rectangulartexture;
Sprite rectanA_1;
Sprite rectanA_2;
Sprite rectanA_3;
Sprite rectanA_4;
Sprite rectanA_5;
Sprite rectanA_6;
Sprite rectanA_7;
Sprite rectanA_8;
Sprite rectanA_9;
Sprite rectanA_10;
Sprite rectanA_11;
Sprite rectanA_12;
Sprite rectanA_13;
Sprite rectanA_14;
Sprite rectanA_15;
Sprite rectanA_16;
Sprite rectanB_1;
Sprite rectanB_2;
Sprite rectanB_3;
Sprite rectanB_4;
Sprite rectanB_5;
Sprite rectanB_6;
Sprite rectanB_7;
Sprite rectanB_8;
Sprite rectanB_9;
Sprite rectanB_10;
Sprite rectanB_11;
Sprite rectanB_12;
Sprite rectanB_13;
Sprite rectanB_14;
Sprite rectanB_15;
Sprite rectanB_16;
Sprite rectan_rez_1;
Sprite rectan_rez_2;
Sprite rectan_rez_3;
Sprite rectan_rez_4;
Sprite rectan_rez_5;
Sprite rectan_rez_6;
Sprite rectan_rez_7;
Sprite rectan_rez_8;
Sprite rectan_rez_9;
Sprite rectan_rez_10;
Sprite rectan_rez_11;
Sprite rectan_rez_12;
Sprite rectan_rez_13;
Sprite rectan_rez_14;
Sprite rectan_rez_15;
Sprite rectan_rez_16;

int** A_matrix;
int** B_matrix;
int** C_matrix;
Text text;
Font font;

//functions
void initWindow();
void initWindow_2();
void initWindow_3();
void initWindow_4();
void initWindow_5();
void drawAll_2(RenderWindow& window);
void drawAll_3(RenderWindow& window);
void drawAll_4(RenderWindow& window);
void drawAll_5(RenderWindow& window);
void initial(int size);
void handling_2(int size, RenderWindow& window);
void handling_3(int size, RenderWindow& window);
void handling_4(int size, RenderWindow& window);
void destroy(int size);

/*for A_matrix 2 x 2*/
void A_printNumber1_2(int number, RenderWindow& window);
void A_deleteDigit1_2(RenderWindow& window);
void A_printNumber2_2(int number, RenderWindow& window);
void A_deleteDigit2_2(RenderWindow& window);
void A_printNumber3_2(int number, RenderWindow& window);
void A_deleteDigit3_2(RenderWindow& window);
void A_printNumber4_2(int number, RenderWindow& window);
void A_deleteDigit4_2(RenderWindow& window);
/*for A_matrix 2 x 2*/

/*for B_matrix 2 x 2*/
void B_printNumber1_2(int number, RenderWindow& window);
void B_deleteDigit1_2(RenderWindow& window);
void B_printNumber2_2(int number, RenderWindow& window);
void B_deleteDigit2_2(RenderWindow& window);
void B_printNumber3_2(int number, RenderWindow& window);
void B_deleteDigit3_2(RenderWindow& window);
void B_printNumber4_2(int number, RenderWindow& window);
void B_deleteDigit4_2(RenderWindow& window);
/*for B_matrix 2 x 2*/

/*for A_matrix 3 x 3*/
void A_printNumber1_3(int number, RenderWindow& window);
void A_deleteDigit1_3(RenderWindow& window);
void A_printNumber2_3(int number, RenderWindow& window);
void A_deleteDigit2_3(RenderWindow& window);
void A_printNumber3_3(int number, RenderWindow& window);
void A_deleteDigit3_3(RenderWindow& window);
void A_printNumber4_3(int number, RenderWindow& window);
void A_deleteDigit4_3(RenderWindow& window);
void A_printNumber5_3(int number, RenderWindow& window);
void A_deleteDigit5_3(RenderWindow& window);
void A_printNumber6_3(int number, RenderWindow& window);
void A_deleteDigit6_3(RenderWindow& window);
void A_printNumber7_3(int number, RenderWindow& window);
void A_deleteDigit7_3(RenderWindow& window);
void A_printNumber8_3(int number, RenderWindow& window);
void A_deleteDigit8_3(RenderWindow& window);
void A_printNumber9_3(int number, RenderWindow& window);
void A_deleteDigit9_3(RenderWindow& window);
/*for A_matrix 3 x 3*/

/*for B_matrix 3 x 3*/
void B_printNumber1_3(int number, RenderWindow& window);
void B_deleteDigit1_3(RenderWindow& window);
void B_printNumber2_3(int number, RenderWindow& window);
void B_deleteDigit2_3(RenderWindow& window);
void B_printNumber3_3(int number, RenderWindow& window);
void B_deleteDigit3_3(RenderWindow& window);
void B_printNumber4_3(int number, RenderWindow& window);
void B_deleteDigit4_3(RenderWindow& window);
void B_printNumber5_3(int number, RenderWindow& window);
void B_deleteDigit5_3(RenderWindow& window);
void B_printNumber6_3(int number, RenderWindow& window);
void B_deleteDigit6_3(RenderWindow& window);
void B_printNumber7_3(int number, RenderWindow& window);
void B_deleteDigit7_3(RenderWindow& window);
void B_printNumber8_3(int number, RenderWindow& window);
void B_deleteDigit8_3(RenderWindow& window);
void B_printNumber9_3(int number, RenderWindow& window);
void B_deleteDigit9_3(RenderWindow& window);
/*for B_matrix 3 x 3*/

/*for A_matrix 4 x 4*/
void A_printNumber1_4(int number, RenderWindow& window);
void A_deleteDigit1_4(RenderWindow& window);
void A_printNumber2_4(int number, RenderWindow& window);
void A_deleteDigit2_4(RenderWindow& window);
void A_printNumber3_4(int number, RenderWindow& window);
void A_deleteDigit3_4(RenderWindow& window);
void A_printNumber4_4(int number, RenderWindow& window);
void A_deleteDigit4_4(RenderWindow& window);
void A_printNumber5_4(int number, RenderWindow& window);
void A_deleteDigit5_4(RenderWindow& window);
void A_printNumber6_4(int number, RenderWindow& window);
void A_deleteDigit6_4(RenderWindow& window);
void A_printNumber7_4(int number, RenderWindow& window);
void A_deleteDigit7_4(RenderWindow& window);
void A_printNumber8_4(int number, RenderWindow& window);
void A_deleteDigit8_4(RenderWindow& window);
void A_printNumber9_4(int number, RenderWindow& window);
void A_deleteDigit9_4(RenderWindow& window);
void A_printNumber10_4(int number, RenderWindow& window);
void A_deleteDigit10_4(RenderWindow& window);
void A_printNumber11_4(int number, RenderWindow& window);
void A_deleteDigit11_4(RenderWindow& window);
void A_printNumber12_4(int number, RenderWindow& window);
void A_deleteDigit12_4(RenderWindow& window);
void A_printNumber13_4(int number, RenderWindow& window);
void A_deleteDigit13_4(RenderWindow& window);
void A_printNumber14_4(int number, RenderWindow& window);
void A_deleteDigit14_4(RenderWindow& window);
void A_printNumber15_4(int number, RenderWindow& window);
void A_deleteDigit15_4(RenderWindow& window);
void A_printNumber16_4(int number, RenderWindow& window);
void A_deleteDigit16_4(RenderWindow& window);
/*for A_matrix 4 x 4*/

/*for B_matrix 4 x 4*/
void B_printNumber1_4(int number, RenderWindow& window);
void B_deleteDigit1_4(RenderWindow& window);
void B_printNumber2_4(int number, RenderWindow& window);
void B_deleteDigit2_4(RenderWindow& window);
void B_printNumber3_4(int number, RenderWindow& window);
void B_deleteDigit3_4(RenderWindow& window);
void B_printNumber4_4(int number, RenderWindow& window);
void B_deleteDigit4_4(RenderWindow& window);
void B_printNumber5_4(int number, RenderWindow& window);
void B_deleteDigit5_4(RenderWindow& window);
void B_printNumber6_4(int number, RenderWindow& window);
void B_deleteDigit6_4(RenderWindow& window);
void B_printNumber7_4(int number, RenderWindow& window);
void B_deleteDigit7_4(RenderWindow& window);
void B_printNumber8_4(int number, RenderWindow& window);
void B_deleteDigit8_4(RenderWindow& window);
void B_printNumber9_4(int number, RenderWindow& window);
void B_deleteDigit9_4(RenderWindow& window);
void B_printNumber10_4(int number, RenderWindow& window);
void B_deleteDigit10_4(RenderWindow& window);
void B_printNumber11_4(int number, RenderWindow& window);
void B_deleteDigit11_4(RenderWindow& window);
void B_printNumber12_4(int number, RenderWindow& window);
void B_deleteDigit12_4(RenderWindow& window);
void B_printNumber13_4(int number, RenderWindow& window);
void B_deleteDigit13_4(RenderWindow& window);
void B_printNumber14_4(int number, RenderWindow& window);
void B_deleteDigit14_4(RenderWindow& window);
void B_printNumber15_4(int number, RenderWindow& window);
void B_deleteDigit15_4(RenderWindow& window);
void B_printNumber16_4(int number, RenderWindow& window);
void B_deleteDigit16_4(RenderWindow& window);
/*for B_matrix 4 x 4*/

int numberSizeCounter(int number);
void getFinallResult(int option, int size);
//functions

void run(){

        RenderWindow window(sf::VideoMode(1200, 500), "Matrix Calculator");
        int size = 2;
        initial(size);
        initWindow();
        initWindow_2();
        window.clear(Color::White);
        drawAll_2(window);
        while (window.isOpen())
        {
            Vector2i pos = Mouse::getPosition(window);       // получение координат при нажатии кнопок мышки
            int x = pos.x;
            int y = pos.y;

            Event event;
            while (window.pollEvent(event))
            {
                if (event.type == Event::Closed)
                {
                    destroy(size);
                    window.close();
                }
                if (event.type == Event::MouseButtonPressed){
                    if(event.key.code == Mouse::Left)
                    {
                        if(x > 284 && x < 367 && y > 150 && y < 175){
                            size = 2;
                            initial(size);
                            initWindow_2();
                            window.clear(Color::White);
                            drawAll_2(window);
                            handling_2(size, window);
                            window.clear(Color::White);
                            drawAll_2(window);
                        }
                        if(x > 370 && x < 453 && y > 150 && y < 175){
                            size = 3;
                            initial(size);
                            initWindow_3();
                            window.clear(Color::White);
                            drawAll_3(window);
                            handling_3(size, window);
                            window.clear(Color::White);
                            drawAll_3(window);
                        }
                        if(x > 455 && x < 538 && y > 150 && y < 175){
                            size = 4;
                            initial(size);
                            initWindow_4();
                            window.clear(Color::White);
                            drawAll_4(window);
                            handling_4(size, window);
                            window.clear(Color::White);
                            drawAll_4(window);
                        }
                        if(x > 540 && x < 623 && y > 150 && y < 175){
                            initWindow_5();
                            window.clear(Color::White);
                            drawAll_5(window);
                            window.clear(Color::White);
                            drawAll_5(window);
                        }
                    }
                }
            }
        }
}

void initWindow(){
    font.loadFromFile("aBosaNova Bold.ttf");

    text.setFont(font);
    text.setCharacterSize(14);
    text.setColor(Color::Black);
    text.setStyle(Text::Italic);

    headerimage.loadFromFile("header.png");

    headertexture.loadFromImage(headerimage);


    header.setTexture(headertexture);
    header.setTextureRect(IntRect(0,0,440,77));
    header.setPosition(250, 50);

    line.setTexture(headertexture);
    line.setTextureRect(IntRect(0,86,460,5));
    line.setPosition(220, 190);

}

void initWindow_2(){

    heroimage.loadFromFile("hero.png");

    herotexture.loadFromImage(heroimage);


    addition.setTexture(herotexture);
    addition.setTextureRect(IntRect(0,0,43,43));
    addition.setPosition(235, 220);

    difference.setTexture(herotexture);
    difference.setTextureRect(IntRect(0,49,43,43));
    difference.setPosition(305, 220);

    transpose.setTexture(herotexture);
    transpose.setTextureRect(IntRect(0,98,43,43));
    transpose.setPosition(270, 260);

    multiplConst.setTexture(herotexture);
    multiplConst.setTextureRect(IntRect(0,147,43,43));
    multiplConst.setPosition(235, 300);

    multiplication.setTexture(herotexture);
    multiplication.setTextureRect(IntRect(0,196,43,43));
    multiplication.setPosition(305, 300);

    sizeimage.loadFromFile("size.png");

    sizetexture.loadFromImage(sizeimage);

    two.setTexture(sizetexture);
    two.setTextureRect(IntRect(0,0,83,25));
    two.setPosition(284, 150);

    three.setTexture(sizetexture);
    three.setTextureRect(IntRect(87,0,83,25));
    three.setPosition(370, 150);

    four.setTexture(sizetexture);
    four.setTextureRect(IntRect(174,0,83,25));
    four.setPosition(455, 150);

    five.setTexture(sizetexture);
    five.setTextureRect(IntRect(261,0,83,25));
    five.setPosition(540, 150);

    equalimage.loadFromFile("equal.png");

    equaltexture.loadFromImage(equalimage);

    equal.setTexture(equaltexture);
    equal.setTextureRect(IntRect(0,0,64,64));
    equal.setPosition(555, 245);

    rectangular.loadFromFile("rectangular.png");

    rectangulartexture.loadFromImage(rectangular);

    rectanA_1.setTexture(rectangulartexture);
    rectanA_1.setTextureRect(IntRect(5,5,75,35));
    rectanA_1.setPosition(61, 238);

    rectanA_2.setTexture(rectangulartexture);
    rectanA_2.setTextureRect(IntRect(5,5,75,35));
    rectanA_2.setPosition(134, 238);

    rectanA_3.setTexture(rectangulartexture);
    rectanA_3.setTextureRect(IntRect(5,5,75,35));
    rectanA_3.setPosition(61, 282);

    rectanA_4.setTexture(rectangulartexture);
    rectanA_4.setTextureRect(IntRect(5,5,75,35));
    rectanA_4.setPosition(134, 282);

    rectanB_1.setTexture(rectangulartexture);
    rectanB_1.setTextureRect(IntRect(5,5,75,35));
    rectanB_1.setPosition(380, 238);

    rectanB_2.setTexture(rectangulartexture);
    rectanB_2.setTextureRect(IntRect(5,5,75,35));
    rectanB_2.setPosition(453, 238);

    rectanB_3.setTexture(rectangulartexture);
    rectanB_3.setTextureRect(IntRect(5,5,75,35));
    rectanB_3.setPosition(380, 282);

    rectanB_4.setTexture(rectangulartexture);
    rectanB_4.setTextureRect(IntRect(5,5,75,35));
    rectanB_4.setPosition(453, 282);

    rectan_rez_1.setTexture(rectangulartexture);
    rectan_rez_1.setTextureRect(IntRect(5,5,75,35));
    rectan_rez_1.setPosition(650, 238);

    rectan_rez_2.setTexture(rectangulartexture);
    rectan_rez_2.setTextureRect(IntRect(5,5,75,35));
    rectan_rez_2.setPosition(723, 238);

    rectan_rez_3.setTexture(rectangulartexture);
    rectan_rez_3.setTextureRect(IntRect(5,5,75,35));
    rectan_rez_3.setPosition(650, 282);

    rectan_rez_4.setTexture(rectangulartexture);
    rectan_rez_4.setTextureRect(IntRect(5,5,75,35));
    rectan_rez_4.setPosition(723, 282);

    underlineimage.loadFromFile("underline.png");

    underlinetexture.loadFromImage(underlineimage);

    underline.setTexture(underlinetexture);
    underline.setTextureRect(IntRect(0,0,270,17));
    underline.setPosition(10, 470);

}

void initWindow_3(){

    heroimage.loadFromFile("hero.png");

    herotexture.loadFromImage(heroimage);


    addition.setTexture(herotexture);
    addition.setTextureRect(IntRect(0,0,43,43));
    addition.setPosition(295, 235);

    difference.setTexture(herotexture);
    difference.setTextureRect(IntRect(0,49,43,43));
    difference.setPosition(365, 235);

    transpose.setTexture(herotexture);
    transpose.setTextureRect(IntRect(0,98,43,43));
    transpose.setPosition(330, 275);

    multiplConst.setTexture(herotexture);
    multiplConst.setTextureRect(IntRect(0,147,43,43));
    multiplConst.setPosition(295, 315);

    multiplication.setTexture(herotexture);
    multiplication.setTextureRect(IntRect(0,196,43,43));
    multiplication.setPosition(365, 315);

    sizeimage.loadFromFile("size_3.png");

    sizetexture.loadFromImage(sizeimage);

    two.setTexture(sizetexture);
    two.setTextureRect(IntRect(0,0,83,25));
    two.setPosition(284, 150);

    three.setTexture(sizetexture);
    three.setTextureRect(IntRect(87,0,83,25));
    three.setPosition(370, 150);

    four.setTexture(sizetexture);
    four.setTextureRect(IntRect(174,0,83,25));
    four.setPosition(455, 150);

    five.setTexture(sizetexture);
    five.setTextureRect(IntRect(261,0,83,25));
    five.setPosition(540, 150);

    equalimage.loadFromFile("equal.png");

    equaltexture.loadFromImage(equalimage);

    equal.setTexture(equaltexture);
    equal.setTextureRect(IntRect(0,0,64,64));
    equal.setPosition(660, 265);

    rectangular.loadFromFile("rectangular.png");

    rectangulartexture.loadFromImage(rectangular);

    rectanA_1.setTexture(rectangulartexture);
    rectanA_1.setTextureRect(IntRect(5,5,75,35));
    rectanA_1.setPosition(61, 238);

    rectanA_2.setTexture(rectangulartexture);
    rectanA_2.setTextureRect(IntRect(5,5,75,35));
    rectanA_2.setPosition(134, 238);

    rectanA_3.setTexture(rectangulartexture);
    rectanA_3.setTextureRect(IntRect(5,5,75,35));
    rectanA_3.setPosition(207, 238);

    rectanA_4.setTexture(rectangulartexture);
    rectanA_4.setTextureRect(IntRect(5,5,75,35));
    rectanA_4.setPosition(61, 282);

    rectanA_5.setTexture(rectangulartexture);
    rectanA_5.setTextureRect(IntRect(5,5,75,35));
    rectanA_5.setPosition(134, 282);

    rectanA_6.setTexture(rectangulartexture);
    rectanA_6.setTextureRect(IntRect(5,5,75,35));
    rectanA_6.setPosition(207, 282);

    rectanA_7.setTexture(rectangulartexture);
    rectanA_7.setTextureRect(IntRect(5,5,75,35));
    rectanA_7.setPosition(61, 327);

    rectanA_8.setTexture(rectangulartexture);
    rectanA_8.setTextureRect(IntRect(5,5,75,35));
    rectanA_8.setPosition(134, 327);

    rectanA_9.setTexture(rectangulartexture);
    rectanA_9.setTextureRect(IntRect(5,5,75,35));
    rectanA_9.setPosition(207, 327);

    rectanB_1.setTexture(rectangulartexture);
    rectanB_1.setTextureRect(IntRect(5,5,75,35));
    rectanB_1.setPosition(430, 238);

    rectanB_2.setTexture(rectangulartexture);
    rectanB_2.setTextureRect(IntRect(5,5,75,35));
    rectanB_2.setPosition(503, 238);

    rectanB_3.setTexture(rectangulartexture);
    rectanB_3.setTextureRect(IntRect(5,5,75,35));
    rectanB_3.setPosition(576, 238);

    rectanB_4.setTexture(rectangulartexture);
    rectanB_4.setTextureRect(IntRect(5,5,75,35));
    rectanB_4.setPosition(430, 282);

    rectanB_5.setTexture(rectangulartexture);
    rectanB_5.setTextureRect(IntRect(5,5,75,35));
    rectanB_5.setPosition(503, 282);

    rectanB_6.setTexture(rectangulartexture);
    rectanB_6.setTextureRect(IntRect(5,5,75,35));
    rectanB_6.setPosition(576, 282);

    rectanB_7.setTexture(rectangulartexture);
    rectanB_7.setTextureRect(IntRect(5,5,75,35));
    rectanB_7.setPosition(430, 328);

    rectanB_8.setTexture(rectangulartexture);
    rectanB_8.setTextureRect(IntRect(5,5,75,35));
    rectanB_8.setPosition(503, 328);

    rectanB_9.setTexture(rectangulartexture);
    rectanB_9.setTextureRect(IntRect(5,5,75,35));
    rectanB_9.setPosition(576, 328);

    rectan_rez_1.setTexture(rectangulartexture);
    rectan_rez_1.setTextureRect(IntRect(5,5,75,35));
    rectan_rez_1.setPosition(735, 238);

    rectan_rez_2.setTexture(rectangulartexture);
    rectan_rez_2.setTextureRect(IntRect(5,5,75,35));
    rectan_rez_2.setPosition(808, 238);

    rectan_rez_3.setTexture(rectangulartexture);
    rectan_rez_3.setTextureRect(IntRect(5,5,75,35));
    rectan_rez_3.setPosition(881, 238);

    rectan_rez_4.setTexture(rectangulartexture);
    rectan_rez_4.setTextureRect(IntRect(5,5,75,35));
    rectan_rez_4.setPosition(735, 282);

    rectan_rez_5.setTexture(rectangulartexture);
    rectan_rez_5.setTextureRect(IntRect(5,5,75,35));
    rectan_rez_5.setPosition(808, 282);

    rectan_rez_6.setTexture(rectangulartexture);
    rectan_rez_6.setTextureRect(IntRect(5,5,75,35));
    rectan_rez_6.setPosition(881, 282);

    rectan_rez_7.setTexture(rectangulartexture);
    rectan_rez_7.setTextureRect(IntRect(5,5,75,35));
    rectan_rez_7.setPosition(735, 328);

    rectan_rez_8.setTexture(rectangulartexture);
    rectan_rez_8.setTextureRect(IntRect(5,5,75,35));
    rectan_rez_8.setPosition(808, 328);

    rectan_rez_9.setTexture(rectangulartexture);
    rectan_rez_9.setTextureRect(IntRect(5,5,75,35));
    rectan_rez_9.setPosition(881, 328);

    underlineimage.loadFromFile("underline.png");

    underlinetexture.loadFromImage(underlineimage);

    underline.setTexture(underlinetexture);
    underline.setTextureRect(IntRect(0,0,270,17));
    underline.setPosition(10, 470);

}

void initWindow_4(){

    underlineimage.loadFromFile("underline.png");

    underlinetexture.loadFromImage(underlineimage);

    underline.setTexture(underlinetexture);
    underline.setTextureRect(IntRect(0,0,270,17));
    underline.setPosition(10, 470);

    heroimage.loadFromFile("hero.png");

    herotexture.loadFromImage(heroimage);


    addition.setTexture(herotexture);
    addition.setTextureRect(IntRect(0,0,43,43));
    addition.setPosition(345, 255);

    difference.setTexture(herotexture);
    difference.setTextureRect(IntRect(0,49,43,43));
    difference.setPosition(415, 255);

    transpose.setTexture(herotexture);
    transpose.setTextureRect(IntRect(0,98,43,43));
    transpose.setPosition(380, 295);

    multiplConst.setTexture(herotexture);
    multiplConst.setTextureRect(IntRect(0,147,43,43));
    multiplConst.setPosition(345, 335);

    multiplication.setTexture(herotexture);
    multiplication.setTextureRect(IntRect(0,196,43,43));
    multiplication.setPosition(415, 335);

    sizeimage.loadFromFile("size_4.png");

    sizetexture.loadFromImage(sizeimage);

    two.setTexture(sizetexture);
    two.setTextureRect(IntRect(0,0,83,25));
    two.setPosition(284, 150);

    three.setTexture(sizetexture);
    three.setTextureRect(IntRect(87,0,83,25));
    three.setPosition(370, 150);

    four.setTexture(sizetexture);
    four.setTextureRect(IntRect(174,0,83,25));
    four.setPosition(455, 150);

    five.setTexture(sizetexture);
    five.setTextureRect(IntRect(261,0,83,25));
    five.setPosition(540, 150);

    equalimage.loadFromFile("equal.png");

    equaltexture.loadFromImage(equalimage);

    equal.setTexture(equaltexture);
    equal.setTextureRect(IntRect(0,0,64,64));
    equal.setPosition(780, 285);

    rectangular.loadFromFile("rectangular.png");

    rectangulartexture.loadFromImage(rectangular);

    rectanA_1.setTexture(rectangulartexture);
    rectanA_1.setTextureRect(IntRect(5,5,75,35));
    rectanA_1.setPosition(41, 238);

    rectanA_2.setTexture(rectangulartexture);
    rectanA_2.setTextureRect(IntRect(5,5,75,35));
    rectanA_2.setPosition(114, 238);

    rectanA_3.setTexture(rectangulartexture);
    rectanA_3.setTextureRect(IntRect(5,5,75,35));
    rectanA_3.setPosition(187, 238);

    rectanA_4.setTexture(rectangulartexture);
    rectanA_4.setTextureRect(IntRect(5,5,75,35));
    rectanA_4.setPosition(260, 238);

    rectanA_5.setTexture(rectangulartexture);
    rectanA_5.setTextureRect(IntRect(5,5,75,35));
    rectanA_5.setPosition(41, 282);

    rectanA_6.setTexture(rectangulartexture);
    rectanA_6.setTextureRect(IntRect(5,5,75,35));
    rectanA_6.setPosition(114, 282);

    rectanA_7.setTexture(rectangulartexture);
    rectanA_7.setTextureRect(IntRect(5,5,75,35));
    rectanA_7.setPosition(187, 282);

    rectanA_8.setTexture(rectangulartexture);
    rectanA_8.setTextureRect(IntRect(5,5,75,35));
    rectanA_8.setPosition(260, 282);

    rectanA_9.setTexture(rectangulartexture);
    rectanA_9.setTextureRect(IntRect(5,5,75,35));
    rectanA_9.setPosition(41, 327);

    rectanA_10.setTexture(rectangulartexture);
    rectanA_10.setTextureRect(IntRect(5,5,75,35));
    rectanA_10.setPosition(114, 327);

    rectanA_11.setTexture(rectangulartexture);
    rectanA_11.setTextureRect(IntRect(5,5,75,35));
    rectanA_11.setPosition(187, 327);

    rectanA_12.setTexture(rectangulartexture);
    rectanA_12.setTextureRect(IntRect(5,5,75,35));
    rectanA_12.setPosition(260, 327);

    rectanA_13.setTexture(rectangulartexture);
    rectanA_13.setTextureRect(IntRect(5,5,75,35));
    rectanA_13.setPosition(41, 372);

    rectanA_14.setTexture(rectangulartexture);
    rectanA_14.setTextureRect(IntRect(5,5,75,35));
    rectanA_14.setPosition(114, 372);

    rectanA_15.setTexture(rectangulartexture);
    rectanA_15.setTextureRect(IntRect(5,5,75,35));
    rectanA_15.setPosition(187, 372);

    rectanA_16.setTexture(rectangulartexture);
    rectanA_16.setTextureRect(IntRect(5,5,75,35));
    rectanA_16.setPosition(260, 372);

    rectanB_1.setTexture(rectangulartexture);
    rectanB_1.setTextureRect(IntRect(5,5,75,35));
    rectanB_1.setPosition(480, 238);

    rectanB_2.setTexture(rectangulartexture);
    rectanB_2.setTextureRect(IntRect(5,5,75,35));
    rectanB_2.setPosition(553, 238);

    rectanB_3.setTexture(rectangulartexture);
    rectanB_3.setTextureRect(IntRect(5,5,75,35));
    rectanB_3.setPosition(626, 238);

    rectanB_4.setTexture(rectangulartexture);
    rectanB_4.setTextureRect(IntRect(5,5,75,35));
    rectanB_4.setPosition(699, 238);

    rectanB_5.setTexture(rectangulartexture);
    rectanB_5.setTextureRect(IntRect(5,5,75,35));
    rectanB_5.setPosition(480, 282);

    rectanB_6.setTexture(rectangulartexture);
    rectanB_6.setTextureRect(IntRect(5,5,75,35));
    rectanB_6.setPosition(553, 282);

    rectanB_7.setTexture(rectangulartexture);
    rectanB_7.setTextureRect(IntRect(5,5,75,35));
    rectanB_7.setPosition(626, 282);

    rectanB_8.setTexture(rectangulartexture);
    rectanB_8.setTextureRect(IntRect(5,5,75,35));
    rectanB_8.setPosition(699, 282);

    rectanB_9.setTexture(rectangulartexture);
    rectanB_9.setTextureRect(IntRect(5,5,75,35));
    rectanB_9.setPosition(480, 328);

    rectanB_10.setTexture(rectangulartexture);
    rectanB_10.setTextureRect(IntRect(5,5,75,35));
    rectanB_10.setPosition(553, 328);

    rectanB_11.setTexture(rectangulartexture);
    rectanB_11.setTextureRect(IntRect(5,5,75,35));
    rectanB_11.setPosition(626, 328);

    rectanB_12.setTexture(rectangulartexture);
    rectanB_12.setTextureRect(IntRect(5,5,75,35));
    rectanB_12.setPosition(699, 328);

    rectanB_13.setTexture(rectangulartexture);
    rectanB_13.setTextureRect(IntRect(5,5,75,35));
    rectanB_13.setPosition(480, 374);

    rectanB_14.setTexture(rectangulartexture);
    rectanB_14.setTextureRect(IntRect(5,5,75,35));
    rectanB_14.setPosition(553, 374);

    rectanB_15.setTexture(rectangulartexture);
    rectanB_15.setTextureRect(IntRect(5,5,75,35));
    rectanB_15.setPosition(626, 374);

    rectanB_16.setTexture(rectangulartexture);
    rectanB_16.setTextureRect(IntRect(5,5,75,35));
    rectanB_16.setPosition(699, 374);

    rectan_rez_1.setTexture(rectangulartexture);
    rectan_rez_1.setTextureRect(IntRect(5,5,75,35));
    rectan_rez_1.setPosition(850, 238);

    rectan_rez_2.setTexture(rectangulartexture);
    rectan_rez_2.setTextureRect(IntRect(5,5,75,35));
    rectan_rez_2.setPosition(923, 238);

    rectan_rez_3.setTexture(rectangulartexture);
    rectan_rez_3.setTextureRect(IntRect(5,5,75,35));
    rectan_rez_3.setPosition(996, 238);

    rectan_rez_4.setTexture(rectangulartexture);
    rectan_rez_4.setTextureRect(IntRect(5,5,75,35));
    rectan_rez_4.setPosition(1071, 238);

    rectan_rez_5.setTexture(rectangulartexture);
    rectan_rez_5.setTextureRect(IntRect(5,5,75,35));
    rectan_rez_5.setPosition(850, 282);

    rectan_rez_6.setTexture(rectangulartexture);
    rectan_rez_6.setTextureRect(IntRect(5,5,75,35));
    rectan_rez_6.setPosition(923, 282);

    rectan_rez_7.setTexture(rectangulartexture);
    rectan_rez_7.setTextureRect(IntRect(5,5,75,35));
    rectan_rez_7.setPosition(996, 282);

    rectan_rez_8.setTexture(rectangulartexture);
    rectan_rez_8.setTextureRect(IntRect(5,5,75,35));
    rectan_rez_8.setPosition(1071, 282);

    rectan_rez_9.setTexture(rectangulartexture);
    rectan_rez_9.setTextureRect(IntRect(5,5,75,35));
    rectan_rez_9.setPosition(850, 328);

    rectan_rez_10.setTexture(rectangulartexture);
    rectan_rez_10.setTextureRect(IntRect(5,5,75,35));
    rectan_rez_10.setPosition(923, 328);

    rectan_rez_11.setTexture(rectangulartexture);
    rectan_rez_11.setTextureRect(IntRect(5,5,75,35));
    rectan_rez_11.setPosition(996, 328);

    rectan_rez_12.setTexture(rectangulartexture);
    rectan_rez_12.setTextureRect(IntRect(5,5,75,35));
    rectan_rez_12.setPosition(1071, 328);

    rectan_rez_13.setTexture(rectangulartexture);
    rectan_rez_13.setTextureRect(IntRect(5,5,75,35));
    rectan_rez_13.setPosition(850, 374);

    rectan_rez_14.setTexture(rectangulartexture);
    rectan_rez_14.setTextureRect(IntRect(5,5,75,35));
    rectan_rez_14.setPosition(923, 374);

    rectan_rez_15.setTexture(rectangulartexture);
    rectan_rez_15.setTextureRect(IntRect(5,5,75,35));
    rectan_rez_15.setPosition(996, 374);

    rectan_rez_16.setTexture(rectangulartexture);
    rectan_rez_16.setTextureRect(IntRect(5,5,75,35));
    rectan_rez_16.setPosition(1071, 374);

}

void initWindow_5(){

    sizeimage.loadFromFile("size_5.png");

    sizetexture.loadFromImage(sizeimage);

    two.setTexture(sizetexture);
    two.setTextureRect(IntRect(0,0,83,25));
    two.setPosition(284, 150);

    three.setTexture(sizetexture);
    three.setTextureRect(IntRect(87,0,83,25));
    three.setPosition(370, 150);

    four.setTexture(sizetexture);
    four.setTextureRect(IntRect(174,0,83,25));
    four.setPosition(455, 150);

    five.setTexture(sizetexture);
    five.setTextureRect(IntRect(261,0,83,25));
    five.setPosition(540, 150);

    underlineimage.loadFromFile("underline.png");

    underlinetexture.loadFromImage(underlineimage);

    underline.setTexture(underlinetexture);
    underline.setTextureRect(IntRect(0,0,270,17));
    underline.setPosition(10, 470);

    to_doimage.loadFromFile("to_do.png");

    to_dotexture.loadFromImage(to_doimage);

    to_do.setTexture(to_dotexture);
    to_do.setTextureRect(IntRect(0,0,260,87));
    to_do.setPosition(325, 250);

}


void drawAll_2(RenderWindow& window){
    window.draw(underline);
    window.draw(header);
    window.draw(line);
    window.draw(addition);
    window.draw(difference);
    window.draw(transpose);
    window.draw(multiplConst);
    window.draw(multiplication);
    window.draw(two);
    window.draw(three);
    window.draw(four);
    window.draw(five);
    window.draw(equal);
    window.draw(rectanA_1);
    window.draw(rectanA_2);
    window.draw(rectanA_3);
    window.draw(rectanA_4);
    window.draw(rectanB_1);
    window.draw(rectanB_2);
    window.draw(rectanB_3);
    window.draw(rectanB_4);
    window.draw(rectan_rez_1);
    window.draw(rectan_rez_2);
    window.draw(rectan_rez_3);
    window.draw(rectan_rez_4);

/*for A_matrix*/
    text.setString(std::to_string(A_matrix[0][0]));
    text.setPosition(65,245);
    window.draw(text);

    text.setString(std::to_string(A_matrix[0][1]));
    text.setPosition(138,245);
    window.draw(text);

    text.setString(std::to_string(A_matrix[1][0]));
    text.setPosition(65,290);
    window.draw(text);

    text.setString(std::to_string(A_matrix[1][1]));
    text.setPosition(138,290);
    window.draw(text);
/*for A_matrix*/

/*for B_matrix*/
    text.setString(std::to_string(B_matrix[0][0]));
    text.setPosition(384,245);
    window.draw(text);

    text.setString(std::to_string(B_matrix[0][1]));
    text.setPosition(457,245);
    window.draw(text);

    text.setString(std::to_string(B_matrix[1][0]));
    text.setPosition(384,290);
    window.draw(text);

    text.setString(std::to_string(B_matrix[1][1]));
    text.setPosition(457,290);
    window.draw(text);
/*for B_matrix*/

/*for C_matrix*/
    text.setString(std::to_string(C_matrix[0][0]));
    text.setPosition(654,245);
    window.draw(text);

    text.setString(std::to_string(C_matrix[0][1]));
    text.setPosition(727,245);
    window.draw(text);

    text.setString(std::to_string(C_matrix[1][0]));
    text.setPosition(654,290);
    window.draw(text);

    text.setString(std::to_string(C_matrix[1][1]));
    text.setPosition(727,290);
    window.draw(text);
/*for C_matrix*/

    window.display();
}

void drawAll_3(RenderWindow& window){
    window.draw(underline);
    window.draw(header);
    window.draw(line);
    window.draw(addition);
    window.draw(difference);
    window.draw(transpose);
    window.draw(multiplConst);
    window.draw(multiplication);
    window.draw(two);
    window.draw(three);
    window.draw(four);
    window.draw(five);
    window.draw(equal);
    window.draw(rectanA_1);
    window.draw(rectanA_2);
    window.draw(rectanA_3);
    window.draw(rectanA_4);
    window.draw(rectanA_5);
    window.draw(rectanA_6);
    window.draw(rectanA_7);
    window.draw(rectanA_8);
    window.draw(rectanA_9);
    window.draw(rectanB_1);
    window.draw(rectanB_2);
    window.draw(rectanB_3);
    window.draw(rectanB_4);
    window.draw(rectanB_5);
    window.draw(rectanB_6);
    window.draw(rectanB_7);
    window.draw(rectanB_8);
    window.draw(rectanB_9);
    window.draw(rectan_rez_1);
    window.draw(rectan_rez_2);
    window.draw(rectan_rez_3);
    window.draw(rectan_rez_4);
    window.draw(rectan_rez_5);
    window.draw(rectan_rez_6);
    window.draw(rectan_rez_7);
    window.draw(rectan_rez_8);
    window.draw(rectan_rez_9);

/*for A_matrix*/
    text.setString(std::to_string(A_matrix[0][0]));
    text.setPosition(65,245);
    window.draw(text);

    text.setString(std::to_string(A_matrix[0][1]));
    text.setPosition(138,245);
    window.draw(text);

    text.setString(std::to_string(A_matrix[0][2]));
    text.setPosition(211,245);
    window.draw(text);

    text.setString(std::to_string(A_matrix[1][0]));
    text.setPosition(65,290);
    window.draw(text);

    text.setString(std::to_string(A_matrix[1][1]));
    text.setPosition(138,290);
    window.draw(text);

    text.setString(std::to_string(A_matrix[1][2]));
    text.setPosition(211,290);
    window.draw(text);

    text.setString(std::to_string(A_matrix[2][0]));
    text.setPosition(65,335);
    window.draw(text);

    text.setString(std::to_string(A_matrix[2][1]));
    text.setPosition(138,335);
    window.draw(text);

    text.setString(std::to_string(A_matrix[2][2]));
    text.setPosition(211,335);
    window.draw(text);

/*for A_matrix*/

/*for B_matrix*/
    text.setString(std::to_string(B_matrix[0][0]));
    text.setPosition(434,245);
    window.draw(text);

    text.setString(std::to_string(B_matrix[0][1]));
    text.setPosition(507,245);
    window.draw(text);

    text.setString(std::to_string(B_matrix[0][2]));
    text.setPosition(580,245);
    window.draw(text);

    text.setString(std::to_string(B_matrix[1][0]));
    text.setPosition(434,290);
    window.draw(text);

    text.setString(std::to_string(B_matrix[1][1]));
    text.setPosition(507,290);
    window.draw(text);

    text.setString(std::to_string(B_matrix[1][2]));
    text.setPosition(580,290);
    window.draw(text);

    text.setString(std::to_string(B_matrix[2][0]));
    text.setPosition(434,335);
    window.draw(text);

    text.setString(std::to_string(B_matrix[2][1]));
    text.setPosition(507,335);
    window.draw(text);

    text.setString(std::to_string(B_matrix[2][2]));
    text.setPosition(580,335);
    window.draw(text);
/*for B_matrix*/

/*for C_matrix*/
    text.setString(std::to_string(C_matrix[0][0]));
    text.setPosition(739,245);
    window.draw(text);

    text.setString(std::to_string(C_matrix[0][1]));
    text.setPosition(812,245);
    window.draw(text);

    text.setString(std::to_string(C_matrix[0][2]));
    text.setPosition(885,245);
    window.draw(text);

    text.setString(std::to_string(C_matrix[1][0]));
    text.setPosition(739,290);
    window.draw(text);

    text.setString(std::to_string(C_matrix[1][1]));
    text.setPosition(812,290);
    window.draw(text);

    text.setString(std::to_string(C_matrix[1][2]));
    text.setPosition(885,290);
    window.draw(text);

    text.setString(std::to_string(C_matrix[2][0]));
    text.setPosition(739,335);
    window.draw(text);

    text.setString(std::to_string(C_matrix[2][1]));
    text.setPosition(812,335);
    window.draw(text);

    text.setString(std::to_string(C_matrix[2][2]));
    text.setPosition(885,335);
    window.draw(text);
/*for C_matrix*/

    window.display();
}

void drawAll_4(RenderWindow& window){
    window.draw(underline);
    window.draw(header);
    window.draw(line);
    window.draw(addition);
    window.draw(difference);
    window.draw(transpose);
    window.draw(multiplConst);
    window.draw(multiplication);
    window.draw(two);
    window.draw(three);
    window.draw(four);
    window.draw(five);
    window.draw(equal);
    window.draw(rectanA_1);
    window.draw(rectanA_2);
    window.draw(rectanA_3);
    window.draw(rectanA_4);
    window.draw(rectanA_5);
    window.draw(rectanA_6);
    window.draw(rectanA_7);
    window.draw(rectanA_8);
    window.draw(rectanA_9);
    window.draw(rectanA_10);
    window.draw(rectanA_11);
    window.draw(rectanA_12);
    window.draw(rectanA_13);
    window.draw(rectanA_14);
    window.draw(rectanA_15);
    window.draw(rectanA_16);
    window.draw(rectanB_1);
    window.draw(rectanB_2);
    window.draw(rectanB_3);
    window.draw(rectanB_4);
    window.draw(rectanB_5);
    window.draw(rectanB_6);
    window.draw(rectanB_7);
    window.draw(rectanB_8);
    window.draw(rectanB_9);
    window.draw(rectanB_10);
    window.draw(rectanB_11);
    window.draw(rectanB_12);
    window.draw(rectanB_13);
    window.draw(rectanB_14);
    window.draw(rectanB_15);
    window.draw(rectanB_16);
    window.draw(rectan_rez_1);
    window.draw(rectan_rez_2);
    window.draw(rectan_rez_3);
    window.draw(rectan_rez_4);
    window.draw(rectan_rez_5);
    window.draw(rectan_rez_6);
    window.draw(rectan_rez_7);
    window.draw(rectan_rez_8);
    window.draw(rectan_rez_9);
    window.draw(rectan_rez_10);
    window.draw(rectan_rez_11);
    window.draw(rectan_rez_12);
    window.draw(rectan_rez_13);
    window.draw(rectan_rez_14);
    window.draw(rectan_rez_15);
    window.draw(rectan_rez_16);

/*for A_matrix*/
    text.setString(std::to_string(A_matrix[0][0]));
    text.setPosition(45,245);
    window.draw(text);

    text.setString(std::to_string(A_matrix[0][1]));
    text.setPosition(118,245);
    window.draw(text);

    text.setString(std::to_string(A_matrix[0][2]));
    text.setPosition(191,245);
    window.draw(text);

    text.setString(std::to_string(A_matrix[0][3]));
    text.setPosition(264,245);
    window.draw(text);

    text.setString(std::to_string(A_matrix[1][0]));
    text.setPosition(45,290);
    window.draw(text);

    text.setString(std::to_string(A_matrix[1][1]));
    text.setPosition(118,290);
    window.draw(text);

    text.setString(std::to_string(A_matrix[1][2]));
    text.setPosition(191,290);
    window.draw(text);

    text.setString(std::to_string(A_matrix[1][3]));
    text.setPosition(264,290);
    window.draw(text);

    text.setString(std::to_string(A_matrix[2][0]));
    text.setPosition(45,335);
    window.draw(text);

    text.setString(std::to_string(A_matrix[2][1]));
    text.setPosition(118,335);
    window.draw(text);

    text.setString(std::to_string(A_matrix[2][2]));
    text.setPosition(191,335);
    window.draw(text);

    text.setString(std::to_string(A_matrix[2][3]));
    text.setPosition(264,335);
    window.draw(text);

    text.setString(std::to_string(A_matrix[3][0]));
    text.setPosition(45,380);
    window.draw(text);

    text.setString(std::to_string(A_matrix[3][1]));
    text.setPosition(118,380);
    window.draw(text);

    text.setString(std::to_string(A_matrix[3][2]));
    text.setPosition(191,380);
    window.draw(text);

    text.setString(std::to_string(A_matrix[3][3]));
    text.setPosition(264,380);
    window.draw(text);
/*for A_matrix*/

/*for B_matrix*/
    text.setString(std::to_string(B_matrix[0][0]));
    text.setPosition(484,245);
    window.draw(text);

    text.setString(std::to_string(B_matrix[0][1]));
    text.setPosition(557,245);
    window.draw(text);

    text.setString(std::to_string(B_matrix[0][2]));
    text.setPosition(630,245);
    window.draw(text);

    text.setString(std::to_string(B_matrix[0][3]));
    text.setPosition(703,245);
    window.draw(text);

    text.setString(std::to_string(B_matrix[1][0]));
    text.setPosition(484,290);
    window.draw(text);

    text.setString(std::to_string(B_matrix[1][1]));
    text.setPosition(557,290);
    window.draw(text);

    text.setString(std::to_string(B_matrix[1][2]));
    text.setPosition(630,290);
    window.draw(text);

    text.setString(std::to_string(B_matrix[1][3]));
    text.setPosition(703,290);
    window.draw(text);

    text.setString(std::to_string(B_matrix[2][0]));
    text.setPosition(484,335);
    window.draw(text);

    text.setString(std::to_string(B_matrix[2][1]));
    text.setPosition(557,335);
    window.draw(text);

    text.setString(std::to_string(B_matrix[2][2]));
    text.setPosition(630,335);
    window.draw(text);

    text.setString(std::to_string(B_matrix[2][3]));
    text.setPosition(703,335);
    window.draw(text);

    text.setString(std::to_string(B_matrix[3][0]));
    text.setPosition(484,380);
    window.draw(text);

    text.setString(std::to_string(B_matrix[3][1]));
    text.setPosition(557,380);
    window.draw(text);

    text.setString(std::to_string(B_matrix[3][2]));
    text.setPosition(630,380);
    window.draw(text);

    text.setString(std::to_string(B_matrix[3][3]));
    text.setPosition(703,380);
    window.draw(text);
/*for B_matrix*/

/*for C_matrix*/
    text.setString(std::to_string(C_matrix[0][0]));
    text.setPosition(854,245);
    window.draw(text);

    text.setString(std::to_string(C_matrix[0][1]));
    text.setPosition(927,245);
    window.draw(text);

    text.setString(std::to_string(C_matrix[0][2]));
    text.setPosition(1000,245);
    window.draw(text);

    text.setString(std::to_string(C_matrix[0][3]));
    text.setPosition(1075,245);
    window.draw(text);

    text.setString(std::to_string(C_matrix[1][0]));
    text.setPosition(854,290);
    window.draw(text);

    text.setString(std::to_string(C_matrix[1][1]));
    text.setPosition(927,290);
    window.draw(text);

    text.setString(std::to_string(C_matrix[1][2]));
    text.setPosition(1000,290);
    window.draw(text);

    text.setString(std::to_string(C_matrix[1][3]));
    text.setPosition(1075,290);
    window.draw(text);

    text.setString(std::to_string(C_matrix[2][0]));
    text.setPosition(854,335);
    window.draw(text);

    text.setString(std::to_string(C_matrix[2][1]));
    text.setPosition(927,335);
    window.draw(text);

    text.setString(std::to_string(C_matrix[2][2]));
    text.setPosition(1000,335);
    window.draw(text);

    text.setString(std::to_string(C_matrix[2][3]));
    text.setPosition(1075,335);
    window.draw(text);

    text.setString(std::to_string(C_matrix[3][0]));
    text.setPosition(854,380);
    window.draw(text);

    text.setString(std::to_string(C_matrix[3][1]));
    text.setPosition(927,380);
    window.draw(text);

    text.setString(std::to_string(C_matrix[3][2]));
    text.setPosition(1000,380);
    window.draw(text);

    text.setString(std::to_string(C_matrix[3][3]));
    text.setPosition(1075,380);
    window.draw(text);
/*for C_matrix*/

    window.display();
}

void drawAll_5(RenderWindow& window){
    window.draw(to_do);
    window.draw(underline);
    window.draw(header);
    window.draw(line);
    window.draw(two);
    window.draw(three);
    window.draw(four);
    window.draw(five);
    window.display();
}


void destroy(int size){
    for(int i = 0; i < size; i++){
        free(A_matrix[i]);
    }
    free(A_matrix);

    for(int i = 0; i < size; i++){
        free(B_matrix[i]);
    }
    free(C_matrix);
    for(int i = 0; i < size; i++){
        free(C_matrix[i]);
    }
    free(C_matrix);
}

void initial(int size){

    A_matrix = (int**)malloc(size*sizeof(int*));
    for(int i = 0; i < size; i++){
        A_matrix[i] = (int *)malloc(size*sizeof(int));
    }
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
                A_matrix[i][j] = 0;
        }
    }
    B_matrix = (int**)malloc(size*sizeof(int*));
    for(int i = 0; i < size; i++){
        B_matrix[i] = (int*)malloc(size*sizeof(int));
    }
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            B_matrix[i][j] = 0;
        }
    }
    C_matrix = (int**)malloc(size*sizeof(int*));
    for(int i = 0; i < size; i++){
        C_matrix[i] = (int*)malloc(size*sizeof(int));
    }
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            C_matrix[i][j] = 0;
        }
    }
    printf("start  size = %i\n", size);
}

int numberSizeCounter(int number){
    int count = 0;
    while(number != 0){
        number /= 10;
        count++;
    }
    return count;
}

void handling_2(int size, RenderWindow& window){
    int gameOver = 1;
    int operation = 1;
    while (gameOver) {
        Vector2i pos = Mouse::getPosition(window);       // получение координат при нажатии кнопок мышки
        int x = pos.x;
        int y = pos.y;
        Event event;
        while (window.pollEvent(event))
        {
            if(event.type == Event::Closed)
            {
                destroy(size);
                window.close();
            }
//for A_matrix
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 61 && x <= 136 && y >= 238 && y <= 273 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 61 || x1 > 136 || y1 < 238 || y1 > 273)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            A_printNumber1_2(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            A_printNumber1_2(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            A_printNumber1_2(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            A_printNumber1_2(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            A_printNumber1_2(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            A_printNumber1_2(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            A_printNumber1_2(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            A_printNumber1_2(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            A_printNumber1_2(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            A_printNumber1_2(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            A_deleteDigit1_2(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 134 && x <= 209 && y >= 238 && y <= 273 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 134 || x1 > 209 || y1 < 238 || y1 > 273)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            A_printNumber2_2(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            A_printNumber2_2(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            A_printNumber2_2(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            A_printNumber2_2(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            A_printNumber2_2(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            A_printNumber2_2(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            A_printNumber2_2(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            A_printNumber2_2(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            A_printNumber2_2(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            A_printNumber2_2(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            A_deleteDigit2_2(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 61 && x <= 136 && y >= 282 && y <= 317 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 61 || x1 > 136 || y1 < 282 || y1 > 317)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            A_printNumber3_2(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            A_printNumber3_2(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            A_printNumber3_2(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            A_printNumber3_2(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            A_printNumber3_2(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            A_printNumber3_2(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            A_printNumber3_2(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            A_printNumber3_2(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            A_printNumber3_2(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            A_printNumber3_2(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            A_deleteDigit3_2(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 134 && x <= 209 && y >= 282 && y <= 317 ) {
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 134 || x1 > 209 || y1 < 282 || y1 > 317)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            A_printNumber4_2(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            A_printNumber4_2(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            A_printNumber4_2(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            A_printNumber4_2(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            A_printNumber4_2(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            A_printNumber4_2(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            A_printNumber4_2(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            A_printNumber4_2(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            A_printNumber4_2(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            A_printNumber4_2(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            A_deleteDigit4_2(window);
                        }
                    }
                }
            }
//for A_matrix

//for B_matrix
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 380 && x <= 455 && y >= 238 && y <= 273 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 380 || x1 > 455 || y1 < 238 || y1 > 273)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            B_printNumber1_2(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            B_printNumber1_2(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            B_printNumber1_2(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            B_printNumber1_2(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            B_printNumber1_2(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            B_printNumber1_2(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            B_printNumber1_2(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            B_printNumber1_2(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            B_printNumber1_2(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            B_printNumber1_2(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            B_deleteDigit1_2(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 453 && x <= 528 && y >= 238 && y <= 273 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 453 || x1 > 528 || y1 < 238 || y1 > 273)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            B_printNumber2_2(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            B_printNumber2_2(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            B_printNumber2_2(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            B_printNumber2_2(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            B_printNumber2_2(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            B_printNumber2_2(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            B_printNumber2_2(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            B_printNumber2_2(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            B_printNumber2_2(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            B_printNumber2_2(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            B_deleteDigit2_2(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 380 && x <= 455 && y >= 282 && y <= 317 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 380 || x1 > 455 || y1 < 282 || y1 > 317)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            B_printNumber3_2(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            B_printNumber3_2(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            B_printNumber3_2(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            B_printNumber3_2(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            B_printNumber3_2(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            B_printNumber3_2(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            B_printNumber3_2(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            B_printNumber3_2(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            B_printNumber3_2(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            B_printNumber3_2(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            B_deleteDigit3_2(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 453 && x <= 528 && y >= 282 && y <= 317 ) {
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 453 || x1 > 528 || y1 < 282 || y1 > 317)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            B_printNumber4_2(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            B_printNumber4_2(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            B_printNumber4_2(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            B_printNumber4_2(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            B_printNumber4_2(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            B_printNumber4_2(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            B_printNumber4_2(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            B_printNumber4_2(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            B_printNumber4_2(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            B_printNumber4_2(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            B_deleteDigit4_2(window);
                        }
                    }
                }
            }
//for B_matrix
            if (event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left){
                //define function
                if(x > 235 && x < 278 && y > 220 && y < 263){
                    operation = 1;
                }
                if(x > 305 && x < 348 && y > 220 && y < 263){
                    operation = 2;
                }
                if(x > 235 && x < 278 && y > 300 && y < 343){
                    operation = 3;
                }
                if(x > 305 && x < 348 && y > 300 && y < 343){
                    operation = 4;
                }
                if(x > 270 && x < 313 && y > 260 && y < 303){
                    operation = 5;
                }
                if(x > 555 && x < 619 && y > 245 && y < 309){
                    getFinallResult(operation, size);
                    gameOver = 0;
                    break;
                }
            }
        }
    }
}

void handling_3(int size, RenderWindow& window){
    int gameOver = 1;
    int operation = 1;
    while (gameOver) {
        Vector2i pos = Mouse::getPosition(window);       // получение координат при нажатии кнопок мышки
        int x = pos.x;
        int y = pos.y;
        Event event;
        while (window.pollEvent(event))
        {
            if(event.type == Event::Closed)
            {
                destroy(size);
                window.close();
            }
            if (event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x > 284 && x < 367 && y > 150 && y < 175){
                gameOver = 0;
                break;
            }
            //for A_matrix
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 61 && x <= 136 && y >= 238 && y <= 273 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 61 || x1 > 136 || y1 < 238 || y1 > 273)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            A_printNumber1_3(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            A_printNumber1_3(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            A_printNumber1_3(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            A_printNumber1_3(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            A_printNumber1_3(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            A_printNumber1_3(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            A_printNumber1_3(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            A_printNumber1_3(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            A_printNumber1_3(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            A_printNumber1_3(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            A_deleteDigit1_3(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 134 && x <= 209 && y >= 238 && y <= 273 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 134 || x1 > 209 || y1 < 238 || y1 > 273)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            A_printNumber2_3(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            A_printNumber2_3(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            A_printNumber2_3(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            A_printNumber2_3(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            A_printNumber2_3(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            A_printNumber2_3(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            A_printNumber2_3(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            A_printNumber2_3(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            A_printNumber2_3(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            A_printNumber2_3(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            A_deleteDigit2_3(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 207 && x <= 282 && y >= 238 && y <= 273 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 207 || x1 > 282 || y1 < 238 || y1 > 273)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            A_printNumber3_3(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            A_printNumber3_3(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            A_printNumber3_3(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            A_printNumber3_3(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            A_printNumber3_3(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            A_printNumber3_3(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            A_printNumber3_3(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            A_printNumber3_3(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            A_printNumber3_3(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            A_printNumber3_3(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            A_deleteDigit3_3(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 61 && x <= 136 && y >= 282 && y <= 317 ) {
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 61 || x1 > 136 || y1 < 282 || y1 > 317)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            A_printNumber4_3(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            A_printNumber4_3(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            A_printNumber4_3(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            A_printNumber4_3(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            A_printNumber4_3(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            A_printNumber4_3(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            A_printNumber4_3(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            A_printNumber4_3(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            A_printNumber4_3(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            A_printNumber4_3(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            A_deleteDigit4_3(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 134 && x <= 209 && y >= 282 && y <= 317 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 134 || x1 > 209 || y1 < 282 || y1 > 317)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            A_printNumber5_3(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            A_printNumber5_3(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            A_printNumber5_3(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            A_printNumber5_3(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            A_printNumber5_3(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            A_printNumber5_3(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            A_printNumber5_3(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            A_printNumber5_3(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            A_printNumber5_3(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            A_printNumber5_3(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            A_deleteDigit5_3(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 207 && x <= 282 && y >= 282 && y <= 317 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 207 || x1 > 282 || y1 < 282 || y1 > 317)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            A_printNumber6_3(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            A_printNumber6_3(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            A_printNumber6_3(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            A_printNumber6_3(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            A_printNumber6_3(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            A_printNumber6_3(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            A_printNumber6_3(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            A_printNumber6_3(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            A_printNumber6_3(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            A_printNumber6_3(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            A_deleteDigit6_3(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 61 && x <= 136 && y >= 327 && y <= 362 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 61 || x1 > 136 || y1 < 327 || y1 > 362)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            A_printNumber7_3(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            A_printNumber7_3(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            A_printNumber7_3(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            A_printNumber7_3(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            A_printNumber7_3(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            A_printNumber7_3(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            A_printNumber7_3(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            A_printNumber7_3(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            A_printNumber7_3(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            A_printNumber7_3(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            A_deleteDigit7_3(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 134 && x <= 209 && y >= 327 && y <= 362 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 134 || x1 > 209 || y1 < 327 || y1 > 362)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            A_printNumber8_3(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            A_printNumber8_3(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            A_printNumber8_3(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            A_printNumber8_3(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            A_printNumber8_3(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            A_printNumber8_3(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            A_printNumber8_3(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            A_printNumber8_3(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            A_printNumber8_3(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            A_printNumber8_3(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            A_deleteDigit8_3(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 207 && x <= 282 && y >= 327 && y <= 362 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 207 || x1 > 282 || y1 < 327 || y1 > 362)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            A_printNumber9_3(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            A_printNumber9_3(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            A_printNumber9_3(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            A_printNumber9_3(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            A_printNumber9_3(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            A_printNumber9_3(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            A_printNumber9_3(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            A_printNumber9_3(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            A_printNumber9_3(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            A_printNumber9_3(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            A_deleteDigit9_3(window);
                        }
                    }
                }
            }

//for A_matrix

//for B_matrix
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 430 && x <= 505 && y >= 238 && y <= 273 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 430 || x1 > 505 || y1 < 238 || y1 > 273)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            B_printNumber1_3(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            B_printNumber1_3(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            B_printNumber1_3(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            B_printNumber1_3(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            B_printNumber1_3(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            B_printNumber1_3(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            B_printNumber1_3(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            B_printNumber1_3(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            B_printNumber1_3(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            B_printNumber1_3(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            B_deleteDigit1_3(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 503 && x <= 578 && y >= 238 && y <= 273 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 503 || x1 > 578 || y1 < 238 || y1 > 273)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            B_printNumber2_3(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            B_printNumber2_3(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            B_printNumber2_3(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            B_printNumber2_3(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            B_printNumber2_3(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            B_printNumber2_3(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            B_printNumber2_3(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            B_printNumber2_3(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            B_printNumber2_3(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            B_printNumber2_3(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            B_deleteDigit2_3(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 576 && x <= 651 && y >= 238 && y <= 273 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 576 || x1 > 651 || y1 < 238 || y1 > 273)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            B_printNumber3_3(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            B_printNumber3_3(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            B_printNumber3_3(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            B_printNumber3_3(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            B_printNumber3_3(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            B_printNumber3_3(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            B_printNumber3_3(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            B_printNumber3_3(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            B_printNumber3_3(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            B_printNumber3_3(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            B_deleteDigit3_3(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 430 && x <= 505 && y >= 282 && y <= 317 ) {
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 430 || x1 > 505 || y1 < 282 || y1 > 317)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            B_printNumber4_3(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            B_printNumber4_3(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            B_printNumber4_3(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            B_printNumber4_3(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            B_printNumber4_3(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            B_printNumber4_3(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            B_printNumber4_3(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            B_printNumber4_3(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            B_printNumber4_3(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            B_printNumber4_3(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            B_deleteDigit4_3(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 503 && x <= 578 && y >= 282 && y <= 317 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 503 || x1 > 578 || y1 < 282 || y1 > 317)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            B_printNumber5_3(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            B_printNumber5_3(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            B_printNumber5_3(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            B_printNumber5_3(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            B_printNumber5_3(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            B_printNumber5_3(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            B_printNumber5_3(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            B_printNumber5_3(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            B_printNumber5_3(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            B_printNumber5_3(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            B_deleteDigit5_3(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 576 && x <= 651 && y >= 282 && y <= 317 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 576 || x1 > 651 || y1 < 282 || y1 > 317)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            B_printNumber6_3(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            B_printNumber6_3(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            B_printNumber6_3(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            B_printNumber6_3(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            B_printNumber6_3(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            B_printNumber6_3(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            B_printNumber6_3(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            B_printNumber6_3(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            B_printNumber6_3(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            B_printNumber6_3(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            B_deleteDigit6_3(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 430 && x <= 505 && y >= 327 && y <= 362 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 430 || x1 > 505 || y1 < 327 || y1 > 362)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            B_printNumber7_3(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            B_printNumber7_3(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            B_printNumber7_3(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            B_printNumber7_3(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            B_printNumber7_3(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            B_printNumber7_3(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            B_printNumber7_3(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            B_printNumber7_3(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            B_printNumber7_3(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            B_printNumber7_3(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            B_deleteDigit7_3(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 503 && x <= 578 && y >= 327 && y <= 362 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 503 || x1 > 578 || y1 < 327 || y1 > 362)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            B_printNumber8_3(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            B_printNumber8_3(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            B_printNumber8_3(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            B_printNumber8_3(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            B_printNumber8_3(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            B_printNumber8_3(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            B_printNumber8_3(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            B_printNumber8_3(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            B_printNumber8_3(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            B_printNumber8_3(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            B_deleteDigit8_3(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 576 && x <= 651 && y >= 327 && y <= 362 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 576 || x1 > 651 || y1 < 327 || y1 > 362)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            B_printNumber9_3(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            B_printNumber9_3(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            B_printNumber9_3(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            B_printNumber9_3(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            B_printNumber9_3(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            B_printNumber9_3(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            B_printNumber9_3(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            B_printNumber9_3(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            B_printNumber9_3(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            B_printNumber9_3(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            B_deleteDigit9_3(window);
                        }
                    }
                }
            }
//for B_matrix

            if (event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left){
                //define function
                if(x > 295 && x < 338 && y > 235 && y < 278){
                    operation = 1;
                }
                if(x > 365 && x < 408 && y > 235 && y < 278){
                    operation = 2;
                }
                if(x > 295 && x < 338 && y > 315 && y < 358){
                    operation = 3;
                }
                if(x > 365 && x < 408 && y > 315 && y < 358){
                    operation = 4;
                }
                if(x > 330 && x < 373 && y > 275 && y < 318){
                    operation = 5;
                }
                if(x > 660 && x < 724 && y > 265 && y < 329){
                    getFinallResult(operation, size);
                    gameOver = 0;
                    break;
                }
            }
        }
    }
}

void handling_4(int size, RenderWindow& window){
    int gameOver = 1;
    int operation = 1;
    while (gameOver) {
        Vector2i pos = Mouse::getPosition(window);       // получение координат при нажатии кнопок мышки
        int x = pos.x;
        int y = pos.y;
        Event event;
        while (window.pollEvent(event))
        {
            if(event.type == Event::Closed)
            {
                destroy(size);
                window.close();
            }
            if (event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x > 284 && x < 367 && y > 150 && y < 175){
                gameOver = 0;
                break;
            }
//for A_matrix
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 41 && x <= 116 && y >= 238 && y <= 273 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 41 || x1 > 116 || y1 < 238 || y1 > 273)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            A_printNumber1_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            A_printNumber1_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            A_printNumber1_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            A_printNumber1_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            A_printNumber1_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            A_printNumber1_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            A_printNumber1_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            A_printNumber1_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            A_printNumber1_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            A_printNumber1_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            A_deleteDigit1_4(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 114 && x <= 189 && y >= 238 && y <= 273 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 114 || x1 > 189 || y1 < 238 || y1 > 273)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            A_printNumber2_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            A_printNumber2_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            A_printNumber2_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            A_printNumber2_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            A_printNumber2_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            A_printNumber2_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            A_printNumber2_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            A_printNumber2_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            A_printNumber2_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            A_printNumber2_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            A_deleteDigit2_4(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 187 && x <= 262 && y >= 238 && y <= 273 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 187 || x1 > 262 || y1 < 238 || y1 > 273)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            A_printNumber3_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            A_printNumber3_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            A_printNumber3_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            A_printNumber3_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            A_printNumber3_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            A_printNumber3_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            A_printNumber3_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            A_printNumber3_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            A_printNumber3_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            A_printNumber3_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            A_deleteDigit3_4(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 260 && x <= 335 && y >= 238 && y <= 273 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 260 || x1 > 335 || y1 < 238 || y1 > 273)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            A_printNumber4_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            A_printNumber4_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            A_printNumber4_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            A_printNumber4_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            A_printNumber4_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            A_printNumber4_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            A_printNumber4_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            A_printNumber4_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            A_printNumber4_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            A_printNumber4_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            A_deleteDigit4_4(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 41 && x <= 116 && y >= 282 && y <= 317 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 41 || x1 > 116 || y1 < 282 || y1 > 317)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            A_printNumber5_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            A_printNumber5_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            A_printNumber5_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            A_printNumber5_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            A_printNumber5_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            A_printNumber5_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            A_printNumber5_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            A_printNumber5_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            A_printNumber5_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            A_printNumber5_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            A_deleteDigit5_4(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 114 && x <= 189 && y >= 282 && y <= 317 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 114 || x1 > 189 || y1 < 282 || y1 > 317)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            A_printNumber6_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            A_printNumber6_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            A_printNumber6_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            A_printNumber6_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            A_printNumber6_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            A_printNumber6_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            A_printNumber6_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            A_printNumber6_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            A_printNumber6_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            A_printNumber6_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            A_deleteDigit6_4(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 187 && x <= 262 && y >= 282 && y <= 317 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 187 || x1 > 262 || y1 < 282 || y1 > 317)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            A_printNumber7_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            A_printNumber7_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            A_printNumber7_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            A_printNumber7_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            A_printNumber7_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            A_printNumber7_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            A_printNumber7_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            A_printNumber7_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            A_printNumber7_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            A_printNumber7_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            A_deleteDigit7_4(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 260 && x <= 335 && y >= 282 && y <= 317 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 260 || x1 > 335 || y1 < 282 || y1 > 317)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            A_printNumber8_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            A_printNumber8_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            A_printNumber8_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            A_printNumber8_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            A_printNumber8_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            A_printNumber8_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            A_printNumber8_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            A_printNumber8_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            A_printNumber8_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            A_printNumber8_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            A_deleteDigit8_4(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 41 && x <= 116 && y >= 327 && y <= 362 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 41 || x1 > 116 || y1 < 327 || y1 > 362)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            A_printNumber9_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            A_printNumber9_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            A_printNumber9_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            A_printNumber9_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            A_printNumber9_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            A_printNumber9_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            A_printNumber9_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            A_printNumber9_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            A_printNumber9_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            A_printNumber9_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            A_deleteDigit9_4(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 114 && x <= 189 && y >= 327 && y <= 362 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 114 || x1 > 189 || y1 < 327 || y1 > 362)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            A_printNumber10_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            A_printNumber10_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            A_printNumber10_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            A_printNumber10_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            A_printNumber10_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            A_printNumber10_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            A_printNumber10_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            A_printNumber10_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            A_printNumber10_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            A_printNumber10_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            A_deleteDigit10_4(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 187 && x <= 262 && y >= 327 && y <= 362 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 187 || x1 > 262 || y1 < 327 || y1 > 362)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            A_printNumber11_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            A_printNumber11_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            A_printNumber11_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            A_printNumber11_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            A_printNumber11_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            A_printNumber11_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            A_printNumber11_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            A_printNumber11_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            A_printNumber11_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            A_printNumber11_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            A_deleteDigit11_4(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 260 && x <= 335 && y >= 327 && y <= 362 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 260 || x1 > 335 || y1 < 327 || y1 > 362)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            A_printNumber12_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            A_printNumber12_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            A_printNumber12_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            A_printNumber12_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            A_printNumber12_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            A_printNumber12_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            A_printNumber12_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            A_printNumber12_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            A_printNumber12_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            A_printNumber12_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            A_deleteDigit12_4(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 41 && x <= 116 && y >= 372 && y <= 407 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 41 || x1 > 116 || y1 < 372 || y1 > 407)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            A_printNumber13_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            A_printNumber13_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            A_printNumber13_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            A_printNumber13_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            A_printNumber13_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            A_printNumber13_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            A_printNumber13_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            A_printNumber13_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            A_printNumber13_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            A_printNumber13_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            A_deleteDigit13_4(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 114 && x <= 189 && y >= 372 && y <= 407 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 114 || x1 > 189 || y1 < 372 || y1 > 407)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            A_printNumber14_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            A_printNumber14_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            A_printNumber14_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            A_printNumber14_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            A_printNumber14_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            A_printNumber14_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            A_printNumber14_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            A_printNumber14_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            A_printNumber14_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            A_printNumber14_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            A_deleteDigit14_4(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 187 && x <= 262 && y >= 372 && y <= 407 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 187 || x1 > 262 || y1 < 372 || y1 > 407)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            A_printNumber15_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            A_printNumber15_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            A_printNumber15_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            A_printNumber15_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            A_printNumber15_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            A_printNumber15_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            A_printNumber15_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            A_printNumber15_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            A_printNumber15_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            A_printNumber15_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            A_deleteDigit15_4(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 260 && x <= 335 && y >= 372 && y <= 407 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 260 || x1 > 335 || y1 < 372 || y1 > 407)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            A_printNumber16_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            A_printNumber16_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            A_printNumber16_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            A_printNumber16_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            A_printNumber16_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            A_printNumber16_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            A_printNumber16_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            A_printNumber16_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            A_printNumber16_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            A_printNumber16_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            A_deleteDigit16_4(window);
                        }
                    }
                }
            }
//for A_matrix

//for B_matrix
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 480 && x <= 555 && y >= 238 && y <= 273 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 480 || x1 > 555 || y1 < 238 || y1 > 273)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            B_printNumber1_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            B_printNumber1_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            B_printNumber1_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            B_printNumber1_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            B_printNumber1_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            B_printNumber1_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            B_printNumber1_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            B_printNumber1_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            B_printNumber1_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            B_printNumber1_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            B_deleteDigit1_4(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 553 && x <= 628 && y >= 238 && y <= 273 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 553 || x1 > 628 || y1 < 238 || y1 > 273)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            B_printNumber2_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            B_printNumber2_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            B_printNumber2_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            B_printNumber2_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            B_printNumber2_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            B_printNumber2_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            B_printNumber2_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            B_printNumber2_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            B_printNumber2_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            B_printNumber2_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            B_deleteDigit2_4(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 626 && x <= 701 && y >= 238 && y <= 273 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 626 || x1 > 701 || y1 < 238 || y1 > 273)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            B_printNumber3_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            B_printNumber3_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            B_printNumber3_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            B_printNumber3_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            B_printNumber3_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            B_printNumber3_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            B_printNumber3_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            B_printNumber3_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            B_printNumber3_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            B_printNumber3_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            B_deleteDigit3_4(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 699 && x <= 774 && y >= 238 && y <= 273 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 699 || x1 > 774 || y1 < 238 || y1 > 273)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            B_printNumber4_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            B_printNumber4_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            B_printNumber4_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            B_printNumber4_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            B_printNumber4_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            B_printNumber4_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            B_printNumber4_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            B_printNumber4_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            B_printNumber4_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            B_printNumber4_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            B_deleteDigit4_4(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 480 && x <= 555 && y >= 282 && y <= 317 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 480 || x1 > 555 || y1 < 282 || y1 > 317)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            B_printNumber5_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            B_printNumber5_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            B_printNumber5_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            B_printNumber5_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            B_printNumber5_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            B_printNumber5_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            B_printNumber5_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            B_printNumber5_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            B_printNumber5_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            B_printNumber5_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            B_deleteDigit5_4(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 553 && x <= 628 && y >= 282 && y <= 317 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 553 || x1 > 628 || y1 < 282 || y1 > 317)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            B_printNumber6_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            B_printNumber6_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            B_printNumber6_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            B_printNumber6_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            B_printNumber6_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            B_printNumber6_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            B_printNumber6_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            B_printNumber6_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            B_printNumber6_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            A_printNumber6_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            B_deleteDigit6_4(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 626 && x <= 701 && y >= 282 && y <= 317 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 626 || x1 > 701 || y1 < 282 || y1 > 317)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            B_printNumber7_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            B_printNumber7_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            B_printNumber7_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            B_printNumber7_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            B_printNumber7_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            B_printNumber7_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            B_printNumber7_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            B_printNumber7_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            B_printNumber7_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            B_printNumber7_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            B_deleteDigit7_4(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 699 && x <= 774 && y >= 282 && y <= 317 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 699 || x1 > 774 || y1 < 282 || y1 > 317)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            B_printNumber8_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            B_printNumber8_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            B_printNumber8_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            B_printNumber8_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            B_printNumber8_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            B_printNumber8_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            B_printNumber8_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            B_printNumber8_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            B_printNumber8_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            B_printNumber8_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            B_deleteDigit8_4(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 480 && x <= 555 && y >= 327 && y <= 362 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 480 || x1 > 555 || y1 < 327 || y1 > 362)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            B_printNumber9_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            B_printNumber9_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            B_printNumber9_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            B_printNumber9_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            B_printNumber9_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            B_printNumber9_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            B_printNumber9_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            B_printNumber9_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            B_printNumber9_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            B_printNumber9_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            B_deleteDigit9_4(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 553 && x <= 628 && y >= 327 && y <= 362 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 553 || x1 > 628 || y1 < 327 || y1 > 362)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            B_printNumber10_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            B_printNumber10_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            B_printNumber10_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            B_printNumber10_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            B_printNumber10_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            B_printNumber10_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            B_printNumber10_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            B_printNumber10_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            B_printNumber10_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            B_printNumber10_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            B_deleteDigit10_4(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 626 && x <= 701 && y >= 327 && y <= 362 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 626 || x1 > 701 || y1 < 327 || y1 > 362)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            B_printNumber11_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            B_printNumber11_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            B_printNumber11_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            B_printNumber11_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            B_printNumber11_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            B_printNumber11_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            B_printNumber11_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            B_printNumber11_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            B_printNumber11_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            B_printNumber11_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            B_deleteDigit11_4(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 699 && x <= 774 && y >= 327 && y <= 362 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 699 || x1 > 774 || y1 < 327 || y1 > 362)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            B_printNumber12_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            B_printNumber12_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            B_printNumber12_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            B_printNumber12_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            B_printNumber12_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            B_printNumber12_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            B_printNumber12_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            B_printNumber12_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            B_printNumber12_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            B_printNumber12_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            B_deleteDigit12_4(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 480 && x <= 555 && y >= 372 && y <= 407 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 480 || x1 > 555 || y1 < 372 || y1 > 407)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            B_printNumber13_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            B_printNumber13_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            B_printNumber13_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            B_printNumber13_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            B_printNumber13_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            B_printNumber13_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            B_printNumber13_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            B_printNumber13_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            B_printNumber13_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            B_printNumber13_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            B_deleteDigit13_4(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 553 && x <= 628 && y >= 372 && y <= 407 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 553 || x1 > 628 || y1 < 372 || y1 > 407)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            B_printNumber14_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            B_printNumber14_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            B_printNumber14_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            B_printNumber14_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            B_printNumber14_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            B_printNumber14_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            B_printNumber14_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            B_printNumber14_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            B_printNumber14_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            B_printNumber14_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            B_deleteDigit14_4(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 626 && x <= 701 && y >= 372 && y <= 407 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 626 || x1 > 701 || y1 < 372 || y1 > 407)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            B_printNumber15_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            B_printNumber15_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            B_printNumber15_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            B_printNumber15_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            A_printNumber15_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            B_printNumber15_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            B_printNumber15_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            B_printNumber15_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            B_printNumber15_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            B_printNumber15_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            B_deleteDigit15_4(window);
                        }
                    }
                }
            }
            if(event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left &&
                    x >= 699 && x <= 774 && y >= 372 && y <= 407 ){
                Event numberEvent;
                while (1) {
                    window.pollEvent(numberEvent);
                    Vector2i pos1 = Mouse::getPosition(window);
                    int x1 = pos1.x;
                    int y1 = pos1.y;
                    if(numberEvent.type == Event::MouseButtonPressed && numberEvent.key.code == Mouse::Left
                            && (x1 < 699 || x1 > 774 || y1 < 372 || y1 > 407)){
                        printf("numberEvent\n");
                        break;
                    }
                    if(numberEvent.type == Event::KeyPressed){
                        if(numberEvent.key.code == Keyboard::Num1 || numberEvent.key.code == Keyboard::Numpad1)
                        {
                            B_printNumber16_4(1, window);
                        } else if(numberEvent.key.code == Keyboard::Num2 || numberEvent.key.code == Keyboard::Numpad2)
                        {
                            B_printNumber16_4(2, window);
                        } else if(numberEvent.key.code == Keyboard::Num3 || numberEvent.key.code == Keyboard::Numpad3)
                        {
                            B_printNumber16_4(3, window);
                        } else if(numberEvent.key.code == Keyboard::Num4 || numberEvent.key.code == Keyboard::Numpad4)
                        {
                            B_printNumber16_4(4, window);
                        } else if(numberEvent.key.code == Keyboard::Num5 || numberEvent.key.code == Keyboard::Numpad5)
                        {
                            B_printNumber16_4(5, window);
                        } else if(numberEvent.key.code == Keyboard::Num6 || numberEvent.key.code == Keyboard::Numpad6)
                        {
                            B_printNumber16_4(6, window);
                        } else if(numberEvent.key.code == Keyboard::Num7 || numberEvent.key.code == Keyboard::Numpad7)
                        {
                            B_printNumber16_4(7, window);
                        } else if(numberEvent.key.code == Keyboard::Num8 || numberEvent.key.code == Keyboard::Numpad8)
                        {
                            B_printNumber16_4(8, window);
                        } else if(numberEvent.key.code == Keyboard::Num9 || numberEvent.key.code == Keyboard::Numpad9)
                        {
                            B_printNumber16_4(9, window);
                        } else if(numberEvent.key.code == Keyboard::Num0 || numberEvent.key.code == Keyboard::Numpad0)
                        {
                            B_printNumber16_4(0, window);
                        } else if(numberEvent.key.code == Keyboard::BackSpace)
                        {
                            B_deleteDigit16_4(window);
                        }
                    }
                }
            }
//for B_matrix

            if (event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left){
                //define function
                if(x > 345 && x < 388 && y > 255 && y < 298){
                    operation = 1;
                }
                if(x > 415 && x < 458 && y > 255 && y < 298){
                    operation = 2;
                }
                if(x > 345 && x < 388 && y > 335 && y < 358){
                    operation = 3;
                }
                if(x > 415 && x < 458 && y > 335 && y < 378){
                    operation = 4;
                }
                if(x > 380 && x < 423 && y > 295 && y < 338){
                    operation = 5;
                }
                if(x > 780 && x < 844 && y > 285 && y < 349){
                    getFinallResult(operation, size);
                    gameOver = 0;
                    break;
                }

            }
        }
    }
}


/*for A_matrix 2 x 2*/
void A_printNumber1_2(int number, RenderWindow& window){
    if(numberSizeCounter(A_matrix[0][0]) > 4) return;
    window.clear(Color::White);
    A_matrix[0][0] = A_matrix[0][0]*10 + number;
    drawAll_2(window);
}
void A_deleteDigit1_2(RenderWindow& window){
    window.clear(Color::White);
    A_matrix[0][0] /= 10;
    drawAll_2(window);
}
void A_printNumber2_2(int number, RenderWindow& window){
    if(numberSizeCounter(A_matrix[0][1]) > 4) return;
    window.clear(Color::White);
    A_matrix[0][1] = A_matrix[0][1]*10 + number;
    drawAll_2(window);
}
void A_deleteDigit2_2(RenderWindow& window){
    window.clear(Color::White);
    A_matrix[0][1] /= 10;
    drawAll_2(window);
}
void A_printNumber3_2(int number, RenderWindow& window){
    if(numberSizeCounter(A_matrix[1][0]) > 4) return;
    window.clear(Color::White);
    A_matrix[1][0] = A_matrix[1][0]*10 + number;
    drawAll_2(window);
}
void A_deleteDigit3_2(RenderWindow& window){
    window.clear(Color::White);
    A_matrix[1][0] /= 10;
    drawAll_2(window);
}
void A_printNumber4_2(int number, RenderWindow& window){
    if(numberSizeCounter(A_matrix[1][1]) > 4) return;
    window.clear(Color::White);
    A_matrix[1][1] = A_matrix[1][1]*10 + number;
    drawAll_2(window);
}
void A_deleteDigit4_2(RenderWindow& window){
    window.clear(Color::White);
    A_matrix[1][1] /= 10;
    drawAll_2(window);
}
/*for A_matrix 2 x 2*/

/*for B_matrix 2 x 2*/
void B_printNumber1_2(int number, RenderWindow& window){
    if(numberSizeCounter(B_matrix[0][0]) > 4) return;
    window.clear(Color::White);
    B_matrix[0][0] = B_matrix[0][0]*10 + number;
    drawAll_2(window);
}
void B_deleteDigit1_2(RenderWindow& window){
    window.clear(Color::White);
    B_matrix[0][0] /= 10;
    drawAll_2(window);
}
void B_printNumber2_2(int number, RenderWindow& window){
    if(numberSizeCounter(B_matrix[0][1]) > 4) return;
    window.clear(Color::White);
    B_matrix[0][1] = B_matrix[0][1]*10 + number;
    drawAll_2(window);
}
void B_deleteDigit2_2(RenderWindow& window){
    window.clear(Color::White);
    B_matrix[0][1] /= 10;
    drawAll_2(window);
}
void B_printNumber3_2(int number, RenderWindow& window){
    if(numberSizeCounter(B_matrix[1][0]) > 4) return;
    window.clear(Color::White);
    B_matrix[1][0] = B_matrix[1][0]*10 + number;
    drawAll_2(window);
}
void B_deleteDigit3_2(RenderWindow& window){
    window.clear(Color::White);
    B_matrix[1][0] /= 10;
    drawAll_2(window);
}
void B_printNumber4_2(int number, RenderWindow& window){
    if(numberSizeCounter(B_matrix[1][1]) > 4) return;
    window.clear(Color::White);
    B_matrix[1][1] = B_matrix[1][1]*10 + number;
    drawAll_2(window);
}
void B_deleteDigit4_2(RenderWindow& window){
    window.clear(Color::White);
    B_matrix[1][1] /= 10;
    drawAll_2(window);
}
/*for B_matrix 2 x 2*/

/*for A_matrix 3 x 3*/
void A_printNumber1_3(int number, RenderWindow& window){
    if(numberSizeCounter(A_matrix[0][0]) > 4) return;
    window.clear(Color::White);
    A_matrix[0][0] = A_matrix[0][0]*10 + number;
    drawAll_3(window);
}
void A_deleteDigit1_3(RenderWindow& window){
    window.clear(Color::White);
    A_matrix[0][0] /= 10;
    drawAll_3(window);
}
void A_printNumber2_3(int number, RenderWindow& window){
    if(numberSizeCounter(A_matrix[0][1]) > 4) return;
    window.clear(Color::White);
    A_matrix[0][1] = A_matrix[0][1]*10 + number;
    drawAll_3(window);
}
void A_deleteDigit2_3(RenderWindow& window){
    window.clear(Color::White);
    A_matrix[0][1] /= 10;
    drawAll_3(window);
}
void A_printNumber3_3(int number, RenderWindow& window){
    if(numberSizeCounter(A_matrix[0][2]) > 4) return;
    window.clear(Color::White);
    A_matrix[0][2] = A_matrix[0][2]*10 + number;
    drawAll_3(window);
}
void A_deleteDigit3_3(RenderWindow& window){
    window.clear(Color::White);
    A_matrix[0][2] /= 10;
    drawAll_3(window);
}
void A_printNumber4_3(int number, RenderWindow& window){
    if(numberSizeCounter(A_matrix[1][0]) > 4) return;
    window.clear(Color::White);
    A_matrix[1][0] = A_matrix[1][0]*10 + number;
    drawAll_3(window);
}
void A_deleteDigit4_3(RenderWindow& window){
    window.clear(Color::White);
    A_matrix[1][0] /= 10;
    drawAll_3(window);
}
void A_printNumber5_3(int number, RenderWindow& window){
    if(numberSizeCounter(A_matrix[1][1]) > 4) return;
    window.clear(Color::White);
    A_matrix[1][1] = A_matrix[1][1]*10 + number;
    drawAll_3(window);
}
void A_deleteDigit5_3(RenderWindow& window){
    window.clear(Color::White);
    A_matrix[1][1] /= 10;
    drawAll_3(window);
}
void A_printNumber6_3(int number, RenderWindow& window){
    if(numberSizeCounter(A_matrix[1][2]) > 4) return;
    window.clear(Color::White);
    A_matrix[1][2] = A_matrix[1][2]*10 + number;
    drawAll_3(window);
}
void A_deleteDigit6_3(RenderWindow& window){
    window.clear(Color::White);
    A_matrix[1][2] /= 10;
    drawAll_3(window);
}
void A_printNumber7_3(int number, RenderWindow& window){
    if(numberSizeCounter(A_matrix[2][0]) > 4) return;
    window.clear(Color::White);
    A_matrix[2][0] = A_matrix[2][0]*10 + number;
    drawAll_3(window);
}
void A_deleteDigit7_3(RenderWindow& window){
    window.clear(Color::White);
    A_matrix[2][0] /= 10;
    drawAll_3(window);
}
void A_printNumber8_3(int number, RenderWindow& window){
    if(numberSizeCounter(A_matrix[2][1]) > 4) return;
    window.clear(Color::White);
    A_matrix[2][1] = A_matrix[2][1]*10 + number;
    drawAll_3(window);
}
void A_deleteDigit8_3(RenderWindow& window){
    window.clear(Color::White);
    A_matrix[2][1] /= 10;
    drawAll_3(window);
}
void A_printNumber9_3(int number, RenderWindow& window){
    if(numberSizeCounter(A_matrix[2][2]) > 4) return;
    window.clear(Color::White);
    A_matrix[2][2] = A_matrix[2][2]*10 + number;
    drawAll_3(window);
}
void A_deleteDigit9_3(RenderWindow& window){
    window.clear(Color::White);
    A_matrix[2][2] /= 10;
    drawAll_3(window);
}
/*for A_matrix 3 x 3*/

/*for B_matrix 3 x 3*/
void B_printNumber1_3(int number, RenderWindow& window){
    if(numberSizeCounter(B_matrix[0][0]) > 4) return;
    window.clear(Color::White);
    B_matrix[0][0] = B_matrix[0][0]*10 + number;
    drawAll_3(window);
}
void B_deleteDigit1_3(RenderWindow& window){
    window.clear(Color::White);
    B_matrix[0][0] /= 10;
    drawAll_3(window);
}
void B_printNumber2_3(int number, RenderWindow& window){
    if(numberSizeCounter(B_matrix[0][1]) > 4) return;
    window.clear(Color::White);
    B_matrix[0][1] = B_matrix[0][1]*10 + number;
    drawAll_3(window);
}
void B_deleteDigit2_3(RenderWindow& window){
    window.clear(Color::White);
    B_matrix[0][1] /= 10;
    drawAll_3(window);
}
void B_printNumber3_3(int number, RenderWindow& window){
    if(numberSizeCounter(B_matrix[0][2]) > 4) return;
    window.clear(Color::White);
    B_matrix[0][2] = B_matrix[0][2]*10 + number;
    drawAll_3(window);
}
void B_deleteDigit3_3(RenderWindow& window){
    window.clear(Color::White);
    B_matrix[0][2] /= 10;
    drawAll_3(window);
}
void B_printNumber4_3(int number, RenderWindow& window){
    if(numberSizeCounter(B_matrix[1][0]) > 4) return;
    window.clear(Color::White);
    B_matrix[1][0] = B_matrix[1][0]*10 + number;
    drawAll_3(window);
}
void B_deleteDigit4_3(RenderWindow& window){
    window.clear(Color::White);
    B_matrix[1][0] /= 10;
    drawAll_3(window);
}
void B_printNumber5_3(int number, RenderWindow& window){
    if(numberSizeCounter(B_matrix[1][1]) > 4) return;
    window.clear(Color::White);
    B_matrix[1][1] = B_matrix[1][1]*10 + number;
    drawAll_3(window);
}
void B_deleteDigit5_3(RenderWindow& window){
    window.clear(Color::White);
    B_matrix[1][1] /= 10;
    drawAll_3(window);
}
void B_printNumber6_3(int number, RenderWindow& window){
    if(numberSizeCounter(B_matrix[1][2]) > 4) return;
    window.clear(Color::White);
    B_matrix[1][2] = B_matrix[1][2]*10 + number;
    drawAll_3(window);
}
void B_deleteDigit6_3(RenderWindow& window){
    window.clear(Color::White);
    B_matrix[1][2] /= 10;
    drawAll_3(window);
}
void B_printNumber7_3(int number, RenderWindow& window){
    if(numberSizeCounter(B_matrix[2][0]) > 4) return;
    window.clear(Color::White);
    B_matrix[2][0] = B_matrix[2][0]*10 + number;
    drawAll_3(window);
}
void B_deleteDigit7_3(RenderWindow& window){
    window.clear(Color::White);
    B_matrix[2][0] /= 10;
    drawAll_3(window);
}
void B_printNumber8_3(int number, RenderWindow& window){
    if(numberSizeCounter(B_matrix[2][1]) > 4) return;
    window.clear(Color::White);
    B_matrix[2][1] = B_matrix[2][1]*10 + number;
    drawAll_3(window);
}
void B_deleteDigit8_3(RenderWindow& window){
    window.clear(Color::White);
    B_matrix[2][1] /= 10;
    drawAll_3(window);
}
void B_printNumber9_3(int number, RenderWindow& window){
    if(numberSizeCounter(B_matrix[2][2]) > 4) return;
    window.clear(Color::White);
    B_matrix[2][2] = B_matrix[2][2]*10 + number;
    drawAll_3(window);
}
void B_deleteDigit9_3(RenderWindow& window){
    window.clear(Color::White);
    B_matrix[2][2] /= 10;
    drawAll_3(window);
}
/*for B_matrix 3 x 3*/

/*for A_matrix 4 x 4*/
void A_printNumber1_4(int number, RenderWindow& window){
    if(numberSizeCounter(A_matrix[0][0]) > 4) return;
    window.clear(Color::White);
    A_matrix[0][0] = A_matrix[0][0]*10 + number;
    drawAll_4(window);
}
void A_deleteDigit1_4(RenderWindow& window){
    window.clear(Color::White);
    A_matrix[0][0] /= 10;
    drawAll_4(window);
}
void A_printNumber2_4(int number, RenderWindow& window){
    if(numberSizeCounter(A_matrix[0][1]) > 4) return;
    window.clear(Color::White);
    A_matrix[0][1] = A_matrix[0][1]*10 + number;
    drawAll_4(window);
}
void A_deleteDigit2_4(RenderWindow& window){
    window.clear(Color::White);
    A_matrix[0][1] /= 10;
    drawAll_4(window);
}
void A_printNumber3_4(int number, RenderWindow& window){
    if(numberSizeCounter(A_matrix[0][2]) > 4) return;
    window.clear(Color::White);
    A_matrix[0][2] = A_matrix[0][2]*10 + number;
    drawAll_4(window);
}
void A_deleteDigit3_4(RenderWindow& window){
    window.clear(Color::White);
    A_matrix[0][2] /= 10;
    drawAll_4(window);
}
void A_printNumber4_4(int number, RenderWindow& window){
    if(numberSizeCounter(A_matrix[0][3]) > 4) return;
    window.clear(Color::White);
    A_matrix[0][3] = A_matrix[0][3]*10 + number;
    drawAll_4(window);
}
void A_deleteDigit4_4(RenderWindow& window){
    window.clear(Color::White);
    A_matrix[0][3] /= 10;
    drawAll_4(window);
}
void A_printNumber5_4(int number, RenderWindow& window){
    if(numberSizeCounter(A_matrix[1][0]) > 4) return;
    window.clear(Color::White);
    A_matrix[1][0] = A_matrix[1][0]*10 + number;
    drawAll_4(window);
}
void A_deleteDigit5_4(RenderWindow& window){
    window.clear(Color::White);
    A_matrix[1][0] /= 10;
    drawAll_4(window);
}
void A_printNumber6_4(int number, RenderWindow& window){
    if(numberSizeCounter(A_matrix[1][1]) > 4) return;
    window.clear(Color::White);
    A_matrix[1][1] = A_matrix[1][1]*10 + number;
    drawAll_4(window);
}
void A_deleteDigit6_4(RenderWindow& window){
    window.clear(Color::White);
    A_matrix[1][1] /= 10;
    drawAll_4(window);
}
void A_printNumber7_4(int number, RenderWindow& window){
    if(numberSizeCounter(A_matrix[1][2]) > 4) return;
    window.clear(Color::White);
    A_matrix[1][2] = A_matrix[1][2]*10 + number;
    drawAll_4(window);
}
void A_deleteDigit7_4(RenderWindow& window){
    window.clear(Color::White);
    A_matrix[1][2] /= 10;
    drawAll_4(window);
}
void A_printNumber8_4(int number, RenderWindow& window){
    if(numberSizeCounter(A_matrix[1][3]) > 4) return;
    window.clear(Color::White);
    A_matrix[1][3] = A_matrix[1][3]*10 + number;
    drawAll_4(window);
}
void A_deleteDigit8_4(RenderWindow& window){
    window.clear(Color::White);
    A_matrix[1][3] /= 10;
    drawAll_4(window);
}
void A_printNumber9_4(int number, RenderWindow& window){
    if(numberSizeCounter(A_matrix[2][0]) > 4) return;
    window.clear(Color::White);
    A_matrix[2][0] = A_matrix[2][0]*10 + number;
    drawAll_4(window);
}
void A_deleteDigit9_4(RenderWindow& window){
    window.clear(Color::White);
    A_matrix[2][0] /= 10;
    drawAll_4(window);
}
void A_printNumber10_4(int number, RenderWindow& window){
    if(numberSizeCounter(A_matrix[2][1]) > 4) return;
    window.clear(Color::White);
    A_matrix[2][1] = A_matrix[2][1]*10 + number;
    drawAll_4(window);
}
void A_deleteDigit10_4(RenderWindow& window){
    window.clear(Color::White);
    A_matrix[2][1] /= 10;
    drawAll_4(window);
}
void A_printNumber11_4(int number, RenderWindow& window){
    if(numberSizeCounter(A_matrix[2][2]) > 4) return;
    window.clear(Color::White);
    A_matrix[2][2] = A_matrix[2][2]*10 + number;
    drawAll_4(window);
}
void A_deleteDigit11_4(RenderWindow& window){
    window.clear(Color::White);
    A_matrix[2][2] /= 10;
    drawAll_4(window);
}
void A_printNumber12_4(int number, RenderWindow& window){
    if(numberSizeCounter(A_matrix[2][3]) > 4) return;
    window.clear(Color::White);
    A_matrix[2][3] = A_matrix[2][3]*10 + number;
    drawAll_4(window);
}
void A_deleteDigit12_4(RenderWindow& window){
    window.clear(Color::White);
    A_matrix[2][3] /= 10;
    drawAll_4(window);
}
void A_printNumber13_4(int number, RenderWindow& window){
    if(numberSizeCounter(A_matrix[3][0]) > 4) return;
    window.clear(Color::White);
    A_matrix[3][0] = A_matrix[3][0]*10 + number;
    drawAll_4(window);
}
void A_deleteDigit13_4(RenderWindow& window){
    window.clear(Color::White);
    A_matrix[3][0] /= 10;
    drawAll_4(window);
}
void A_printNumber14_4(int number, RenderWindow& window){
    if(numberSizeCounter(A_matrix[3][1]) > 4) return;
    window.clear(Color::White);
    A_matrix[3][1] = A_matrix[3][1]*10 + number;
    drawAll_4(window);
}
void A_deleteDigit14_4(RenderWindow& window){
    window.clear(Color::White);
    A_matrix[3][1] /= 10;
    drawAll_4(window);
}
void A_printNumber15_4(int number, RenderWindow& window){
    if(numberSizeCounter(A_matrix[3][2]) > 4) return;
    window.clear(Color::White);
    A_matrix[3][2] = A_matrix[3][2]*10 + number;
    drawAll_4(window);
}
void A_deleteDigit15_4(RenderWindow& window){
    window.clear(Color::White);
    A_matrix[3][2] /= 10;
    drawAll_4(window);
}
void A_printNumber16_4(int number, RenderWindow& window){
    if(numberSizeCounter(A_matrix[3][3]) > 4) return;
    window.clear(Color::White);
    A_matrix[3][3] = A_matrix[3][3]*10 + number;
    drawAll_4(window);
}
void A_deleteDigit16_4(RenderWindow& window){
    window.clear(Color::White);
    A_matrix[3][3] /= 10;
    drawAll_4(window);
}
/*for A_matrix 4 x 4*/

/*for B_matrix 4 x 4*/
void B_printNumber1_4(int number, RenderWindow& window){
    if(numberSizeCounter(B_matrix[0][0]) > 4) return;
    window.clear(Color::White);
    B_matrix[0][0] = B_matrix[0][0]*10 + number;
    drawAll_4(window);
}
void B_deleteDigit1_4(RenderWindow& window){
    window.clear(Color::White);
    B_matrix[0][0] /= 10;
    drawAll_4(window);
}
void B_printNumber2_4(int number, RenderWindow& window){
    if(numberSizeCounter(B_matrix[0][1]) > 4) return;
    window.clear(Color::White);
    B_matrix[0][1] = B_matrix[0][1]*10 + number;
    drawAll_4(window);
}
void B_deleteDigit2_4(RenderWindow& window){
    window.clear(Color::White);
    B_matrix[0][1] /= 10;
    drawAll_4(window);
}
void B_printNumber3_4(int number, RenderWindow& window){
    if(numberSizeCounter(B_matrix[0][2]) > 4) return;
    window.clear(Color::White);
    B_matrix[0][2] = B_matrix[0][2]*10 + number;
    drawAll_4(window);
}
void B_deleteDigit3_4(RenderWindow& window){
    window.clear(Color::White);
    B_matrix[0][2] /= 10;
    drawAll_4(window);
}
void B_printNumber4_4(int number, RenderWindow& window){
    if(numberSizeCounter(B_matrix[0][3]) > 4) return;
    window.clear(Color::White);
    B_matrix[0][3] = B_matrix[0][3]*10 + number;
    drawAll_4(window);
}
void B_deleteDigit4_4(RenderWindow& window){
    window.clear(Color::White);
    B_matrix[0][3] /= 10;
    drawAll_4(window);
}
void B_printNumber5_4(int number, RenderWindow& window){
    if(numberSizeCounter(B_matrix[1][0]) > 4) return;
    window.clear(Color::White);
    B_matrix[1][0] = B_matrix[1][0]*10 + number;
    drawAll_4(window);
}
void B_deleteDigit5_4(RenderWindow& window){
    window.clear(Color::White);
    B_matrix[1][0] /= 10;
    drawAll_4(window);
}
void B_printNumber6_4(int number, RenderWindow& window){
    if(numberSizeCounter(B_matrix[1][1]) > 4) return;
    window.clear(Color::White);
    B_matrix[1][1] = B_matrix[1][1]*10 + number;
    drawAll_4(window);
}
void B_deleteDigit6_4(RenderWindow& window){
    window.clear(Color::White);
    B_matrix[1][1] /= 10;
    drawAll_4(window);
}
void B_printNumber7_4(int number, RenderWindow& window){
    if(numberSizeCounter(B_matrix[1][2]) > 4) return;
    window.clear(Color::White);
    B_matrix[1][2] = B_matrix[1][2]*10 + number;
    drawAll_4(window);
}
void B_deleteDigit7_4(RenderWindow& window){
    window.clear(Color::White);
    B_matrix[1][2] /= 10;
    drawAll_4(window);
}
void B_printNumber8_4(int number, RenderWindow& window){
    if(numberSizeCounter(B_matrix[1][3]) > 4) return;
    window.clear(Color::White);
    B_matrix[1][3] = B_matrix[1][3]*10 + number;
    drawAll_4(window);
}
void B_deleteDigit8_4(RenderWindow& window){
    window.clear(Color::White);
    B_matrix[1][3] /= 10;
    drawAll_4(window);
}
void B_printNumber9_4(int number, RenderWindow& window){
    if(numberSizeCounter(B_matrix[2][0]) > 4) return;
    window.clear(Color::White);
    B_matrix[2][0] = B_matrix[2][0]*10 + number;
    drawAll_4(window);
}
void B_deleteDigit9_4(RenderWindow& window){
    window.clear(Color::White);
    B_matrix[2][0] /= 10;
    drawAll_4(window);
}
void B_printNumber10_4(int number, RenderWindow& window){
    if(numberSizeCounter(B_matrix[2][1]) > 4) return;
    window.clear(Color::White);
    B_matrix[2][1] = B_matrix[2][1]*10 + number;
    drawAll_4(window);
}
void B_deleteDigit10_4(RenderWindow& window){
    window.clear(Color::White);
    B_matrix[2][1] /= 10;
    drawAll_4(window);
}
void B_printNumber11_4(int number, RenderWindow& window){
    if(numberSizeCounter(B_matrix[2][2]) > 4) return;
    window.clear(Color::White);
    B_matrix[2][2] = B_matrix[2][2]*10 + number;
    drawAll_4(window);
}
void B_deleteDigit11_4(RenderWindow& window){
    window.clear(Color::White);
    B_matrix[2][2] /= 10;
    drawAll_4(window);
}
void B_printNumber12_4(int number, RenderWindow& window){
    if(numberSizeCounter(B_matrix[2][3]) > 4) return;
    window.clear(Color::White);
    B_matrix[2][3] = B_matrix[2][3]*10 + number;
    drawAll_4(window);
}
void B_deleteDigit12_4(RenderWindow& window){
    window.clear(Color::White);
    B_matrix[2][3] /= 10;
    drawAll_4(window);
}
void B_printNumber13_4(int number, RenderWindow& window){
    if(numberSizeCounter(B_matrix[3][0]) > 4) return;
    window.clear(Color::White);
    B_matrix[3][0] = B_matrix[3][0]*10 + number;
    drawAll_4(window);
}
void B_deleteDigit13_4(RenderWindow& window){
    window.clear(Color::White);
    B_matrix[3][0] /= 10;
    drawAll_4(window);
}
void B_printNumber14_4(int number, RenderWindow& window){
    if(numberSizeCounter(B_matrix[3][1]) > 4) return;
    window.clear(Color::White);
    B_matrix[3][1] = B_matrix[3][1]*10 + number;
    drawAll_4(window);
}
void B_deleteDigit14_4(RenderWindow& window){
    window.clear(Color::White);
    B_matrix[3][1] /= 10;
    drawAll_4(window);
}
void B_printNumber15_4(int number, RenderWindow& window){
    if(numberSizeCounter(B_matrix[3][2]) > 4) return;
    window.clear(Color::White);
    B_matrix[3][2] = B_matrix[3][2]*10 + number;
    drawAll_4(window);
}
void B_deleteDigit15_4(RenderWindow& window){
    window.clear(Color::White);
    B_matrix[3][2] /= 10;
    drawAll_4(window);
}
void B_printNumber16_4(int number, RenderWindow& window){
    if(numberSizeCounter(B_matrix[3][3]) > 4) return;
    window.clear(Color::White);
    B_matrix[3][3] = B_matrix[3][3]*10 + number;
    drawAll_4(window);
}
void B_deleteDigit16_4(RenderWindow& window){
    window.clear(Color::White);
    B_matrix[3][3] /= 10;
    drawAll_4(window);
}
/*for B_matrix 4 x 4*/

void getFinallResult(int option, int size){
    switch(option){
        case 1: function_Addition(A_matrix, B_matrix, C_matrix, size);break;
        case 2: function_Difference(A_matrix, B_matrix, C_matrix, size);break;
        case 3: function_TransposeA(A_matrix, B_matrix, C_matrix, size);break;
        case 4: function_TransposeB(A_matrix, B_matrix, C_matrix, size);break;
        case 5: function_Multiplication(A_matrix, B_matrix, C_matrix, size);break;
        default: printf("Цифри тільки 1 - 6");
    }
}
