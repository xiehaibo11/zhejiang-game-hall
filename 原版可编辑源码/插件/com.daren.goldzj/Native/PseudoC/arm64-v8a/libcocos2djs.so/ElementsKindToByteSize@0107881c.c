
/* v8::internal::ElementsKindToByteSize(v8::internal::ElementsKind) */

int v8::internal::ElementsKindToByteSize(undefined1 param_1)

{
  long lVar1;
  
  lVar1 = 0;
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
    lVar1 = 2;
    break;
  case 4:
  case 5:
  case 0x18:
  case 0x1a:
  case 0x1b:
    lVar1 = 3;
    break;
  case 0x11:
  case 0x12:
  case 0x19:
    break;
  case 0x13:
  case 0x14:
    lVar1 = 1;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return 1 << lVar1;
}

