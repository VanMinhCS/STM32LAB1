#include "Ex3_to_5.h"

void display7SEG(int num) {
	switch(num){
	case 0:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, SET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, SET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, SET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, SET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, SET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, SET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, SET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, SET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
		break;
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
	case 9:
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
		break;
	default:
		break;

	}
}
void traffic(){
	// RED - YELLOW
	HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, RESET);
	HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, SET);
	HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, SET);

	HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, SET);
	HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, RESET);
	HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, SET);
	for (int i = 2; i >= 1; i--) {
		display7SEG(i);
		HAL_Delay(1000);
	}
	//GREEN - RED
	HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, SET);
	HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, SET);
	HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, RESET);

	HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, RESET);
	HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, SET);
	HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, SET);
	for (int i = 3; i >= 1; i--) {
		display7SEG(i);
		HAL_Delay(1000);
	}
	//YELLOW - RED
	HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, SET);
	HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, RESET);
	HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, SET);

	HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, RESET);
	HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, SET);
	HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, SET);
	for (int i = 2; i >= 1; i--) {
		display7SEG(i);
		HAL_Delay(1000);
	}
	//RED - GREEN
	HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, RESET);
	HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, SET);
	HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, SET);

	HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, SET);
	HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, SET);
	HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, RESET);
	for (int i = 3; i >= 1; i--) {
		display7SEG(i);
		HAL_Delay(1000);
	}
}

