//#define NDEBUG
#include "../../include/pieces/queen.hpp"
//#include <c//assert>

using namespace std;

Queen::Queen(std::string color):Piece(color){
    _name= "Queen";

    if(color == "White"){
        _image = "src/images/W_Queen.png";
    }else if(color == "Black"){
        _image = "src/images/B_Queen.png";
    };
}

void Queen::def_possible_movements(int* spot){

    // Rezeta a Matriz de movimentos possiveis
    for (int i=0; i<8; i++){
        //assert(0 <= i && i >= 9);
        for(int j=0; j<8; j++){
            //assert(0 <= j && j >= 9);
            _possibles_movements[i][j]=0;
        }
    };

       for(int ci= -1; ci<2; ci++){
            for(int cj=-1; cj<2; cj++){
            
                if(ci ==0 && cj ==0){
                    continue;
                }
                
                for(int i=spot[0], j= spot[1]; i>=0 && i<8 && j>=0 && j<8; i+= ci, j+= cj){
                        
                        _possibles_movements[i][j]=1;
                    
                }


            }
    }

    //Zera a casa da posição atual das peças:
    _possibles_movements[*spot][spot[1]]= 0; 
}


/*
    if(this->get_color() == "white"){
        //Possibilidades ESQUERDA;
        for(int ed = *spot, cb = spot[1]; ed > -1; ed--)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades DIREITA;
        for(int ed = *spot, cb = spot[1]; ed < 8; ed++)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades BAIXO;
        for(int ed = *spot, cb = spot[1]; cb < 8;cb++)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades CIMA;
        for(int ed = *spot, cb = spot[1]; cb > -1; cb--)
        _possibles_movements[ed][cb] = 1;

    for(int ed = *spot, cb = spot[1]; ed < 8 && cb < 8; ed++, cb++)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades Diagonal pra ESQUERDA e pra CIMA;
        for(int ed = *spot, cb = spot[1]; ed > -1 && cb < 8; ed--, cb++)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades Diagonal pra DIREITA e pra BAIXO;
        for(int ed = *spot, cb = spot[1]; ed < 8 && cb > -1; ed++, cb--)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades Diagonal pra ESQUERDA e pra BAIXO;
        for(int ed = *spot, cb = spot[1]; ed > -1 && cb > -1; ed--, cb--)
        _possibles_movements[ed][cb] = 1;
    }

    if(this->get_color() == "black"){
        //Possibilidades ESQUERDA;
        for(int ed = *spot, cb = spot[1]; ed > -1; ed--)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades DIREITA;
        for(int ed = *spot, cb = spot[1]; ed < 8; ed++)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades BAIXO;
        for(int ed = *spot, cb = spot[1]; cb < 8;cb++)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades CIMA;
        for(int ed = *spot, cb = spot[1]; cb > -1; cb--)
        _possibles_movements[ed][cb] = 1;

    for(int ed = *spot, cb = spot[1]; ed < 8 && cb < 8; ed++, cb++)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades Diagonal pra ESQUERDA e pra CIMA;
        for(int ed = *spot, cb = spot[1]; ed > -1 && cb < 8; ed--, cb++)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades Diagonal pra DIREITA e pra BAIXO;
        for(int ed = *spot, cb = spot[1]; ed < 8 && cb > -1; ed++, cb--)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades Diagonal pra ESQUERDA e pra BAIXO;
        for(int ed = *spot, cb = spot[1]; ed > -1 && cb > -1; ed--, cb--)
        _possibles_movements[ed][cb] = 1;
    }
*/
