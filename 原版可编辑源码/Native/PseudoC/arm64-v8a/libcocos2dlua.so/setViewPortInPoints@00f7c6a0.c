
/* cocos2d::GLView::setViewPortInPoints(float, float, float, float) */

void __thiscall
cocos2d::GLView::setViewPortInPoints
          (GLView *this,float param_1,float param_2,float param_3,float param_4)

{
  long lVar1;
  Viewport aVStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  experimental::Viewport::Viewport
            (aVStack_38,*(float *)(this + 0x60) * param_1 + *(float *)(this + 0x34),
             *(float *)(this + 100) * param_2 + *(float *)(this + 0x38),
             *(float *)(this + 0x60) * param_3,*(float *)(this + 100) * param_4);
  Camera::setDefaultViewport(aVStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

