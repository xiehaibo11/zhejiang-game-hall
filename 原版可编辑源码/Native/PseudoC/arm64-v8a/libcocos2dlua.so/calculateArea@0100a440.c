
/* cocos2d::PhysicsShapePolygon::calculateArea(cocos2d::Vec2 const*, int) */

undefined1  [16] cocos2d::PhysicsShapePolygon::calculateArea(Vec2 *param_1,int param_2)

{
  undefined1 auVar1 [16];
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
                    /* try { // try from 0100a44c to 0110a44f has its CatchHandler @ 0100a4ac */
  uVar4 = -(ulong)((uint)param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)param_2 << 3;
  if ((ulong)(long)param_2 >> 0x3d != 0) {
    uVar4 = 0xffffffffffffffff;
  }
  pvVar2 = operator_new__(uVar4,(nothrow_t *)&std::nothrow);
  if (param_2 < 1) {
    auVar10 = cpAreaForPoly(0,param_2,pvVar2);
                    /* catch() { ... } // from try @ 0100a44c with catch @ 0100a4ac */
    if (pvVar2 == (void *)0x0) {
      return auVar10;
    }
    goto LAB_0100a518;
  }
  uVar4 = (ulong)(uint)param_2;
  if ((uint)param_2 < 8) {
    uVar5 = 0;
LAB_0100a4e4:
    lVar3 = uVar4 - uVar5;
    puVar6 = (undefined8 *)((long)pvVar2 + uVar5 * 8);
    puVar7 = (undefined8 *)(param_1 + uVar5 * 8);
    do {
      lVar3 = lVar3 + -1;
      *puVar6 = *puVar7;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar3 != 0);
  }
  else {
    uVar5 = uVar4 & 0xfffffff8;
    puVar6 = (undefined8 *)(param_1 + 0x20);
    puVar7 = (undefined8 *)((long)pvVar2 + 0x20);
    uVar8 = uVar5;
    do {
      uVar9 = puVar6[-4];
      uVar12 = puVar6[-1];
      uVar11 = puVar6[-2];
      uVar14 = puVar6[1];
      uVar13 = *puVar6;
      uVar16 = puVar6[3];
      uVar15 = puVar6[2];
      uVar8 = uVar8 - 8;
      puVar7[-3] = puVar6[-3];
      puVar7[-4] = uVar9;
      puVar7[-1] = uVar12;
      puVar7[-2] = uVar11;
      puVar7[1] = uVar14;
      *puVar7 = uVar13;
      puVar7[3] = uVar16;
      puVar7[2] = uVar15;
      puVar6 = puVar6 + 8;
      puVar7 = puVar7 + 8;
    } while (uVar8 != 0);
    if (uVar5 != uVar4) goto LAB_0100a4e4;
  }
  auVar10 = cpAreaForPoly(0,(ulong)(uint)param_2,pvVar2);
LAB_0100a518:
  uVar9 = auVar10._8_8_;
  operator_delete__(pvVar2);
  auVar1._8_8_ = uVar9;
  auVar1._0_8_ = auVar10._0_8_;
  return auVar1;
}

