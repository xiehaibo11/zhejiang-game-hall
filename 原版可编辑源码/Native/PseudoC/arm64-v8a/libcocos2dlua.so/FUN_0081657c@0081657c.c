
undefined4 FUN_0081657c(void)

{
  bool in_ZR;
  ulong uVar1;
  lua_State *unaff_x19;
  undefined4 uVar2;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  if (in_ZR) {
    uVar1 = luaval_to_boolean(unaff_x19,2,(bool *)((long)&stack0x00000000 + 4),
                              "cc.EventListener:setEnabled");
    if ((uVar1 & 1) != 0) {
      *(undefined1 *)(unaff_x20 + 0x91) = in_stack_00000000._4_1_;
      uVar2 = 1;
      lua_settop();
      goto LAB_008165f0;
    }
    tolua_error();
  }
  else {
    luaL_error();
  }
  uVar2 = 0;
LAB_008165f0:
  if (*(long *)(unaff_x21 + 0x28) == in_stack_00000008) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

