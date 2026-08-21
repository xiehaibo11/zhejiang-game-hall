
/* v8::internal::compiler::Truncation::Generalize(v8::internal::compiler::Truncation::TruncationKind,
   v8::internal::compiler::Truncation::TruncationKind) */

uint v8::internal::compiler::Truncation::Generalize(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2;
  switch(param_1 & 0xff) {
  case 0:
    goto switchD_017a2608_caseD_0;
  case 1:
    uVar1 = param_2 | 4;
    goto LAB_017a2618;
  case 2:
    if ((param_2 - 2 & 0xff) < 4) {
      return param_2;
    }
    break;
  case 3:
    if ((param_2 - 3 & 0xff) < 3) {
      return param_2;
    }
    break;
  case 4:
    uVar1 = param_2 | 1;
LAB_017a2618:
    if ((uVar1 & 0xff) == 5) {
      return param_2;
    }
    break;
  case 5:
    uVar1 = 5;
    switch(param_2 & 0xff) {
    case 0:
      goto switchD_017a2608_caseD_0;
    case 1:
    case 3:
    case 4:
    case 5:
      goto switchD_017a2608_caseD_0;
    case 2:
      goto switchD_017a26b0_caseD_2;
    default:
      goto switchD_017a2608_default;
    }
  default:
    goto switchD_017a2608_default;
  }
  switch(param_2 & 0xff) {
  case 0:
switchD_017a2608_caseD_0:
    return param_1;
  case 1:
    uVar2 = param_1 | 4;
    break;
  case 2:
switchD_017a26b0_caseD_2:
    if (3 < (param_1 - 2 & 0xff)) {
      param_1 = 5;
    }
    return param_1;
  case 3:
    if ((param_1 - 3 & 0xff) < 3) {
      return param_1;
    }
    goto LAB_017a2704;
  case 4:
    uVar2 = param_1 | 1;
    break;
  case 5:
    if ((param_1 - 1 & 0xff) < 4) {
      return 5;
    }
  default:
    goto switchD_017a2608_default;
  }
  uVar1 = param_1;
  if ((uVar2 & 0xff) == 5) {
switchD_017a2608_caseD_0:
    return uVar1;
  }
LAB_017a2704:
  if ((param_1 & 0xff) - 2 < 3) {
    if ((param_2 - 1 & 0xff) < 4) {
      return 0x4040405 >> (ulong)((param_2 - 1 & 3) << 3);
    }
  }
  else if ((param_1 & 0xff) == 1) {
    return 5;
  }
switchD_017a2608_default:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

