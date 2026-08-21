
/* lua_cocos2dx_Sprite_setCenterRectNormalized(lua_State*) */

undefined4 lua_cocos2dx_Sprite_setCenterRectNormalized(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Rect::Rect(aRStack_48);
    uVar4 = luaval_to_rect(param_1,2,aRStack_48,"cc.Sprite:setCenterRectNormalized");
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar3 + 0x570))(plVar3,aRStack_48);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_00855cac;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_Sprite_setCenterRectNormalized\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Sprite:setCenterRectNormalized",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00855cac:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

