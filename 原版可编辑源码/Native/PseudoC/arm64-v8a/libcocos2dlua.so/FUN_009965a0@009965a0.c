
undefined4 FUN_009965a0(void)

{
  int iVar1;
  ulong uVar2;
  lua_State *unaff_x19;
  undefined4 uVar3;
  LayoutComponent *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  iVar1 = lua_gettop();
  if (iVar1 == 2) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0099658c with catch @ 009965bc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009964e8 with catch @ 009965c0
                        */
    uVar2 = luaval_to_boolean(unaff_x19,2,(bool *)((long)&stack0x00000000 + 4),
                              "ccui.LayoutComponent:setStretchWidthEnabled");
    if ((uVar2 & 1) != 0) {
      cocos2d::ui::LayoutComponent::setStretchWidthEnabled(unaff_x20,(bool)in_stack_00000000._4_1_);
      uVar3 = 1;
      lua_settop();
      goto LAB_00996624;
    }
    tolua_error();
  }
  else {
    luaL_error();
  }
  uVar3 = 0;
LAB_00996624:
  if (*(long *)(unaff_x21 + 0x28) == in_stack_00000008) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

