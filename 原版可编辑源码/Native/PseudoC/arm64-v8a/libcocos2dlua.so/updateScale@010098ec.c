
/* cocos2d::PhysicsShapeCircle::updateScale() */

void __thiscall cocos2d::PhysicsShapeCircle::updateScale(PhysicsShapeCircle *this)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
                    /* try { // try from 010098ec to 011098fb has its CatchHandler @ 01009958 */
                    /* try { // try from 010098fc to 01109973 has its CatchHandler @ 010098b0 */
  fVar3 = *(float *)(this + 0x5c);
  uVar1 = **(undefined8 **)(this + 0x30);
  fVar4 = ABS(*(float *)(this + 100) / fVar3);
  fVar2 = (float)cpCircleShapeGetOffset(uVar1);
  cpCircleShapeSetOffset(fVar4 * fVar2,fVar4 * fVar3,uVar1);
  fVar2 = (float)cpCircleShapeGetRadius(uVar1);
  cpCircleShapeSetRadius(fVar4 * fVar2,uVar1);
  *(undefined8 *)(this + 0x5c) = *(undefined8 *)(this + 100);
                    /* catch() { ... } // from try @ 010098ec with catch @ 01009958 */
  return;
}

