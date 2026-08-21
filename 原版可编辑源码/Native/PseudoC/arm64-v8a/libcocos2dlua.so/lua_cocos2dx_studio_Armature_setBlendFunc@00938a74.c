
/* lua_cocos2dx_studio_Armature_setBlendFunc(lua_State*) */

undefined4 lua_cocos2dx_studio_Armature_setBlendFunc(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  BlendFunc aBStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_blendfunc(param_1,2,aBStack_40,"ccs.Armature:setBlendFunc");
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar3 + 0x560))(plVar3,aBStack_40);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_00938b38;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_Armature_setBlendFunc\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Armature:setBlendFunc",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00938b38:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

