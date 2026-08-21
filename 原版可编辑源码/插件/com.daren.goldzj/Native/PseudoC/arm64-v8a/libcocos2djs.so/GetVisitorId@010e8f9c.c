
/* v8::internal::Map::GetVisitorId(v8::internal::Map) */

undefined4 v8::internal::Map::GetVisitorId(long param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = *(ushort *)(param_1 + 7);
  if (uVar2 < 0x40) {
    uVar4 = 0x28;
    switch(uVar2 & 7) {
    case 0:
      uVar4 = 4;
      if ((uVar2 & 8) == 0) {
        uVar4 = 5;
      }
      break;
    case 1:
      uVar4 = 0x27;
      if ((uVar2 & 0xffe7) != 0x21) {
        uVar4 = 0xc;
      }
      break;
    case 2:
switchD_010e8fd8_caseD_2:
      uVar4 = 2;
      break;
    case 3:
      break;
    default:
switchD_010e8fd8_caseD_4:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    case 5:
      uVar4 = 0x30;
    }
  }
  else {
    uVar4 = 1;
    switch(uVar2) {
    case 0x40:
      uVar4 = 0x2e;
      break;
    case 0x41:
      uVar4 = 0;
      break;
    case 0x42:
    case 0x46:
    case 0x9e:
    case 0xa0:
      goto switchD_010e8fd8_caseD_2;
    case 0x43:
      uVar4 = 0x21;
      break;
    case 0x44:
      uVar4 = 0x2c;
      break;
    case 0x45:
      uVar4 = 0x2f;
      break;
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x5a:
    case 0x5b:
    case 0x5c:
    case 0x5e:
    case 0x5f:
    case 0x60:
    case 0x61:
    case 0x62:
    case 99:
    case 100:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
      if (uVar2 == 100) {
        uVar4 = 0x25;
      }
      else if (uVar2 == 0x70) {
        uVar4 = 0x34;
      }
      else {
        uVar4 = 0x35;
        if (uVar2 != 0x74) {
          uVar4 = 0x2d;
        }
      }
      break;
    case 0x4c:
    case 0x4d:
      uVar4 = 0xe;
      break;
    case 0x55:
      uVar4 = 7;
      break;
    case 0x59:
    case 0xa9:
      uVar4 = 0x2d;
      break;
    case 0x5d:
      uVar4 = 0x12;
      break;
    case 0x76:
    case 0x77:
    case 0x79:
    case 0x7a:
    case 0x7b:
    case 0x7c:
    case 0x7d:
    case 0x7e:
    case 0x7f:
    case 0x80:
    case 0x81:
    case 0x82:
    case 0x83:
    case 0x84:
      uVar4 = 0x14;
      break;
    case 0x78:
      uVar4 = 0x11;
      break;
    case 0x85:
      break;
    case 0x86:
      uVar4 = 8;
      break;
    case 0x87:
      uVar4 = 3;
      break;
    case 0x88:
    case 0x89:
    case 0x8a:
    case 0x8b:
    case 0x8c:
    case 0x8d:
    case 0x8e:
    case 0x90:
    case 0x91:
      uVar4 = 0xd;
      break;
    case 0x8f:
      uVar4 = 0x20;
      break;
    case 0x92:
      uVar4 = 0x29;
      break;
    case 0x93:
      uVar4 = 0x2a;
      break;
    case 0x94:
      uVar4 = 0x2b;
      break;
    case 0x95:
      uVar4 = 0x33;
      break;
    case 0x96:
      uVar4 = 0x32;
      break;
    case 0x97:
    case 0xa7:
      uVar4 = 0x37;
      break;
    case 0x98:
      uVar4 = 0x31;
      break;
    case 0x99:
      uVar4 = 9;
      break;
    case 0x9a:
      uVar4 = 10;
      break;
    case 0x9b:
      uVar4 = 0xb;
      break;
    case 0x9c:
      uVar4 = 0xf;
      break;
    case 0x9d:
      uVar4 = 0x10;
      break;
    case 0x9f:
      uVar4 = 0x13;
      break;
    case 0xa1:
      uVar4 = 0x15;
      break;
    case 0xa2:
      uVar4 = 0x1f;
      break;
    case 0xa3:
      uVar4 = 0x22;
      break;
    case 0xa4:
      uVar4 = 0x23;
      break;
    case 0xa5:
      uVar4 = 0x24;
      break;
    case 0xa6:
      uVar4 = 0x26;
      break;
    case 0xa8:
      uVar4 = 0x38;
      break;
    case 0xaa:
    case 0xab:
    case 0x410:
    case 0x420:
      uVar4 = 0x16;
      break;
    case 0xac:
    case 0x411:
    case 0x412:
    case 0x413:
    case 0x414:
    case 0x415:
    case 0x416:
    case 0x417:
    case 0x418:
    case 0x419:
    case 0x41c:
    case 0x41d:
    case 0x421:
    case 0x422:
    case 0x423:
    case 0x425:
    case 0x426:
    case 0x427:
    case 0x428:
    case 0x429:
    case 0x42a:
    case 0x42b:
    case 0x42c:
    case 0x42d:
    case 0x42e:
    case 0x42f:
    case 0x430:
    case 0x432:
    case 0x433:
    case 0x435:
    case 0x436:
    case 0x437:
    case 0x438:
      bVar1 = *(byte *)(param_1 + 3);
      if (bVar1 == 0) {
        uVar4 = 0x1b;
      }
      else {
        if (uVar2 == 0x421) {
          iVar3 = 0xc;
        }
        else {
          iVar3 = JSObject::GetHeaderSize(uVar2,*(char *)(param_1 + 9) < '\0');
        }
        uVar4 = 0x1a;
        if ((int)((((int)((uint)bVar1 * 4 - iVar3) >> 2) - (uint)*(byte *)(param_1 + 3)) +
                 (uint)*(byte *)(param_1 + 4)) < 2) {
          uVar4 = 0x1b;
        }
      }
      break;
    default:
      goto switchD_010e8fd8_caseD_4;
    case 0x41a:
      uVar4 = 0x18;
      break;
    case 0x41b:
      uVar4 = 0x1c;
      break;
    case 0x41e:
    case 0x41f:
      uVar4 = 0x1e;
      break;
    case 0x424:
      uVar4 = 0x17;
      break;
    case 0x431:
      uVar4 = 0x1d;
      break;
    case 0x434:
      uVar4 = 0x36;
      break;
    case 0x439:
      uVar4 = 0x19;
    }
  }
  return uVar4;
}

