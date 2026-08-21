
undefined4 FUN_0104e820(long param_1,ulong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  char *pcVar11;
  long lVar12;
  undefined1 uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  undefined4 uVar17;
  long local_50;
  int local_48;
  
  bVar9 = (byte)param_2;
  puVar1 = (uint *)(param_1 + 0x106);
  uVar14 = *puVar1;
  if ((uVar14 >> 0xe & 1) != 0) {
    local_50 = 0;
    local_48 = 0;
    FUN_0104907c(param_1);
    bVar5 = true;
    iVar8 = 8;
    goto LAB_0104e8a4;
  }
  if ((*(byte *)(param_1 + 0x2f4) >> 6 & 1) != 0) goto LAB_0104e970;
  uVar10 = (uint)param_2;
  switch(*(undefined1 *)(param_1 + 0x301)) {
  case 0:
    uVar16 = uVar14 & 0xfffff7ff;
    *puVar1 = uVar16;
    if (*(char *)(param_1 + 0x2fd) != '\r') {
      _lws_log(1,"unknown spec version %02d\n");
      return 0;
    }
    uVar2 = uVar10 & 0xf;
    *(char *)(param_1 + 0xff) = (char)uVar2;
    uVar17 = 0xffffffff;
    switch(uVar2) {
    case 0:
      if ((uVar14 >> 8 & 1) == 0) goto LAB_0104e970;
      goto LAB_0104eefc;
    case 1:
      *(byte *)(param_1 + 0x101) = bVar9 & 0x70;
      *puVar1 = uVar16 | 0x100;
      uVar16 = uVar14 & 0xfffff000 |
               uVar14 & 0x3ff | 0x100 |
               (*(uint *)(*(long *)(param_1 + 0x220) + 0xc78) >> 8 & 1) << 10;
      break;
    case 2:
      *(byte *)(param_1 + 0x101) = bVar9 & 0x70;
      uVar16 = uVar14 & 0xfffff3ff | 0x100;
      goto LAB_0104eef8;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
      goto switchD_0104e9f8_caseD_3;
    case 8:
      uVar16 = uVar14 & 0xfffff3ff;
      break;
    default:
      uVar16 = uVar14 | 0x800;
LAB_0104eef8:
      *puVar1 = uVar16;
LAB_0104eefc:
      *(byte *)(param_1 + 0x100) = bVar9 & 0x70;
      goto joined_r0x0104eeec;
    }
    *puVar1 = uVar16;
    *(undefined1 *)(param_1 + 0x103) = 0;
    *(byte *)(param_1 + 0x100) = bVar9 & 0x70;
joined_r0x0104eeec:
    if (((param_2 & 0x70) == 0) || (*(char *)(param_1 + 0x2fc) != '\0')) {
      uVar4 = (uVar10 & 0xff) >> 7;
      uVar14 = uVar16 & 0xfffffffe | uVar4;
      *puVar1 = uVar14;
      if ((1 < uVar2 - 1) || ((uVar16 >> 9 & 1) == 0)) {
        if ((uVar10 >> 3 & 1) == 0) {
          if (uVar4 != 0) {
            uVar14 = uVar16 & 0xfffffcfe | uVar4;
            *puVar1 = uVar14;
          }
joined_r0x0104ef40:
          if (uVar4 == 0) {
            uVar14 = uVar14 | 0x200;
            *puVar1 = uVar14;
          }
          if (uVar2 - 1 < 2) {
            *puVar1 = uVar14 & 0xfffffffc | uVar14 & 1 | (uint)(uVar2 == 2) << 1;
          }
          *(undefined1 *)(param_1 + 0x301) = 5;
          return 0;
        }
        if (uVar4 != 0) goto joined_r0x0104ef40;
      }
    }
    goto LAB_0104e970;
  default:
    uVar17 = 1;
    _lws_log(1,"client rx illegal state\n");
    break;
  case 5:
    uVar16 = uVar10 >> 7 & 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0104ea00 with catch @ 0104ea24
                        */
    *puVar1 = uVar14 & 0xfffffff0 | uVar14 & 7 | uVar16 << 3;
    if ((uVar10 & 0x7f) == 0x7f) {
      if ((*(byte *)(param_1 + 0xff) >> 3 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x301) = 8;
        return 0;
      }
    }
    else {
      if ((uVar10 & 0x7f) != 0x7e) {
        *(ulong *)(param_1 + 0x60) = (ulong)(uVar10 & 0xff);
        if (uVar16 != 0) goto LAB_0104ec6c;
        param_2 = param_2 & 0xff;
        goto joined_r0x0104eba4;
      }
      if ((*(byte *)(param_1 + 0xff) >> 3 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x301) = 6;
        return 0;
      }
    }
    pcVar11 = "Control frame asking for extended length is illegal\n";
    goto LAB_0104ec84;
  case 6:
    uVar13 = 7;
    lVar12 = (ulong)(uVar10 & 0xff) << 8;
LAB_0104ea7c:
    uVar17 = 0;
    *(long *)(param_1 + 0x60) = lVar12;
    *(undefined1 *)(param_1 + 0x301) = uVar13;
    break;
  case 7:
  case 0xf:
    uVar15 = *(ulong *)(param_1 + 0x60) | (ulong)(uVar10 & 0xff);
    *(ulong *)(param_1 + 0x60) = uVar15;
    if ((uVar14 >> 3 & 1) != 0) {
LAB_0104ec6c:
      *(undefined1 *)(param_1 + 0x301) = 0x10;
      return 0;
    }
    if (uVar15 == 0) goto LAB_0104ecb0;
LAB_0104eba8:
    uVar17 = 0;
    *(undefined1 *)(param_1 + 0x301) = 0x14;
    break;
  case 8:
    if (-1 < (char)bVar9) {
      lVar12 = param_2 << 0x38;
      uVar13 = 9;
      goto LAB_0104ea7c;
    }
    pcVar11 = "b63 of length must be zero\n";
LAB_0104ec84:
    _lws_log(2,pcVar11);
LAB_0104e970:
    uVar17 = 0xffffffff;
    break;
  case 9:
    uVar13 = 10;
    uVar15 = *(ulong *)(param_1 + 0x60) | (ulong)(uVar10 & 0xff) << 0x30;
    goto LAB_0104eb14;
  case 10:
    uVar13 = 0xb;
    uVar15 = *(ulong *)(param_1 + 0x60) | (ulong)(uVar10 & 0xff) << 0x28;
    goto LAB_0104eb14;
  case 0xb:
                    /* try { // try from 0104eabc to 0114eabf has its CatchHandler @ 0104eae8 */
                    /* try { // try from 0104eac0 to 0114eb0f has its CatchHandler @ 0104e988 */
    uVar13 = 0xc;
    uVar15 = *(ulong *)(param_1 + 0x60) | (ulong)(uVar10 & 0xff) << 0x20;
    goto LAB_0104eb14;
  case 0xc:
    uVar13 = 0xd;
    uVar15 = *(ulong *)(param_1 + 0x60) | (ulong)(uVar10 & 0xff) << 0x18;
    goto LAB_0104eb14;
  case 0xd:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0104eabc with catch @ 0104eae8
                        */
    uVar13 = 0xe;
    uVar15 = *(ulong *)(param_1 + 0x60) | (ulong)(uVar10 & 0xff) << 0x10;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0104e9b8 with catch @ 0104eafc
                        */
    goto LAB_0104eb14;
  case 0xe:
    uVar13 = 0xf;
    uVar15 = *(ulong *)(param_1 + 0x60) | (ulong)(uVar10 & 0xff) << 8;
LAB_0104eb14:
    uVar17 = 0;
    *(ulong *)(param_1 + 0x60) = uVar15;
    *(undefined1 *)(param_1 + 0x301) = uVar13;
    break;
  case 0x10:
    *(byte *)(param_1 + 0x6c) = bVar9;
    if ((param_2 & 0xff) != 0) {
      *puVar1 = uVar14 & 0xfffffffb;
    }
    uVar17 = 0;
    *(undefined1 *)(param_1 + 0x301) = 0x11;
    break;
  case 0x11:
    *(byte *)(param_1 + 0x6d) = bVar9;
    if ((param_2 & 0xff) != 0) {
      *puVar1 = uVar14 & 0xfffffffb;
    }
    uVar17 = 0;
    *(undefined1 *)(param_1 + 0x301) = 0x12;
    break;
  case 0x12:
    *(byte *)(param_1 + 0x6e) = bVar9;
    if ((param_2 & 0xff) != 0) {
      *puVar1 = uVar14 & 0xfffffffb;
    }
    uVar17 = 0;
    *(undefined1 *)(param_1 + 0x301) = 0x13;
    break;
  case 0x13:
    *(byte *)(param_1 + 0x6f) = bVar9;
    if ((param_2 & 0xff) != 0) {
      *puVar1 = uVar14 & 0xfffffffb;
    }
    param_2 = *(ulong *)(param_1 + 0x60);
joined_r0x0104eba4:
    if (param_2 != 0) goto LAB_0104eba8;
LAB_0104ecb0:
    *(undefined1 *)(param_1 + 0x301) = 0;
    goto LAB_0104ecb4;
  case 0x14:
    if ((uVar14 & 0xc) == 8) {
      bVar3 = *(byte *)(param_1 + 0xfe);
      *(byte *)(param_1 + 0xfe) = bVar3 + 1;
                    /* try { // try from 0104ebdc to 0114ebdf has its CatchHandler @ 0104ec18 */
      bVar9 = *(byte *)(param_1 + ((ulong)bVar3 & 3) + 0x6c) ^ bVar9;
    }
    uVar14 = *(uint *)(param_1 + 0x68);
    *(uint *)(param_1 + 0x68) = uVar14 + 1;
    *(byte *)(*(long *)(param_1 + 0x38) + (ulong)uVar14 + 0x10) = bVar9;
    lVar12 = *(long *)(param_1 + 0x60) + -1;
    *(long *)(param_1 + 0x60) = lVar12;
    if (lVar12 == 0) goto LAB_0104ecb0;
    uVar15 = *(ulong *)(*(long *)(param_1 + 0x248) + 0x18);
    if (uVar15 == 0) {
      if (*(uint *)(param_1 + 0x68) != *(uint *)(*(long *)(param_1 + 0x220) + 0xc84)) {
        return 0;
      }
    }
    else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0104ebdc with catch @ 0104ec18
                        */
      if (uVar15 != *(uint *)(param_1 + 0x68)) {
        return 0;
      }
    }
LAB_0104ecb4:
    iVar8 = 8;
    switch(*(undefined1 *)(param_1 + 0xff)) {
    case 0:
    case 1:
    case 2:
      goto switchD_0104ecd4_caseD_0;
    default:
      local_50 = *(long *)(param_1 + 0x38) + 0x10;
      local_48 = *(undefined4 *)(param_1 + 0x68);
      FUN_010566c8(param_1,0x10,&local_50,0);
      break;
    case 8:
      lVar12 = *(long *)(param_1 + 0x38);
      if (((((*(byte *)(*(long *)(param_1 + 0x220) + 0xc79) & 1) == 0) ||
           (*(uint *)(param_1 + 0x68) < 3)) ||
          (iVar8 = FUN_01044040(param_1 + 0x103,lVar12 + 0x12,*(uint *)(param_1 + 0x68) - 2),
          iVar8 == 0)) && (*(char *)(param_1 + 0x2ff) != '\n')) {
        uVar14 = *(uint *)(param_1 + 0x68);
        if ((1 < uVar14) &&
           (((uVar10 = (uint)CONCAT11(*(undefined1 *)(lVar12 + 0x10),*(undefined1 *)(lVar12 + 0x11))
             , uVar10 < 1000 ||
             ((uVar10 - 0x3ec < 0xc && ((1 << (ulong)(uVar10 - 0x3ec & 0x1f) & 0xf07U) != 0)))) ||
            (uVar10 - 0x3f8 < 0x7c0)))) {
          *(undefined2 *)(lVar12 + 0x10) = 0xea03;
          uVar14 = *(uint *)(param_1 + 0x68);
        }
        iVar8 = FUN_01043028(*(undefined8 *)(*(long *)(param_1 + 0x248) + 8),param_1,0x26,
                             *(undefined8 *)(param_1 + 0x270),lVar12 + 0x10,uVar14);
        if (iVar8 == 0) {
          iVar8 = lws_partial_buffered(param_1);
          if (iVar8 == 0) {
            lws_write(param_1,*(long *)(param_1 + 0x38) + 0x10,*(undefined4 *)(param_1 + 0x68),4);
          }
          else {
            *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x40;
          }
          *(undefined1 *)(param_1 + 0x2ff) = 9;
        }
      }
      goto LAB_0104e970;
    case 9:
      if ((*(char *)(param_1 + 0x102) == '\0') && (-1 < *(char *)puVar1)) {
        uVar14 = *(uint *)(param_1 + 0x68);
        if (uVar14 < 0x7e) {
          memcpy((void *)(param_1 + 0x80),(void *)(*(long *)(param_1 + 0x38) + 0x10),(ulong)uVar14);
          *(char *)(param_1 + 0xfd) = (char)uVar14;
          *puVar1 = *puVar1 | 0x80;
          lws_callback_on_writable(param_1);
        }
      }
      *(undefined4 *)(param_1 + 0x68) = 0;
      break;
    case 10:
      lwsl_hexdump(*(long *)(param_1 + 0x38) + 0x10,*(undefined4 *)(param_1 + 0x68));
      if (*(char *)(param_1 + 0x303) == '\x11') {
        lws_set_timeout(param_1,0,0);
      }
      iVar8 = 9;
switchD_0104ecd4_caseD_0:
      bVar5 = false;
      local_50 = *(long *)(param_1 + 0x38) + 0x10;
      local_48 = *(int *)(param_1 + 0x68);
      if ((local_48 == 0) && (*(char *)(param_1 + 0xff) == '\n')) break;
LAB_0104e8a4:
      iVar6 = FUN_010566c8(param_1,0x16,&local_50,0);
      if (-1 < iVar6) {
        if ((!bVar5) || (local_48 != 0)) {
          if ((*puVar1 & 0xc00) == 0x400) {
            iVar7 = FUN_01044040((char *)(param_1 + 0x103),local_50,(long)local_48);
            if ((iVar7 != 0) ||
               ((((*(long *)(param_1 + 0x60) == 0 && ((*(byte *)puVar1 & 1) != 0)) && (iVar6 == 0))
                && (*(char *)(param_1 + 0x103) != '\0')))) goto LAB_0104e970;
          }
          if (((iVar8 == 9) || (-1 < local_48)) &&
             ((local_50 != 0 &&
              (*(undefined1 *)(local_50 + local_48) = 0,
              *(long *)(*(long *)(param_1 + 0x248) + 8) != 0)))) {
            if ((iVar6 == 0) || (local_48 == 0)) {
              FUN_0104907c(param_1);
              bVar9 = *(byte *)(param_1 + 0x2ff);
            }
            else {
              FUN_01049044(param_1);
              bVar9 = *(byte *)(param_1 + 0x2ff);
            }
                    /* try { // try from 0104e988 to 0114e9b7 has its CatchHandler @ 0104e988
                       catch(type#1 @ 00000000) { ... } // from try @ 0104e988 with catch @ 0104e988
                       catch(type#1 @ 00000000) { ... } // from try @ 0104eac0 with catch @ 0104e988
                        */
            if ((2 < bVar9 - 8) &&
               (iVar8 = (**(code **)(*(long *)(param_1 + 0x248) + 8))
                                  (param_1,iVar8,*(undefined8 *)(param_1 + 0x270),local_50,
                                   (long)local_48), iVar8 != 0)) {
              return 1;
            }
          }
        }
        break;
      }
      *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x40;
      goto LAB_0104e970;
    }
    uVar17 = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
switchD_0104e9f8_caseD_3:
  return uVar17;
}

