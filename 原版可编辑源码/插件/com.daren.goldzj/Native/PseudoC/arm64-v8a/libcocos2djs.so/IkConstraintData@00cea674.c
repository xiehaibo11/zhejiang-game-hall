
/* spine::IkConstraintData::IkConstraintData(spine::String const&) */

void __thiscall spine::IkConstraintData::IkConstraintData(IkConstraintData *this,String *param_1)

{
  ConstraintData::ConstraintData((ConstraintData *)this,param_1);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)this = &PTR__IkConstraintData_01c8ee58;
  *(undefined2 *)(this + 0x5c) = 0;
  this[0x5e] = (IkConstraintData)0x0;
  *(undefined8 *)(this + 0x60) = 0x3f800000;
  *(undefined ***)(this + 0x30) = &PTR__Vector_01c8d0f0;
  *(undefined4 *)(this + 0x58) = 1;
  return;
}

