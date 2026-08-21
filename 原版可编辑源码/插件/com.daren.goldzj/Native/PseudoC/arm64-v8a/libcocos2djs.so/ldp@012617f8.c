
/* v8::internal::Assembler::ldp(v8::internal::CPURegister const&, v8::internal::CPURegister const&,
   v8::internal::MemOperand const&) */

void __thiscall
v8::internal::Assembler::ldp
          (Assembler *this,CPURegister *param_1,CPURegister *param_2,MemOperand *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(uint *)param_1;
  uVar7 = 0x44000000;
  if (iVar1 != 0x40) {
    uVar7 = 0x84000000;
  }
  iVar3 = *(int *)param_2;
  uVar5 = 0x4000000;
  if (iVar1 != 0x20) {
    uVar5 = uVar7;
  }
  uVar4 = *(uint *)param_3;
  uVar7 = (uint)(iVar1 == 0x40) << 0x1f;
  if (*(int *)(param_1 + 8) != 0) {
    uVar7 = uVar5;
  }
  iVar1 = *(int *)(param_3 + 0x18);
  uVar5 = CalcLSPairDataSize();
  if ((((*(int *)(param_3 + 0x20) == 0) && (*(int *)(param_3 + 0xc) == -1)) &&
      (*(int *)(param_3 + 0x10) == 0)) && (*(int *)(param_3 + 0x14) == 2)) {
    uVar6 = 0x29000000;
  }
  else {
    uVar6 = 0x29800000;
    if (*(int *)(param_3 + 0x20) != 1) {
      uVar6 = 0x28800000;
    }
  }
  Emit(this,uVar7 | 0x400000 | uVar2 | iVar3 << 10 | (uVar4 & 0x1f) << 5 |
            (iVar1 >> (uVar5 & 0x1f) & 0x7fU) << 0xf | uVar6);
  return;
}

