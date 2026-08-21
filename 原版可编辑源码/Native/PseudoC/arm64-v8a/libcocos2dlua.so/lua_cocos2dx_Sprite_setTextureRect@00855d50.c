
/* lua_cocos2dx_Sprite_setTextureRect(lua_State*) */

undefined4 lua_cocos2dx_Sprite_setTextureRect(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  Size aSStack_58 [12];
  bool local_4c [4];
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    cocos2d::Rect::Rect(aRStack_48);
    uVar4 = luaval_to_rect(param_1,2,aRStack_48,"cc.Sprite:setTextureRect");
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar3 + 0x558))(plVar3,aRStack_48);
LAB_00855e5c:
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_00855e94;
    }
  }
  else if (iVar2 == 4) {
    cocos2d::Rect::Rect(aRStack_48);
    uVar4 = luaval_to_rect(param_1,2,aRStack_48,"cc.Sprite:setTextureRect");
    if (((uVar4 & 1) != 0) &&
       (uVar4 = luaval_to_boolean(param_1,3,local_4c,"cc.Sprite:setTextureRect"), (uVar4 & 1) != 0))
    {
      cocos2d::Size::Size(aSStack_58);
      uVar4 = luaval_to_size(param_1,4,aSStack_58,"cc.Sprite:setTextureRect");
      if ((uVar4 & 1) != 0) {
        (**(code **)(*plVar3 + 0x560))(plVar3,aRStack_48,local_4c[0],aSStack_58);
        goto LAB_00855e5c;
      }
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.Sprite:setTextureRect",iVar2 + -1,1);
  uVar5 = 0;
LAB_00855e94:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

