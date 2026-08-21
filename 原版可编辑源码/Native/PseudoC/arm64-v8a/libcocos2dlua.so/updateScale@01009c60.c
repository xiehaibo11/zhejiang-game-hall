
/* cocos2d::PhysicsShapeEdgeSegment::updateScale() */

void __thiscall cocos2d::PhysicsShapeEdgeSegment::updateScale(PhysicsShapeEdgeSegment *this)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = *(float *)(this + 0x68);
  uVar1 = **(undefined8 **)(this + 0x30);
  fVar6 = *(float *)(this + 100) / *(float *)(this + 0x5c);
  fVar7 = fVar4 / *(float *)(this + 0x60);
  fVar2 = (float)cpSegmentShapeGetA(*(float *)(this + 100),fVar4,uVar1);
  fVar5 = fVar7 * fVar4;
  fVar3 = (float)cpSegmentShapeGetB(uVar1);
  cpSegmentShapeSetEndpoints(fVar6 * fVar2,fVar5,fVar6 * fVar3,fVar7 * fVar4,uVar1);
  *(undefined8 *)(this + 0x5c) = *(undefined8 *)(this + 100);
                    /* try { // try from 01009cc8 to 01109e1f has its CatchHandler @ 01009e78 */
  return;
}

