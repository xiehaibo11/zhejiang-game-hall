
/* cocos2d::ui::EditBox::setCapInsetsDisabledRenderer(cocos2d::Rect const&) */

void cocos2d::ui::EditBox::setCapInsetsDisabledRenderer(Rect *param_1)

{
  long lVar1;
  Helper *in_x1;
  Size *in_x2;
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00deaad0 to 00eeaad3 has its CatchHandler @ 00deabb8 */
  Helper::restrictCapInsetRect(in_x1,param_1 + 0x550,in_x2);
  Rect::operator=((Rect *)(param_1 + 0x530),aRStack_48);
  Scale9Sprite::setCapInsets(*(Scale9Sprite **)(param_1 + 0x508),(Rect *)(param_1 + 0x530));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

