
/* btCapsuleShapeZ::btCapsuleShapeZ(float, float) */

void __thiscall btCapsuleShapeZ::btCapsuleShapeZ(btCapsuleShapeZ *this,float param_1,float param_2)

{
  btConvexInternalShape::btConvexInternalShape((btConvexInternalShape *)this);
  *(undefined4 *)(this + 8) = 10;
  *(float *)(this + 0x28) = param_1;
  *(float *)(this + 0x2c) = param_1;
  *(undefined4 *)(this + 0x40) = 2;
  *(undefined ***)this = &PTR__btConvexShape_01732a30;
  *(float *)(this + 0x30) = param_2 * 0.5;
  *(undefined4 *)(this + 0x34) = 0;
  return;
}

