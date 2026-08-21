
/* lua_cocos2dx_ui_Scale9Sprite_initWithSpriteFrameName(lua_State*) */

bool lua_cocos2dx_ui_Scale9Sprite_initWithSpriteFrameName(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  bool bVar6;
  Rect aRStack_60 [16];
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    cocos2d::Rect::Rect(aRStack_60);
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,
                       "ccui.Scale9Sprite:initWithSpriteFrameName");
    uVar4 = luaval_to_rect(param_1,3,aRStack_60,"ccui.Scale9Sprite:initWithSpriteFrameName");
    bVar6 = (uVar3 & uVar4 & 1) == 0;
    if (bVar6) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_ui_Scale9Sprite_initWithSpriteFrameName\'"
                  ,0);
    }
    else {
      uVar3 = (**(code **)(*plVar5 + 0x688))(plVar5,&local_50,aRStack_60);
      tolua_pushboolean(param_1,uVar3 & 1);
    }
    bVar6 = !bVar6;
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Scale9Sprite:initWithSpriteFrameName",iVar2 + -1,2);
    bVar6 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

