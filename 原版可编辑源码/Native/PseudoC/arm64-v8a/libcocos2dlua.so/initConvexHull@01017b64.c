
/* cocos2d::Physics3DShape::initConvexHull(cocos2d::Vec3 const*, int) */

undefined8 __thiscall
cocos2d::Physics3DShape::initConvexHull(Physics3DShape *this,Vec3 *param_1,int param_2)

{
  btConvexHullShape *this_00;
  
  *(undefined4 *)(this + 0x24) = 5;
  this_00 = (btConvexHullShape *)btAlignedAllocInternal(0x90,0x10);
  btConvexHullShape::btConvexHullShape(this_00,(float *)param_1,param_2,0xc);
  *(btConvexHullShape **)(this + 0x28) = this_00;
  return 1;
}

