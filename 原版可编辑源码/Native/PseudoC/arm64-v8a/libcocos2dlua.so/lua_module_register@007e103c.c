
/* lua_module_register(lua_State*) */

undefined8 lua_module_register(lua_State *param_1)

{
  register_cocosdenshion_module(param_1);
  register_network_module(param_1);
  register_cocosbuilder_module(param_1);
  register_cocostudio_module(param_1);
  register_ui_module(param_1);
  register_extension_module(param_1);
  register_spine_module(param_1);
  register_cocos3d_module(param_1);
  register_audioengine_module(param_1);
  register_dragonbones_module(param_1);
  register_fairygui_manual(param_1);
  register_physics3d_module(param_1);
  register_navmesh_module(param_1);
  return 1;
}

