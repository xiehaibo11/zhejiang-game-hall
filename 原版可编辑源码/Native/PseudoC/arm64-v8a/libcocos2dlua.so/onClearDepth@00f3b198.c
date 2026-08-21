
/* cocos2d::RenderTexture::onClearDepth() */

void __thiscall cocos2d::RenderTexture::onClearDepth(RenderTexture *this)

{
  long lVar1;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  glGetFloatv(0xb73,&local_2c);
  glClearDepthf(*(undefined4 *)(this + 0x374));
  glClear(0x100);
  glClearDepthf(local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

