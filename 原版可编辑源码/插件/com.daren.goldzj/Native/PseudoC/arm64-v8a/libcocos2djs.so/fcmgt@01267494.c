
/* v8::internal::Assembler::fcmgt(v8::internal::VRegister const&, v8::internal::VRegister const&,
   double) */

void v8::internal::Assembler::fcmgt(VRegister *param_1,VRegister *param_2,double param_3)

{
  uint uVar1;
  int iVar2;
  int *in_x2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_2 + 0xc);
  uVar1 = 0x5ea0c800;
  if (iVar2 != 1) {
    uVar1 = 0xea0c800;
  }
  iVar4 = (int)((ulong)*(undefined8 *)param_2 >> 0x20);
  if (iVar2 == 2) {
    uVar3 = 0x40400000;
    if (iVar4 != 0x80) {
      uVar3 = 0;
    }
  }
  else if (iVar2 == 1) {
    uVar3 = (uint)(iVar4 == 0x40) << 0x16;
  }
  else {
    uVar3 = 0x40000000;
  }
  Emit((Assembler *)param_1,uVar1 | (uint)*(undefined8 *)param_2 | uVar3 | *in_x2 << 5);
  return;
}

