
/* lua_cocos2dx_ui_Text_enableOutline(lua_State*) */

undefined4 lua_cocos2dx_ui_Text_enableOutline(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Color4B *pCVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  int local_54;
  Color4B aCStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pCVar3 = (Color4B *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    cocos2d::Color4B::Color4B(aCStack_50);
    uVar4 = luaval_to_color4b(param_1,2,aCStack_50,"ccui.Text:enableOutline");
    uVar5 = luaval_to_int32(param_1,3,&local_54,"ccui.Text:enableOutline");
    if (((uVar4 & 1) == 0) || ((uVar5 & 1) == 0)) {
LAB_00975204:
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_Text_enableOutline\'",0);
      goto LAB_0097523c;
    }
    cocos2d::ui::Text::enableOutline(pCVar3,(int)aCStack_50);
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "ccui.Text:enableOutline",iVar2 + -1,1);
LAB_0097523c:
      uVar6 = 0;
      goto LAB_00975240;
    }
    cocos2d::Color4B::Color4B(aCStack_50);
    uVar4 = luaval_to_color4b(param_1,2,aCStack_50,"ccui.Text:enableOutline");
    if ((uVar4 & 1) == 0) goto LAB_00975204;
    cocos2d::ui::Text::enableOutline(pCVar3,(int)aCStack_50);
  }
  uVar6 = 1;
  lua_settop(param_1,1);
LAB_00975240:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

