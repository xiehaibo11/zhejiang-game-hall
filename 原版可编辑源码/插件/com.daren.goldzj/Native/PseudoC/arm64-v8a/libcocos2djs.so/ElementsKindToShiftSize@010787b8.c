
/* v8::internal::ElementsKindToShiftSize(v8::internal::ElementsKind) */

undefined8 v8::internal::ElementsKindToShiftSize(undefined1 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x15:
  case 0x16:
  case 0x17:
    return 2;
  case 4:
  case 5:
  case 0x18:
  case 0x1a:
  case 0x1b:
    return 3;
  case 0x11:
  case 0x12:
  case 0x19:
    goto switchD_010787e8_caseD_11;
  case 0x13:
  case 0x14:
    uVar1 = 1;
switchD_010787e8_caseD_11:
    return uVar1;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
}

