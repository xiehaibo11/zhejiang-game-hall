
/* cocos2d::RenderTexture::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::RenderTexture::draw(RenderTexture *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  undefined **local_90;
  code *local_88;
  undefined8 uStack_80;
  RenderTexture *local_78;
  long *local_70;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (this[0x37c] == (RenderTexture)0x0) goto LAB_00f3bf30;
  (**(code **)(*(long *)this + 0x530))();
  CustomCommand::init((CustomCommand *)(this + 0x450),*(float *)(this + 0x170));
  local_90 = &PTR_FUN_0170fcc8;
  uStack_80 = 0;
  local_88 = onClear;
  local_78 = this;
  local_70 = (long *)&local_90;
  FUN_008820fc(&local_90,this + 0x470);
  if (&local_90 == (undefined ***)local_70) {
    pcVar5 = *(code **)(*local_70 + 0x20);
LAB_00f3beb8:
    (*pcVar5)();
  }
  else if (local_70 != (long *)0x0) {
    pcVar5 = *(code **)(*local_70 + 0x28);
    goto LAB_00f3beb8;
  }
  Renderer::addCommand(param_1,(RenderCommand *)(this + 0x450));
  (**(code **)(*(long *)this + 0x2b0))(this);
  plVar2 = *(long **)(this + 0x180);
  for (plVar1 = *(long **)(this + 0x178); plVar1 != plVar2; plVar1 = plVar1 + 1) {
    plVar4 = (long *)*plVar1;
    if (plVar4 != *(long **)(this + 0x380)) {
                    /* catch() { ... } // from try @ 00f3bf38 with catch @ 00f3bf0c */
      (**(code **)(*plVar4 + 0x358))(plVar4,param_1,param_2,param_3);
    }
  }
  (**(code **)(*(long *)this + 0x550))(this);
LAB_00f3bf30:
                    /* try { // try from 00f3bf30 to 0103bf37 has its CatchHandler @ 00f3bf68 */
                    /* try { // try from 00f3bf38 to 0103bf83 has its CatchHandler @ 00f3bf0c */
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

