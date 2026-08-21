
/* cocos2d::PhysicsShapeEdgeSegment::~PhysicsShapeEdgeSegment() */

void __thiscall
cocos2d::PhysicsShapeEdgeSegment::~PhysicsShapeEdgeSegment(PhysicsShapeEdgeSegment *this)

{
                    /* try { // try from 01009020 to 01109053 has its CatchHandler @ 01008fec */
  ~PhysicsShapeEdgeSegment(this);
                    /* catch() { ... } // from try @ 01009010 with catch @ 01009038 */
  operator_delete(this);
  return;
}

