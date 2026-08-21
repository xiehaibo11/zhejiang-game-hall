
/* v8::internal::Assembler::fmulx(v8::internal::VRegister const&, v8::internal::VRegister const&,
   v8::internal::VRegister const&, int) */

void __thiscall
v8::internal::Assembler::fmulx
          (Assembler *this,VRegister *param_1,VRegister *param_2,VRegister *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0xc);
  uVar1 = 0x7f809000;
  if (iVar2 != 1) {
    uVar1 = 0x2f809000;
  }
  iVar5 = (int)((ulong)*(undefined8 *)param_1 >> 0x20);
  if (iVar2 == 2) {
    uVar4 = 0x40400000;
    if (iVar5 != 0x80) {
      uVar4 = 0;
    }
  }
  else if (iVar2 == 1) {
    uVar4 = (uint)(iVar5 == 0x40) << 0x16;
  }
  else {
    uVar4 = 0x40000000;
  }
  uVar3 = (param_4 & 1U) << 0x15;
  if (*(int *)(param_3 + 4) != 0x20) {
    uVar3 = 0;
  }
  Emit(this,uVar1 | uVar3 | (uint)*(undefined8 *)param_1 |
            ((uint)param_4 >> (*(int *)(param_3 + 4) == 0x20) & 1) << 0xb | uVar4 |
            *(int *)param_3 << 0x10 | *(int *)param_2 << 5);
  return;
}

