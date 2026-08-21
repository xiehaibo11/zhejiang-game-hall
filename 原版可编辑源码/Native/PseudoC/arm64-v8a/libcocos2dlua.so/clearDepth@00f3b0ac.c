
/* cocos2d::RenderTexture::clearDepth(float) */

void __thiscall cocos2d::RenderTexture::clearDepth(RenderTexture *this,float param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined **local_70;
  code *local_68;
  undefined8 uStack_60;
  RenderTexture *local_58;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(float *)(this + 0x374) = param_1;
  (**(code **)(*(long *)this + 0x530))();
  CustomCommand::init((CustomCommand *)(this + 0x400),*(float *)(this + 0x170));
  local_70 = &PTR_FUN_0170fcc8;
  uStack_60 = 0;
  local_68 = onClearDepth;
  local_58 = this;
  local_50 = (long *)&local_70;
  FUN_008820fc(&local_70,this + 0x420);
  if (&local_70 == (undefined ***)local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00f3b150;
    pcVar3 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar3)();
LAB_00f3b150:
  lVar2 = Director::getInstance();
  Renderer::addCommand(*(Renderer **)(lVar2 + 0x1b0),(RenderCommand *)(this + 0x400));
  (**(code **)(*(long *)this + 0x550))(this);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

