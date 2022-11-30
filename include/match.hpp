/**
 * @file match.hpp
 * @author group
 * @brief Superclasse com a lógica da match.
 * @version 0.1
 * @date 2022-11-28
 * @details Aqui é onde atualizamos a interface da partida, recebendo interações
 * com o tabuleiro e determinamos um vencedor.
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <string>
#include "board.hpp"

/**
 * @brief 
 * 
 */
class Match{

std::string turn = "White";
std::string winner = "";
bool selected = false;
int last_spot[2];

public:
    
    Board *bo = new Board();
    std::string image_pices[8][8];
    std::string image_dots[8][8];
    
    Match();
    ~Match();
    //Recebe clicks NO TABULEIRO
    void game(int *spot);

    void refresh_imagespices();
    void refresh_imagesdots();
    std::string getwinner();
    void setwinner(std::string winner);
    void refreshwinner();
    void p_gaveup();

};



