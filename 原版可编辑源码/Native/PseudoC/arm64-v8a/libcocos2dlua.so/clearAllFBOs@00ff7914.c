
/* cocos2d::experimental::FrameBuffer::clearAllFBOs() */

void cocos2d::experimental::FrameBuffer::clearAllFBOs(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  FrameBuffer *this;
  long *plVar4;
  
  plVar4 = _frameBuffers;
  if (_frameBuffers != &DAT_01792ad8) {
    do {
      this = (FrameBuffer *)plVar4[4];
      applyFBO(this);
      glClearColor(*(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x34),
                   *(undefined4 *)(this + 0x38),*(undefined4 *)(this + 0x3c));
      glClearDepthf(*(undefined4 *)(this + 0x40));
      glClearStencil((long)(char)this[0x44]);
      glClear(0x4500);
      glBindFramebuffer(0x8d40,*(undefined4 *)(this + 0x28));
      plVar1 = (long *)plVar4[1];
      if ((long *)plVar4[1] == (long *)0x0) {
        plVar1 = plVar4 + 2;
        plVar2 = (long *)*plVar1;
        if ((long *)*plVar2 != plVar4) {
          do {
            lVar3 = *plVar1;
            plVar1 = (long *)(lVar3 + 0x10);
            plVar2 = (long *)*plVar1;
          } while (*plVar2 != lVar3);
        }
      }
      else {
        do {
          plVar2 = plVar1;
          plVar1 = (long *)*plVar2;
        } while ((long *)*plVar2 != (long *)0x0);
      }
      plVar4 = plVar2;
    } while (plVar2 != &DAT_01792ad8);
  }
  return;
}

