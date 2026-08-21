
/* cocos2d::ParticleExplosion::initWithTotalParticles(int) */

void __thiscall
cocos2d::ParticleExplosion::initWithTotalParticles(ParticleExplosion *this,int param_1)

{
  long lVar1;
  ulong uVar2;
  Director *this_00;
  Size *pSVar3;
  long lVar4;
  undefined8 uVar5;
  float local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = ParticleSystemQuad::initWithTotalParticles((ParticleSystemQuad *)this,param_1);
  if ((uVar2 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    *(undefined4 *)(this + 0x4a0) = 0;
    *(undefined4 *)(this + 0x47c) = 0x3dcccccd;
    local_40[0] = 0.0;
    local_40[1] = 0.0;
    (**(code **)(*(long *)this + 0x560))(this,local_40);
                    /* try { // try from 00f2fb48 to 0102fe43 has its CatchHandler @ 00f2fb48
                       catch() { ... } // from try @ 00f2fb48 with catch @ 00f2fb48
                       catch() { ... } // from try @ 00f2fe4c with catch @ 00f2fb48
                       catch() { ... } // from try @ 00f2ff2c with catch @ 00f2fb48
                       catch() { ... } // from try @ 00f30034 with catch @ 00f2fb48
                       catch() { ... } // from try @ 00f300a8 with catch @ 00f2fb48 */
    (**(code **)(*(long *)this + 0x570))(0x428c0000,this);
    (**(code **)(*(long *)this + 0x580))(0x42200000,this);
    (**(code **)(*(long *)this + 0x5b0))(0,this);
    (**(code **)(*(long *)this + 0x5c0))(0,this);
    (**(code **)(*(long *)this + 0x590))(0,this);
    (**(code **)(*(long *)this + 0x5a0))(0,this);
    *(undefined8 *)(this + 0x498) = 0x43b4000042b40000;
    this_00 = (Director *)Director::getInstance();
    pSVar3 = (Size *)Director::getWinSize(this_00);
    Size::Size((Size *)local_40,pSVar3);
    (**(code **)(*(long *)this + 200))(local_40[0] * 0.5,local_40[1] * 0.5,this);
    *(undefined8 *)(this + 0x490) = 0x4000000040a00000;
    *(undefined8 *)(this + 0x488) = 0;
    *(undefined8 *)(this + 0x4a4) = 0x4120000041700000;
    *(float *)(this + 0x504) = (float)*(int *)(this + 0x508) / *(float *)(this + 0x47c);
    *(undefined4 *)(this + 0x4ac) = 0xbf800000;
    *(undefined8 *)(this + 0x4bc) = 0x3f8000003e4ccccd;
    *(undefined8 *)(this + 0x4b4) = 0x3dcccccd3f333333;
    *(undefined4 *)(this + 0x4c4) = 0x3f000000;
    *(undefined8 *)(this + 0x4d0) = 0x3f00000000000000;
    *(undefined8 *)(this + 0x4c8) = 0x3f0000003f000000;
    *(undefined8 *)(this + 0x4e0) = 0x3f00000000000000;
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

