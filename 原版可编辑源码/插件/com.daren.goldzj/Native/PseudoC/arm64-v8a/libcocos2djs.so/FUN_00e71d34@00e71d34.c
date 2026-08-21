
void FUN_00e71d34(undefined8 *param_1)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *local_28;
  
  local_28 = (byte *)*param_1;
  pbVar7 = (byte *)param_1[2];
  while (local_28 < pbVar7) {
    bVar1 = *local_28;
    if (0x25 < bVar1) break;
    if ((1L << ((ulong)bVar1 & 0x3f) & 0x100003601U) == 0) {
      if ((ulong)bVar1 != 0x25) break;
      bVar3 = 0x25;
      while ((local_28 = local_28 + 1, bVar1 != 10 && (bVar3 != 0xd))) {
        if (pbVar7 <= local_28) goto LAB_00e71d80;
        bVar1 = *local_28;
        bVar3 = bVar1;
      }
    }
    else {
LAB_00e71d80:
      local_28 = local_28 + 1;
    }
  }
  if (pbVar7 <= local_28) goto joined_r0x00e71e20;
  switch(*local_28) {
  case 0x28:
    uVar4 = FUN_00e787ec(&local_28,pbVar7);
    uVar5 = uVar4;
    if (pbVar7 <= local_28) goto LAB_00e71ee0;
    goto LAB_00e71ed0;
  case 0x2f:
    local_28 = local_28 + 1;
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3d:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5c:
switchD_00e71e08_caseD_29:
    if (local_28 < pbVar7) {
      do {
        switch(*local_28) {
        case 0:
        case 9:
        case 10:
        case 0xc:
        case 0xd:
        case 0x20:
        case 0x25:
        case 0x28:
        case 0x29:
        case 0x2f:
        case 0x3c:
        case 0x3e:
        case 0x5b:
        case 0x5d:
        case 0x7b:
        case 0x7d:
          goto switchD_00e71e98_caseD_0;
        }
        local_28 = local_28 + 1;
      } while (local_28 < pbVar7);
switchD_00e71e98_caseD_0:
      uVar4 = 0;
    }
    else {
joined_r0x00e71e20:
      uVar4 = 0;
    }
    break;
  case 0x3c:
    pbVar6 = local_28 + 1;
    if (pbVar6 < pbVar7) {
      if (*pbVar6 != 0x3c) {
LAB_00e71fb0:
        do {
          bVar1 = *pbVar6;
          if (bVar1 < 0x26) {
            if ((1L << ((ulong)bVar1 & 0x3f) & 0x100003601U) == 0) {
              if ((ulong)bVar1 != 0x25) goto LAB_00e71fd4;
              bVar3 = 0x25;
              while ((pbVar6 = pbVar6 + 1, bVar1 != 10 && (bVar3 != 0xd))) {
                if (pbVar7 <= pbVar6) goto LAB_00e71fc8;
                bVar1 = *pbVar6;
                bVar3 = bVar1;
              }
            }
            else {
LAB_00e71fc8:
              pbVar6 = pbVar6 + 1;
            }
            if (pbVar6 < pbVar7) goto LAB_00e71fb0;
          }
LAB_00e71fd4:
          if ((pbVar7 <= pbVar6) ||
             (((9 < *pbVar6 - 0x30 &&
               ((uVar2 = *pbVar6 - 0x41, 0x25 < uVar2 ||
                ((1L << ((ulong)uVar2 & 0x3f) & 0x3f0000003fU) == 0)))) ||
              (pbVar6 = pbVar6 + 1, pbVar7 <= pbVar6)))) goto LAB_00e71fdc;
        } while( true );
      }
LAB_00e72028:
      uVar4 = 0;
      local_28 = local_28 + 2;
    }
    else {
LAB_00e71fdc:
      if ((pbVar6 < pbVar7) && (*pbVar6 != 0x3e)) {
        uVar4 = 3;
        local_28 = pbVar6;
      }
      else {
        uVar4 = 0;
        local_28 = pbVar6 + 1;
      }
    }
    break;
  case 0x3e:
    pbVar6 = local_28 + 1;
    if ((pbVar6 < pbVar7) && (*pbVar6 == 0x3e)) goto LAB_00e72028;
    uVar4 = 3;
    local_28 = pbVar6;
    break;
  case 0x5b:
  case 0x5d:
    local_28 = local_28 + 1;
    goto joined_r0x00e71e20;
  default:
    if (*local_28 != 0x7b) goto switchD_00e71e08_caseD_29;
    uVar4 = FUN_00e785c4(&local_28,pbVar7);
  }
  uVar5 = uVar4;
  if (local_28 < pbVar7) {
LAB_00e71ed0:
    uVar5 = 3;
    if (local_28 != (byte *)*param_1) {
      uVar5 = uVar4;
    }
  }
LAB_00e71ee0:
  if (pbVar7 < local_28) {
    local_28 = pbVar7;
  }
  *(undefined4 *)(param_1 + 3) = uVar5;
  *param_1 = local_28;
  return;
}

