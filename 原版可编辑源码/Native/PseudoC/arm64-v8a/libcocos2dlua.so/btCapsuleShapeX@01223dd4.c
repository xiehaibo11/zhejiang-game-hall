
/* btCapsuleShapeX::btCapsuleShapeX(float, float) */

void __thiscall btCapsuleShapeX::btCapsuleShapeX(btCapsuleShapeX *this,float param_1,float param_2)

{
  btConvexInternalShape::btConvexInternalShape((btConvexInternalShape *)this);
  *(undefined4 *)(this + 8) = 10;
  *(undefined4 *)(this + 0x40) = 0;
  *(float *)(this + 0x2c) = param_1;
  *(float *)(this + 0x30) = param_1;
  *(undefined ***)this = &PTR__btConvexShape_01732968;
  *(float *)(this + 0x28) = param_2 * 0.5;
  *(undefined4 *)(this + 0x34) = 0;
  return;
}

