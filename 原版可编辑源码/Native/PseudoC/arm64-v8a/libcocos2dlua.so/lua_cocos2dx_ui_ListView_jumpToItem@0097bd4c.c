
/* lua_cocos2dx_ui_ListView_jumpToItem(lua_State*) */

undefined4 lua_cocos2dx_ui_ListView_jumpToItem(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ListView *this;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (ListView *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 3) {
    local_60 = 0;
    uStack_58 = 0;
    uVar3 = luaval_to_ssize(param_1,2,&local_50,"ccui.ListView:jumpToItem");
    uVar4 = luaval_to_vec2(param_1,3,(Vec2 *)&uStack_58,"ccui.ListView:jumpToItem");
    uVar5 = luaval_to_vec2(param_1,4,(Vec2 *)&local_60,"ccui.ListView:jumpToItem");
    if ((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) {
      cocos2d::ui::ListView::jumpToItem(this,local_50,(Vec2 *)&uStack_58,(Vec2 *)&local_60);
      uVar6 = 1;
      lua_settop(param_1,1);
      goto LAB_0097be58;
    }
    tolua_error(param_1,&DAT_012db576,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ListView:jumpToItem",iVar2 + -1,3);
  }
  uVar6 = 0;
LAB_0097be58:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

