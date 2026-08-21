
/* v8::internal::Assembler::orr(v8::internal::VRegister const&, int, int) */

void __thiscall
v8::internal::Assembler::orr(Assembler *this,VRegister *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = param_3 >> 4;
  if (iVar1 == 0x80) {
    if (*(int *)(param_1 + 0xc) == 0x10) {
LAB_012689a4:
      iVar2 = 1;
      uVar4 = 0x8000;
      uVar3 = 1;
      goto LAB_012689d8;
    }
    uVar3 = (uint)param_3 >> 3 & 1;
    if (*(int *)(param_1 + 0xc) != 8) {
LAB_012689d4:
      uVar4 = 0;
      goto LAB_012689d8;
    }
  }
  else {
    if (iVar1 != 0x40) {
      uVar4 = 0;
      uVar3 = (uint)param_3 >> 3 & 1;
      goto LAB_012689d8;
    }
    if (*(int *)(param_1 + 0xc) == 8) goto LAB_012689a4;
    uVar3 = (uint)param_3 >> 3 & 1;
    if (*(int *)(param_1 + 0xc) != 4) goto LAB_012689d4;
  }
  uVar4 = 0x8000;
LAB_012689d8:
  uVar5 = 0x40000000;
  if (*(int *)(param_1 + 8) != 1 || iVar1 != 0x80) {
    uVar5 = 0;
  }
  Emit(this,(param_2 & 0xe0U) << 0xb | (param_2 & 0x1fU) << 5 | uVar4 | iVar2 << 0xe | uVar3 << 0xd
            | *(uint *)param_1 | uVar5 | 0xf001400);
  return;
}

