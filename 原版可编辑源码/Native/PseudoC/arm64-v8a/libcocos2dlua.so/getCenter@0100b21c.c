
/* cocos2d::PhysicsShapeEdgePolygon::getCenter() */

undefined1  [16] cocos2d::PhysicsShapeEdgePolygon::getCenter(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long in_x0;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined8 in_d1;
  undefined8 uVar11;
  undefined8 *puVar7;
  
  puVar1 = *(undefined8 **)(in_x0 + 0x30);
  puVar2 = *(undefined8 **)(in_x0 + 0x38);
  uVar3 = ((long)puVar2 - (long)puVar1) * 0x20000000 >> 0x20;
  uVar5 = uVar3 << 3;
  if (uVar3 >> 0x3d != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  pvVar4 = operator_new__(uVar5,(nothrow_t *)&std::nothrow);
  if (puVar1 != puVar2) {
    puVar8 = (undefined4 *)((long)pvVar4 + 4);
    puVar6 = puVar1;
    do {
      puVar7 = puVar6 + 1;
      uVar9 = cpSegmentShapeGetA(*puVar6);
      puVar8[-1] = uVar9;
      *puVar8 = (int)in_d1;
      puVar8 = puVar8 + 2;
      puVar6 = puVar7;
                    /* catch() { ... } // from try @ 0100b1e4 with catch @ 0100b280 */
    } while (puVar2 != puVar7);
  }
                    /* catch() { ... } // from try @ 0100b17c with catch @ 0100b284 */
  auVar10 = cpCentroidForPoly((ulong)((long)puVar2 - (long)puVar1) >> 3 & 0xffffffff,pvVar4);
  uVar11 = auVar10._8_8_;
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
  }
  auVar10._8_8_ = uVar11;
  return auVar10;
}

