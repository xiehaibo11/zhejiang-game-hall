
/* cocos2d::Physics3DShape::initSphere(float) */

undefined8 __thiscall cocos2d::Physics3DShape::initSphere(Physics3DShape *this,float param_1)

{
  btConvexInternalShape *this_00;
  
  *(undefined4 *)(this + 0x24) = 2;
  this_00 = (btConvexInternalShape *)btAlignedAllocInternal(0x40,0x10);
  btConvexInternalShape::btConvexInternalShape(this_00);
  *(float *)(this_00 + 0x28) = param_1;
  *(float *)(this_00 + 0x38) = param_1;
                    /* try { // try from 0101778c to 01117793 has its CatchHandler @ 010177d8 */
  *(undefined4 *)(this_00 + 8) = 8;
                    /* try { // try from 01017794 to 011177eb has its CatchHandler @ 01017708 */
  *(undefined ***)this_00 = &PTR__btConvexShape_01733760;
  *(btConvexInternalShape **)(this + 0x28) = this_00;
  return 1;
}

