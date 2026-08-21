
/* btCapsuleShape::btCapsuleShape(float, float) */

void __thiscall btCapsuleShape::btCapsuleShape(btCapsuleShape *this,float param_1,float param_2)

{
  btConvexInternalShape::btConvexInternalShape((btConvexInternalShape *)this);
  *(undefined4 *)(this + 8) = 10;
  *(undefined4 *)(this + 0x40) = 1;
  *(undefined ***)this = &PTR__btConvexShape_01732880;
  *(float *)(this + 0x28) = param_1;
  *(float *)(this + 0x2c) = param_2 * 0.5;
  *(float *)(this + 0x30) = param_1;
  *(undefined4 *)(this + 0x34) = 0;
  return;
}

