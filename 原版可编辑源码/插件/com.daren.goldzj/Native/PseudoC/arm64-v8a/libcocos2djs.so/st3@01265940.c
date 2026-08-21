
/* v8::internal::Assembler::st3(v8::internal::VRegister const&, v8::internal::VRegister const&,
   v8::internal::VRegister const&, int, v8::internal::MemOperand const&) */

void __thiscall
v8::internal::Assembler::st3
          (Assembler *this,VRegister *param_1,VRegister *param_2,VRegister *param_3,int param_4,
          MemOperand *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar2 = (iVar1 >> 3) / *(int *)(param_1 + 0xc);
  }
  uVar3 = iVar2 * param_4;
  if (iVar2 == 8) {
    uVar3 = uVar3 + 1;
  }
  if (iVar2 - 1U < 4) {
    uVar4 = *(uint *)(&DAT_019f3600 + (long)(int)(iVar2 - 1U) * 4);
  }
  else {
    uVar4 = 0xd00a400;
  }
  uVar5 = (*(uint *)param_5 & 0x1f) << 5;
  if (*(int *)(param_5 + 0x20) == 2) {
    if (*(long *)(param_5 + 0x18) == 0) {
      uVar5 = uVar5 | *(int *)(param_5 + 0xc) << 0x10 | 0x800000;
    }
    else {
      uVar5 = uVar5 | 0x9f0000;
    }
  }
  Emit(this,uVar3 << 10 & 0xc00 | (uVar3 & 8) << 0x1b | uVar3 << 10 & 0x1000 | uVar4 | uVar5 |
            *(uint *)param_1);
  return;
}

