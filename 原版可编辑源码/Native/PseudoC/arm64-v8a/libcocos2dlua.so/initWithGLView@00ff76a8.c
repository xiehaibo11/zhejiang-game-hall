
/* cocos2d::experimental::FrameBuffer::initWithGLView(cocos2d::GLView*) */

void __thiscall
cocos2d::experimental::FrameBuffer::initWithGLView(FrameBuffer *this,GLView *param_1)

{
  long lVar1;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 != (GLView *)0x0) {
    glGetIntegerv(0x8ca6,&local_2c);
    *(undefined4 *)(this + 0x24) = local_2c;
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1 != (GLView *)0x0);
  }
  return;
}

