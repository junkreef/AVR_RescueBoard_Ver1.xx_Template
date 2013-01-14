//<one line to give the line_sensor.c name and a brief idea of what it does.>
// Copyright (C) 2013 Junpei Kishi
//
//
//This program is free software; you can redistribute it and/or modify it under the terms of
// the GNU General Public License as published by the Free Software Foundation; either version 3 of the License,
// or (at your option) any later version.
//
//This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
// FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
//
//You should have received a copy of the GNU General Public License along with this program.
// If not, see <http://www.gnu.org/licenses/>.

#include "line_sensor.h"

void LineSensor_Init(){
	DDRC=(DDRC&0x3f);
	DDRD=(DDRD&0xc0);
}

uint8_t LineSensor_Get(){
	uint8_t Sensor_value;
	Sensor_value=(PORTD>>2)+(PORTC&0xc0);
	return Sensor_value;
}
