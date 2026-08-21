
/* v8::internal::Assembler::NEONByElementL(v8::internal::VRegister const&, v8::internal::VRegister
   const&, v8::internal::VRegister const&, int, v8::internal::NEONByIndexedElementOp) */

void __thiscall
v8::internal::Assembler::NEONByElementL
          (Assembler *this,uint *param_1,ulong *param_2,int *param_3,uint param_4,uint param_6)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_1[3] == 1) {
    uVar3 = *param_2;
    iVar5 = (int)(uVar3 >> 0x20);
    iVar1 = iVar5 + 7;
    if (-1 < (long)uVar3) {
      iVar1 = iVar5;
    }
    if (7 < (iVar1 >> 3) - 1U) {
switchD_012692f4_caseD_3:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar6 = 0;
    param_6 = param_6 | 0x50000000;
    switch(iVar1 >> 3) {
    case 1:
      goto switchD_012692f4_caseD_1;
    case 2:
      goto switchD_012692f4_caseD_2;
    default:
      goto switchD_012692f4_caseD_3;
    case 4:
switchD_012692f4_caseD_4:
      uVar6 = 0x800000;
      goto joined_r0x012693f0;
    case 8:
      uVar6 = 0xc00000;
      goto joined_r0x012693f0;
    }
  }
  uVar3 = *param_2;
  iVar1 = *(int *)((long)param_2 + 0xc);
  if (uVar3 >> 0x20 == 0x40) {
    if (iVar1 == 2) goto switchD_012692f4_caseD_4;
    if (iVar1 == 8) {
      uVar6 = 0;
      goto joined_r0x012693f0;
    }
    if (iVar1 != 4) goto switchD_012692f4_caseD_3;
switchD_012692f4_caseD_2:
    uVar6 = 0x400000;
  }
  else {
    uVar6 = 0x40c00000;
    switch(iVar1 - 2U >> 1 | iVar1 << 0x1f) {
    case 1:
      uVar6 = 0x40800000;
    case 0:
switchD_012692f4_caseD_1:
      break;
    default:
      goto switchD_012692f4_caseD_3;
    case 3:
      uVar6 = 0x40400000;
      break;
    case 7:
      uVar6 = 0x40000000;
    }
  }
joined_r0x012693f0:
  if (param_3[1] == 0x10) {
    uVar2 = param_4 >> 1;
    uVar7 = (int)param_4 >> 2;
    uVar4 = (param_4 & 1) << 0x14;
  }
  else {
    uVar4 = 0;
    uVar7 = (int)param_4 >> 1;
    uVar2 = param_4;
  }
  Emit(this,uVar6 | param_6 | (uVar7 & 1) << 0xb | uVar4 | (uVar2 & 1) << 0x15 | *param_3 << 0x10 |
            (int)uVar3 << 5 | *param_1);
  return;
}

