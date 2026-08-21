
/* cocos2d::ParticleRain::initWithTotalParticles(int) */

void __thiscall cocos2d::ParticleRain::initWithTotalParticles(ParticleRain *this,int param_1)

{
  long lVar1;
  ulong uVar2;
  Director *this_00;
  Size *pSVar3;
  long lVar4;
  undefined8 uVar5;
  float local_50 [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = ParticleSystemQuad::initWithTotalParticles((ParticleSystemQuad *)this,param_1);
  if ((uVar2 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    *(undefined4 *)(this + 0x47c) = 0xbf800000;
    *(undefined4 *)(this + 0x4a0) = 0;
    local_50[0] = 10.0;
    local_50[1] = -10.0;
    (**(code **)(*(long *)this + 0x560))(this,local_50);
    (**(code **)(*(long *)this + 0x5b0))(0,this);
    (**(code **)(*(long *)this + 0x5c0))(0x3f800000,this);
                    /* catch() { ... } // from try @ 00f30548 with catch @ 00f3051c */
    (**(code **)(*(long *)this + 0x590))(0,this);
                    /* try { // try from 00f30540 to 01030547 has its CatchHandler @ 00f30578 */
    (**(code **)(*(long *)this + 0x5a0))(0x3f800000,this);
                    /* try { // try from 00f30548 to 01030593 has its CatchHandler @ 00f3051c */
    (**(code **)(*(long *)this + 0x570))(0x43020000,this);
    (**(code **)(*(long *)this + 0x580))(0x41f00000,this);
                    /* catch() { ... } // from try @ 00f30540 with catch @ 00f30578 */
    *(undefined8 *)(this + 0x498) = 0x40a00000c2b40000;
    this_00 = (Director *)Director::getInstance();
    pSVar3 = (Size *)Director::getWinSize(this_00);
    Size::Size((Size *)local_50,pSVar3);
    (**(code **)(*(long *)this + 200))(local_50[0] * 0.5,local_50[1],this);
    *(float *)(this + 0x488) = local_50[0] * 0.5;
    *(undefined8 *)(this + 0x490) = 0x40900000;
    *(undefined4 *)(this + 0x48c) = 0;
    *(undefined8 *)(this + 0x4a4) = 0x4000000040800000;
    *(undefined4 *)(this + 0x4ac) = 0xbf800000;
    *(undefined4 *)(this + 0x504) = 0x41a00000;
    *(undefined8 *)(this + 0x4bc) = 0x3f8000003f800000;
    *(undefined8 *)(this + 0x4b4) = 0x3f4ccccd3f333333;
    *(undefined8 *)(this + 0x4cc) = 0;
    *(undefined8 *)(this + 0x4c4) = 0;
    *(undefined8 *)(this + 0x4dc) = 0x3f0000003f800000;
    *(undefined8 *)(this + 0x4d4) = 0x3f4ccccd3f333333;
    *(undefined8 *)(this + 0x4ec) = 0;
    *(undefined8 *)(this + 0x4e4) = 0;
    lVar4 = FUN_00f2e540();
    if (lVar4 != 0) {
      (**(code **)(*(long *)this + 0x678))(this,lVar4);
    }
    (**(code **)(*(long *)this + 0x648))(this,0);
    uVar5 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

