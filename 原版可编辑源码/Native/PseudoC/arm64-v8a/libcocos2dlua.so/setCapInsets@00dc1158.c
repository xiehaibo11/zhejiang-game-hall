
/* cocos2d::ui::Button::setCapInsets(cocos2d::Rect const&) */

void cocos2d::ui::Button::setCapInsets(Rect *param_1)

{
  long lVar1;
  Helper *in_x1;
  Size *in_x2;
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Helper::restrictCapInsetRect(in_x1,param_1 + 0x548,in_x2);
  Rect::operator=((Rect *)(param_1 + 0x518),aRStack_48);
  if (param_1[0x515] != '\0') {
    Scale9Sprite::setCapInsets(*(Scale9Sprite **)(param_1 + 0x4f0),(Rect *)(param_1 + 0x518));
  }
  Helper::restrictCapInsetRect(in_x1,param_1 + 0x550,in_x2);
  Rect::operator=((Rect *)(param_1 + 0x528),aRStack_48);
  if (param_1[0x515] != '\0') {
    Scale9Sprite::setCapInsets(*(Scale9Sprite **)(param_1 + 0x4f8),(Rect *)(param_1 + 0x528));
  }
  Helper::restrictCapInsetRect(in_x1,param_1 + 0x558,in_x2);
  Rect::operator=((Rect *)(param_1 + 0x538),aRStack_48);
  if (param_1[0x515] != '\0') {
    Scale9Sprite::setCapInsets(*(Scale9Sprite **)(param_1 + 0x500),(Rect *)(param_1 + 0x538));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

