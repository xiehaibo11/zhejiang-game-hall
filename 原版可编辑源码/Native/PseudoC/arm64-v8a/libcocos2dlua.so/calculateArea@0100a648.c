
/* cocos2d::PhysicsShapePolygon::calculateArea() */

undefined1  [16] cocos2d::PhysicsShapePolygon::calculateArea(void)

{
  uint uVar1;
  long in_x0;
  void *pvVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined4 in_s1;
  
                    /* try { // try from 0100a650 to 0110a687 has its CatchHandler @ 0100a7c4 */
  uVar4 = **(undefined8 **)(in_x0 + 0x30);
  uVar1 = cpPolyShapeGetCount(uVar4);
  uVar3 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
  if ((ulong)(long)(int)uVar1 >> 0x3d != 0) {
    uVar3 = 0xffffffffffffffff;
  }
  pvVar2 = operator_new__(uVar3);
  if (0 < (int)uVar1) {
    uVar3 = 0;
    puVar5 = (undefined4 *)((long)pvVar2 + 4);
    do {
      uVar6 = cpPolyShapeGetVert(uVar4,uVar3 & 0xffffffff);
      uVar3 = uVar3 + 1;
      puVar5[-1] = uVar6;
      *puVar5 = in_s1;
      puVar5 = puVar5 + 2;
    } while (uVar1 != uVar3);
  }
  cpPolyShapeGetRadius(uVar4);
  auVar7 = cpAreaForPoly(uVar1,pvVar2);
  uVar4 = auVar7._8_8_;
  operator_delete__(pvVar2);
  auVar7._8_8_ = uVar4;
  return auVar7;
}

