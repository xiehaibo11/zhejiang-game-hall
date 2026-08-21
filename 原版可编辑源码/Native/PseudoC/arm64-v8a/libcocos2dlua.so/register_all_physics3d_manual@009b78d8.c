
/* register_all_physics3d_manual(lua_State*) */

undefined8 register_all_physics3d_manual(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != (lua_State *)0x0) {
    lua_pushstring(param_1,"cc.PhysicsSprite3D");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"create",lua_cocos2dx_physics3d_PhysicsSprite3D_create);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.Physics3DRigidBody");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"create",lua_cocos2dx_physics3d_Physics3DRigidBody_create);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.Physics3DComponent");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"create",lua_cocos2dx_physics3d_Physics3DComponent_create);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.Physics3DWorld");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"rayCast",lua_cocos2dx_physics3d_Physics3DWorld_rayCast);
    }
    lua_settop(param_1,0xfffffffe);
    extendPhysics3DShape(param_1);
    lua_pushstring(param_1,"cc.Physics3DObject");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"setCollisionCallback",
                     lua_cocos2dx_physics3d_Physics3DObject_setCollisionCallback);
    }
    lua_settop(param_1,0xfffffffe);
    uVar2 = 1;
  }
  return uVar2;
}

