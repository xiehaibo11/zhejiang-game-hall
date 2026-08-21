
/* cocos2d::ui::EditBox::setCapInsetsNormalRenderer(cocos2d::Rect const&) */

void cocos2d::ui::EditBox::setCapInsetsNormalRenderer(Rect *param_1)

{
  long lVar1;
  Helper *in_x1;
  Size *in_x2;
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Helper::restrictCapInsetRect(in_x1,param_1 + 0x540,in_x2);
  Rect::operator=((Rect *)(param_1 + 0x510),aRStack_48);
                    /* try { // try from 00dea9fc to 00eeaa03 has its CatchHandler @ 00deaa1c */
  Scale9Sprite::setCapInsets(*(Scale9Sprite **)(param_1 + 0x4f8),(Rect *)(param_1 + 0x510));
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dea9fc with catch @ 00deaa1c
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

