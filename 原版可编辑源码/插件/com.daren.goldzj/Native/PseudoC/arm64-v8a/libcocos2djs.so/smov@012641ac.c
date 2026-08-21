
/* v8::internal::Assembler::smov(v8::internal::Register const&, v8::internal::VRegister const&, int)
    */

void __thiscall
v8::internal::Assembler::smov(Assembler *this,Register *param_1,VRegister *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar4 = *(int *)(param_2 + 4);
  iVar1 = iVar4 + 7;
  if (-1 < iVar4) {
    iVar1 = iVar4;
  }
  iVar4 = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    iVar4 = (iVar1 >> 3) / *(int *)(param_2 + 0xc);
  }
  uVar6 = 0x40400000;
  if (iVar4 != 2) {
    uVar6 = 0x40800000;
  }
  uVar2 = 0x40000000;
  if (iVar4 != 1) {
    uVar2 = uVar6;
  }
  uVar3 = 0xe002c00;
  if (*(int *)(param_1 + 4) != 0x20 || *(int *)(param_1 + 8) != 0) {
    uVar3 = 0x4e002c00;
  }
  uVar5 = LaneSizeInBytesLog2FromFormat(uVar2);
  Emit(this,uVar3 | *(int *)param_2 << 5 | *(uint *)param_1 |
            (param_3 << (ulong)(uVar5 + 1 & 0x1f) | 1 << (ulong)(uVar5 & 0x1f)) << 0x10);
  return;
}

