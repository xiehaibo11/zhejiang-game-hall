
/* register_all_cocos2dx_physics3d(lua_State*) */

undefined8 register_all_cocos2dx_physics3d(lua_State *param_1)

{
  tolua_open();
  tolua_module(param_1,"cc",0);
  tolua_beginmodule(param_1,"cc");
  lua_register_cocos2dx_physics3d_Physics3DConstraint(param_1);
  lua_register_cocos2dx_physics3d_Physics3D6DofConstraint(param_1);
  lua_register_cocos2dx_physics3d_Physics3DObject(param_1);
  lua_register_cocos2dx_physics3d_Physics3DRigidBody(param_1);
  lua_register_cocos2dx_physics3d_Physics3DWorld(param_1);
  lua_register_cocos2dx_physics3d_Physics3DSliderConstraint(param_1);
  lua_register_cocos2dx_physics3d_Physics3DComponent(param_1);
  lua_register_cocos2dx_physics3d_Physics3DConeTwistConstraint(param_1);
  lua_register_cocos2dx_physics3d_Physics3DPointToPointConstraint(param_1);
  lua_register_cocos2dx_physics3d_PhysicsSprite3D(param_1);
  lua_register_cocos2dx_physics3d_Physics3DHingeConstraint(param_1);
  lua_register_cocos2dx_physics3d_Physics3DShape(param_1);
  tolua_endmodule(param_1);
  return 1;
}

