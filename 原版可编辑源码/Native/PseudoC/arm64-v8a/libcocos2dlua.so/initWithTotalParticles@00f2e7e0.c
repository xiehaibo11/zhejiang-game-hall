
/* cocos2d::ParticleFireworks::initWithTotalParticles(int) */

void __thiscall
cocos2d::ParticleFireworks::initWithTotalParticles(ParticleFireworks *this,int param_1)

{
  long lVar1;
  ulong uVar2;
  Director *this_00;
  Size *pSVar3;
  long lVar4;
  undefined8 uVar5;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = ParticleSystemQuad::initWithTotalParticles((ParticleSystemQuad *)this,param_1);
  if ((uVar2 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    *(undefined4 *)(this + 0x47c) = 0xbf800000;
    *(undefined4 *)(this + 0x4a0) = 0;
    *(undefined8 *)(this + 0x344) = 0;
    *(undefined8 *)(this + 0x334) = 0x4248000043340000;
    *(undefined8 *)(this + 0x32c) = 0xc2b4000000000000;
    this_00 = (Director *)Director::getInstance();
    pSVar3 = (Size *)Director::getWinSize(this_00);
    Size::Size((Size *)&local_40,pSVar3);
    (**(code **)(*(long *)this + 200))(local_40 * 0.5,fStack_3c * 0.5,this);
                    /* catch() { ... } // from try @ 00f2e7c4 with catch @ 00f2e868 */
    *(undefined8 *)(this + 0x498) = 0x41a0000042b40000;
    *(undefined8 *)(this + 0x490) = 0x3f80000040600000;
    *(float *)(this + 0x504) = (float)*(int *)(this + 0x508) / 3.5;
    *(undefined8 *)(this + 0x4b4) = 0x3f0000003f000000;
    *(undefined8 *)(this + 0x4c8) = 0x3f0000003f000000;
    *(undefined8 *)(this + 0x4c0) = 0x3f0000003f800000;
    *(undefined8 *)(this + 0x4d8) = 0x3dcccccd3dcccccd;
    *(undefined8 *)(this + 0x4d0) = 0x3dcccccd3dcccccd;
    *(undefined4 *)(this + 0x4bc) = 0x3f000000;
    *(undefined8 *)(this + 0x4e8) = 0x3dcccccd3dcccccd;
    *(undefined8 *)(this + 0x4e0) = 0x3dcccccd3e4ccccd;
    *(undefined4 *)(this + 0x4f0) = 0x3e4ccccd;
    *(undefined8 *)(this + 0x4a4) = 0x4000000041000000;
    *(undefined4 *)(this + 0x4ac) = 0xbf800000;
    lVar4 = FUN_00f2e540();
    if (lVar4 != 0) {
      (**(code **)(*(long *)this + 0x678))(this,lVar4);
    }
    (**(code **)(*(long *)this + 0x648))(this,0);
    uVar5 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

