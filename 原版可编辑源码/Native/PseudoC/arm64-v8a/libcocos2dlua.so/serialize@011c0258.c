
/* btPoint2PointConstraint::serialize(void*, btSerializer*) const */

char * __thiscall
btPoint2PointConstraint::serialize
          (btPoint2PointConstraint *this,void *param_1,btSerializer *param_2)

{
  btTypedConstraint::serialize((btTypedConstraint *)this,param_1,param_2);
  *(undefined4 *)((long)param_1 + 0x40) = *(undefined4 *)(this + 0x144);
  *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)(this + 0x148);
  *(undefined4 *)((long)param_1 + 0x48) = *(undefined4 *)(this + 0x14c);
  *(undefined4 *)((long)param_1 + 0x4c) = *(undefined4 *)(this + 0x150);
  *(undefined4 *)((long)param_1 + 0x50) = *(undefined4 *)(this + 0x154);
  *(undefined4 *)((long)param_1 + 0x54) = *(undefined4 *)(this + 0x158);
  *(undefined4 *)((long)param_1 + 0x58) = *(undefined4 *)(this + 0x15c);
  *(undefined4 *)((long)param_1 + 0x5c) = *(undefined4 *)(this + 0x160);
  return "btPoint2PointConstraintFloatData";
}

