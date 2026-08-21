
/* cocos2d::PUNoise3D::noise(double, double, double) */

undefined1  [16] __thiscall
cocos2d::PUNoise3D::noise(PUNoise3D *this,double param_1,double param_2,double param_3)

{
  ushort uVar1;
  ushort uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e40b38 with catch @ 00e40b84
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e40b00 with catch @ 00e40b98
                        */
  uVar1 = *(ushort *)(this + 0x808);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e40ad8 with catch @ 00e40b9c
                        */
  if (uVar1 == 0) {
    dVar5 = 0.0;
  }
  else {
    dVar6 = *(double *)(this + 0x818);
    dVar7 = *(double *)(this + 0x810);
    dVar8 = *(double *)(this + 0x820);
    uVar2 = 0;
    dVar5 = 0.0;
    do {
      dVar3 = (double)genNoise(this,dVar7 * param_1,dVar7 * param_2,dVar7 * param_3);
      uVar2 = uVar2 + 1;
      dVar7 = dVar7 + dVar7;
      dVar5 = dVar5 + dVar6 * dVar3;
      dVar6 = dVar6 * dVar8;
    } while (uVar2 < uVar1);
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar5;
  return auVar4;
}

