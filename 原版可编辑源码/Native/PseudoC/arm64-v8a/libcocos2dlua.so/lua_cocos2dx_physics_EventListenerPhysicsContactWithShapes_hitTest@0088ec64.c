
/* lua_cocos2dx_physics_EventListenerPhysicsContactWithShapes_hitTest(lua_State*) */

undefined8 lua_cocos2dx_physics_EventListenerPhysicsContactWithShapes_hitTest(lua_State *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 unaff_x21;
  
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    if (param_1 != (lua_State *)0x0) {
      iVar2 = lua_gettop(param_1);
      if ((iVar2 < 2) ||
         (uVar5 = luaval_is_usertype(param_1,2,"cc.PhysicsShape",0), (uVar5 & 1) == 0)) {
        bVar1 = false;
      }
      else {
        unaff_x21 = tolua_tousertype(param_1,2,0);
        bVar1 = true;
      }
      iVar2 = lua_gettop(param_1);
      if (((2 < iVar2) &&
          (uVar5 = luaval_is_usertype(param_1,3,"cc.PhysicsShape",0), (uVar5 & 1) != 0)) &&
         (uVar6 = tolua_tousertype(param_1,3,0), bVar1)) {
        uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4,unaff_x21,uVar6);
        tolua_pushboolean(param_1,uVar3 & 1);
        return 1;
      }
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics_EventListenerPhysicsContactWithShapes_hitTest\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.EventListenerPhysicsContactWithShapes:hitTest",iVar2 + -1,2);
  }
  return 0;
}

