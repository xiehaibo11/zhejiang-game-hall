
/* btConeTwistConstraint::serialize(void*, btSerializer*) const */

char * __thiscall
btConeTwistConstraint::serialize(btConeTwistConstraint *this,void *param_1,btSerializer *param_2)

{
  undefined8 uVar1;
  
  btTypedConstraint::serialize((btTypedConstraint *)this,param_1,param_2);
  *(undefined4 *)((long)param_1 + 0x40) = *(undefined4 *)(this + 0x144);
  *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)(this + 0x148);
  *(undefined4 *)((long)param_1 + 0x48) = *(undefined4 *)(this + 0x14c);
  *(undefined4 *)((long)param_1 + 0x4c) = *(undefined4 *)(this + 0x150);
  *(undefined4 *)((long)param_1 + 0x50) = *(undefined4 *)(this + 0x154);
  *(undefined4 *)((long)param_1 + 0x54) = *(undefined4 *)(this + 0x158);
  *(undefined4 *)((long)param_1 + 0x58) = *(undefined4 *)(this + 0x15c);
  *(undefined4 *)((long)param_1 + 0x5c) = *(undefined4 *)(this + 0x160);
  *(undefined4 *)((long)param_1 + 0x60) = *(undefined4 *)(this + 0x164);
  *(undefined4 *)((long)param_1 + 100) = *(undefined4 *)(this + 0x168);
  *(undefined4 *)((long)param_1 + 0x68) = *(undefined4 *)(this + 0x16c);
  *(undefined4 *)((long)param_1 + 0x6c) = *(undefined4 *)(this + 0x170);
  *(undefined4 *)((long)param_1 + 0x70) = *(undefined4 *)(this + 0x174);
  *(undefined4 *)((long)param_1 + 0x74) = *(undefined4 *)(this + 0x178);
  *(undefined4 *)((long)param_1 + 0x78) = *(undefined4 *)(this + 0x17c);
  *(undefined4 *)((long)param_1 + 0x7c) = *(undefined4 *)(this + 0x180);
  *(undefined4 *)((long)param_1 + 0x80) = *(undefined4 *)(this + 0x184);
  *(undefined4 *)((long)param_1 + 0x84) = *(undefined4 *)(this + 0x188);
  *(undefined4 *)((long)param_1 + 0x88) = *(undefined4 *)(this + 0x18c);
  *(undefined4 *)((long)param_1 + 0x8c) = *(undefined4 *)(this + 400);
  *(undefined4 *)((long)param_1 + 0x90) = *(undefined4 *)(this + 0x194);
  *(undefined4 *)((long)param_1 + 0x94) = *(undefined4 *)(this + 0x198);
  *(undefined4 *)((long)param_1 + 0x98) = *(undefined4 *)(this + 0x19c);
  *(undefined4 *)((long)param_1 + 0x9c) = *(undefined4 *)(this + 0x1a0);
  *(undefined4 *)((long)param_1 + 0xa0) = *(undefined4 *)(this + 0x1a4);
  *(undefined4 *)((long)param_1 + 0xa4) = *(undefined4 *)(this + 0x1a8);
  *(undefined4 *)((long)param_1 + 0xa8) = *(undefined4 *)(this + 0x1ac);
  *(undefined4 *)((long)param_1 + 0xac) = *(undefined4 *)(this + 0x1b0);
  *(undefined4 *)((long)param_1 + 0xb0) = *(undefined4 *)(this + 0x1b4);
  *(undefined4 *)((long)param_1 + 0xb4) = *(undefined4 *)(this + 0x1b8);
  *(undefined4 *)((long)param_1 + 0xb8) = *(undefined4 *)(this + 0x1bc);
  *(undefined4 *)((long)param_1 + 0xbc) = *(undefined4 *)(this + 0x1c0);
  *(undefined4 *)((long)param_1 + 0xc0) = *(undefined4 *)(this + 0x1d4);
  *(undefined4 *)((long)param_1 + 0xc4) = *(undefined4 *)(this + 0x1d8);
  *(undefined4 *)((long)param_1 + 200) = *(undefined4 *)(this + 0x1dc);
  uVar1 = *(undefined8 *)(this + 0x1c4);
  *(undefined8 *)((long)param_1 + 0xd4) = *(undefined8 *)(this + 0x1cc);
  *(undefined8 *)((long)param_1 + 0xcc) = uVar1;
  return "btConeTwistConstraintData";
}

