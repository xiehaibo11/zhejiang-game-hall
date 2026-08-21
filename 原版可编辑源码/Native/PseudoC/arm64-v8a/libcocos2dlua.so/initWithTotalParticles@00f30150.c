
/* cocos2d::ParticleSnow::initWithTotalParticles(int) */

void __thiscall cocos2d::ParticleSnow::initWithTotalParticles(ParticleSnow *this,int param_1)

{
  long lVar1;
  ulong uVar2;
  Director *this_00;
  Size *pSVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
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
    local_50[0] = 0.0;
    local_50[1] = -1.0;
    (**(code **)(*(long *)this + 0x560))(this,local_50);
    (**(code **)(*(long *)this + 0x570))(0x40a00000,this);
    (**(code **)(*(long *)this + 0x580))(0x3f800000,this);
    (**(code **)(*(long *)this + 0x5b0))(0,this);
    (**(code **)(*(long *)this + 0x5c0))(0x3f800000,this);
    (**(code **)(*(long *)this + 0x590))(0,this);
    (**(code **)(*(long *)this + 0x5a0))(0x3f800000,this);
    this_00 = (Director *)Director::getInstance();
    pSVar3 = (Size *)Director::getWinSize(this_00);
    Size::Size((Size *)local_50,pSVar3);
    (**(code **)(*(long *)this + 200))(local_50[0] * 0.5,local_50[1] + 10.0,0x41200000,this);
    *(float *)(this + 0x488) = local_50[0] * 0.5;
    *(undefined8 *)(this + 0x498) = 0x40a00000c2b40000;
    *(undefined8 *)(this + 0x490) = 0x4170000042340000;
                    /* try { // try from 00f30288 to 01030297 has its CatchHandler @ 00f30470 */
    auVar6 = NEON_fmov(0x3f800000,4);
    *(undefined4 *)(this + 0x48c) = 0;
    *(undefined8 *)(this + 0x4a4) = 0x40a0000041200000;
    *(undefined4 *)(this + 0x4ac) = 0xbf800000;
                    /* try { // try from 00f3029c to 010302a3 has its CatchHandler @ 00f3046c */
    *(undefined4 *)(this + 0x504) = 0x41200000;
    *(long *)(this + 0x4bc) = auVar6._8_8_;
    *(long *)(this + 0x4b4) = auVar6._0_8_;
    uVar5 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(this + 0x4cc) = 0;
    *(undefined8 *)(this + 0x4c4) = 0;
    *(undefined8 *)(this + 0x4d4) = uVar5;
    *(undefined4 *)(this + 0x4dc) = 0x3f800000;
    *(undefined8 *)(this + 0x4e8) = 0;
    *(undefined8 *)(this + 0x4e0) = 0;
    *(undefined4 *)(this + 0x4f0) = 0;
    lVar4 = FUN_00f2e540();
    if (lVar4 != 0) {
      (**(code **)(*(long *)this + 0x678))(this,lVar4);
    }
    (**(code **)(*(long *)this + 0x648))(this,0);
    uVar5 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00f30324 to 01030333 has its CatchHandler @ 00f30470 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

