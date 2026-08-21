
/* cocos2d::Physics3DShape::initCapsule(float, float) */

undefined8 __thiscall
cocos2d::Physics3DShape::initCapsule(Physics3DShape *this,float param_1,float param_2)

{
  btCapsuleShape *this_00;
  
                    /* catch() { ... } // from try @ 01017960 with catch @ 01017a20 */
  *(undefined4 *)(this + 0x24) = 4;
  this_00 = (btCapsuleShape *)btAlignedAllocInternal(0x48,0x10);
  btCapsuleShape::btCapsuleShape(this_00,param_1,param_2);
  *(btCapsuleShape **)(this + 0x28) = this_00;
  return 1;
}

