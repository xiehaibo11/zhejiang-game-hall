
/* lua_cocos2dx_ui_Scale9Sprite_setSpriteFrame(lua_State*) */

undefined4 lua_cocos2dx_ui_Scale9Sprite_setSpriteFrame(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    cocos2d::Rect::Rect(aRStack_48);
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"cc.SpriteFrame",0), (uVar4 & 1) == 0)) {
      luaval_to_rect(param_1,3,aRStack_48,"ccui.Scale9Sprite:setSpriteFrame");
    }
    else {
      uVar5 = tolua_tousertype(param_1,2,0);
      uVar4 = luaval_to_rect(param_1,3,aRStack_48,"ccui.Scale9Sprite:setSpriteFrame");
      if ((uVar4 & 1) != 0) {
        (**(code **)(*plVar3 + 0x6c8))(plVar3,uVar5,aRStack_48);
        uVar6 = 1;
        lua_settop(param_1,1);
        goto LAB_00990978;
      }
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_Scale9Sprite_setSpriteFrame\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Scale9Sprite:setSpriteFrame",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_00990978:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

