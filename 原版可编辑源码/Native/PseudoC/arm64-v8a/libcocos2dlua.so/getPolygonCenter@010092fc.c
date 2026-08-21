
/* cocos2d::PhysicsShape::getPolygonCenter(cocos2d::Vec2 const*, int) */

undefined1  [16] cocos2d::PhysicsShape::getPolygonCenter(Vec2 *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar3 = -(ulong)((uint)param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)param_2 << 3;
  if ((ulong)(long)param_2 >> 0x3d != 0) {
    uVar3 = 0xffffffffffffffff;
  }
  pvVar1 = operator_new__(uVar3,(nothrow_t *)&std::nothrow);
  if (0 < param_2) {
    uVar3 = (ulong)(uint)param_2;
    if ((uint)param_2 < 8) {
      uVar4 = 0;
                    /* catch() { ... } // from try @ 0100927c with catch @ 01009350 */
    }
    else {
      uVar4 = uVar3 & 0xfffffff8;
      puVar5 = (undefined8 *)(param_1 + 0x20);
      puVar6 = (undefined8 *)((long)pvVar1 + 0x20);
      uVar7 = uVar4;
      do {
        uVar8 = puVar5[-4];
        uVar11 = puVar5[-1];
        uVar10 = puVar5[-2];
        uVar13 = puVar5[1];
        uVar12 = *puVar5;
        uVar15 = puVar5[3];
        uVar14 = puVar5[2];
        uVar7 = uVar7 - 8;
        puVar6[-3] = puVar5[-3];
        puVar6[-4] = uVar8;
        puVar6[-1] = uVar11;
        puVar6[-2] = uVar10;
        puVar6[1] = uVar13;
        *puVar6 = uVar12;
        puVar6[3] = uVar15;
        puVar6[2] = uVar14;
        puVar5 = puVar5 + 8;
        puVar6 = puVar6 + 8;
      } while (uVar7 != 0);
      if (uVar4 == uVar3) goto LAB_010093a4;
    }
    lVar2 = uVar3 - uVar4;
    puVar5 = (undefined8 *)((long)pvVar1 + uVar4 * 8);
    puVar6 = (undefined8 *)(param_1 + uVar4 * 8);
    do {
      lVar2 = lVar2 + -1;
      *puVar5 = *puVar6;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (lVar2 != 0);
  }
LAB_010093a4:
  auVar9 = cpCentroidForPoly(param_2,pvVar1);
  uVar8 = auVar9._8_8_;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  auVar9._8_8_ = uVar8;
                    /* try { // try from 010093cc to 01109447 has its CatchHandler @ 010093cc
                       catch() { ... } // from try @ 010093cc with catch @ 010093cc
                       catch() { ... } // from try @ 010094d0 with catch @ 010093cc */
  return auVar9;
}

