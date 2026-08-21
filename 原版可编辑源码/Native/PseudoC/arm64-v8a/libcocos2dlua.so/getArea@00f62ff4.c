
/* cocos2d::PolygonInfo::getArea() const */

float __thiscall cocos2d::PolygonInfo::getArea(PolygonInfo *this)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
                    /* try { // try from 00f62ff8 to 0106303b has its CatchHandler @ 00f62fcc */
  if (0 < *(int *)(this + 0x14)) {
    lVar2 = *(long *)this;
    lVar3 = 0;
    fVar7 = 0.0;
    do {
      puVar1 = (ushort *)(*(long *)(this + 8) + lVar3 * 2);
                    /* catch() { ... } // from try @ 00f62ff0 with catch @ 00f63020 */
      lVar3 = lVar3 + 3;
      pfVar5 = (float *)(lVar2 + (ulong)puVar1[1] * 0x18);
      fVar8 = pfVar5[1];
      pfVar6 = (float *)(lVar2 + (ulong)*puVar1 * 0x18);
      pfVar4 = (float *)(lVar2 + (ulong)puVar1[2] * 0x18);
      fVar9 = pfVar4[1];
      fVar10 = pfVar6[1];
      fVar7 = fVar7 + ((fVar10 - fVar8) * *pfVar4 +
                      *pfVar6 * (fVar8 - fVar9) + *pfVar5 * (fVar9 - fVar10)) * 0.5;
    } while (lVar3 < *(int *)(this + 0x14));
    return fVar7;
  }
  return 0.0;
}

