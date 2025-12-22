lv_obj_t * btn2 = lv_btn_create(lv_scr_act());
lv_obj_t * btn3 = lv_btn_create(lv_scr_act());
lv_obj_t * btn = lv_btn_create(lv_scr_act());
lv_obj_t * btn4 = lv_btn_create(lv_scr_act());
int sel = 0;
static void btn_event_cb(lv_event_t * e)
{
	lv_color_t colorg = lv_color_make(0, 255, 0);
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * btn = lv_event_get_target(e);
    if(code == LV_EVENT_CLICKED) {
    lv_obj_t * label = lv_obj_get_child(btn, 0);
    lv_label_set_text_fmt(label, "Selected");
	sel = 1;
	lv_obj_set_style_bg_color(btn, colorg, LV_PART_MAIN);
    lv_obj_add_state(btn3, LV_STATE_DISABLED);
    lv_obj_add_state(btn2, LV_STATE_DISABLED);
    lv_obj_add_state(btn4, LV_STATE_DISABLED);
    }
}
static void btn_event_cb2(lv_event_t * e)
{

    lv_event_code_t code2 = lv_event_get_code(e);
	lv_color_t colorg = lv_color_make(0, 255, 0);
    lv_obj_t * btn2 = lv_event_get_target(e);
    if(code2 == LV_EVENT_CLICKED) {
	sel = 2;
    lv_obj_t * label2 = lv_obj_get_child(btn2, 0);
    lv_label_set_text_fmt(label2, "Selected");
	lv_obj_set_style_bg_color(btn2, colorg, LV_PART_MAIN);
    lv_obj_add_state(btn, LV_STATE_DISABLED);
    lv_obj_add_state(btn3, LV_STATE_DISABLED);
    lv_obj_add_state(btn4, LV_STATE_DISABLED);
    }
}
static void btn_event_cb3(lv_event_t * e)
{
    lv_event_code_t code3 = lv_event_get_code(e);
	lv_color_t colorg = lv_color_make(0, 255, 0);
    lv_obj_t * btn3 = lv_event_get_target(e);
    if(code3 == LV_EVENT_CLICKED) {
	sel = 3;
    lv_obj_t * label3 = lv_obj_get_child(btn3, 0);
    lv_label_set_text_fmt(label3, "Selected");
	lv_obj_set_style_bg_color(btn3, colorg, LV_PART_MAIN);
    lv_obj_add_state(btn, LV_STATE_DISABLED);
    lv_obj_add_state(btn2, LV_STATE_DISABLED);
    lv_obj_add_state(btn4, LV_STATE_DISABLED);
    }
}
static void btn_event_cb4(lv_event_t * e)
{
    lv_event_code_t code4 = lv_event_get_code(e);
	lv_color_t colorg = lv_color_make(0, 255, 0);
    lv_obj_t * btn4 = lv_event_get_target(e);
    if(code4 == LV_EVENT_CLICKED) {
	sel = 4;
    lv_obj_t * label4 = lv_obj_get_child(btn4, 0);
    lv_label_set_text_fmt(label4, "Selected");
	lv_obj_set_style_bg_color(btn4, colorg, LV_PART_MAIN);
    lv_obj_add_state(btn, LV_STATE_DISABLED);
    lv_obj_add_state(btn2, LV_STATE_DISABLED);
    lv_obj_add_state(btn3, LV_STATE_DISABLED);
    }
}
void lv_example_get_started_3(void)
{
lv_color_t colorg = lv_color_make(0, 255, 0);
    lv_obj_set_pos(btn, 0, 40);
    lv_obj_set_size(btn, 90, 25);
	lv_color_t color = lv_color_make(255, 0, 0);  // Red color
lv_obj_set_style_bg_color(btn, color, LV_PART_MAIN);
    lv_obj_t * label = lv_label_create(btn);
    lv_label_set_text(label, "RIGHT");
    lv_obj_center(label);
    lv_obj_set_pos(btn2, 0, 180);
    lv_obj_set_pos(btn2, 390, 40);
    lv_obj_set_size(btn2, 90, 25);
lv_obj_set_style_bg_color(btn2, color, LV_PART_MAIN);
    label = lv_label_create(btn2);
    lv_label_set_text(label, "LEFT");
    lv_obj_center(label);
	lv_obj_add_event_cb(btn, btn_event_cb, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(btn2, btn_event_cb2, LV_EVENT_ALL, NULL);
    lv_obj_set_pos(btn3, 0, 180);
    lv_obj_set_size(btn3, 90, 25);
	lv_color_t colorb = lv_color_make(0, 0, 255);
lv_obj_set_style_bg_color(btn3, colorb, LV_PART_MAIN);
    label = lv_label_create(btn3);
    lv_label_set_text(label, "AUTON_3");
    lv_obj_center(label);
	lv_obj_add_event_cb(btn3, btn_event_cb3, LV_EVENT_ALL, NULL);

}