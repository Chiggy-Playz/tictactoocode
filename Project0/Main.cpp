#include <SFML/Graphics.hpp>
#include "iostream";
#include "Main.h"
#include "Windows.h";
#include "String.h";
using namespace std;
using namespace sf;


string logy(string logsy) {

	cout<<logsy<<endl;
}


int main() {
	int new_width = float(VideoMode::getDesktopMode().width / 3 - VideoMode::getDesktopMode().width / 14);
	RenderWindow window(VideoMode(1000, 1000), "Chiggy's Tic Tac Toe!", Style::Titlebar | Style::Close);
	window.setPosition(Vector2i(new_width, 0.f));
	window.setKeyRepeatEnabled(false);



	///////////////////BOARD//////////////////////
	RectangleShape Big_Box(Vector2f(750.f - 15, 600.f + 15));
	Big_Box.setFillColor(Color::Blue);
	Big_Box.setOutlineColor(Color::White);
	Big_Box.setOutlineThickness(15.f);
	Vector2u size = window.getSize();
	int height = size.y;
	int cell_height = height / 3 - 50;
	Big_Box.setPosition(125.f, cell_height);


	RectangleShape  Cell_1(Vector2f(250.f - 15, 200.f));
	Cell_1.setPosition(125.f, cell_height);
	Cell_1.setFillColor(Color::Blue);
	Cell_1.setOutlineThickness(15.f);
	Cell_1.setOutlineColor(Color::White);

	RectangleShape  Cell_2(Vector2f(250.f - 15, 200.f));
	Cell_2.setPosition(125.f + 250, cell_height);
	Cell_2.setFillColor(Color::Blue);
	Cell_2.setOutlineThickness(15.f);
	Cell_2.setOutlineColor(Color::White);

	RectangleShape  Cell_3(Vector2f(250.f - 15, 200.f));
	Cell_3.setPosition(125.f + 500, cell_height);
	Cell_3.setFillColor(Color::Blue);
	Cell_3.setOutlineThickness(15.f);
	Cell_3.setOutlineColor(Color::White);


	RectangleShape  Cell_4(Vector2f(235.f, 200.f));
	Cell_4.setPosition(125.f, cell_height + 215);
	Cell_4.setFillColor(Color::Blue);
	Cell_4.setOutlineThickness(15.f);
	Cell_4.setOutlineColor(Color::White);

	RectangleShape  Cell_5(Vector2f(250.f - 15, 200.f));
	Cell_5.setPosition(125.f + 250, cell_height + 215);
	Cell_5.setFillColor(Color::Blue);
	Cell_5.setOutlineThickness(15.f);
	Cell_5.setOutlineColor(Color::White);

	RectangleShape  Cell_6(Vector2f(250.f - 15, 200.f));
	Cell_6.setPosition(125.f + 500, cell_height + 215);
	Cell_6.setFillColor(Color::Blue);
	Cell_6.setOutlineThickness(15.f);
	Cell_6.setOutlineColor(Color::White);

	RectangleShape  Cell_7(Vector2f(250.f - 15, 200.f - 10));
	Cell_7.setPosition(125.f, cell_height + 430);
	Cell_7.setFillColor(Color::Blue);
	Cell_7.setOutlineThickness(15.f);
	Cell_7.setOutlineColor(Color::White);

	RectangleShape  Cell_8(Vector2f(250.f - 15, 200.f - 10));
	Cell_8.setPosition(125.f + 250.f, cell_height + 430);
	Cell_8.setFillColor(Color::Blue);
	Cell_8.setOutlineThickness(15.f);
	Cell_8.setOutlineColor(Color::White);

	RectangleShape  Cell_9(Vector2f(250.f - 15, 200.f - 10));
	Cell_9.setPosition(125.f + 500, cell_height + 430);
	Cell_9.setFillColor(Color::Blue);
	Cell_9.setOutlineThickness(15.f);
	Cell_9.setOutlineColor(Color::White);

	RectangleShape Min_Menu(Vector2f(750 - 15, 600 + 15 + 5));
	Min_Menu.setPosition(Vector2f(1111, 0));
	Min_Menu.setFillColor(Color::Yellow);
	Min_Menu.setOutlineThickness(15.f);
	Min_Menu.setOutlineColor(Color::White);


	RectangleShape Menu_Item1(Vector2f(400, 150));
	Menu_Item1.setPosition(Vector2f(1111,1110));
	Menu_Item1.setFillColor(Color::White);
	Menu_Item1.setOutlineThickness(10.f);
	Menu_Item1.setOutlineColor(Color::Black);

	RectangleShape Menu_Item2(Vector2f(400, 150));
	Menu_Item2.setPosition(Vector2f(1111, 0));
	Menu_Item2.setFillColor(Color::White);
	Menu_Item2.setOutlineThickness(10.f);
	Menu_Item2.setOutlineColor(Color::Black);

	RectangleShape Menu_Item3(Vector2f(400, 150));
	Menu_Item3.setPosition(Vector2f(1111, 0));
	Menu_Item3.setFillColor(Color::White);
	Menu_Item3.setOutlineThickness(10.f);
	Menu_Item3.setOutlineColor(Color::Black);

	RectangleShape Menu_Item4(Vector2f(400, 150));
	Menu_Item4.setPosition(Vector2f(1101, 0));
	Menu_Item4.setFillColor(Color::White);
	Menu_Item4.setOutlineThickness(10.f);
	Menu_Item4.setOutlineColor(Color::Black);
	//////////////////////////////////////////////


	///////////////// TEXT ///////////////////////
	Font font;
	font.loadFromFile("Data/Xanadu.ttf");
	Text text;
	text.setFont(font);
	text.setString(" Tic-Tac-Toe");
	text.setCharacterSize(153);
	text.setFillColor(Color(255, 0, 0, 255));
	text.setStyle(Text::Bold);

	Text Vic_Text;

	Text pl1;
	pl1.setFont(font);
	pl1.setString("Player 1 (O)");
	pl1.setFillColor(Color::Red);
	pl1.setPosition(Vector2f(1111, 500));
	pl1.setCharacterSize(90);

	Text pl2;
	pl2.setFont(font);
	pl2.setString("Player 2 (X)");
	pl2.setFillColor(Color::Red);
	pl2.setPosition(Vector2f(1111, 500));
	pl2.setCharacterSize(90);

	Vic_Text.setFont(font);
	Vic_Text.setString("Victory for ");
	Vic_Text.setFillColor(Color::Red);
	Vic_Text.setCharacterSize(90);
	Vic_Text.setPosition(Vector2f(1111, 500));

	Text draw;

	draw.setFont(font);
	draw.setString("Its a Draw");
	draw.setFillColor(Color::Red);
	draw.setPosition(Vector2f(1111, 500));
	draw.setCharacterSize(90);

	Text Play_Ag;
	Play_Ag.setFont(font);
	Play_Ag.setString("Play Again");
	Play_Ag.setFillColor(Color::Black);
	Play_Ag.setPosition(Vector2f(1111, 500));
	Play_Ag.setCharacterSize(80);

	Text Stats;
	Stats.setFont(font);
	Stats.setString("Statistics");
	Stats.setFillColor(Color::Black);
	Stats.setPosition(Vector2f(1111, 500));
	Stats.setCharacterSize(80);

	Text Ex;
	Ex.setFont(font);
	Ex.setString("Exit");
	Ex.setFillColor(Color::Black);
	Ex.setPosition(Vector2f(1111, 500));
	Ex.setCharacterSize(80);

	Text clos;
	clos.setFont(font);
	clos.setString("Close");
	clos.setFillColor(Color::Black);
	clos.setPosition(Vector2f(1111, 500));
	clos.setCharacterSize(80);

	Text pl1wins;

	pl1wins.setFont(font);
	
	pl1wins.setFillColor(Color::Red);
	pl1wins.setPosition(Vector2f(1111, 500));
	pl1wins.setCharacterSize(80);

	Text pl2wins;
	pl2wins.setFont(font);
	
	pl2wins.setFillColor(Color::Red);
	pl2wins.setPosition(Vector2f(1111, 500));
	pl2wins.setCharacterSize(80);

	Text simple_colon;
	simple_colon.setFont(font);
	simple_colon.setString(":");
	simple_colon.setFillColor(Color::Red);
	simple_colon.setPosition(Vector2f(1111,890));
	simple_colon.setCharacterSize(180);

	Text simple_colon_2;
	simple_colon_2.setFont(font);
	simple_colon_2.setString(":");
	simple_colon_2.setFillColor(Color::Red);
	simple_colon_2.setPosition(Vector2f(1111, 890));
	simple_colon_2.setCharacterSize(180);
	/////////////////////////////////////////////	







	//////////////// TEXTURES //////////////
	Texture alphaO;
	Texture alphaX;
	Texture WC_text;
	Texture bla;
	WC_text.loadFromFile("Data/WC.png");
	alphaX.loadFromFile("Data/Xalpha.png");
	alphaO.loadFromFile("Data/Oalpha.png");
	bla.loadFromFile("Data/bla.png");

	Sprite sprite1, sprite2, sprite3, sprite4, sprite5, sprite6, sprite7, sprite8, sprite9;

	Sprite WC;
	WC.setTexture(WC_text);
	WC.setColor(Color(255, 255, 255, 200));
	WC.setPosition(Vector2f(1111, 1000));

	sprite1.setTexture(bla);
	sprite2.setTexture(bla);
	sprite3.setTexture(bla);
	sprite4.setTexture(bla);
	sprite5.setTexture(bla);
	sprite6.setTexture(bla);
	sprite7.setTexture(bla);
	sprite8.setTexture(bla);
	sprite9.setTexture(bla);


	sprite1.setPosition(Vector2f(0, 1100));
	sprite2.setPosition(Vector2f(0, 1100));
	sprite3.setPosition(Vector2f(0, 1100));
	sprite4.setPosition(Vector2f(0, 1100));
	sprite5.setPosition(Vector2f(0, 1100));
	sprite6.setPosition(Vector2f(0, 1100));
	sprite7.setPosition(Vector2f(0, 1100));
	sprite8.setPosition(Vector2f(0, 1100));
	sprite9.setPosition(Vector2f(0, 1100));

	////////////////////////////////////////

	int playerno = 0;

	bool gameWin = false;
		bool showMenu = false;
		bool show_Buttons = false;
	
		int winpl1 = 00;
		int winpl2 = 0;
		int dra = 0;


	while (window.isOpen()) {
		
		Event event;
		while (window.pollEvent(event)) {
			Vector2i localpos = Mouse::getPosition(window);
			auto mox = localpos.x;
			auto moy = localpos.y;
			auto point = (mox, moy);

			switch (event.type) {


			case Event::Closed:
				window.close();
				break;

			case Event::MouseButtonPressed:

				if (event.mouseButton.button == Mouse::Left) {

					if (!showMenu && gameWin == false) {

						if (Cell_1.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {

							cout << "Cell 1" << endl;
							cout << "player no : " << playerno << endl;
							if (sprite1.getTexture() == &bla) {
								if (playerno % 2 == 1) {

									sprite1.setTexture(alphaX);
									playerno++;
								}
								else {

									sprite1.setTexture(alphaO);
									playerno++;
								}
								sprite1.setPosition(Vector2f(125.f + 5, cell_height));


							}

						}
						else if (Cell_2.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {


							cout << "Cell 2" << endl;
							cout << "player no : " << playerno << endl;
							if (sprite2.getTexture() == &bla) {
								if (playerno % 2 == 1) {

									sprite2.setTexture(alphaX);
									playerno++;
								}
								else {

									sprite2.setTexture(alphaO);
									playerno++;
								}
							}
							sprite2.setPosition(Vector2f(125.f + 255, cell_height));

						}
						else if (Cell_3.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {


							cout << "Cell 3" << endl;
							if (sprite3.getTexture() == &bla) {
								if (playerno % 2 == 1) {

									sprite3.setTexture(alphaX);
									playerno++;
								}
								else {

									sprite3.setTexture(alphaO);
									playerno++;
								}
							}
							sprite3.setPosition(Vector2f(125.f + 505, cell_height));


						}
						else if (Cell_4.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {


							cout << "Cell 4" << endl;
							if (sprite4.getTexture() == &bla) {
								if (playerno % 2 == 1) {

									sprite4.setTexture(alphaX);
									playerno++;
								}
								else {

									sprite4.setTexture(alphaO);
									playerno++;
								}
							}
							sprite4.setPosition(Vector2f(125.f + 5, cell_height + 222));

						}
						else if (Cell_5.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {


							cout << "Cell 5" << endl;
							if (sprite5.getTexture() == &bla) {
								if (playerno % 2 == 1) {

									sprite5.setTexture(alphaX);
									playerno++;
								}
								else {

									sprite5.setTexture(alphaO);
									playerno++;
								}
							}
							sprite5.setPosition(Vector2f(125.f + 255, cell_height + 222));

						}
						else if (Cell_6.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {


							cout << "Cell 6" << endl;
							if (sprite6.getTexture() == &bla) {
								if (playerno % 2 == 1) {

									sprite6.setTexture(alphaX);
									playerno++;
								}
								else {

									sprite6.setTexture(alphaO);
									playerno++;
								}
							}
							sprite6.setPosition(Vector2f(125.f + 505, cell_height + 222));

						}
						else if (Cell_7.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {



							cout << "Cell 7" << endl;
							if (sprite7.getTexture() == &bla) {
								if (playerno % 2 == 1) {

									sprite7.setTexture(alphaX);
									playerno++;
								}
								else {

									sprite7.setTexture(alphaO);
									playerno++;
								}
							}
							sprite7.setPosition(Vector2f(125.f + 5, cell_height + 430));

						}
						else if (Cell_8.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {


							cout << "Cell 8" << endl;
							if (sprite8.getTexture() == &bla) {
								if (playerno % 2 == 1) {

									sprite8.setTexture(alphaX);
									playerno++;
								}
								else {

									sprite8.setTexture(alphaO);
									playerno++;
								}
							}
							sprite8.setPosition(Vector2f(125.f + 255, cell_height + 430));

						}
						else if (Cell_9.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {


							cout << "Cell 9" << endl;
							if (sprite9.getTexture() == &bla) {
								if (playerno % 2 == 1) {

									sprite9.setTexture(alphaX);
									playerno++;
								}
								else {

									sprite9.setTexture(alphaO);
									playerno++;
								}
							}
							sprite9.setPosition(Vector2f(125.f + 505, cell_height + 430));

						}
						else if (!Big_Box.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {


							cout << "Please click inside the grid" << endl;
						}







					}
				}
			}
			auto sp1 = sprite1.getTexture();
			auto sp2 = sprite2.getTexture();
			auto sp3 = sprite3.getTexture();
			auto sp4 = sprite4.getTexture();
			auto sp5 = sprite5.getTexture();
			auto sp6 = sprite6.getTexture();
			auto sp7 = sprite7.getTexture();
			auto sp8 = sprite8.getTexture();
			auto sp9 = sprite9.getTexture();

			
			////////////////CHECK WIN/////////////
			cout << "checking the victory condition \n";

			if ( (showMenu == false && sp1 != &bla && sp2 != &bla && sp3 != &bla) || (showMenu == false && sp1 != &bla && sp4 != &bla && sp7 != &bla) || (showMenu == false && sp4 != &bla && sp5 != &bla && sp6 != &bla) || (showMenu == false && sp7 != &bla && sp8 != &bla && sp9 != &bla) || (showMenu == false && sp2 != &bla && sp5 != &bla && sp8 != &bla) || (showMenu == false && sp3 != &bla && sp6 != &bla && sp9 != &bla) || (showMenu == false && sp1 != &bla && sp5 != &bla && sp9 != &bla) || (showMenu == false && sp3 != &bla && sp5 != &bla && sp7 != &bla))

			{
				gameWin = false;


				//cout << "first row is full.\n";
				if (sp1 != &bla && sp3 != &bla && sp2 != &bla && sp1 == sp2 && sp2 == sp3) {
					cout << "all in first row are same. \n";
					if (playerno % 2 == 0) {

						cout << "Player 2 won!!" << endl;
						showMenu = true;
						gameWin = true;
						Vic_Text.setPosition(Vector2f(100 - 100, cell_height - 150));
						pl2.setPosition(Vector2f(605 - 90, cell_height - 150));
						
						
						winpl2 = winpl2 + 1;
						//break;

						cout << "after setting showmenu true" << endl;
						
						
					}
					else {

						cout << "Player 1 Won!!" << endl;
						Vic_Text.setPosition(Vector2f(100 - 100, cell_height - 150));
						pl1.setPosition(Vector2f(605 - 90, cell_height - 150));
						showMenu = true;
						gameWin = true;
						winpl1 = winpl1 + 1;
						
					}
					//break;
				}
				else if (sp1 != &bla && sp4 != &bla && sp7 != &bla && sp1 == sp4 && sp4 == sp7) {
					cout << "1st vertical row condition entered \n";
					if (playerno % 2 == 0) {

						cout << "Player 2 won!!" << endl;
						Vic_Text.setPosition(Vector2f(100 - 100, cell_height - 150));
						pl2.setPosition(Vector2f(605 - 90, cell_height - 150));
						gameWin = true;
						winpl2++;
						showMenu = true;
						
					}
					else {

						cout << "Player 1 Won!!" << endl;
						cout << "Player 1 Won!!" << endl;
						Vic_Text.setPosition(Vector2f(100 - 100, cell_height - 150));
						pl1.setPosition(Vector2f(605 - 90, cell_height - 150));
						gameWin = true;
						winpl1++;
						showMenu = true;
						
					}
				}
				else if (sp4 != &bla && sp5 != &bla && sp6 != &bla && sp6 == sp5 && sp5 == sp4) {
					cout << "2nd horizontal row condition entered \n";
					if (playerno % 2 == 0) {

						cout << "Player 2 won!!" << endl;
						Vic_Text.setPosition(Vector2f(100 - 100, cell_height - 150));
						pl2.setPosition(Vector2f(605 - 90, cell_height - 150));
						gameWin = true;
						winpl2++;
						showMenu = true;
						
					}
					else {

						cout << "Player 1 Won!!" << endl;
						
						Vic_Text.setPosition(Vector2f(100 - 100, cell_height - 150));
						pl1.setPosition(Vector2f(605 - 90, cell_height - 150));
						gameWin = true;	
						
						showMenu = true;
						winpl1++;
						
					}
				}

				else if (sp7 != &bla && sp8 != &bla && sp9 != &bla && sp7 == sp8 && sp8 == sp9) {
					cout << "3rd horizontal row condition entered \n";
					if (playerno % 2 == 0) {

						cout << "Player 2 won!!" << endl;
						Vic_Text.setPosition(Vector2f(100 - 100, cell_height - 150));
						pl2.setPosition(Vector2f(605 - 90, cell_height - 150));
						gameWin = true;
						showMenu = true;
						winpl2++;
						
					}
					else {

						cout << "Player 1 Won!!" << endl;
						cout << "Player 1 Won!!" << endl;
						Vic_Text.setPosition(Vector2f(100 - 100, cell_height - 150));
						pl1.setPosition(Vector2f(605 - 90, cell_height - 150));
						gameWin = true;
						winpl1++;
						showMenu = true;
						
					}
				}
				else if (sp2 != &bla && sp5 != &bla && sp8 != &bla && sp2 == sp5 && sp8 == sp5) {
					cout << "2nd vertical row condition entered \n";
					if (playerno % 2 == 0) {

						cout << "Player 2 won!!" << endl;
						Vic_Text.setPosition(Vector2f(100 - 100, cell_height - 150));
						pl2.setPosition(Vector2f(605 - 90, cell_height - 150));
						gameWin = true;
						showMenu = true;
						winpl2++;

					}
					else {

						cout << "Player 1 Won!!" << endl;

						Vic_Text.setPosition(Vector2f(100 - 100, cell_height - 150));
						pl1.setPosition(Vector2f(605 - 90, cell_height - 150));
						gameWin = true;
						winpl1++;
						showMenu = true;
						
					}
				}
				else if (sp3 != &bla && sp6 != &bla && sp9 != &bla && sp3 == sp6 && sp6 == sp9) {
					cout << "3rd vertical row condition entered \n";
					if (playerno % 2 == 0) {

						cout << "Player 2 won!!" << endl;
						Vic_Text.setPosition(Vector2f(100 - 100, cell_height - 150));
						pl2.setPosition(Vector2f(605 - 90, cell_height - 150));
						gameWin = true;

						winpl2++;
						showMenu = true;
						
					}
					else {

						cout << "Player 1 Won!!" << endl;
						cout << "Player 1 Won!!" << endl;
						Vic_Text.setPosition(Vector2f(100 - 100, cell_height - 150));
						pl1.setPosition(Vector2f(605 - 90, cell_height - 150));
						gameWin = true;
						winpl1++;
						showMenu = true;
						
					}
				}

				else if (sp1 != &bla && sp5 != &bla && sp9 != &bla && sp1 == sp5 && sp5 == sp9) {
					cout << "1st diagnol row condition entered \n";
					if (playerno % 2 == 0) {

						cout << "Player 2 won!!" << endl;
						Vic_Text.setPosition(Vector2f(100 - 100, cell_height - 150));
						pl2.setPosition(Vector2f(605 - 90, cell_height - 150));
						gameWin = true;
						winpl2++;
						showMenu = true;
						
					}
					else {

						cout << "Player 1 Won!!" << endl;
						cout << "Player 1 Won!!" << endl;
						Vic_Text.setPosition(Vector2f(100 - 100, cell_height - 150));
						pl1.setPosition(Vector2f(605 - 90, cell_height - 150));
						gameWin = true;
						winpl1++;
						showMenu = true;
						
					}
				}
				else if (sp3 != &bla && sp5 != &bla && sp7 != &bla && sp3 == sp5 && sp5 == sp7) {
					cout << "2nd diagnol row condition entered \n";
					if (playerno % 2 == 0) {

						cout << "Player 2 won!!" << endl;
						Vic_Text.setPosition(Vector2f(100 - 100, cell_height - 150));
						pl2.setPosition(Vector2f(605 - 90, cell_height - 150));
						gameWin = true;
						showMenu = true;
						winpl2++;
						
					}
					else {

						cout << "Player 1 Won!!" << endl;
						cout << "Player 1 Won!!" << endl;
						Vic_Text.setPosition(Vector2f(100 - 100, cell_height - 150));
						pl1.setPosition(Vector2f(605 - 90, cell_height - 150));
						gameWin = true;
						winpl1++;
						showMenu = true;
						
					}
				}
				else if (sp1 != &bla && sp2 != &bla && sp3 != &bla && sp4 != &bla && sp5 != &bla && sp6 != &bla && sp7 != &bla && sp8 != &bla && sp9 != &bla) {
					cout << "Draw entered";
					draw.setPosition(Vector2f(125 + 150, cell_height - 150));
					gameWin = true;
					dra++;
					showMenu = true;
					
				}


			}
			else if (gameWin) {

				if (showMenu) {
				

					WC.setPosition(Vector2f(0, 0));
					Min_Menu.setPosition(Vector2f(125, cell_height));
					Menu_Item1.setPosition(Vector2f(292.5, cell_height + 50));
					Menu_Item2.setPosition(Vector2f(292.5, cell_height + 250));
					Menu_Item3.setPosition(Vector2f(292.5, cell_height + 450));

					Play_Ag.setPosition(Vector2f(302, cell_height + 75));
					Stats.setPosition(Vector2f(308, cell_height + 275));
					Ex.setPosition(Vector2f(425, cell_height + 475));
					show_Buttons = true;
				}

				if (show_Buttons) {
					if ( (Menu_Item1.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window))) && event.type == Event::MouseButtonPressed && event.mouseButton.button == Mouse::Left) || (Keyboard::isKeyPressed(Keyboard::LAlt) && Keyboard::isKeyPressed(Keyboard::P) ) ) {


						cout << "Restart" << endl;
						sprite1.setTexture(bla);
						sprite2.setTexture(bla);
						sprite3.setTexture(bla);
						sprite4.setTexture(bla);
						sprite5.setTexture(bla);
						sprite6.setTexture(bla);
						sprite7.setTexture(bla);
						sprite8.setTexture(bla);
						sprite9.setTexture(bla);

						WC.setPosition(Vector2f(10000, 0));
						Min_Menu.setPosition(Vector2f(1250, cell_height));
						Menu_Item1.setPosition(Vector2f(2925, cell_height + 50));
						Menu_Item2.setPosition(Vector2f(2920, cell_height + 250));
						Menu_Item3.setPosition(Vector2f(2920, cell_height + 450));
						Vic_Text.setPosition(Vector2f(2555, 0));
						pl1.setPosition(Vector2f(1111, 25));
						pl2.setPosition(Vector2f(1002, 25));

						Play_Ag.setPosition(Vector2f(1111, 22));
						Stats.setPosition(Vector2f(1002, 23));
						Ex.setPosition(Vector2f(1011, 900));
						draw.setPosition(Vector2f(10000, 0));
						gameWin = false;
						showMenu = false;
						playerno = 0;
						show_Buttons = false;
					}
					else if ((Menu_Item2.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) && event.type == Event::MouseButtonPressed && event.mouseButton.button == Mouse::Left || (Keyboard::isKeyPressed(Keyboard::LAlt) && Keyboard::isKeyPressed(Keyboard::S))) {


						
						cout << "Stats" << endl;
						sprite1.setTexture(bla);
						sprite2.setTexture(bla);
						sprite3.setTexture(bla);
						sprite4.setTexture(bla);
						sprite5.setTexture(bla);
						sprite6.setTexture(bla);
						sprite7.setTexture(bla);
						sprite8.setTexture(bla);
						sprite9.setTexture(bla);

						WC.setPosition(Vector2f(10000, 0));
						//Min_Menu.setPosition(Vector2f(1250, cell_height));
						Menu_Item1.setPosition(Vector2f(2925, cell_height + 50));
						Menu_Item2.setPosition(Vector2f(2920, cell_height + 250));
						Menu_Item3.setPosition(Vector2f(2920, cell_height + 450));
						Vic_Text.setPosition(Vector2f(2555, 0));
						

						Play_Ag.setPosition(Vector2f(1111, 22));
						Stats.setPosition(Vector2f(1002, 23));
						Ex.setPosition(Vector2f(1011, 900));
						draw.setPosition(Vector2f(10000, 0));
						Menu_Item4.setPosition(Vector2f(292.5, cell_height + 450));
						clos.setPosition(Vector2f(392.5, cell_height + 455));

						String win1 = to_string(winpl1);
						pl1wins.setString(win1);
						pl1wins.setPosition(Vector2f(700 , cell_height + 50));
						String win2 = to_string(winpl2);
						pl2wins.setString(win2);
						pl2wins.setPosition(Vector2f(700, cell_height + 250));
						showMenu = false;

						pl1.setPosition(Vector2f(130, cell_height + 50));
						pl2.setPosition(Vector2f(130, cell_height + 250));
						simple_colon.setPosition(650, cell_height - 45);
						simple_colon_2.setPosition(650, cell_height + 150);

					}
					else if ((Menu_Item4.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) && event.type == Event::MouseButtonPressed && event.mouseButton.button == Mouse::Left || (Keyboard::isKeyPressed(Keyboard::Escape))) {


						cout << "Entered close" << endl;

						Menu_Item4.setPosition(Vector2f(10000, 10));
						clos.setPosition(Vector2f(10000, 10));
						WC.setPosition(Vector2f(0, 0));
						Min_Menu.setPosition(Vector2f(125, cell_height));
						Menu_Item1.setPosition(Vector2f(292.5, cell_height + 50));
						Menu_Item2.setPosition(Vector2f(292.5, cell_height + 250));
						Menu_Item3.setPosition(Vector2f(292.5, cell_height + 450));

						Play_Ag.setPosition(Vector2f(302, cell_height + 75));
						Stats.setPosition(Vector2f(308, cell_height + 275));
						Ex.setPosition(Vector2f(425, cell_height + 475));
						pl1wins.setPosition(Vector2f(10001,1));
						pl2wins.setPosition(Vector2f(10001,1));
						pl1.setPosition(Vector2f(1111, 25));
						pl2.setPosition(Vector2f(1002, 25));
						simple_colon.setPosition(6510, cell_height - 45);
						simple_colon_2.setPosition(6510, cell_height);
						//gameWin = false;
						playerno = 0;
						showMenu = false;

					}
					else if ((Menu_Item3.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) && event.type == Event::MouseButtonPressed && event.mouseButton.button == Mouse::Left || (Keyboard::isKeyPressed(Keyboard::LAlt) && Keyboard::isKeyPressed(Keyboard::E))) {


						window.close();
					}
				}

					

			}
			








					window.clear(Color::Blue);
					window.draw(text);

					window.draw(Big_Box);
					window.draw(Cell_1);
					window.draw(Cell_2);
					window.draw(Cell_3);
					window.draw(Cell_4);
					window.draw(Cell_5);
					window.draw(Cell_6);
					window.draw(Cell_7);
					window.draw(Cell_8);
					window.draw(Cell_9);




					window.draw(sprite1);
					window.draw(sprite2);
					window.draw(sprite3);
					window.draw(sprite4);
					window.draw(sprite5);
					window.draw(sprite6);
					window.draw(sprite7);
					window.draw(sprite8);
					window.draw(sprite9);

					window.draw(WC);
					window.draw(Vic_Text);
					
					window.draw(draw);
					window.draw(Min_Menu);
					window.draw(Menu_Item1);
					window.draw(Menu_Item2);
					window.draw(Menu_Item3);
					window.draw(Play_Ag);
					window.draw(Stats);
					window.draw(Ex);
					window.draw(Menu_Item4);
					window.draw(clos);
					window.draw(pl1wins);
					window.draw(pl2wins);
					window.draw(pl1);
					window.draw(pl2);
					window.draw(simple_colon);
					window.draw(simple_colon_2);
					window.display();
				}









			}
			return 0;
		}
	