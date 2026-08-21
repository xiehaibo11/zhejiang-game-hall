
/* v8::internal::Assembler::st4(v8::internal::VRegister const&, v8::internal::VRegister const&,
   v8::internal::VRegister const&, v8::internal::VRegister const&, int, v8::internal::MemOperand
   const&) */

void v8::internal::Assembler::st4
               (VRegister *param_1,VRegister *param_2,VRegister *param_3,VRegister *param_4,
               int param_5,MemOperand *param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *in_x6;
  uint uVar4;
  uint uVar5;
  
  iVar2 = *(int *)(param_2 + 4);
  iVar1 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    iVar2 = (iVar1 >> 3) / *(int *)(param_2 + 0xc);
  }
  uVar3 = iVar2 * (int)param_6;
  if (iVar2 == 8) {
    uVar3 = uVar3 + 1;
  }
  if (iVar2 - 1U < 4) {
    uVar4 = *(uint *)(&DAT_019f3610 + (long)(int)(iVar2 - 1U) * 4);
  }
  else {
    uVar4 = 0xd20a400;
  }
  uVar5 = (*in_x6 & 0x1f) << 5;
  if (in_x6[8] == 2) {
    if (*(long *)(in_x6 + 6) == 0) {
      uVar5 = uVar5 | in_x6[3] << 0x10 | 0x800000;
    }
    else {
      uVar5 = uVar5 | 0x9f0000;
    }
  }
  Emit((Assembler *)param_1,
       uVar3 << 10 & 0xc00 | (uVar3 & 8) << 0x1b | uVar3 << 10 & 0x1000 | uVar4 | uVar5 |
       *(uint *)param_2);
  return;
}

