
/* v8::internal::Assembler::EmitExtendShift(v8::internal::Register const&, v8::internal::Register
   const&, v8::internal::Extend, unsigned int) */

void __thiscall
v8::internal::Assembler::EmitExtendShift
          (Assembler *this,ulong *param_1,int *param_2,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar1 = *(int *)((long)param_1 + 4);
  iVar2 = *param_2;
  uVar7 = (8 << (ulong)(param_4 & 3)) - 1;
  uVar5 = iVar1 - param_5;
  uVar6 = uVar5 & iVar1 - 1U;
  if (uVar6 - 1 < uVar7) {
LAB_0126a248:
    uVar4 = *param_1;
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = (int)uVar5 / iVar1;
    }
    uVar7 = iVar2 << 5;
    uVar6 = uVar5 * 0x400 - 0x400;
    uVar5 = (uVar5 - iVar3 * iVar1) * 0x10000;
  }
  else {
    if (7 < param_4) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar9 = 1 << (ulong)(param_4 & 0x1f);
    if ((uVar9 & 7) == 0) {
      if ((uVar9 & 0x70) != 0) {
        uVar4 = *param_1;
        uVar6 = uVar6 << 0x10;
        uVar7 = uVar7 * 0x400;
        uVar5 = iVar2 << 5;
        uVar9 = 0x13000000;
        goto LAB_0126a2d4;
      }
      goto LAB_0126a248;
    }
    uVar4 = *param_1;
    uVar6 = uVar6 << 0x10;
    uVar7 = uVar7 * 0x400;
    uVar5 = iVar2 << 5;
  }
  uVar9 = 0x53000000;
LAB_0126a2d4:
  uVar8 = (uint)(uVar4 >> 0x20 == 0x40);
  Emit(this,uVar7 | uVar5 | uVar6 | (uint)uVar4 | uVar8 << 0x1f | uVar8 << 0x16 | uVar9);
  return;
}

