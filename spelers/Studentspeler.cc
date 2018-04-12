#include <iostream>
using namespace std;

const int DEMENTIONS = 2;

class Studentspeler : public Basisspeler {
public:
    Studentspeler(Clobber* spelPointer);
    int volgendeZet();
};

int* searchFriends(int x,int y,short player,Clobber* spel){
    int friends [3][1];
    int friendsFound = 0;
    for(int i=0; i<DEMENTIONS;i++){
        for(int j=0; j<2;j++){
            int xSearch=0;
            int ySearch=0;

            if(i==0){
                if(j==0){
                    xSearch--;
                }else{
                    xSearch++;
                }
            }else{
                if(j==0){
                    ySearch--;
                }else{
                    ySearch++;
                }
            }

            if(0 <= x+xSearch < spel->breedte && 0 <= y+ySearch < spel->hoogte){
                    int targetStone;
                    targetStone = spel->bord[x+xSearch][y+ySearch];
                    if(targetStone == player){
                        friends[friendsFound][0] = x;
                        friends[friendsFound][1] = y;
                        friendsFound++;
                    }
            }
        }
    }
    return *friends;
}

int searchEnemys(int x,int y){

}

int evaluatie (Clobber* spel,short speler){
    //Zoeken naar x x 0 en daar punt/strafpunt aaan geven
    for(int i=0;i<spel->breedte;i++){
        for(int j=0;j<spel->hoogte;j++){

        };//y
            cout << "\n";
    };//x
}

Studentspeler::Studentspeler(Clobber * spelPointer){
    spel = spelPointer;

}

int Studentspeler::volgendeZet(){
 evaluatie(spel,spel->aanZet);
 return 1;
}



int minimax(short speler, int diepte, int & dezet){

}
int alphabeta(short speler,int diepte,int & dezet){

}

void slimmezet(int param){

}
