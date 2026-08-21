
/* cocos2d::RenderTexture::clearStencil(int) */

void __thiscall cocos2d::RenderTexture::clearStencil(RenderTexture *this,int param_1)

{
  long lVar1;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  glGetIntegerv(0xb91,&local_2c);
  glClearStencil(param_1);
  glClear(0x400);
  glClearStencil(local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

