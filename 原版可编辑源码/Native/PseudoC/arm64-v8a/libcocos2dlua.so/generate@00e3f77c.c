
/* cocos2d::PURealTimeForceFieldCalculationFactory::generate(unsigned int, unsigned short, double,
   double, double, cocos2d::Vec3 const&) */

void __thiscall
cocos2d::PURealTimeForceFieldCalculationFactory::generate
          (PURealTimeForceFieldCalculationFactory *this,uint param_1,ushort param_2,double param_3,
          double param_4,double param_5,Vec3 *param_6)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
                    /* try { // try from 00e3f784 to 00f3f78b has its CatchHandler @ 00e3fb8c */
  *(ushort *)(this + 0x830) = param_2;
                    /* try { // try from 00e3f78c to 00f3fa47 has its CatchHandler @ 00e3f730 */
  *(double *)(this + 0x838) = param_3;
  *(double *)(this + 0x840) = param_4;
  *(double *)(this + 0x848) = param_5;
  uVar1 = *(undefined8 *)param_6;
  *(undefined4 *)(this + 0x864) = *(undefined4 *)(param_6 + 8);
  *(undefined8 *)(this + 0x85c) = uVar1;
  PUNoise3D::initialise((PUNoise3D *)(this + 8),param_2,param_3,param_4,param_5);
  fVar2 = (float)*(undefined8 *)param_6;
  fVar3 = (float)((ulong)*(undefined8 *)param_6 >> 0x20);
  if ((((bool)(~(fVar2 == 0.0) & 1)) || ((bool)(~(fVar3 == 0.0) & 1))) ||
     (*(float *)(param_6 + 8) != 0.0)) {
    uVar1 = NEON_fmov(0x3f800000,4);
    *(ulong *)(this + 0x850) = CONCAT44((float)((ulong)uVar1 >> 0x20) / fVar3,(float)uVar1 / fVar2);
    *(float *)(this + 0x858) = 1.0 / *(float *)(param_6 + 8);
  }
  return;
}

