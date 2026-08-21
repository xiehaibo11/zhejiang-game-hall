
/* v8::internal::Assembler::ins(v8::internal::VRegister const&, int, v8::internal::VRegister const&,
   int) */

void __thiscall
v8::internal::Assembler::ins
          (Assembler *this,VRegister *param_1,int param_2,VRegister *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar2 = (iVar1 >> 3) / *(int *)(param_1 + 0xc);
  }
  if (iVar2 - 1U < 4) {
    uVar5 = *(undefined4 *)(&DAT_019f35b0 + (long)(int)(iVar2 - 1U) * 4);
  }
  else {
    uVar5 = 0x40c00000;
  }
  uVar3 = LaneSizeInBytesLog2FromFormat(uVar5);
  uVar4 = LaneSizeInBytesLog2FromFormat(uVar5);
  Emit(this,(param_4 << (ulong)(uVar4 & 0x1f)) << 0xb |
            (param_2 << (ulong)(uVar3 + 1 & 0x1f) | 1 << (ulong)(uVar3 & 0x1f)) << 0x10 |
            *(int *)param_3 << 5 | *(uint *)param_1 | 0x6e000400);
  return;
}

