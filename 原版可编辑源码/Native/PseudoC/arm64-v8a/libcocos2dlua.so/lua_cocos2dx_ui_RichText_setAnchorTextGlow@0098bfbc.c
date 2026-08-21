
/* lua_cocos2dx_ui_RichText_setAnchorTextGlow(lua_State*) */

undefined4 lua_cocos2dx_ui_RichText_setAnchorTextGlow(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  RichText *this;
  ulong uVar3;
  ulong uVar4;
  Color3B *pCVar5;
  undefined4 uVar6;
  Color3B aCStack_58 [8];
  bool local_50 [4];
  bool local_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (RichText *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    cocos2d::Color3B::Color3B(aCStack_58);
    uVar3 = luaval_to_boolean(param_1,2,local_50,"ccui.RichText:setAnchorTextGlow");
    uVar4 = luaval_to_color3b(param_1,3,aCStack_58,"ccui.RichText:setAnchorTextGlow");
    if (((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) {
LAB_0098c0a0:
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_ui_RichText_setAnchorTextGlow\'",0);
      goto LAB_0098c0d8;
    }
    pCVar5 = aCStack_58;
    local_4c[0] = local_50[0];
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "ccui.RichText:setAnchorTextGlow",iVar2 + -1,1);
LAB_0098c0d8:
      uVar6 = 0;
      goto LAB_0098c0dc;
    }
    uVar3 = luaval_to_boolean(param_1,2,local_4c,"ccui.RichText:setAnchorTextGlow");
    if ((uVar3 & 1) == 0) goto LAB_0098c0a0;
    pCVar5 = (Color3B *)&cocos2d::Color3B::WHITE;
  }
  cocos2d::ui::RichText::setAnchorTextGlow(this,local_4c[0],pCVar5);
  uVar6 = 1;
  lua_settop(param_1,1);
LAB_0098c0dc:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

