#ifndef DISPLAY_H
#define DISPLAY_H

#include <string>

class Display
{
	private:
	//board elements
	std::string m_borderSpace;
	std::string m_playeriBanner;
	std::string m_enemyBanner;
	std::string m_colLabel;
	std::string m_borderLineTop;
	std::string m_rowiLabel;
	std::string m_gridLine;
	std::string m_borderLineBottom;
	std::string m_friendlyBanner;

	//shot feed-back elements
	std::string m_hit0;
	std::string m_hit1;
	std::string m_hit2;
	std::string m_hit3;
	std::string m_hit4;
	std::string m_hit5;
	std::string m_miss;

	//display state of enemy board
	void enemyBoard(char board[][9], int playerID) const;

	public:
	Display();

	//in-game visual elements
	void friendlyBoard(char board[][9]) const;
	void matchFrame(int playerID, char enemyBrd[][9], char friendlyBrd[][9]) const;
	void hit() const;
	void miss() const;
};
#endif
