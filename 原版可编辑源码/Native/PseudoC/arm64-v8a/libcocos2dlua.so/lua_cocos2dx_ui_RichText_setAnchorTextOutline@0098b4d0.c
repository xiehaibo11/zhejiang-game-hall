
/* lua_cocos2dx_ui_RichText_setAnchorTextOutline(lua_State*) */

undefined4 lua_cocos2dx_ui_RichText_setAnchorTextOutline(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  RichText *this;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  Color3B *pCVar6;
  undefined4 uVar7;
  int local_58 [2];
  Color3B local_50 [4];
  Color3B local_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (RichText *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 4) {
    cocos2d::Color3B::Color3B(local_50);
    uVar3 = luaval_to_boolean(param_1,2,(bool *)local_4c,"ccui.RichText:setAnchorTextOutline");
    uVar4 = luaval_to_color3b(param_1,3,local_50,"ccui.RichText:setAnchorTextOutline");
    uVar5 = luaval_to_int32(param_1,4,local_58,"ccui.RichText:setAnchorTextOutline");
    if ((((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) || ((uVar5 & 1) == 0)) {
LAB_0098b630:
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_ui_RichText_setAnchorTextOutline\'",
                  0);
LAB_0098b668:
      uVar7 = 0;
      goto LAB_0098b66c;
    }
    pCVar6 = local_50;
  }
  else {
    if (iVar2 == 3) {
      cocos2d::Color3B::Color3B((Color3B *)local_58);
      uVar3 = luaval_to_boolean(param_1,2,(bool *)local_50,"ccui.RichText:setAnchorTextOutline");
      uVar4 = luaval_to_color3b(param_1,3,(Color3B *)local_58,"ccui.RichText:setAnchorTextOutline");
      if (((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) goto LAB_0098b630;
      pCVar6 = (Color3B *)local_58;
      local_4c[0] = local_50[0];
    }
    else {
      if (iVar2 != 2) {
        luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                   "ccui.RichText:setAnchorTextOutline",iVar2 + -1,1);
        goto LAB_0098b668;
      }
      uVar3 = luaval_to_boolean(param_1,2,(bool *)local_58,"ccui.RichText:setAnchorTextOutline");
      if ((uVar3 & 1) == 0) goto LAB_0098b630;
      pCVar6 = (Color3B *)&cocos2d::Color3B::WHITE;
      local_4c[0] = local_58[0]._0_1_;
    }
    local_58[0] = -1;
  }
  cocos2d::ui::RichText::setAnchorTextOutline(this,(bool)local_4c[0],pCVar6,local_58[0]);
  uVar7 = 1;
  lua_settop(param_1,1);
LAB_0098b66c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

