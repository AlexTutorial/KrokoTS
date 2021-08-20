#pragma once
#include <Arduino.h>

 class KrokoTS
 {
 public:
 	KrokoTS(byte x1, byte x2, byte y1, byte y2);
 	int getX();
 	int getY();
    void attachClick(byte id, int minX, int maxX, int minY, int maxY, void (*func)());
    void tick();

 private:
   void (*p_function[8])(void);   // указатель на p_function
   int functionattrs[8][4];
 	byte _x1;
 	byte _x2;
 	byte _y1;
 	byte _y2;

 };

