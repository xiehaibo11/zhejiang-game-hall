
/* cocos2d::Physics3DShape::createConvexHull(cocos2d::Vec3 const*, int) */

Ref * cocos2d::Physics3DShape::createConvexHull(Vec3 *param_1,int param_2)

{
  Ref *this;
  btConvexHullShape *this_00;
  
  this = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined8 *)(this + 0x2c) = 0;
    *(undefined8 *)(this + 0x24) = 0;
    *(undefined8 *)(this + 0x3c) = 0;
    *(undefined8 *)(this + 0x34) = 0;
    *(undefined ***)this = &PTR__Physics3DShape_01726930;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
  }
  *(undefined4 *)(this + 0x24) = 5;
  this_00 = (btConvexHullShape *)btAlignedAllocInternal(0x90,0x10);
  btConvexHullShape::btConvexHullShape(this_00,(float *)param_1,param_2,0xc);
  *(btConvexHullShape **)(this + 0x28) = this_00;
  Ref::autorelease(this);
  return this;
}

