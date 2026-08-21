
/* cocos2d::GLView::getVisibleRect() const */

void cocos2d::GLView::getVisibleRect(void)

{
  long lVar1;
  long *in_x0;
  Rect *in_x8;
  undefined4 uVar2;
  undefined4 in_s1;
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Rect::Rect(in_x8);
  (**(code **)(*in_x0 + 0xa0))(aSStack_40);
  Size::operator=((Size *)(in_x8 + 8),aSStack_40);
  uVar2 = (**(code **)(*in_x0 + 0xa8))();
  *(undefined4 *)in_x8 = uVar2;
  *(undefined4 *)(in_x8 + 4) = in_s1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

