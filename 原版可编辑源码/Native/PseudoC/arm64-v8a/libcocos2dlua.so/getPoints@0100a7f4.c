
/* cocos2d::PhysicsShapePolygon::getPoints(cocos2d::Vec2*) const */

void cocos2d::PhysicsShapePolygon::getPoints(Vec2 *param_1)

{
  ulong uVar1;
  void *pvVar2;
  long in_x1;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined8 in_d1;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar7 = **(undefined8 **)(param_1 + 0x30);
  uVar1 = cpPolyShapeGetCount(uVar7);
  uVar8 = (uint)uVar1;
  uVar4 = -((uVar1 & 0xffffffff) >> 0x1f) & 0xfffffff800000000 | (uVar1 & 0xffffffff) << 3;
  if ((ulong)(long)(int)uVar8 >> 0x3d != 0) {
    uVar4 = 0xffffffffffffffff;
  }
  pvVar2 = operator_new__(uVar4);
  if (0 < (int)uVar8) {
    uVar4 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0100a714 with catch @ 0100a844
                        */
    uVar9 = uVar1 & 0xffffffff;
    puVar10 = (undefined4 *)((long)pvVar2 + 4);
    do {
      uVar11 = cpPolyShapeGetVert(uVar7,uVar4 & 0xffffffff);
      uVar4 = uVar4 + 1;
      puVar10[-1] = uVar11;
      *puVar10 = (int)in_d1;
      puVar10 = puVar10 + 2;
    } while (uVar9 != uVar4);
    if (0 < (int)uVar8) {
      if (uVar8 < 8) {
        uVar1 = 0;
      }
      else {
        uVar1 = uVar1 & 0xfffffff8;
        puVar3 = (undefined8 *)((long)pvVar2 + 0x20);
        puVar6 = (undefined8 *)(in_x1 + 0x20);
        uVar4 = uVar1;
        do {
          uVar7 = puVar3[-4];
          uVar13 = puVar3[-1];
          uVar12 = puVar3[-2];
          uVar15 = puVar3[1];
          uVar14 = *puVar3;
          uVar17 = puVar3[3];
          uVar16 = puVar3[2];
          uVar4 = uVar4 - 8;
          puVar6[-3] = puVar3[-3];
          puVar6[-4] = uVar7;
          puVar6[-1] = uVar13;
          puVar6[-2] = uVar12;
          puVar6[1] = uVar15;
          *puVar6 = uVar14;
          puVar6[3] = uVar17;
          puVar6[2] = uVar16;
          puVar3 = puVar3 + 8;
          puVar6 = puVar6 + 8;
        } while (uVar4 != 0);
        if (uVar1 == uVar9) goto LAB_0100a8d4;
      }
      lVar5 = uVar9 - uVar1;
      puVar3 = (undefined8 *)(in_x1 + uVar1 * 8);
      puVar6 = (undefined8 *)((long)pvVar2 + uVar1 * 8);
      do {
        lVar5 = lVar5 + -1;
        *puVar3 = *puVar6;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      } while (lVar5 != 0);
    }
  }
LAB_0100a8d4:
                    /* try { // try from 0100a8dc to 0110a933 has its CatchHandler @ 0100a8dc
                       catch() { ... } // from try @ 0100a8dc with catch @ 0100a8dc
                       catch() { ... } // from try @ 0100a950 with catch @ 0100a8dc
                       catch() { ... } // from try @ 0100a984 with catch @ 0100a8dc
                       catch() { ... } // from try @ 0100aa08 with catch @ 0100a8dc
                       catch() { ... } // from try @ 0100aa70 with catch @ 0100a8dc
                       catch() { ... } // from try @ 0100aaf0 with catch @ 0100a8dc
                       catch() { ... } // from try @ 0100abe4 with catch @ 0100a8dc */
  operator_delete__(pvVar2);
  return;
}

