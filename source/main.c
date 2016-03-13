/*
*   main.c
*       by Reisyukaku
*   Copyright (c) 2015 All Rights Reserved
*
*   Minimalist CFW for N3DS
*/

#include "fs.h"
#include "firm.h"

void main(){
    mountSD();
    setupCFW();
}

void startCFW(){
    if(!loadFirm()) return;
    if(!patchFirm()) return;
    launchFirm();
}