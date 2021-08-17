#include <iostream>
#include <fstream>
#include "sculptor.h"
#include "voxel.h"
using namespace std;
int main(void)
{
	sculptor cavalo(3,11,7);
    
    
        // Corpo
	cavalo.setColor(0.71,0.36,0.2,1);
	cavalo.putBox(0,3,3,9,2,6);
	// Nariz
	cavalo.setColor(0.93,0.8,0.62,1);
	cavalo.putBox(0,3,6,9,6,7);
	// Ajuste no nariz
	cavalo.setColor(0.62,0.31,0.084,1);
	cavalo.putVoxel(0,8,6);
	cavalo.putVoxel(2,8,6);
	// Cabelo
	cavalo.setColor(0.93,0.8,0.62,1);
	cavalo.putVoxel(1,9,3);
	// Orelha
	cavalo.setColor(0.71,0.36,0.2,1);
	cavalo.putVoxel(0,9,2);
	cavalo.putVoxel(0,10,2);
	cavalo.putVoxel(2,9,2);
	cavalo.putVoxel(2,10,2);
	// rabo
	cavalo.setColor(0.62,0.31,0.084,1);
	cavalo.putBox(0,3,5,6,1,2);
	cavalo.putBox(0,3,3,5,0,1);
	// Bunda
	cavalo.setColor(0.71,0.36,0.2,1);
	cavalo.putBox(0,3,3,5,1,2);
	// Pernas
	cavalo.setColor(0.71,0.36,0.2,1);
	cavalo.putBox(0,1,1,3,1,2);
	cavalo.putBox(0,1,1,3,4,5);
	cavalo.putBox(2,3,1,3,4,5);
	cavalo.putBox(2,3,1,3,1,2);
	// Pé
	cavalo.setColor(0.62,0.31,0.084,1); 
	cavalo.putVoxel(0,0,1);
	cavalo.putVoxel(0,0,4);
	cavalo.putVoxel(2,0,4);
	cavalo.putVoxel(2,0,1);
	// Ajuste do corpo
	cavalo.cutBox(0,3,3,6,5,6);
	// Ajuste do olho
	cavalo.setColor(1,1,1,1); 
	cavalo.putVoxel(0,7,3);
	cavalo.putVoxel(2,7,3);
	cavalo.setColor(0,0,0,1);
	cavalo.putVoxel(0,7,4);
	cavalo.putVoxel(2,7,4);
        cavalo.writeOFF((char*)"cavalo.off");
    return 0;
}
