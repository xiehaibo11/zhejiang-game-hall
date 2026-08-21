
/* cocos2d::Physics3DShape::createSphere(float) */

Ref * cocos2d::Physics3DShape::createSphere(float param_1)

{
  Ref *this;
  btConvexInternalShape *this_00;
  
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
  *(undefined4 *)(this + 0x24) = 2;
  this_00 = (btConvexInternalShape *)btAlignedAllocInternal(0x40,0x10);
  btConvexInternalShape::btConvexInternalShape(this_00);
  *(float *)(this_00 + 0x28) = param_1;
  *(float *)(this_00 + 0x38) = param_1;
  *(undefined4 *)(this_00 + 8) = 8;
  *(undefined ***)this_00 = &PTR__btConvexShape_01733760;
  *(btConvexInternalShape **)(this + 0x28) = this_00;
  Ref::autorelease(this);
                    /* try { // try from 01017708 to 0111778b has its CatchHandler @ 01017708
                       catch() { ... } // from try @ 01017708 with catch @ 01017708
                       catch() { ... } // from try @ 01017794 with catch @ 01017708 */
  return this;
}

