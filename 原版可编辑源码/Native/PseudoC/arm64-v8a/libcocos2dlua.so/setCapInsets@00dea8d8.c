
/* cocos2d::ui::EditBox::setCapInsets(cocos2d::Rect const&) */

void cocos2d::ui::EditBox::setCapInsets(Rect *param_1)

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
                    /* try { // try from 00dea928 to 00eea9a3 has its CatchHandler @ 00dea928
                       catch(type#1 @ 00000000) { ... } // from try @ 00dea928 with catch @ 00dea928
                       catch(type#1 @ 00000000) { ... } // from try @ 00deac60 with catch @ 00dea928
                        */
  Scale9Sprite::setCapInsets(*(Scale9Sprite **)(param_1 + 0x4f8),(Rect *)(param_1 + 0x510));
  Helper::restrictCapInsetRect(in_x1,param_1 + 0x548,in_x2);
  Rect::operator=((Rect *)(param_1 + 0x520),aRStack_48);
  Scale9Sprite::setCapInsets(*(Scale9Sprite **)(param_1 + 0x500),(Rect *)(param_1 + 0x520));
  Helper::restrictCapInsetRect(in_x1,param_1 + 0x550,in_x2);
  Rect::operator=((Rect *)(param_1 + 0x530),aRStack_48);
  Scale9Sprite::setCapInsets(*(Scale9Sprite **)(param_1 + 0x508),(Rect *)(param_1 + 0x530));
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00dea9a4 to 00eea9af has its CatchHandler @ 00deabcc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

