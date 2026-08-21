
/* cocos2d::experimental::FrameBuffer::applyFBO() */

void __thiscall cocos2d::experimental::FrameBuffer::applyFBO(FrameBuffer *this)

{
  undefined4 uVar1;
  long *plVar2;
  Texture2D *this_00;
  
  glGetIntegerv(0x8ca6,this + 0x28);
  glBindFramebuffer(0x8d40,*(undefined4 *)(this + 0x24));
  if ((this[0x2c] == (FrameBuffer)0x0) || (this[0x60] != (FrameBuffer)0x0)) goto LAB_00ff7904;
  plVar2 = *(long **)(this + 0x50);
  if (*(int *)((long)plVar2 + 0x24) == 1) {
    this_00 = (Texture2D *)(**(code **)(*plVar2 + 0x10))();
    uVar1 = Texture2D::getName(this_00);
    glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,uVar1,0);
    plVar2 = *(long **)(this + 0x58);
    if (plVar2 != (long *)0x0) goto LAB_00ff7880;
LAB_00ff78bc:
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 0x18))();
    glFramebufferRenderbuffer(0x8d40,0x8ce0,0x8d41,uVar1);
    plVar2 = *(long **)(this + 0x58);
    if (plVar2 == (long *)0x0) goto LAB_00ff78bc;
LAB_00ff7880:
    uVar1 = (**(code **)(*plVar2 + 0x18))();
  }
  glFramebufferRenderbuffer(0x8d40,0x8d00,0x8d41,uVar1);
  if (*(long **)(this + 0x58) == (long *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(long **)(this + 0x58) + 0x18))();
  }
  glFramebufferRenderbuffer(0x8d40,0x8d20,0x8d41,uVar1);
  this[0x2c] = (FrameBuffer)0x0;
LAB_00ff7904:
  glCheckFramebufferStatus(0x8d40);
  return;
}

