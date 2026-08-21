
/* cocos2d::PhysicsShapeEdgeChain::getCenter() */

undefined1  [16] cocos2d::PhysicsShapeEdgeChain::getCenter(void)

{
  uint uVar1;
  undefined8 *puVar2;
  long in_x0;
  void *pvVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined8 in_d1;
  undefined8 uVar12;
  
  puVar6 = *(undefined8 **)(in_x0 + 0x30);
  puVar2 = *(undefined8 **)(in_x0 + 0x38);
  uVar1 = (int)((ulong)((long)puVar2 - (long)puVar6) >> 3) + 1;
  uVar4 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
  if ((ulong)(long)(int)uVar1 >> 0x3d != 0) {
    uVar4 = 0xffffffffffffffff;
  }
  pvVar3 = operator_new__(uVar4,(nothrow_t *)&std::nothrow);
  uVar9 = (undefined4)in_d1;
  if (puVar6 == puVar2) {
    uVar4 = 0;
  }
  else {
    iVar7 = 0;
    puVar8 = (undefined4 *)((long)pvVar3 + 4);
    do {
      puVar5 = puVar6 + 1;
      uVar9 = cpSegmentShapeGetA(*puVar6);
      puVar8[-1] = uVar9;
      uVar9 = (undefined4)in_d1;
      *puVar8 = uVar9;
      puVar8 = puVar8 + 2;
      iVar7 = iVar7 + -1;
      puVar6 = puVar5;
    } while (puVar2 != puVar5);
    puVar6 = *(undefined8 **)(in_x0 + 0x38);
    uVar4 = (ulong)(uint)-iVar7;
  }
  uVar10 = cpSegmentShapeGetB(puVar6[-1]);
  puVar8 = (undefined4 *)((long)pvVar3 + uVar4 * 8);
  *puVar8 = uVar10;
  puVar8[1] = uVar9;
  auVar11 = cpCentroidForPoly(uVar1,pvVar3);
  uVar12 = auVar11._8_8_;
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  auVar11._8_8_ = uVar12;
  return auVar11;
}

