
/* lua_cocos2dx_Label_enableOutline(lua_State*) */

undefined4 lua_cocos2dx_Label_enableOutline(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  int local_54;
  Color4B aCStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    cocos2d::Color4B::Color4B(aCStack_50);
    uVar4 = luaval_to_color4b(param_1,2,aCStack_50,"cc.Label:enableOutline");
    uVar5 = luaval_to_int32(param_1,3,&local_54,"cc.Label:enableOutline");
    if (((uVar4 & 1) == 0) || ((uVar5 & 1) == 0)) {
LAB_0083a438:
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Label_enableOutline\'",0);
      goto LAB_0083a470;
    }
    lVar6 = *plVar3;
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.Label:enableOutline",iVar2 + -1,1);
LAB_0083a470:
      uVar7 = 0;
      goto LAB_0083a474;
    }
    cocos2d::Color4B::Color4B(aCStack_50);
    uVar4 = luaval_to_color4b(param_1,2,aCStack_50,"cc.Label:enableOutline");
    if ((uVar4 & 1) == 0) goto LAB_0083a438;
    lVar6 = *plVar3;
    local_54 = -1;
  }
  (**(code **)(lVar6 + 0x5a8))(plVar3,aCStack_50,local_54);
  uVar7 = 1;
  lua_settop(param_1,1);
LAB_0083a474:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

