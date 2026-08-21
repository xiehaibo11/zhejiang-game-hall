
/* cocos2d::PhysicsShapePolygon::calculateMoment(float, cocos2d::Vec2 const*, int, cocos2d::Vec2
   const&, float) */

undefined1  [16]
cocos2d::PhysicsShapePolygon::calculateMoment
          (float param_1,Vec2 *param_2,int param_3,Vec2 *param_4,float param_5)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined4 in_register_00005004;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 in_register_00005024;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
                    /* try { // try from 0100a548 to 0110a54b has its CatchHandler @ 0100a58c */
  uVar3 = -(ulong)((uint)param_3 >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)param_3 << 3;
  if ((ulong)(long)param_3 >> 0x3d != 0) {
    uVar3 = 0xffffffffffffffff;
  }
  pvVar1 = operator_new__(uVar3,(nothrow_t *)&std::nothrow);
  if (0 < param_3) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0100a548 with catch @ 0100a58c
                        */
    uVar3 = (ulong)(uint)param_3;
    if ((uint)param_3 < 8) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar3 & 0xfffffff8;
      puVar5 = (undefined8 *)(param_2 + 0x20);
      puVar6 = (undefined8 *)((long)pvVar1 + 0x20);
      uVar7 = uVar4;
      do {
        uVar8 = puVar5[-4];
        uVar12 = puVar5[-1];
        uVar11 = puVar5[-2];
        uVar14 = puVar5[1];
        uVar13 = *puVar5;
        uVar16 = puVar5[3];
        uVar15 = puVar5[2];
        uVar7 = uVar7 - 8;
        puVar6[-3] = puVar5[-3];
        puVar6[-4] = uVar8;
        puVar6[-1] = uVar12;
        puVar6[-2] = uVar11;
        puVar6[1] = uVar14;
        *puVar6 = uVar13;
        puVar6[3] = uVar16;
        puVar6[2] = uVar15;
        puVar5 = puVar5 + 8;
        puVar6 = puVar6 + 8;
      } while (uVar7 != 0);
      if (uVar4 == uVar3) goto LAB_0100a5f0;
    }
    lVar2 = uVar3 - uVar4;
    puVar5 = (undefined8 *)((long)pvVar1 + uVar4 * 8);
    puVar6 = (undefined8 *)(param_2 + uVar4 * 8);
    do {
      lVar2 = lVar2 + -1;
      *puVar5 = *puVar6;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (lVar2 != 0);
  }
LAB_0100a5f0:
  auVar9 = ZEXT816(0x7f7fffff);
  if (param_1 != 3.4028235e+38) {
                    /* try { // try from 0100a604 to 0110a61b has its CatchHandler @ 0100a7c4 */
    auVar9 = cpMomentForPoly(CONCAT44(in_register_00005004,param_1),*(undefined4 *)param_4,
                             *(undefined4 *)(param_4 + 4),CONCAT44(in_register_00005024,param_5),
                             param_3,pvVar1);
  }
  uVar8 = auVar9._8_8_;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  auVar10._8_8_ = uVar8;
  auVar10._0_8_ = auVar9._0_8_;
                    /* try { // try from 0100a634 to 0110a637 has its CatchHandler @ 0100a7c8 */
  return auVar10;
}

