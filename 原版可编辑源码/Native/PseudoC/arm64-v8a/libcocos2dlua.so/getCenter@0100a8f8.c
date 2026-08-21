
/* cocos2d::PhysicsShapePolygon::getCenter() */

undefined1  [16] cocos2d::PhysicsShapePolygon::getCenter(void)

{
  uint uVar1;
  long in_x0;
  void *pvVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined8 in_d1;
  
  uVar4 = **(undefined8 **)(in_x0 + 0x30);
  uVar1 = cpPolyShapeGetCount(uVar4);
  uVar3 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
  if ((ulong)(long)(int)uVar1 >> 0x3d != 0) {
    uVar3 = 0xffffffffffffffff;
  }
                    /* try { // try from 0100a934 to 0110a94f has its CatchHandler @ 0100ac28 */
  pvVar2 = operator_new__(uVar3);
  if (0 < (int)uVar1) {
    uVar3 = 0;
    puVar5 = (undefined4 *)((long)pvVar2 + 4);
    do {
                    /* try { // try from 0100a950 to 0110a967 has its CatchHandler @ 0100a8dc */
      uVar6 = cpPolyShapeGetVert(uVar4,uVar3 & 0xffffffff);
      uVar3 = uVar3 + 1;
      puVar5[-1] = uVar6;
      *puVar5 = (int)in_d1;
                    /* try { // try from 0100a968 to 0110a983 has its CatchHandler @ 0100ac2c */
      puVar5 = puVar5 + 2;
    } while (uVar1 != uVar3);
  }
  auVar7 = cpCentroidForPoly(uVar1,pvVar2);
  uVar4 = auVar7._8_8_;
                    /* try { // try from 0100a984 to 0110a9eb has its CatchHandler @ 0100a8dc */
  operator_delete__(pvVar2);
  auVar7._8_8_ = uVar4;
  return auVar7;
}

