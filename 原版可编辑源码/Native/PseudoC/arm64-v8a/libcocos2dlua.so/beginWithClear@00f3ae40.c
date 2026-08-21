
/* cocos2d::RenderTexture::beginWithClear(float, float, float, float, float, int, unsigned int) */

void __thiscall
cocos2d::RenderTexture::beginWithClear
          (RenderTexture *this,float param_1,float param_2,float param_3,float param_4,float param_5
          ,int param_6,uint param_7)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined **local_80;
  code *pcStack_78;
  undefined8 uStack_70;
  RenderTexture *local_68;
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Color4F::Color4F((Color4F *)&local_80,param_1,param_2,param_3,param_4);
  *(code **)(this + 0x36c) = pcStack_78;
  *(undefined ***)(this + 0x364) = local_80;
  *(float *)(this + 0x374) = param_5;
  *(int *)(this + 0x378) = param_6;
  *(uint *)(this + 0x360) = param_7;
  (**(code **)(*(long *)this + 0x530))(this);
  CustomCommand::init((CustomCommand *)(this + 0x3b0),*(float *)(this + 0x170));
  local_80 = &PTR_FUN_0170fcc8;
  uStack_70 = 0;
  pcStack_78 = onClear;
  local_68 = this;
  local_60 = (long *)&local_80;
  FUN_008820fc(&local_80,this + 0x3d0);
  if (&local_80 == (undefined ***)local_60) {
    pcVar3 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00f3af18;
    pcVar3 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar3)();
LAB_00f3af18:
  lVar2 = Director::getInstance();
  Renderer::addCommand(*(Renderer **)(lVar2 + 0x1b0),(RenderCommand *)(this + 0x3b0));
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

