
/* cocos2d::PhysicsShapeEdgePolygon::getPoints(cocos2d::Vec2*) const */

void cocos2d::PhysicsShapeEdgePolygon::getPoints(Vec2 *param_1)

{
  undefined8 *puVar1;
  long in_x1;
  undefined8 *puVar2;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 in_s1;
  undefined8 *puVar3;
  
                    /* try { // try from 0100b2d4 to 0110b347 has its CatchHandler @ 0100b2d4
                       catch() { ... } // from try @ 0100b2d4 with catch @ 0100b2d4
                       catch() { ... } // from try @ 0100b354 with catch @ 0100b2d4 */
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (*(undefined8 **)(param_1 + 0x30) != puVar1) {
    puVar4 = (undefined4 *)(in_x1 + 4);
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    do {
      puVar3 = puVar2 + 1;
      uVar5 = cpSegmentShapeGetA(*puVar2);
      puVar4[-1] = uVar5;
      *puVar4 = in_s1;
      puVar4 = puVar4 + 2;
      puVar2 = puVar3;
    } while (puVar1 != puVar3);
  }
  return;
}

