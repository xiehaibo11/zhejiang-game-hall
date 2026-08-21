
/* cocos2d::RenderTexture::end() */

void __thiscall cocos2d::RenderTexture::end(RenderTexture *this)

{
  long lVar1;
  Director *pDVar2;
  code *pcVar3;
  Renderer *this_00;
  undefined **local_70;
  code *local_68;
  undefined8 uStack_60;
  RenderTexture *local_58;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  CustomCommand::init((CustomCommand *)(this + 0x4f0),*(float *)(this + 0x170));
  local_70 = &PTR_FUN_0170fcc8;
  uStack_60 = 0;
  local_68 = onEnd;
  local_58 = this;
  local_50 = (long *)&local_70;
  FUN_008820fc(&local_70,this + 0x510);
  if (&local_70 == (undefined ***)local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00f3c1ec;
    pcVar3 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar3)();
LAB_00f3c1ec:
  pDVar2 = (Director *)Director::getInstance();
  this_00 = *(Renderer **)(pDVar2 + 0x1b0);
  Renderer::addCommand(this_00,(RenderCommand *)(this + 0x4f0));
  Renderer::popGroup(this_00);
  Director::popMatrix(pDVar2,1);
  Director::popMatrix(pDVar2,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

