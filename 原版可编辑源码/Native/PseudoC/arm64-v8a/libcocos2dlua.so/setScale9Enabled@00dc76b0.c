
/* cocos2d::ui::ImageView::setScale9Enabled(bool) */

void cocos2d::ui::ImageView::setScale9Enabled(bool param_1)

{
  Helper *this;
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  byte in_w1;
  Size *in_x2;
  Rect aRStack_48 [16];
  long local_38;
  
  plVar3 = (long *)(ulong)param_1;
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(byte *)(plVar3 + 0x9f) != (in_w1 & 1)) {
    *(byte *)(plVar3 + 0x9f) = in_w1 & 1;
    Scale9Sprite::setRenderingType((Scale9Sprite *)plVar3[0xa2]);
    if ((char)plVar3[0x9f] == '\0') {
      (**(code **)(*plVar3 + 0x600))(plVar3,*(undefined1 *)((long)plVar3 + 0x4f9));
    }
    else {
      uVar1 = *(undefined1 *)((long)plVar3 + 0x387);
      (**(code **)(*plVar3 + 0x600))(plVar3,0);
      *(undefined1 *)((long)plVar3 + 0x4f9) = uVar1;
    }
    this = (Helper *)((long)plVar3 + 0x4fc);
    Helper::restrictCapInsetRect(this,(Rect *)((long)plVar3 + 0x51c),in_x2);
    Rect::operator=((Rect *)this,aRStack_48);
    if ((char)plVar3[0x9f] != '\0') {
      Scale9Sprite::setCapInsets((Scale9Sprite *)plVar3[0xa2],this);
    }
    *(undefined1 *)((long)plVar3 + 0x524) = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

