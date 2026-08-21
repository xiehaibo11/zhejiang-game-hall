
undefined8 FUN_0097429c(Color4B *param_1,Size *param_2,int param_3)

{
  long unaff_x24;
  long in_stack_00000018;
  
  cocos2d::ui::Text::enableShadow(param_1,param_2,param_3);
                    /* catch() { ... } // from try @ 00974178 with catch @ 009742a4
                       catch() { ... } // from try @ 0097427c with catch @ 009742a4 */
  lua_settop();
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000018) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

