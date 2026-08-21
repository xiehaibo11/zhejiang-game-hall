
/* lua_cocos2dx_ui_RichText_setAnchorTextShadow(lua_State*) */

undefined4 lua_cocos2dx_ui_RichText_setAnchorTextShadow(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  RichText *this;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  Color3B *pCVar7;
  undefined4 uVar8;
  int local_70 [2];
  Color3B local_68 [4];
  Color3B local_64 [4];
  Size aSStack_60 [8];
  long local_58;
  
  pCVar7 = (Color3B *)local_70;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = (RichText *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  switch(iVar2) {
  case 2:
    uVar3 = luaval_to_boolean(param_1,2,(bool *)local_70,"ccui.RichText:setAnchorTextShadow");
    if ((uVar3 & 1) == 0) {
LAB_0098bc84:
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_ui_RichText_setAnchorTextShadow\'",0
                 );
      goto LAB_0098bcbc;
    }
    cocos2d::Size::Size(aSStack_60,2.0,-2.0);
    pCVar7 = (Color3B *)&cocos2d::Color3B::BLACK;
    local_68[0] = local_70[0]._0_1_;
    break;
  case 3:
    cocos2d::Color3B::Color3B((Color3B *)local_70);
    uVar3 = luaval_to_boolean(param_1,2,(bool *)local_68,"ccui.RichText:setAnchorTextShadow");
    uVar4 = luaval_to_color3b(param_1,3,(Color3B *)local_70,"ccui.RichText:setAnchorTextShadow");
    if (((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) goto LAB_0098bc84;
    cocos2d::Size::Size(aSStack_60,2.0,-2.0);
    break;
  case 4:
    cocos2d::Color3B::Color3B((Color3B *)local_70);
    cocos2d::Size::Size(aSStack_60);
    uVar3 = luaval_to_boolean(param_1,2,(bool *)local_68,"ccui.RichText:setAnchorTextShadow");
    uVar4 = luaval_to_color3b(param_1,3,(Color3B *)local_70,"ccui.RichText:setAnchorTextShadow");
    uVar5 = luaval_to_size(param_1,4,aSStack_60,"ccui.RichText:setAnchorTextShadow");
    if ((((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) ||
       (pCVar7 = (Color3B *)local_70, (uVar5 & 1) == 0)) goto LAB_0098bc84;
    break;
  case 5:
    cocos2d::Color3B::Color3B(local_68);
    cocos2d::Size::Size(aSStack_60);
    uVar3 = luaval_to_boolean(param_1,2,(bool *)local_64,"ccui.RichText:setAnchorTextShadow");
    uVar4 = luaval_to_color3b(param_1,3,local_68,"ccui.RichText:setAnchorTextShadow");
    uVar5 = luaval_to_size(param_1,4,aSStack_60,"ccui.RichText:setAnchorTextShadow");
    uVar6 = luaval_to_int32(param_1,5,local_70,"ccui.RichText:setAnchorTextShadow");
    if (((((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) || ((uVar5 & 1) == 0)) || ((uVar6 & 1) == 0))
    goto LAB_0098bc84;
    pCVar7 = local_68;
    goto LAB_0098bc6c;
  default:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.RichText:setAnchorTextShadow",iVar2 + -1,1);
LAB_0098bcbc:
    uVar8 = 0;
    goto LAB_0098bcc0;
  }
  local_70[0] = 0;
  local_64[0] = local_68[0];
LAB_0098bc6c:
  cocos2d::ui::RichText::setAnchorTextShadow(this,(bool)local_64[0],pCVar7,aSStack_60,local_70[0]);
  uVar8 = 1;
  lua_settop(param_1,1);
LAB_0098bcc0:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}

