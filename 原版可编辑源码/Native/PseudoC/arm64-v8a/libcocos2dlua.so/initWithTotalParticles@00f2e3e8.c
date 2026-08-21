
/* cocos2d::ParticleFire::initWithTotalParticles(int) */

undefined4 __thiscall cocos2d::ParticleFire::initWithTotalParticles(ParticleFire *this,int param_1)

{
  long lVar1;
  ulong uVar2;
  Director *this_00;
  Size *pSVar3;
  long lVar4;
  undefined4 uVar5;
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
    *(undefined4 *)(this + 0x47c) = 0xbf800000;
    *(undefined8 *)(this + 0x344) = 0;
    *(undefined8 *)(this + 0x334) = 0x41a0000042700000;
    *(undefined8 *)(this + 0x32c) = 0;
    *(undefined8 *)(this + 0x498) = 0x4120000042b40000;
    this_00 = (Director *)Director::getInstance();
    pSVar3 = (Size *)Director::getWinSize(this_00);
    Size::Size((Size *)local_40,pSVar3);
                    /* catch() { ... } // from try @ 00f2e4c8 with catch @ 00f2e474 */
    (**(code **)(*(long *)this + 200))(local_40[0] * 0.5,0x42700000,this);
    *(undefined8 *)(this + 0x490) = 0x3e80000040400000;
    *(undefined8 *)(this + 0x488) = 0x41a0000042200000;
    *(undefined8 *)(this + 0x4a4) = 0x4120000042580000;
                    /* try { // try from 00f2e498 to 0102e49f has its CatchHandler @ 00f2e4e4 */
    *(float *)(this + 0x504) = (float)*(int *)(this + 0x508) / 3.0;
                    /* try { // try from 00f2e4bc to 0102e4c7 has its CatchHandler @ 00f2e4ec */
    *(undefined4 *)(this + 0x4ac) = 0xbf800000;
                    /* try { // try from 00f2e4c8 to 0102e50f has its CatchHandler @ 00f2e474 */
    *(undefined8 *)(this + 0x4bc) = 0x3f8000003df5c28f;
    *(undefined8 *)(this + 0x4b4) = 0x3e8000003f428f5c;
    *(undefined8 *)(this + 0x4cc) = 0;
    *(undefined8 *)(this + 0x4c4) = 0;
    *(undefined8 *)(this + 0x4d4) = 0;
    *(undefined8 *)(this + 0x4dc) = 0x3f80000000000000;
    *(undefined8 *)(this + 0x4ec) = 0;
    *(undefined8 *)(this + 0x4e4) = 0;
    lVar4 = FUN_00f2e540();
    if (lVar4 != 0) {
                    /* catch() { ... } // from try @ 00f2e498 with catch @ 00f2e4e4 */
                    /* catch() { ... } // from try @ 00f2e4bc with catch @ 00f2e4ec */
      (**(code **)(*(long *)this + 0x678))(this,lVar4);
    }
    uVar5 = 1;
    (**(code **)(*(long *)this + 0x648))(this,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

