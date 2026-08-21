
/* cocos2d::GLView::getScissorRect() const */

void cocos2d::GLView::getScissorRect(void)

{
  long lVar1;
  long in_x0;
  Rect *in_x8;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  glGetFloatv(0xc10,&local_48);
  Rect::Rect(in_x8,(local_48 - *(float *)(in_x0 + 0x34)) / *(float *)(in_x0 + 0x60),
             (fStack_44 - *(float *)(in_x0 + 0x38)) / *(float *)(in_x0 + 100),
             local_40 / *(float *)(in_x0 + 0x60),fStack_3c / *(float *)(in_x0 + 100));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

