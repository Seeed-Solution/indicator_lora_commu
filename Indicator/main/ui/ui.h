// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"
// SCREEN: ui_Screen_main
void ui_Screen_main_screen_init(void);
extern lv_obj_t * ui_Screen_main;
extern lv_obj_t * ui_Panel_temp;
extern lv_obj_t * ui_sensor_sen5x_temperature;
extern lv_obj_t * ui_Slider_temp;
extern lv_obj_t * ui_Panel_pm;
extern lv_obj_t * ui_sensor_sen5x_pm2p5;
extern lv_obj_t * ui_sensor_data_pm25;
extern lv_obj_t * ui_Panel_voc;
extern lv_obj_t * ui_sensor_sen5x_voc;
extern lv_obj_t * ui_sensor_data_voc;
extern lv_obj_t * ui_Panel_humi;
extern lv_obj_t * ui_sensor_sen5x_humi;
extern lv_obj_t * ui_sensor_data_humi;
extern lv_obj_t * ui____initial_actions0;

LV_IMG_DECLARE(ui_img_indicator_ver_png);    // assets\indicator_ver.png

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
