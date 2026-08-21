
/* register_all_cocos2dx_3d(lua_State*) */

undefined8 register_all_cocos2dx_3d(lua_State *param_1)

{
  tolua_open();
  tolua_module(param_1,"cc",0);
  tolua_beginmodule(param_1,"cc");
  lua_register_cocos2dx_3d_Sprite3D(param_1);
  lua_register_cocos2dx_3d_TextureCube(param_1);
  lua_register_cocos2dx_3d_BillBoard(param_1);
  lua_register_cocos2dx_3d_Mesh(param_1);
  lua_register_cocos2dx_3d_Animate3D(param_1);
  lua_register_cocos2dx_3d_AttachNode(param_1);
  lua_register_cocos2dx_3d_Animation3D(param_1);
  lua_register_cocos2dx_3d_Skeleton3D(param_1);
  lua_register_cocos2dx_3d_Sprite3DMaterial(param_1);
  lua_register_cocos2dx_3d_Sprite3DCache(param_1);
  lua_register_cocos2dx_3d_Terrain(param_1);
  lua_register_cocos2dx_3d_Bundle3D(param_1);
  lua_register_cocos2dx_3d_Skybox(param_1);
  lua_register_cocos2dx_3d_BatchSprite3D(param_1);
  tolua_endmodule(param_1);
  return 1;
}

