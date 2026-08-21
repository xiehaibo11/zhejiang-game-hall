
/* cocos2d::ParticleSpiral::initWithTotalParticles(int) */

void __thiscall cocos2d::ParticleSpiral::initWithTotalParticles(ParticleSpiral *this,int param_1)

{
  long lVar1;
  ulong uVar2;
  Director *this_00;
  Size *pSVar3;
  long lVar4;
  undefined8 uVar5;
  float local_40 [2];
  long local_38;
  
                    /* catch() { ... } // from try @ 00f2f730 with catch @ 00f2f7a0
                       catch() { ... } // from try @ 00f2f768 with catch @ 00f2f7a0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = ParticleSystemQuad::initWithTotalParticles((ParticleSystemQuad *)this,param_1);
  if ((uVar2 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    *(undefined4 *)(this + 0x4a0) = 0;
    *(undefined4 *)(this + 0x47c) = 0xbf800000;
    local_40[0] = 0.0;
    local_40[1] = 0.0;
    (**(code **)(*(long *)this + 0x560))(this,local_40);
    (**(code **)(*(long *)this + 0x570))(0x43160000,this);
    (**(code **)(*(long *)this + 0x580))(0,this);
    (**(code **)(*(long *)this + 0x5b0))(0xc3be0000,this);
    (**(code **)(*(long *)this + 0x5c0))(0,this);
    (**(code **)(*(long *)this + 0x590))(0x42340000,this);
    (**(code **)(*(long *)this + 0x5a0))(0,this);
    *(undefined8 *)(this + 0x498) = 0x42b40000;
    this_00 = (Director *)Director::getInstance();
    pSVar3 = (Size *)Director::getWinSize(this_00);
    Size::Size((Size *)local_40,pSVar3);
    (**(code **)(*(long *)this + 200))(local_40[0] * 0.5,local_40[1] * 0.5,this);
    *(undefined8 *)(this + 0x490) = 0x41400000;
    *(undefined8 *)(this + 0x488) = 0;
    *(undefined8 *)(this + 0x4a4) = 0x41a00000;
    *(undefined4 *)(this + 0x4ac) = 0xbf800000;
    *(float *)(this + 0x504) = (float)*(int *)(this + 0x508) / 12.0;
    *(undefined8 *)(this + 0x4bc) = 0x3f8000003f000000;
    *(undefined8 *)(this + 0x4b4) = 0x3f0000003f000000;
    *(undefined4 *)(this + 0x4c4) = 0x3f000000;
    *(undefined8 *)(this + 0x4d0) = 0x3f00000000000000;
    *(undefined8 *)(this + 0x4c8) = 0x3f0000003f000000;
    *(undefined8 *)(this + 0x4e0) = 0x3f0000003f800000;
    *(undefined8 *)(this + 0x4d8) = 0x3f0000003f000000;
    *(undefined8 *)(this + 0x4e8) = 0x3f0000003f000000;
    *(undefined4 *)(this + 0x4f0) = 0;
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

