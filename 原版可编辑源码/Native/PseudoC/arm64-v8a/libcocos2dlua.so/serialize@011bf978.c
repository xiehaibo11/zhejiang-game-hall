
/* btHingeConstraint::serialize(void*, btSerializer*) const */

char * __thiscall
btHingeConstraint::serialize(btHingeConstraint *this,void *param_1,btSerializer *param_2)

{
  undefined4 uVar1;
  
  btTypedConstraint::serialize((btTypedConstraint *)this,param_1,param_2);
  *(undefined4 *)((long)param_1 + 0x40) = *(undefined4 *)(this + 0x240);
  *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)(this + 0x244);
  *(undefined4 *)((long)param_1 + 0x48) = *(undefined4 *)(this + 0x248);
  *(undefined4 *)((long)param_1 + 0x4c) = *(undefined4 *)(this + 0x24c);
  *(undefined4 *)((long)param_1 + 0x50) = *(undefined4 *)(this + 0x250);
  *(undefined4 *)((long)param_1 + 0x54) = *(undefined4 *)(this + 0x254);
  *(undefined4 *)((long)param_1 + 0x58) = *(undefined4 *)(this + 600);
  *(undefined4 *)((long)param_1 + 0x5c) = *(undefined4 *)(this + 0x25c);
  *(undefined4 *)((long)param_1 + 0x60) = *(undefined4 *)(this + 0x260);
  *(undefined4 *)((long)param_1 + 100) = *(undefined4 *)(this + 0x264);
  *(undefined4 *)((long)param_1 + 0x68) = *(undefined4 *)(this + 0x268);
  *(undefined4 *)((long)param_1 + 0x6c) = *(undefined4 *)(this + 0x26c);
  *(undefined4 *)((long)param_1 + 0x70) = *(undefined4 *)(this + 0x270);
  *(undefined4 *)((long)param_1 + 0x74) = *(undefined4 *)(this + 0x274);
  *(undefined4 *)((long)param_1 + 0x78) = *(undefined4 *)(this + 0x278);
  *(undefined4 *)((long)param_1 + 0x7c) = *(undefined4 *)(this + 0x27c);
  *(undefined4 *)((long)param_1 + 0x80) = *(undefined4 *)(this + 0x280);
  *(undefined4 *)((long)param_1 + 0x84) = *(undefined4 *)(this + 0x284);
  *(undefined4 *)((long)param_1 + 0x88) = *(undefined4 *)(this + 0x288);
  *(undefined4 *)((long)param_1 + 0x8c) = *(undefined4 *)(this + 0x28c);
  *(undefined4 *)((long)param_1 + 0x90) = *(undefined4 *)(this + 0x290);
  *(undefined4 *)((long)param_1 + 0x94) = *(undefined4 *)(this + 0x294);
  *(undefined4 *)((long)param_1 + 0x98) = *(undefined4 *)(this + 0x298);
  *(undefined4 *)((long)param_1 + 0x9c) = *(undefined4 *)(this + 0x29c);
  *(undefined4 *)((long)param_1 + 0xa0) = *(undefined4 *)(this + 0x2a0);
  *(undefined4 *)((long)param_1 + 0xa4) = *(undefined4 *)(this + 0x2a4);
  *(undefined4 *)((long)param_1 + 0xa8) = *(undefined4 *)(this + 0x2a8);
  *(undefined4 *)((long)param_1 + 0xac) = *(undefined4 *)(this + 0x2ac);
  *(undefined4 *)((long)param_1 + 0xb0) = *(undefined4 *)(this + 0x2b0);
  *(undefined4 *)((long)param_1 + 0xb4) = *(undefined4 *)(this + 0x2b4);
  *(undefined4 *)((long)param_1 + 0xb8) = *(undefined4 *)(this + 0x2b8);
  *(undefined4 *)((long)param_1 + 0xbc) = *(undefined4 *)(this + 700);
  *(uint *)((long)param_1 + 0xc4) = (uint)(byte)this[0x2f8];
  *(uint *)((long)param_1 + 200) = (uint)(byte)this[0x2f9];
  *(undefined4 *)((long)param_1 + 0xd0) = *(undefined4 *)(this + 0x2c4);
  *(undefined4 *)((long)param_1 + 0xcc) = *(undefined4 *)(this + 0x2c0);
  *(uint *)((long)param_1 + 0xc0) = (uint)(byte)this[0x2fc];
  uVar1 = btAngularLimit::getLow((btAngularLimit *)(this + 0x2c8));
  *(undefined4 *)((long)param_1 + 0xd4) = uVar1;
  uVar1 = btAngularLimit::getHigh((btAngularLimit *)(this + 0x2c8));
  *(undefined4 *)((long)param_1 + 0xd8) = uVar1;
  *(undefined4 *)((long)param_1 + 0xdc) = *(undefined4 *)(this + 0x2d0);
  *(undefined4 *)((long)param_1 + 0xe0) = *(undefined4 *)(this + 0x2d4);
  *(undefined4 *)((long)param_1 + 0xe4) = *(undefined4 *)(this + 0x2d8);
  return "btHingeConstraintFloatData";
}

