#ifndef SUNGROW_CAN_H
#define SUNGROW_CAN_H
#include "../include.h"

#define CAN_INVERTER_SELECTED

void transmit_can(CAN_frame* tx_frame, int interface);
void setup_inverter(void);

#endif
