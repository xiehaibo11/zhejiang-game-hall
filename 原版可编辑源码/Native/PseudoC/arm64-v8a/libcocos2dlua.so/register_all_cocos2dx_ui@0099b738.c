
/* register_all_cocos2dx_ui(lua_State*) */

undefined8 register_all_cocos2dx_ui(lua_State *param_1)

{
  tolua_open();
  tolua_module(param_1,&DAT_012e26cc,0);
  tolua_beginmodule(param_1,&DAT_012e26cc);
  lua_register_cocos2dx_ui_Widget(param_1);
  lua_register_cocos2dx_ui_Layout(param_1);
  lua_register_cocos2dx_ui_RelativeBox(param_1);
  lua_register_cocos2dx_ui_AbstractCheckButton(param_1);
  lua_register_cocos2dx_ui_CheckBox(param_1);
  lua_register_cocos2dx_ui_TextAtlas(param_1);
  lua_register_cocos2dx_ui_TextBMFont(param_1);
  lua_register_cocos2dx_ui_LoadingBar(param_1);
  lua_register_cocos2dx_ui_TextField(param_1);
  lua_register_cocos2dx_ui_Scale9Sprite(param_1);
                    /* try { // try from 0099b7c4 to 00a9b82f has its CatchHandler @ 0099ba4c */
  lua_register_cocos2dx_ui_Slider(param_1);
  lua_register_cocos2dx_ui_RichElement(param_1);
  lua_register_cocos2dx_ui_RichElementCustomNode(param_1);
  lua_register_cocos2dx_ui_VBox(param_1);
  lua_register_cocos2dx_ui_RadioButtonGroup(param_1);
  lua_register_cocos2dx_ui_TabControl(param_1);
  lua_register_cocos2dx_ui_ScrollView(param_1);
  lua_register_cocos2dx_ui_ListView(param_1);
  lua_register_cocos2dx_ui_TabHeader(param_1);
  lua_register_cocos2dx_ui_RichElementNewLine(param_1);
  lua_register_cocos2dx_ui_LayoutComponent(param_1);
  lua_register_cocos2dx_ui_Button(param_1);
  lua_register_cocos2dx_ui_LayoutParameter(param_1);
  lua_register_cocos2dx_ui_LinearLayoutParameter(param_1);
  lua_register_cocos2dx_ui_RadioButton(param_1);
  lua_register_cocos2dx_ui_ImageView(param_1);
  lua_register_cocos2dx_ui_HBox(param_1);
  lua_register_cocos2dx_ui_RichElementText(param_1);
  lua_register_cocos2dx_ui_PageView(param_1);
  lua_register_cocos2dx_ui_Helper(param_1);
  lua_register_cocos2dx_ui_EditBox(param_1);
  lua_register_cocos2dx_ui_Text(param_1);
  lua_register_cocos2dx_ui_RichText(param_1);
  lua_register_cocos2dx_ui_RichElementImage(param_1);
  lua_register_cocos2dx_ui_RelativeLayoutParameter(param_1);
  tolua_endmodule(param_1);
  return 1;
}

