
/* cocos2d::ui::EditBox::setCapInsetsPressedRenderer(cocos2d::Rect const&) */

void cocos2d::ui::EditBox::setCapInsetsPressedRenderer(Rect *param_1)

{
  long lVar1;
  Helper *in_x1;
  Size *in_x2;
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Helper::restrictCapInsetRect(in_x1,param_1 + 0x548,in_x2);
  Rect::operator=((Rect *)(param_1 + 0x520),aRStack_48);
  Scale9Sprite::setCapInsets(*(Scale9Sprite **)(param_1 + 0x500),(Rect *)(param_1 + 0x520));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

