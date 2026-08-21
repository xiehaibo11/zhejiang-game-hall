
/* v8::internal::Assembler::mov(v8::internal::VRegister const&, v8::internal::VRegister const&, int)
    */

void __thiscall
v8::internal::Assembler::mov(Assembler *this,VRegister *param_1,VRegister *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = *(int *)(param_2 + 4);
  iVar1 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    iVar2 = (iVar1 >> 3) / *(int *)(param_2 + 0xc);
  }
  if (iVar2 - 1U < 4) {
    uVar3 = *(undefined4 *)(&DAT_019f35b0 + (long)(int)(iVar2 - 1U) * 4);
  }
  else {
    uVar3 = 0x40c00000;
  }
  if (*(int *)(param_1 + 0xc) == 1) {
    uVar6 = 0x40000000;
    uVar5 = 0x1e000400;
  }
  else {
    uVar5 = 0xe000400;
    if (*(int *)(param_1 + 8) == 1) {
      uVar6 = (uint)(*(int *)(param_1 + 4) != 0x40) << 0x1e;
    }
    else {
      uVar6 = 0x40000000;
    }
  }
  uVar4 = LaneSizeInBytesLog2FromFormat(uVar3);
  Emit(this,uVar6 | uVar5 | *(int *)param_2 << 5 | *(uint *)param_1 |
            (param_3 << (ulong)(uVar4 + 1 & 0x1f) | 1 << (ulong)(uVar4 & 0x1f)) << 0x10);
  return;
}

