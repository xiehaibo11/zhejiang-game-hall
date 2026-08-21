
/* v8::internal::Assembler::ldpsw(v8::internal::Register const&, v8::internal::Register const&,
   v8::internal::MemOperand const&) */

void __thiscall
v8::internal::Assembler::ldpsw
          (Assembler *this,Register *param_1,Register *param_2,MemOperand *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = *(int *)param_2;
  uVar2 = *(uint *)param_3;
  iVar3 = *(int *)(param_3 + 0x18);
  uVar4 = *(uint *)param_1;
  uVar5 = CalcLSPairDataSize(0x40400000);
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
  Emit(this,iVar1 << 10 | uVar4 | (uVar2 & 0x1f) << 5 | (iVar3 >> (uVar5 & 0x1f) & 0x7fU) << 0xf |
            uVar6 | 0x40400000);
  return;
}

