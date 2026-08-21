
/* cocos2d::PUDynamicAttributeCurved::getValue(float) */

undefined1  [16] __thiscall
cocos2d::PUDynamicAttributeCurved::getValue(PUDynamicAttributeCurved *this,float param_1)

{
  float *pfVar1;
  short sVar2;
  float *pfVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  uVar9 = 0;
  uVar10 = 0;
  if (*(int *)(this + 0xa8) == 1) {
    sVar2 = PUSimpleSpline::getNumPoints((PUSimpleSpline *)(this + 0x30));
    if (sVar2 != 0) {
      uVar6 = 0x3f800000;
      uVar7 = 0;
      uVar10 = 0;
      fVar8 = (float)NEON_fminnm(param_1 / *(float *)(this + 0x2c),0x3f800000);
      PUSimpleSpline::interpolate((PUSimpleSpline *)(this + 0x30),fVar8);
      uVar9 = CONCAT44(uVar7,uVar6);
    }
  }
  else if (*(int *)(this + 0xa8) == 0) {
    pfVar3 = *(float **)(this + 0xb0);
    pfVar1 = *(float **)(this + 0xb8);
    if (pfVar3 != pfVar1) {
      lVar4 = -8;
      do {
        if (param_1 < *pfVar3) {
          if (lVar4 != -8) {
            pfVar3 = pfVar3 + -2;
          }
          goto LAB_00e3d790;
        }
        pfVar3 = pfVar3 + 2;
                    /* catch() { ... } // from try @ 00e3d414 with catch @ 00e3d73c */
        lVar4 = lVar4 + 8;
      } while (pfVar1 != pfVar3);
      pfVar3 = pfVar1 + -2;
LAB_00e3d790:
      fVar8 = pfVar3[1];
      uVar9 = (ulong)(uint)fVar8;
      uVar10 = 0;
      if (pfVar3 + 2 != pfVar1) {
        uVar9 = (ulong)(uint)(fVar8 + ((pfVar3[3] - fVar8) * (param_1 - *pfVar3)) /
                                      (pfVar3[2] - *pfVar3));
        uVar10 = 0;
      }
    }
  }
  auVar5._8_8_ = uVar10;
  auVar5._0_8_ = uVar9;
  return auVar5;
}

