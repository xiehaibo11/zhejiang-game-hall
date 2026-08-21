
/* btSliderConstraint::serialize(void*, btSerializer*) const */

char * __thiscall
btSliderConstraint::serialize(btSliderConstraint *this,void *param_1,btSerializer *param_2)

{
  btTypedConstraint::serialize((btTypedConstraint *)this,param_1,param_2);
  *(undefined4 *)((long)param_1 + 0x40) = *(undefined4 *)(this + 0x4c);
  *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)(this + 0x50);
  *(undefined4 *)((long)param_1 + 0x48) = *(undefined4 *)(this + 0x54);
  *(undefined4 *)((long)param_1 + 0x4c) = *(undefined4 *)(this + 0x58);
  *(undefined4 *)((long)param_1 + 0x50) = *(undefined4 *)(this + 0x5c);
  *(undefined4 *)((long)param_1 + 0x54) = *(undefined4 *)(this + 0x60);
  *(undefined4 *)((long)param_1 + 0x58) = *(undefined4 *)(this + 100);
  *(undefined4 *)((long)param_1 + 0x5c) = *(undefined4 *)(this + 0x68);
  *(undefined4 *)((long)param_1 + 0x60) = *(undefined4 *)(this + 0x6c);
  *(undefined4 *)((long)param_1 + 100) = *(undefined4 *)(this + 0x70);
  *(undefined4 *)((long)param_1 + 0x68) = *(undefined4 *)(this + 0x74);
  *(undefined4 *)((long)param_1 + 0x6c) = *(undefined4 *)(this + 0x78);
  *(undefined4 *)((long)param_1 + 0x70) = *(undefined4 *)(this + 0x7c);
  *(undefined4 *)((long)param_1 + 0x74) = *(undefined4 *)(this + 0x80);
  *(undefined4 *)((long)param_1 + 0x78) = *(undefined4 *)(this + 0x84);
  *(undefined4 *)((long)param_1 + 0x7c) = *(undefined4 *)(this + 0x88);
  *(undefined4 *)((long)param_1 + 0x80) = *(undefined4 *)(this + 0x8c);
  *(undefined4 *)((long)param_1 + 0x84) = *(undefined4 *)(this + 0x90);
  *(undefined4 *)((long)param_1 + 0x88) = *(undefined4 *)(this + 0x94);
  *(undefined4 *)((long)param_1 + 0x8c) = *(undefined4 *)(this + 0x98);
  *(undefined4 *)((long)param_1 + 0x90) = *(undefined4 *)(this + 0x9c);
  *(undefined4 *)((long)param_1 + 0x94) = *(undefined4 *)(this + 0xa0);
  *(undefined4 *)((long)param_1 + 0x98) = *(undefined4 *)(this + 0xa4);
  *(undefined4 *)((long)param_1 + 0x9c) = *(undefined4 *)(this + 0xa8);
  *(undefined4 *)((long)param_1 + 0xa0) = *(undefined4 *)(this + 0xac);
  *(undefined4 *)((long)param_1 + 0xa4) = *(undefined4 *)(this + 0xb0);
  *(undefined4 *)((long)param_1 + 0xa8) = *(undefined4 *)(this + 0xb4);
  *(undefined4 *)((long)param_1 + 0xac) = *(undefined4 *)(this + 0xb8);
  *(undefined4 *)((long)param_1 + 0xb0) = *(undefined4 *)(this + 0xbc);
  *(undefined4 *)((long)param_1 + 0xb4) = *(undefined4 *)(this + 0xc0);
  *(undefined4 *)((long)param_1 + 0xb8) = *(undefined4 *)(this + 0xc4);
  *(undefined4 *)((long)param_1 + 0xbc) = *(undefined4 *)(this + 200);
  *(undefined4 *)((long)param_1 + 0xc0) = *(undefined4 *)(this + 0xd4);
  *(undefined4 *)((long)param_1 + 0xc4) = *(undefined4 *)(this + 0xd0);
  *(undefined4 *)((long)param_1 + 200) = *(undefined4 *)(this + 0xdc);
  *(undefined4 *)((long)param_1 + 0xcc) = *(undefined4 *)(this + 0xd8);
  *(uint *)((long)param_1 + 0xd0) = (uint)(byte)this[0xcc];
  *(uint *)((long)param_1 + 0xd4) = (uint)(byte)this[0x49];
  return "btSliderConstraintData";
}

