
/* cocos2d::PUNoise3D::grad(int, double, double, double) */

undefined1  [16] __thiscall
cocos2d::PUNoise3D::grad(PUNoise3D *this,int param_1,double param_2,double param_3,double param_4)

{
  uint uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_1 & 0xf;
  dVar2 = param_2;
  if (7 < uVar1) {
    dVar2 = param_3;
  }
  if ((3 < uVar1) && (param_3 = param_2, (uVar1 | 2) != 0xe)) {
    param_3 = param_4;
  }
  if ((param_1 & 1U) != 0) {
    dVar2 = -dVar2;
  }
  if ((param_1 & 2U) != 0) {
    param_3 = -param_3;
  }
  auVar3._0_8_ = dVar2 + param_3;
  auVar3._8_8_ = 0;
  return auVar3;
}

