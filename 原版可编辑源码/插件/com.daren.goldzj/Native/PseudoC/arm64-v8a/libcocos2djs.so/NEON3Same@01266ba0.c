
/* v8::internal::Assembler::NEON3Same(v8::internal::VRegister const&, v8::internal::VRegister
   const&, v8::internal::VRegister const&, v8::internal::NEON3SameOp) */

void __thiscall
v8::internal::Assembler::NEON3Same
          (Assembler *this,ulong *param_1,int *param_2,int *param_3,uint param_5)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((long)param_1 + 0xc) == 1) {
    uVar2 = *param_1;
    iVar3 = (int)(uVar2 >> 0x20);
    iVar1 = iVar3 + 7;
    if (-1 < (long)uVar2) {
      iVar1 = iVar3;
    }
    if (7 < (iVar1 >> 3) - 1U) {
switchD_01266bf8_caseD_3:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar4 = 0;
    param_5 = param_5 | 0x50000000;
    switch(iVar1 >> 3) {
    case 1:
      break;
    case 2:
      goto switchD_01266bf8_caseD_2;
    default:
      goto switchD_01266bf8_caseD_3;
    case 4:
switchD_01266bf8_caseD_4:
      uVar4 = 0x800000;
      break;
    case 8:
      uVar4 = 0xc00000;
    }
  }
  else {
    uVar2 = *param_1;
    iVar1 = *(int *)((long)param_1 + 0xc);
    if (uVar2 >> 0x20 != 0x40) {
      uVar4 = 0x40c00000;
      switch(iVar1 - 2U >> 1 | iVar1 << 0x1f) {
      case 0:
        break;
      case 1:
        uVar4 = 0x40800000;
        break;
      default:
        goto switchD_01266bf8_caseD_3;
      case 3:
        uVar4 = 0x40400000;
        break;
      case 7:
        uVar4 = 0x40000000;
      }
      goto switchD_01266bf8_caseD_1;
    }
    if (iVar1 == 2) goto switchD_01266bf8_caseD_4;
    if (iVar1 == 8) {
      uVar4 = 0;
      goto switchD_01266bf8_caseD_1;
    }
    if (iVar1 != 4) goto switchD_01266bf8_caseD_3;
switchD_01266bf8_caseD_2:
    uVar4 = 0x400000;
  }
switchD_01266bf8_caseD_1:
  Emit(this,uVar4 | param_5 | *param_3 << 0x10 | *param_2 << 5 | (uint)uVar2);
  return;
}

