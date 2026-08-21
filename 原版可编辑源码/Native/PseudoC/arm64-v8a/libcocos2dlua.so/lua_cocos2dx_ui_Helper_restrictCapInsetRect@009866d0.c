
/* lua_cocos2dx_ui_Helper_restrictCapInsetRect(lua_State*) */

void lua_cocos2dx_ui_Helper_restrictCapInsetRect(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  Size *pSVar6;
  Rect aRStack_60 [16];
  Size aSStack_50 [8];
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 2) {
    cocos2d::Rect::Rect(aRStack_48);
    cocos2d::Size::Size(aSStack_50);
    uVar3 = luaval_to_rect(param_1,2,aRStack_48,"ccui.Helper:restrictCapInsetRect");
    pSVar6 = aSStack_50;
    uVar4 = luaval_to_size(param_1,3,pSVar6,"ccui.Helper:restrictCapInsetRect");
    if (((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) {
      cocos2d::ui::Helper::restrictCapInsetRect((Helper *)aRStack_48,aSStack_50,pSVar6);
      rect_to_luaval(param_1,aRStack_60);
      uVar5 = 1;
      goto LAB_009867ac;
    }
    tolua_error(param_1,&DAT_012de2a7,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccui.Helper:restrictCapInsetRect",iVar2 + -1,2);
  }
  uVar5 = 0;
LAB_009867ac:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

