
/* v8::internal::Assembler::mov(v8::internal::Register const&, v8::internal::VRegister const&, int)
    */

void __thiscall
v8::internal::Assembler::mov(Assembler *this,Register *param_1,VRegister *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar5;
  uint uVar6;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_2 + 4);
  iVar1 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    iVar2 = (iVar1 >> 3) / *(int *)(param_2 + 0xc);
  }
  uVar6 = iVar2 - 1;
  if (uVar6 < 4) {
    uVar5 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
    uVar6 = *(uint *)(&DAT_019f35a0 + uVar5);
    uVar4 = *(undefined4 *)(&DAT_019f35b0 + uVar5);
  }
  else {
    uVar4 = 0x40c00000;
    uVar6 = 0x4e003c00;
  }
  uVar3 = LaneSizeInBytesLog2FromFormat(uVar4);
  Emit(this,uVar6 | *(int *)param_2 << 5 | *(uint *)param_1 |
            (param_3 << (ulong)(uVar3 + 1 & 0x1f) | 1 << (ulong)(uVar3 & 0x1f)) << 0x10);
  return;
}

