
undefined4 FUN_010490d8(long param_1,ulong param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  byte bVar9;
  uint uVar10;
  char *pcVar11;
  undefined1 uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long local_40;
  int local_38;
  
  bVar9 = (byte)param_2;
  local_40 = 0;
  local_38 = 0;
  if ((*(byte *)(param_1 + 0x2f4) >> 6 & 1) != 0) {
    return 0xffffffff;
  }
  uVar10 = (uint)param_2;
  switch(*(undefined1 *)(param_1 + 0x301)) {
  case 0:
    puVar1 = (uint *)(param_1 + 0x106);
    uVar13 = *puVar1;
    if ((uVar13 >> 0xe & 1) == 0) {
      if (*(char *)(param_1 + 0x2fd) != '\r') {
        _lws_log(2,"lws_rx_sm: unknown spec version %d\n");
        return 0;
      }
      uVar13 = uVar13 | 4;
      *puVar1 = uVar13;
      goto LAB_01049208;
    }
    local_40 = 0;
    local_38 = 0;
    *puVar1 = uVar13 & 0xffffbfff;
    plVar16 = (long *)(*(long *)(param_1 + 0x220) + (ulong)*(byte *)(param_1 + 0x304) * 0x6f8 + 0xe8
                      );
    lVar15 = *plVar16;
    while (lVar15 != 0) {
      if (lVar15 == param_1) {
        *plVar16 = *(long *)(param_1 + 0x48);
        break;
      }
      plVar16 = (long *)(lVar15 + 0x48);
      lVar15 = *plVar16;
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    iVar5 = 6;
    bVar4 = true;
    goto LAB_01049640;
  case 1:
    *(byte *)(param_1 + 0x6d) = bVar9;
    if ((param_2 & 0xff) != 0) {
                    /* try { // try from 01049188 to 011491c3 has its CatchHandler @ 010492d4 */
      *(uint *)(param_1 + 0x106) = *(uint *)(param_1 + 0x106) & 0xfffffffb;
    }
    *(undefined1 *)(param_1 + 0x301) = 2;
    break;
  case 2:
    *(byte *)(param_1 + 0x6e) = bVar9;
    if ((param_2 & 0xff) != 0) {
      *(uint *)(param_1 + 0x106) = *(uint *)(param_1 + 0x106) & 0xfffffffb;
    }
                    /* try { // try from 010491c4 to 0114925f has its CatchHandler @ 01048e8c */
    *(undefined1 *)(param_1 + 0x301) = 3;
    break;
  case 3:
    *(byte *)(param_1 + 0x6f) = bVar9;
    if ((param_2 & 0xff) != 0) {
      *(uint *)(param_1 + 0x106) = *(uint *)(param_1 + 0x106) & 0xfffffffb;
    }
    *(undefined1 *)(param_1 + 0xfe) = 0;
    *(undefined1 *)(param_1 + 0x301) = 4;
    break;
  case 4:
    uVar13 = *(uint *)(param_1 + 0x106);
LAB_01049208:
    uVar3 = uVar10 & 0xf;
    uVar10 = uVar10 >> 7 & 1;
    *(char *)(param_1 + 0xff) = (char)uVar3;
    *(byte *)(param_1 + 0x100) = bVar9 & 0x70;
    *(uint *)(param_1 + 0x106) = uVar13 & 0xfffffffe | uVar10;
    if (uVar3 < 0x10) {
      if ((1 << (ulong)uVar3 & 0xf8f8U) != 0) {
        return 0xffffffff;
      }
      if ((1 << (ulong)uVar3 & 6U) != 0) {
        *(byte *)(param_1 + 0x101) = bVar9 & 0x70;
        *(uint *)(param_1 + 0x106) =
             uVar13 & 0xfffdfffc | uVar10 | (uint)(uVar3 == 2) << 1 | 0x20000;
      }
    }
                    /* try { // try from 01049260 to 01149267 has its CatchHandler @ 0104926c */
                    /* catch() { ... } // from try @ 010490a4 with catch @ 01049268
                       try { // try from 01049268 to 0114935b has its CatchHandler @ 01048e8c */
    *(undefined1 *)(param_1 + 0x301) = 5;
    return 0;
                    /* catch() { ... } // from try @ 01049148 with catch @ 0104926c
                       catch() { ... } // from try @ 01049260 with catch @ 0104926c */
  case 5:
                    /* catch() { ... } // from try @ 01048f9c with catch @ 01049270 */
                    /* catch() { ... } // from try @ 01048f4c with catch @ 01049274 */
    uVar13 = *(uint *)(param_1 + 0x106);
                    /* catch() { ... } // from try @ 01048f18 with catch @ 01049278 */
    uVar3 = uVar10 >> 7 & 1;
                    /* catch() { ... } // from try @ 01048f08 with catch @ 0104927c */
    *(uint *)(param_1 + 0x106) = uVar13 & 0xfffffff0 | uVar13 & 7 | uVar3 << 3;
                    /* catch() { ... } // from try @ 01049054 with catch @ 0104928c */
    if ((uVar10 & 0x7f) == 0x7f) {
      if ((*(byte *)(param_1 + 0xff) >> 3 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x301) = 8;
        return 0;
      }
    }
    else {
                    /* catch() { ... } // from try @ 01048fb4 with catch @ 01049290 */
      if ((uVar10 & 0x7f) != 0x7e) {
        *(ulong *)(param_1 + 0x60) = (ulong)(uVar10 & 0x7f);
        if (uVar3 != 0) {
          *(undefined1 *)(param_1 + 0x301) = 0x10;
          return 0;
        }
        if ((param_2 & 0x7f) != 0) {
          *(undefined1 *)(param_1 + 0x301) = 0x14;
          return 0;
        }
        goto LAB_01049434;
      }
      if ((*(byte *)(param_1 + 0xff) >> 3 & 1) == 0) {
                    /* catch() { ... } // from try @ 01048f64 with catch @ 010492a4 */
        *(undefined1 *)(param_1 + 0x301) = 6;
        return 0;
      }
    }
    pcVar11 = "Control frame with xtended length is illegal\n";
    goto LAB_010495f8;
  case 6:
    uVar12 = 7;
    lVar15 = (ulong)(uVar10 & 0xff) << 8;
LAB_010492d8:
    *(long *)(param_1 + 0x60) = lVar15;
    *(undefined1 *)(param_1 + 0x301) = uVar12;
    break;
  case 7:
  case 0xf:
    *(ulong *)(param_1 + 0x60) = *(ulong *)(param_1 + 0x60) | (ulong)(uVar10 & 0xff);
                    /* try { // try from 01049148 to 01149187 has its CatchHandler @ 0104926c */
    *(byte *)(param_1 + 0x301) = (byte)(*(uint *)(param_1 + 0x106) >> 1) & 4 ^ 0x14;
    break;
  case 8:
                    /* catch() { ... } // from try @ 01048ef0 with catch @ 010492c4 */
    if (-1 < (char)bVar9) {
      lVar15 = param_2 << 0x38;
                    /* catch() { ... } // from try @ 01049188 with catch @ 010492d4 */
      uVar12 = 9;
      goto LAB_010492d8;
    }
    pcVar11 = "b63 of length must be zero\n";
LAB_010495f8:
    uVar8 = 2;
LAB_01049624:
    _lws_log(uVar8,pcVar11);
    return 0xffffffff;
  case 9:
    uVar12 = 10;
    uVar14 = *(ulong *)(param_1 + 0x60) | (ulong)(uVar10 & 0xff) << 0x30;
    goto LAB_01049370;
  case 10:
    uVar12 = 0xb;
    uVar14 = *(ulong *)(param_1 + 0x60) | (ulong)(uVar10 & 0xff) << 0x28;
    goto LAB_01049370;
  case 0xb:
    uVar12 = 0xc;
    uVar14 = *(ulong *)(param_1 + 0x60) | (ulong)(uVar10 & 0xff) << 0x20;
    goto LAB_01049370;
  case 0xc:
    uVar12 = 0xd;
    uVar14 = *(ulong *)(param_1 + 0x60) | (ulong)(uVar10 & 0xff) << 0x18;
    goto LAB_01049370;
  case 0xd:
    uVar12 = 0xe;
    uVar14 = *(ulong *)(param_1 + 0x60) | (ulong)(uVar10 & 0xff) << 0x10;
    goto LAB_01049370;
  case 0xe:
    uVar12 = 0xf;
    uVar14 = *(ulong *)(param_1 + 0x60) | (ulong)(uVar10 & 0xff) << 8;
LAB_01049370:
    *(ulong *)(param_1 + 0x60) = uVar14;
    *(undefined1 *)(param_1 + 0x301) = uVar12;
    break;
  case 0x10:
    *(byte *)(param_1 + 0x6c) = bVar9;
    if ((param_2 & 0xff) != 0) {
      *(uint *)(param_1 + 0x106) = *(uint *)(param_1 + 0x106) & 0xfffffffb;
    }
    *(undefined1 *)(param_1 + 0x301) = 0x11;
    break;
  case 0x11:
    *(byte *)(param_1 + 0x6d) = bVar9;
    if ((param_2 & 0xff) != 0) {
      *(uint *)(param_1 + 0x106) = *(uint *)(param_1 + 0x106) & 0xfffffffb;
    }
    *(undefined1 *)(param_1 + 0x301) = 0x12;
    break;
  case 0x12:
    *(byte *)(param_1 + 0x6e) = bVar9;
    if ((param_2 & 0xff) != 0) {
      *(uint *)(param_1 + 0x106) = *(uint *)(param_1 + 0x106) & 0xfffffffb;
    }
    *(undefined1 *)(param_1 + 0x301) = 0x13;
    break;
  case 0x13:
    *(byte *)(param_1 + 0x6f) = bVar9;
    if ((param_2 & 0xff) != 0) {
      *(uint *)(param_1 + 0x106) = *(uint *)(param_1 + 0x106) & 0xfffffffb;
    }
    *(undefined1 *)(param_1 + 0x301) = 0x14;
    *(undefined1 *)(param_1 + 0xfe) = 0;
    if (*(long *)(param_1 + 0x60) != 0) {
      return 0;
    }
LAB_01049434:
    *(undefined1 *)(param_1 + 0x301) = 0;
LAB_01049438:
    iVar5 = 6;
    switch(*(undefined1 *)(param_1 + 0xff)) {
    default:
      local_40 = *(long *)(param_1 + 0x38) + 0x10;
      local_38 = *(undefined4 *)(param_1 + 0x68);
      FUN_010566c8(param_1,0x10,&local_40,0);
      *(undefined4 *)(param_1 + 0x68) = 0;
      return 0;
    case 8:
      if (*(byte *)(param_1 + 0x2ff) - 9 < 2) {
        return 0xffffffff;
      }
      iVar5 = lws_partial_buffered(param_1);
      if (iVar5 != 0) goto LAB_010496c8;
      iVar5 = FUN_01043028(*(undefined8 *)(*(long *)(param_1 + 0x248) + 8),param_1,0x26,
                           *(undefined8 *)(param_1 + 0x270),*(long *)(param_1 + 0x38) + 0x10,
                           *(uint *)(param_1 + 0x68));
      if (iVar5 != 0) {
        return 0xffffffff;
      }
      *(undefined1 *)(param_1 + 0x2ff) = 9;
      *(uint *)(param_1 + 0x106) = *(uint *)(param_1 + 0x106) | 0x40;
      uVar10 = *(uint *)(param_1 + 0x68);
      goto joined_r0x01049794;
    case 9:
      if (*(char *)(param_1 + 0x106) < '\0') goto LAB_010497c8;
      uVar10 = *(uint *)(param_1 + 0x68);
joined_r0x01049794:
      if (uVar10 < 0x7e) {
        memcpy((void *)(param_1 + 0x80),(void *)(*(long *)(param_1 + 0x38) + 0x10),(ulong)uVar10);
        *(char *)(param_1 + 0xfd) = (char)uVar10;
        *(uint *)(param_1 + 0x106) = *(uint *)(param_1 + 0x106) | 0x80;
        lws_callback_on_writable(param_1);
      }
LAB_010497c8:
      *(undefined4 *)(param_1 + 0x68) = 0;
      return 0;
    case 10:
      lwsl_hexdump(*(long *)(param_1 + 0x38) + 0x10,*(undefined4 *)(param_1 + 0x68));
      if (*(char *)(param_1 + 0x303) == '\x11') {
        lws_set_timeout(param_1,0,0);
      }
      iVar5 = 7;
    case 0:
    case 1:
    case 2:
      local_40 = *(long *)(param_1 + 0x38) + 0x10;
      local_38 = *(int *)(param_1 + 0x68);
      bVar4 = false;
      if ((local_38 != 0) || (bVar4 = false, *(char *)(param_1 + 0xff) != '\n')) {
LAB_01049640:
        bVar9 = *(byte *)(param_1 + 0x2ff);
joined_r0x010495a4:
        if (1 < bVar9 - 9) {
          iVar6 = FUN_010566c8(param_1,0x16,&local_40,0);
          puVar1 = (uint *)(param_1 + 0x106);
          uVar10 = *puVar1;
          *puVar1 = uVar10 & 0xfffdffff;
          if (iVar6 < 0) {
LAB_010496c8:
            *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x40;
            return 0xffffffff;
          }
          if ((!bVar4) || (local_38 != 0)) {
            if ((iVar6 == 0) || (local_38 == 0)) {
              if ((uVar10 >> 0xe & 1) != 0) {
                *puVar1 = uVar10 & 0xfffdbfff;
                plVar16 = (long *)(*(long *)(param_1 + 0x220) +
                                   (ulong)*(byte *)(param_1 + 0x304) * 0x6f8 + 0xe8);
                lVar15 = *plVar16;
                while (lVar15 != 0) {
                  if (lVar15 == param_1) {
                    *plVar16 = *(long *)(param_1 + 0x48);
                    break;
                  }
                  plVar16 = (long *)(lVar15 + 0x48);
                  lVar15 = *plVar16;
                }
                *(undefined8 *)(param_1 + 0x48) = 0;
              }
            }
            else if ((uVar10 >> 0xe & 1) == 0) {
              *puVar1 = uVar10 & 0xfffdffff | 0x4000;
              lVar15 = *(long *)(param_1 + 0x220) + (ulong)*(byte *)(param_1 + 0x304) * 0x6f8;
              *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar15 + 0xe8);
              *(long *)(lVar15 + 0xe8) = param_1;
            }
            if ((iVar5 == 7) || (0 < local_38)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010498bc with catch @ 01049864
                       catch(type#1 @ 00000000) { ... } // from try @ 01049a7c with catch @ 01049864
                        */
              *(undefined1 *)(local_40 + local_38) = 0;
              lVar15 = *(long *)(*(long *)(param_1 + 0x248) + 8);
              if (lVar15 != 0) {
                uVar7 = FUN_01043028(lVar15,param_1,iVar5,*(undefined8 *)(param_1 + 0x270),local_40,
                                     (long)local_38);
                *(undefined4 *)(param_1 + 0x68) = 0;
                return uVar7;
              }
              _lws_log(1,"No callback on payload spill!\n");
            }
          }
        }
      }
      *(undefined4 *)(param_1 + 0x68) = 0;
                    /* try { // try from 010498b4 to 011498bb has its CatchHandler @ 01049b88 */
    }
    break;
  case 0x14:
    if ((*(uint *)(param_1 + 0x106) >> 0xe & 1) == 0) {
      uVar14 = (ulong)*(uint *)(param_1 + 0x68) + 0x10;
      if (*(uint *)(param_1 + 0x40) <= uVar14) {
        pcVar11 = "Attempted overflow \n";
        uVar8 = 1;
        goto LAB_01049624;
      }
      if ((*(uint *)(param_1 + 0x106) >> 2 & 1) == 0) {
        bVar2 = *(byte *)(param_1 + 0xfe);
        *(byte *)(param_1 + 0xfe) = bVar2 + 1;
        bVar9 = *(byte *)(param_1 + ((ulong)bVar2 & 3) + 0x6c) ^ bVar9;
      }
      *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) + 1;
      *(byte *)(*(long *)(param_1 + 0x38) + uVar14) = bVar9;
      lVar15 = *(long *)(param_1 + 0x60) + -1;
      *(long *)(param_1 + 0x60) = lVar15;
      if (lVar15 == 0) goto LAB_01049434;
      uVar14 = *(ulong *)(*(long *)(param_1 + 0x248) + 0x18);
      if (uVar14 == 0) {
        if (*(uint *)(param_1 + 0x68) != *(uint *)(*(long *)(param_1 + 0x220) + 0xc84)) {
          return 0;
        }
      }
      else if (uVar14 != *(uint *)(param_1 + 0x68)) {
        return 0;
      }
      goto LAB_01049438;
    }
    bVar4 = false;
    iVar5 = 6;
    bVar9 = *(byte *)(param_1 + 0x2ff);
    goto joined_r0x010495a4;
  default:
    return 0;
  }
  return 0;
}

