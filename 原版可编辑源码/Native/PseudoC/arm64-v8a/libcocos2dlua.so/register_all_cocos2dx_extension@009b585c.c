
/* register_all_cocos2dx_extension(lua_State*) */

undefined8 register_all_cocos2dx_extension(lua_State *param_1)

{
  tolua_open();
  tolua_module(param_1,"cc",0);
  tolua_beginmodule(param_1,"cc");
  lua_register_cocos2dx_extension_AssetsManagerEx(param_1);
  lua_register_cocos2dx_extension_ParticleSystem3D(param_1);
  lua_register_cocos2dx_extension_Control(param_1);
  lua_register_cocos2dx_extension_ControlHuePicker(param_1);
  lua_register_cocos2dx_extension_TableViewCell(param_1);
  lua_register_cocos2dx_extension_ControlStepper(param_1);
  lua_register_cocos2dx_extension_AssetsManager(param_1);
  lua_register_cocos2dx_extension_ControlColourPicker(param_1);
  lua_register_cocos2dx_extension_PUParticleSystem3D(param_1);
  lua_register_cocos2dx_extension_ControlButton(param_1);
  lua_register_cocos2dx_extension_ControlSlider(param_1);
  lua_register_cocos2dx_extension_ControlSaturationBrightnessPicker(param_1);
  lua_register_cocos2dx_extension_ScrollView(param_1);
  lua_register_cocos2dx_extension_Manifest(param_1);
  lua_register_cocos2dx_extension_ControlPotentiometer(param_1);
  lua_register_cocos2dx_extension_EventAssetsManagerEx(param_1);
  lua_register_cocos2dx_extension_TableView(param_1);
  lua_register_cocos2dx_extension_EventListenerAssetsManagerEx(param_1);
  lua_register_cocos2dx_extension_ControlSwitch(param_1);
  tolua_endmodule(param_1);
  return 1;
}

