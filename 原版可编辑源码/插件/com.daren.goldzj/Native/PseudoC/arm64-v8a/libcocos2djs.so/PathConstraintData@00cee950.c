
/* spine::PathConstraintData::PathConstraintData(spine::String const&) */

void __thiscall
spine::PathConstraintData::PathConstraintData(PathConstraintData *this,String *param_1)

{
  ConstraintData::ConstraintData((ConstraintData *)this,param_1);
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)this = &PTR__PathConstraintData_01c8f010;
  *(undefined ***)(this + 0x30) = &PTR__Vector_01c8d0f0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  return;
}

