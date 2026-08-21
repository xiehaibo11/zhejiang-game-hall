
undefined8 FUN_00a1a234(undefined8 param_1,uint *param_2,byte *param_3,ulong param_4)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar5;
  
  if (-1 < (char)*param_3) {
    *param_2 = (uint)*param_3;
    return 1;
  }
  uVar3 = FUN_00a20158(param_1,param_2);
  if ((int)uVar3 != -1) {
    return uVar3;
  }
  bVar2 = *param_3;
  uVar6 = bVar2 - 0xa2;
  uVar4 = (uint)bVar2;
  uVar5 = (uint)bVar2;
  if (((0x35 < uVar6) || ((1L << ((ulong)uVar6 & 0x3f) & 0x200000000000fdU) == 0)) &&
     (bVar2 != 0xfe)) {
    if ((uVar5 + 0x7f & 0xff) < 4) {
      if (param_4 < 2) {
        return 0xfffffffe;
      }
      if (9 < param_3[1] - 0x30) {
        return 0xffffffff;
      }
      if (param_4 < 3) {
        return 0xfffffffe;
      }
      bVar2 = param_3[2];
      if (bVar2 < 0x81) {
        return 0xffffffff;
      }
      if (bVar2 == 0xff) {
        return 0xffffffff;
      }
      if (param_4 < 4) {
        return 0xfffffffe;
      }
      if (9 < param_3[3] - 0x30) {
        return 0xffffffff;
      }
      uVar6 = ((uint)param_3[3] + ((uint)bVar2 + ((uint)param_3[1] + uVar5 * 10) * 0x7e) * 10) -
              0x19beb2;
      if (0x99fb < uVar6) {
        return 0xffffffff;
      }
      if (uVar6 == 0x1d21) {
        uVar6 = 0xe7c7;
      }
      else {
        uVar7 = 0;
        uVar9 = 0xcd;
        do {
          uVar1 = uVar9 + uVar7;
          uVar11 = uVar1 >> 1;
          if (*(ushort *)(&DAT_01339ba0 + (ulong)(uVar1 | 1) * 2) < uVar6) {
            if (uVar6 < *(ushort *)(&DAT_01339ba0 + (ulong)(uVar1 + 2 & 0xfffffffe) * 2))
            goto switchD_00a1a368_caseD_1;
            uVar7 = (uVar1 >> 1) + 1;
            uVar11 = uVar9;
          }
          uVar9 = uVar11;
        } while (uVar7 < uVar11);
        uVar6 = uVar6 + *(ushort *)(&DAT_01339ed8 + (ulong)uVar7 * 2);
      }
      goto LAB_00a1a7f0;
    }
    goto switchD_00a1a368_caseD_1;
  }
  if (param_4 < 2) {
    return 0xfffffffe;
  }
  bVar2 = param_3[1];
  if ((-2 < (char)bVar2) && (0x3e < (byte)(bVar2 - 0x40))) goto switchD_00a1a368_caseD_1;
  iVar8 = 0x40;
  if ((char)bVar2 < '\0') {
    iVar8 = 0x41;
  }
  iVar8 = ((uint)bVar2 - iVar8) + uVar5 * 0xbe;
  uVar7 = iVar8 - 0x5fbe;
  switch((ulong)uVar6) {
  case 0:
    if (iVar8 - 0x78a6U < 6) {
      uVar7 = iVar8 + 0x6ec0;
      goto LAB_00a1a720;
    }
    if (uVar7 == 0x1920) {
      uVar7 = 0x20ac;
      goto LAB_00a1a720;
    }
    if (uVar7 == 0x1921) {
      uVar7 = 0xe76d;
      goto LAB_00a1a720;
    }
    if ((uVar7 & 0xfffffffe) == 0x192c) {
      iVar8 = 0xce42;
    }
    else {
      if ((uVar7 & 0xfffffffe) != 0x193a) goto LAB_00a1a72c;
      iVar8 = 0xce36;
    }
LAB_00a1a710:
    uVar7 = uVar7 + iVar8;
LAB_00a1a714:
    if (uVar7 != 0xfffd) {
LAB_00a1a720:
      *param_2 = uVar7;
      return 2;
    }
  case 1:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
switchD_00a1a368_caseD_1:
    if ((uVar4 + 0x56 & 0xff) < 6) {
LAB_00a1a2e4:
      if (param_4 < 2) {
        return 0xfffffffe;
      }
      bVar2 = param_3[1];
      if ((0xa0 < bVar2) && (bVar2 != 0xff)) {
        iVar8 = -0xf2;
        if (uVar5 < 0xf8) {
          iVar8 = -0xaa;
        }
        iVar10 = 0xdf5f;
        iVar8 = (uint)bVar2 + (iVar8 + uVar4) * 0x5e;
        goto LAB_00a1a768;
      }
    }
    else {
LAB_00a1a2d4:
      if ((0xf7 < uVar4) && (uVar4 != 0xff)) goto LAB_00a1a2e4;
      if ((uVar4 + 0x5f & 0xff) < 7) {
        if (param_4 < 2) {
          return 0xfffffffe;
        }
        goto LAB_00a1a72c;
      }
    }
    if (0x53 < (uVar5 + 0x70 & 0xff)) {
      return 0xffffffff;
    }
    if (param_4 < 2) {
      return 0xfffffffe;
    }
    break;
  case 2:
    if (iVar8 - 0x7a6bU < 0xb) {
      iVar8 = 0xccc5;
      goto LAB_00a1a710;
    }
    goto LAB_00a1a72c;
  case 3:
    if (iVar8 - 0x7b2cU < 8) {
      iVar8 = 0xcc0f;
      goto LAB_00a1a710;
    }
    goto LAB_00a1a72c;
  case 4:
    if (iVar8 - 0x7bacU < 8) {
      uVar7 = iVar8 + 0x6bd9;
      goto LAB_00a1a720;
    }
    if (iVar8 - 0x7bcdU < 2) {
      uVar7 = 0x11a21 - uVar7;
      goto LAB_00a1a720;
    }
    if (iVar8 - 0x7bccU < 9) {
      uVar7 = iVar8 + 0x8244;
      goto LAB_00a1a720;
    }
    if (iVar8 - 0x7bdfU < 2) {
      uVar7 = iVar8 + 0x8238;
      goto LAB_00a1a720;
    }
    if (uVar7 == 0x1c28) {
      uVar7 = 0xfe19;
      goto LAB_00a1a720;
    }
    if (iVar8 - 0x7be9U < 9) {
      iVar8 = 0xcb6c;
      goto LAB_00a1a710;
    }
    goto LAB_00a1a72c;
  case 5:
    if (iVar8 - 0x7c73U < 0xf) {
      uVar7 = iVar8 + 0x6b2d;
      goto LAB_00a1a720;
    }
    if (iVar8 - 0x7ca3U < 0xd) {
      iVar8 = 0xcaca;
      goto LAB_00a1a710;
    }
LAB_00a1a72c:
    bVar2 = param_3[1];
    if ((bVar2 != 0x7f) && ((byte)(bVar2 - 0x40) < 0x62)) {
      iVar8 = -0x41;
      if (-1 < (char)bVar2) {
        iVar8 = -0x40;
      }
      iVar10 = 0xa866;
      iVar8 = (uint)bVar2 + uVar5 * 0x60 + iVar8;
LAB_00a1a768:
      *param_2 = iVar8 + iVar10;
      return 2;
    }
    break;
  case 6:
    if (iVar8 - 0x7d05U < 0xb) {
      uVar7 = iVar8 + 0x6ab7;
      goto LAB_00a1a720;
    }
    if (uVar7 == 0x1d6d) {
      uVar7 = 0x1e3f;
      goto LAB_00a1a720;
    }
    if (uVar7 == 0x1d70) {
      uVar7 = 0x1f9;
      goto LAB_00a1a720;
    }
    if (iVar8 - 0x7d30U < 4) {
      uVar7 = iVar8 + 0x6a99;
      goto LAB_00a1a720;
    }
    if (iVar8 - 0x7d59U < 0x15) {
      iVar8 = 0xca32;
      goto LAB_00a1a710;
    }
    break;
  case 7:
    if (uVar7 == 0x1dc8) {
      uVar7 = 0xe7e2;
      goto LAB_00a1a720;
    }
    if (uVar7 == 0x1dcb) {
      uVar7 = 0xe7e3;
      goto LAB_00a1a720;
    }
    if (iVar8 - 0x7d8bU < 3) {
      uVar7 = iVar8 + 0x6a59;
      goto LAB_00a1a720;
    }
    if (iVar8 - 0x7db6U < 0xd) {
      uVar7 = (uint)*(ushort *)(&DAT_01339a04 + (ulong)(iVar8 - 0x7db6U) * 2);
      goto LAB_00a1a714;
    }
    if (iVar8 - 0x7dc4U < 0xd) {
      uVar7 = iVar8 + 0x6a30;
      goto LAB_00a1a720;
    }
    if (iVar8 - 0x7e1dU < 0xf) {
      iVar8 = 0xc9a2;
      goto LAB_00a1a710;
    }
    break;
  case 0x35:
    if (iVar8 - 0xa04bU < 5) {
      iVar8 = 0xa783;
      goto LAB_00a1a710;
    }
    break;
  default:
    if (uVar5 != 0xfe) goto switchD_00a1a368_caseD_1;
    if (uVar7 < 0x5d26) {
      uVar7 = *(uint *)(&DAT_01339a20 + (ulong)(iVar8 - 0xbc84) * 4);
      goto LAB_00a1a714;
    }
    goto LAB_00a1a2d4;
  }
  if (9 < param_3[1] - 0x30) {
    return 0xffffffff;
  }
  if (2 < param_4) {
    bVar2 = param_3[2];
    if (bVar2 < 0x81) {
      return 0xffffffff;
    }
    if (bVar2 == 0xff) {
      return 0xffffffff;
    }
    if (3 < param_4) {
      if (9 < param_3[3] - 0x30) {
        return 0xffffffff;
      }
      iVar8 = (uint)param_3[3] + ((uint)bVar2 + ((uint)param_3[1] + uVar5 * 10) * 0x7e) * 10;
      if (iVar8 - 0x1ca0faU >> 0x14 != 0) {
        return 0xffffffff;
      }
      uVar6 = iVar8 - 0x1ba0fa;
LAB_00a1a7f0:
      *param_2 = uVar6;
      return 4;
    }
  }
  return 0xfffffffe;
}

