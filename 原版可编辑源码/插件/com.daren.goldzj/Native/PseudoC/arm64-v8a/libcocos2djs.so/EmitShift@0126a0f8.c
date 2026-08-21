
/* v8::internal::Assembler::EmitShift(v8::internal::Register const&, v8::internal::Register const&,
   v8::internal::Shift, unsigned int) */

void __thiscall
v8::internal::Assembler::EmitShift
          (Assembler *this,ulong *param_1,int *param_2,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  switch(param_4) {
  case 0:
    iVar1 = *(int *)((long)param_1 + 4);
    uVar4 = *param_1;
    iVar5 = *param_2;
    param_5 = iVar1 - param_5;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = param_5 / iVar1;
    }
    uVar8 = param_5 * 0x400 - 0x400U | (param_5 - iVar2 * iVar1) * 0x10000;
    break;
  case 1:
    uVar4 = *param_1;
    iVar5 = *param_2;
    uVar8 = *(int *)((long)param_1 + 4) * 0x400 - 0x400U | param_5 << 0x10;
    break;
  case 2:
    uVar4 = *param_1;
    iVar5 = *param_2;
    uVar8 = *(int *)((long)param_1 + 4) * 0x400 - 0x400U | param_5 << 0x10;
    uVar7 = 0x13000000;
    goto LAB_0126a1e4;
  case 3:
    iVar5 = *param_2;
    uVar3 = (uint)(*param_1 >> 0x20 == 0x40) << 0x1f;
    uVar6 = iVar5 << 0x10;
    uVar8 = (uint)*param_1 | param_5 << 10;
    uVar7 = 0x13800000;
    uVar9 = uVar3;
    goto LAB_0126a1e8;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  uVar7 = 0x53000000;
LAB_0126a1e4:
  uVar6 = (uint)(uVar4 >> 0x20 == 0x40) << 0x1f;
  uVar3 = (uint)uVar4;
  uVar9 = uVar6;
LAB_0126a1e8:
  Emit(this,uVar8 | uVar3 | uVar6 | iVar5 << 5 | uVar9 >> 9 | uVar7);
  return;
}

