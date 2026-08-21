
/* cocos2d::Physics3DShape::createCapsule(float, float) */

Ref * cocos2d::Physics3DShape::createCapsule(float param_1,float param_2)

{
  Ref *this;
  btCapsuleShape *this_00;
  
                    /* try { // try from 01017960 to 01117967 has its CatchHandler @ 01017a20 */
  this = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
                    /* try { // try from 01017990 to 01117997 has its CatchHandler @ 01017a10 */
    *(undefined8 *)(this + 0x2c) = 0;
    *(undefined8 *)(this + 0x24) = 0;
    *(undefined8 *)(this + 0x3c) = 0;
    *(undefined8 *)(this + 0x34) = 0;
                    /* try { // try from 01017998 to 01117a33 has its CatchHandler @ 01017908 */
    *(undefined ***)this = &PTR__Physics3DShape_01726930;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
  }
  *(undefined4 *)(this + 0x24) = 4;
  this_00 = (btCapsuleShape *)btAlignedAllocInternal(0x48,0x10);
  btCapsuleShape::btCapsuleShape(this_00,param_1,param_2);
  *(btCapsuleShape **)(this + 0x28) = this_00;
  Ref::autorelease(this);
  return this;
}

