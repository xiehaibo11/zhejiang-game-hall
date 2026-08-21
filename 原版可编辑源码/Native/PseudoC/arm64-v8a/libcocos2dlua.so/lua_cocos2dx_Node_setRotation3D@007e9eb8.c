
/* lua_cocos2dx_Node_setRotation3D(lua_State*) */

undefined4 lua_cocos2dx_Node_setRotation3D(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  Vec3 aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Vec3::Vec3(aVStack_48);
    uVar4 = luaval_to_vec3(param_1,2,aVStack_48,"cc.Node:setRotation3D");
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar3 + 400))(plVar3,aVStack_48);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_007e9f84;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Node_setRotation3D\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Node:setRotation3D",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_007e9f84:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

