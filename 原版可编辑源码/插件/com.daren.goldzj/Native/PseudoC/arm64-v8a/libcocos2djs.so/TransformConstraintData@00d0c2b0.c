
/* spine::TransformConstraintData::TransformConstraintData(spine::String const&) */

void __thiscall
spine::TransformConstraintData::TransformConstraintData
          (TransformConstraintData *this,String *param_1)

{
  ConstraintData::ConstraintData((ConstraintData *)this,param_1);
  *(undefined8 *)(this + 0x7a) = 0;
  *(undefined8 *)(this + 0x72) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)this = &PTR__TransformConstraintData_01c8f850;
  *(undefined ***)(this + 0x30) = &PTR__Vector_01c8d0f0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  return;
}

