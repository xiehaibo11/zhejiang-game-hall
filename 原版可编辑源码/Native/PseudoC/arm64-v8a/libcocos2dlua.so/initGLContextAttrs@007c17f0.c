
/* AppDelegate::initGLContextAttrs() */

void AppDelegate::initGLContextAttrs(void)

{
  long lVar1;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_48 = 8;
  local_50 = 0x800000008;
  uStack_3c = 8;
  uStack_44 = 8;
  uStack_40 = 0x18;
  cocos2d::GLView::setGLContextAttrs((GLContextAttrs *)&local_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

