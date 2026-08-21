
/* cocos2d::PhysicsShapePolygon::updateScale() */

void __thiscall cocos2d::PhysicsShapePolygon::updateScale(PhysicsShapePolygon *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  float *pfVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  undefined4 *puVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined8 uVar14;
  
  uVar14 = *(undefined8 *)(this + 0x5c);
  uVar7 = **(undefined8 **)(this + 0x30);
  fVar11 = (float)*(undefined8 *)(this + 100) / (float)uVar14;
  fVar13 = (float)((ulong)*(undefined8 *)(this + 100) >> 0x20) / (float)((ulong)uVar14 >> 0x20);
  uVar1 = cpPolyShapeGetCount(uVar7);
  uVar9 = (uint)uVar1;
                    /* try { // try from 0100a9ec to 0110aa07 has its CatchHandler @ 0100ac24 */
  uVar4 = -((uVar1 & 0xffffffff) >> 0x1f) & 0xfffffff800000000 | (uVar1 & 0xffffffff) << 3;
  uVar8 = uVar1 & 0xffffffff;
  if ((ulong)(long)(int)uVar9 >> 0x3d != 0) {
    uVar4 = 0xffffffffffffffff;
  }
  puVar2 = operator_new__(uVar4);
                    /* try { // try from 0100aa08 to 0110aa53 has its CatchHandler @ 0100a8dc */
  if (0 < (int)uVar9) {
    uVar4 = 0;
    puVar10 = (undefined4 *)((long)puVar2 + 4);
    do {
      uVar12 = cpPolyShapeGetVert(uVar7,uVar4 & 0xffffffff);
      uVar4 = uVar4 + 1;
      puVar10[-1] = uVar12;
      *puVar10 = (int)uVar14;
      puVar10 = puVar10 + 2;
    } while (uVar8 != uVar4);
    if (0 < (int)uVar9) {
      if (uVar9 < 8) {
        uVar1 = 0;
                    /* try { // try from 0100aa54 to 0110aa6f has its CatchHandler @ 0100ac20 */
      }
      else {
        uVar1 = uVar1 & 0xfffffff8;
        pfVar5 = (float *)(puVar2 + 4);
        uVar4 = uVar1;
        do {
                    /* try { // try from 0100aa70 to 0110aae7 has its CatchHandler @ 0100a8dc */
          uVar4 = uVar4 - 8;
          pfVar5[-8] = fVar11 * pfVar5[-8];
          pfVar5[-7] = fVar13 * pfVar5[-7];
          pfVar5[-6] = fVar11 * pfVar5[-6];
          pfVar5[-5] = fVar13 * pfVar5[-5];
          pfVar5[-4] = fVar11 * pfVar5[-4];
          pfVar5[-3] = fVar13 * pfVar5[-3];
          pfVar5[-2] = fVar11 * pfVar5[-2];
          pfVar5[-1] = fVar13 * pfVar5[-1];
          *pfVar5 = fVar11 * *pfVar5;
          pfVar5[1] = fVar13 * pfVar5[1];
          pfVar5[2] = fVar11 * pfVar5[2];
          pfVar5[3] = fVar13 * pfVar5[3];
          pfVar5[4] = fVar11 * pfVar5[4];
          pfVar5[5] = fVar13 * pfVar5[5];
          pfVar5[6] = fVar11 * pfVar5[6];
          pfVar5[7] = fVar13 * pfVar5[7];
          pfVar5 = pfVar5 + 0x10;
        } while (uVar4 != 0);
        if (uVar1 == uVar8) goto LAB_0100aac8;
      }
      lVar3 = uVar8 - uVar1;
      puVar6 = puVar2 + uVar1;
      do {
        lVar3 = lVar3 + -1;
        *puVar6 = CONCAT44(fVar13 * (float)((ulong)*puVar6 >> 0x20),fVar11 * (float)*puVar6);
        puVar6 = puVar6 + 1;
      } while (lVar3 != 0);
    }
  }
LAB_0100aac8:
  if ((fVar11 * fVar13 < 0.0) && (1 < (int)uVar9)) {
    uVar4 = uVar8 >> 1;
    puVar6 = puVar2;
    do {
      uVar9 = uVar9 - 1;
                    /* try { // try from 0100aae8 to 0110aaef has its CatchHandler @ 0100ac0c */
      uVar1 = -(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar9 << 3;
                    /* try { // try from 0100aaf0 to 0110ab47 has its CatchHandler @ 0100a8dc */
      uVar14 = *puVar6;
      uVar4 = uVar4 - 1;
      *puVar6 = *(undefined8 *)((long)puVar2 + uVar1);
      *(undefined8 *)((long)puVar2 + uVar1) = uVar14;
      puVar6 = puVar6 + 1;
    } while (uVar4 != 0);
  }
  cpPolyShapeSetVertsRaw(uVar7,uVar8,puVar2);
  operator_delete__(puVar2);
  *(undefined8 *)(this + 0x5c) = *(undefined8 *)(this + 100);
  return;
}

