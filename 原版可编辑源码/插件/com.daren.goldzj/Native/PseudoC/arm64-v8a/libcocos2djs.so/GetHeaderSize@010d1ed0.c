
/* v8::internal::JSObject::GetHeaderSize(v8::internal::InstanceType, bool) */

undefined4 v8::internal::JSObject::GetHeaderSize(ushort param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (0x40f < param_1) {
    switch(param_1) {
    case 0x410:
    case 0x420:
    case 0x421:
    case 0x422:
    case 0x427:
    case 0x429:
      return 0xc;
    case 0x411:
    case 0x41c:
    case 0x41d:
    case 0x41e:
    case 0x41f:
    case 0x423:
    case 0x42b:
    case 0x431:
      goto switchD_010d1f00_caseD_411;
    case 0x412:
    case 0x413:
    case 0x414:
    case 0x415:
    case 0x416:
    case 0x426:
    case 0x42d:
    case 0x430:
    case 0x432:
      return 0x14;
    case 0x417:
    case 0x41a:
    case 0x42a:
      return 0x28;
    case 0x418:
      return 0x2c;
    case 0x419:
    case 0x428:
    case 0x42c:
      return 0x30;
    case 0x41b:
      return 0x34;
    case 0x424:
    case 0x437:
      return 0x20;
    case 0x425:
    case 0x42e:
    case 0x42f:
    case 0x435:
    case 0x438:
      return 0x18;
    case 0x433:
    case 0x436:
      return 0x1c;
    case 0x434:
      return 0xc4;
    case 0x439:
      uVar1 = 0x20;
      if ((param_2 & 1) == 0) {
        uVar1 = 0x1c;
      }
      return uVar1;
    default:
      goto switchD_010d1f00_default;
    }
  }
  if (param_1 == 0xaa) {
    return 0x14;
  }
  if ((param_1 != 0xab) && (param_1 != 0xac)) {
switchD_010d1f00_default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
switchD_010d1f00_caseD_411:
  return 0x10;
}

