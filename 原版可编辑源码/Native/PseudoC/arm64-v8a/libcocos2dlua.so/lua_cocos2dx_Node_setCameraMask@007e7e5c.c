
/* lua_cocos2dx_Node_setCameraMask(lua_State*) */

undefined4 lua_cocos2dx_Node_setCameraMask(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  bool local_54 [4];
  ushort local_50 [2];
  ushort local_4c [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    uVar4 = luaval_to_ushort(param_1,2,local_50,"cc.Node:setCameraMask");
    uVar5 = luaval_to_boolean(param_1,3,local_54,"cc.Node:setCameraMask");
    if (((uVar4 & 1) == 0) || ((uVar5 & 1) == 0)) {
LAB_007e7f54:
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Node_setCameraMask\'",0);
      goto LAB_007e7f8c;
    }
    (**(code **)(*plVar3 + 0x4f0))(plVar3,local_50[0],local_54[0]);
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.Node:setCameraMask",iVar2 + -1,1);
LAB_007e7f8c:
      uVar6 = 0;
      goto LAB_007e7f90;
    }
    uVar4 = luaval_to_ushort(param_1,2,local_4c,"cc.Node:setCameraMask");
    if ((uVar4 & 1) == 0) goto LAB_007e7f54;
    (**(code **)(*plVar3 + 0x4f0))(plVar3,local_4c[0],1);
  }
  uVar6 = 1;
  lua_settop(param_1,1);
LAB_007e7f90:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

