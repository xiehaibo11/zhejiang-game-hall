
/* cocos2d::PhysicsShapeEdgeSegment::getCenter() */

float __thiscall cocos2d::PhysicsShapeEdgeSegment::getCenter(PhysicsShapeEdgeSegment *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)cpSegmentShapeGetA(**(undefined8 **)(this + 0x30));
  fVar2 = (float)cpSegmentShapeGetB(**(undefined8 **)(this + 0x30));
                    /* try { // try from 01009c4c to 01109c53 has its CatchHandler @ 01009e64 */
                    /* try { // try from 01009c54 to 01109cc7 has its CatchHandler @ 01009a98 */
  return (fVar1 + fVar2) * 0.5;
}

