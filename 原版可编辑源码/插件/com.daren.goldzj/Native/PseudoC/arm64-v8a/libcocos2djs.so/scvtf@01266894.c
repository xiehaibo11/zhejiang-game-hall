
/* v8::internal::Assembler::scvtf(v8::internal::VRegister const&, v8::internal::VRegister const&,
   int) */

void __thiscall
v8::internal::Assembler::scvtf(Assembler *this,VRegister *param_1,VRegister *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (param_3 == 0) {
    iVar2 = *(int *)(param_1 + 0xc);
    uVar6 = 0x5e21d800;
    if (iVar2 != 1) {
      uVar6 = 0xe21d800;
    }
    iVar5 = (int)((ulong)*(undefined8 *)param_1 >> 0x20);
    if (iVar2 == 2) {
      uVar3 = 0x40400000;
      if (iVar5 != 0x80) {
        uVar3 = 0;
      }
    }
    else if (iVar2 == 1) {
      uVar3 = (uint)(iVar5 == 0x40) << 0x16;
    }
    else {
      uVar3 = 0x40000000;
    }
    uVar6 = uVar6 | (uint)*(undefined8 *)param_1;
    uVar4 = *(int *)param_2 << 5;
  }
  else {
    iVar5 = *(int *)(param_2 + 4);
    iVar1 = *(int *)(param_2 + 0xc);
    iVar2 = iVar5 + 7;
    if (-1 < iVar5) {
      iVar2 = iVar5;
    }
    iVar5 = 0;
    if (iVar1 != 0) {
      iVar5 = (iVar2 >> 3) / iVar1;
    }
    if (iVar1 == 1) {
      uVar6 = 0x40000000;
      uVar4 = 0x10000000;
    }
    else if (*(int *)(param_1 + 8) == 1) {
      uVar4 = 0;
      uVar6 = (uint)(*(int *)(param_1 + 4) != 0x40) << 0x1e;
    }
    else {
      uVar4 = 0;
      uVar6 = 0x40000000;
    }
    uVar3 = *(uint *)param_1;
    uVar6 = (iVar5 * 0x10 - param_3) * 0x10000 | uVar4 | uVar6 | *(int *)param_2 << 5;
    uVar4 = 0xf00e400;
  }
  Emit(this,uVar6 | uVar3 | uVar4);
  return;
}

