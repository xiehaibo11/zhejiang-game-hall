
/* cocos2d::PUNoise3D::noise(cocos2d::Vec3 const&) */

undefined1  [16] __thiscall cocos2d::PUNoise3D::noise(PUNoise3D *this,Vec3 *param_1)

{
  ushort uVar1;
  ushort uVar2;
  float fVar3;
  double dVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
                    /* try { // try from 00e40ad8 to 00f40adb has its CatchHandler @ 00e40b9c */
  uVar1 = *(ushort *)(this + 0x808);
  if (uVar1 == 0) {
    dVar8 = 0.0;
  }
  else {
    fVar3 = *(float *)param_1;
    fVar6 = *(float *)(param_1 + 4);
    fVar7 = *(float *)(param_1 + 8);
    dVar9 = *(double *)(this + 0x818);
    dVar10 = *(double *)(this + 0x810);
                    /* try { // try from 00e40b00 to 00f40b03 has its CatchHandler @ 00e40b98 */
    dVar11 = *(double *)(this + 0x820);
    uVar2 = 0;
    dVar8 = 0.0;
    do {
      dVar4 = (double)genNoise(this,dVar10 * (double)fVar3,dVar10 * (double)fVar6,
                               dVar10 * (double)fVar7);
      uVar2 = uVar2 + 1;
                    /* try { // try from 00e40b38 to 00f40b3b has its CatchHandler @ 00e40b84 */
      dVar10 = dVar10 + dVar10;
      dVar8 = dVar8 + dVar9 * dVar4;
      dVar9 = dVar11 * dVar9;
    } while (uVar2 < uVar1);
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar8;
  return auVar5;
}

