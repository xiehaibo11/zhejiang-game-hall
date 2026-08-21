
/* lua_cocos2dx_SpriteFrame_setOriginalSizeInPixels(lua_State*) */

undefined4 lua_cocos2dx_SpriteFrame_setOriginalSizeInPixels(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Size::Size(aSStack_40);
    uVar4 = luaval_to_size(param_1,2,aSStack_40,"cc.SpriteFrame:setOriginalSizeInPixels");
    if ((uVar4 & 1) != 0) {
      cocos2d::Size::operator=((Size *)(lVar3 + 0x84),aSStack_40);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_007ff088;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_SpriteFrame_setOriginalSizeInPixels\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.SpriteFrame:setOriginalSizeInPixels",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_007ff088:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

