
/* cocos2d::Physics3DShape::Physics3DShape() */

void __thiscall cocos2d::Physics3DShape::Physics3DShape(Physics3DShape *this)

{
  Ref::Ref((Ref *)this);
                    /* try { // try from 010173dc to 011173e7 has its CatchHandler @ 01017464 */
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x34) = 0;
                    /* try { // try from 010173e8 to 0111740b has its CatchHandler @ 010171dc */
  *(undefined ***)this = &PTR__Physics3DShape_01726930;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  return;
}

