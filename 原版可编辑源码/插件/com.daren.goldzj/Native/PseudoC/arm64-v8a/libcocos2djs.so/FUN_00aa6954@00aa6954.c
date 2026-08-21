
undefined4 FUN_00aa6954(long param_1,ulong param_2)

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
      goto LAB_00aa6a84;
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
    goto LAB_00aa6ebc;
  case 1:
    *(byte *)(param_1 + 0x6d) = bVar9;
    if ((param_2 & 0xff) != 0) {
      *(uint *)(param_1 + 0x106) = *(uint *)(param_1 + 0x106) & 0xfffffffb;
    }
    *(undefined1 *)(param_1 + 0x301) = 2;
    break;
  case 2:
    *(byte *)(param_1 + 0x6e) = bVar9;
    if ((param_2 & 0xff) != 0) {
      *(uint *)(param_1 + 0x106) = *(uint *)(param_1 + 0x106) & 0xfffffffb;
    }
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
LAB_00aa6a84:
    uVar3 = uVar10 & 0xf;
    uVar10 = uVar10 >> 7 & 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aa683c with catch @ 00aa6a90
                        */
    *(char *)(param_1 + 0xff) = (char)uVar3;
    *(byte *)(param_1 + 0x100) = bVar9 & 0x70;
    *(uint *)(param_1 + 0x106) = uVar13 & 0xfffffffe | uVar10;
    if (uVar3 < 0x10) {
                    /* try { // try from 00aa6ab4 to 00ba6ab7 has its CatchHandler @ 00aa6ab8 */
      if ((1 << (ulong)uVar3 & 0xf8f8U) != 0) {
        return 0xffffffff;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aa6ab4 with catch @ 00aa6ab8
                        */
                    /* try { // try from 00aa6abc to 00ba6abf has its CatchHandler @ 00aa6ac8 */
      if ((1 << (ulong)uVar3 & 6U) != 0) {
                    /* try { // try from 00aa6ac0 to 00ba6acb has its CatchHandler @ 00aa67a0 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aa6abc with catch @ 00aa6ac8
                        */
        *(byte *)(param_1 + 0x101) = bVar9 & 0x70;
        *(uint *)(param_1 + 0x106) =
             uVar13 & 0xfffdfffc | uVar10 | (uint)(uVar3 == 2) << 1 | 0x20000;
      }
    }
    *(undefined1 *)(param_1 + 0x301) = 5;
    return 0;
  case 5:
    uVar13 = *(uint *)(param_1 + 0x106);
    uVar3 = uVar10 >> 7 & 1;
    *(uint *)(param_1 + 0x106) = uVar13 & 0xfffffff0 | uVar13 & 7 | uVar3 << 3;
    if ((uVar10 & 0x7f) == 0x7f) {
                    /* catch() { ... } // from try @ 00aa6f90 with catch @ 00aa6e34 */
      if ((*(byte *)(param_1 + 0xff) >> 3 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x301) = 8;
        return 0;
      }
    }
    else {
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
        goto LAB_00aa6cb0;
      }
      if ((*(byte *)(param_1 + 0xff) >> 3 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x301) = 6;
        return 0;
      }
    }
    pcVar11 = "Control frame with xtended length is illegal\n";
    goto LAB_00aa6e74;
  case 6:
    uVar12 = 7;
    lVar15 = (ulong)(uVar10 & 0xff) << 8;
LAB_00aa6b54:
    *(long *)(param_1 + 0x60) = lVar15;
    *(undefined1 *)(param_1 + 0x301) = uVar12;
    break;
  case 7:
  case 0xf:
    *(ulong *)(param_1 + 0x60) = *(ulong *)(param_1 + 0x60) | (ulong)(uVar10 & 0xff);
    *(byte *)(param_1 + 0x301) = (byte)(*(uint *)(param_1 + 0x106) >> 1) & 4 ^ 0x14;
    break;
  case 8:
    if (-1 < (char)bVar9) {
      lVar15 = param_2 << 0x38;
      uVar12 = 9;
      goto LAB_00aa6b54;
    }
    pcVar11 = "b63 of length must be zero\n";
LAB_00aa6e74:
    uVar8 = 2;
LAB_00aa6ea0:
    _lws_log(uVar8,pcVar11);
    return 0xffffffff;
                    /* try { // try from 00aa6ea4 to 00ba6ec3 has its CatchHandler @ 00aa6fdc */
  case 9:
    uVar12 = 10;
    uVar14 = *(ulong *)(param_1 + 0x60) | (ulong)(uVar10 & 0xff) << 0x30;
    goto LAB_00aa6bec;
  case 10:
    uVar12 = 0xb;
    uVar14 = *(ulong *)(param_1 + 0x60) | (ulong)(uVar10 & 0xff) << 0x28;
    goto LAB_00aa6bec;
  case 0xb:
    uVar12 = 0xc;
    uVar14 = *(ulong *)(param_1 + 0x60) | (ulong)(uVar10 & 0xff) << 0x20;
    goto LAB_00aa6bec;
  case 0xc:
    uVar12 = 0xd;
    uVar14 = *(ulong *)(param_1 + 0x60) | (ulong)(uVar10 & 0xff) << 0x18;
    goto LAB_00aa6bec;
  case 0xd:
    uVar12 = 0xe;
    uVar14 = *(ulong *)(param_1 + 0x60) | (ulong)(uVar10 & 0xff) << 0x10;
    goto LAB_00aa6bec;
  case 0xe:
    uVar12 = 0xf;
    uVar14 = *(ulong *)(param_1 + 0x60) | (ulong)(uVar10 & 0xff) << 8;
LAB_00aa6bec:
    *(ulong *)(param_1 + 0x60) = uVar14;
    *(undefined1 *)(param_1 + 0x301) = uVar12;
    break;
  case 0x10:
    *(byte *)(param_1 + 0x6c) = bVar9;
    if ((param_2 & 0xff) != 0) {
                    /* try { // try from 00aa6c10 to 00ba6ca3 has its CatchHandler @ 00aa6c10
                       catch() { ... } // from try @ 00aa6c10 with catch @ 00aa6c10
                       catch() { ... } // from try @ 00aa6cac with catch @ 00aa6c10
                       catch() { ... } // from try @ 00aa6d38 with catch @ 00aa6c10
                       catch() { ... } // from try @ 00aa6d88 with catch @ 00aa6c10 */
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
                    /* try { // try from 00aa6ca4 to 00ba6cab has its CatchHandler @ 00aa6da0 */
    *(undefined1 *)(param_1 + 0x301) = 0x14;
    *(undefined1 *)(param_1 + 0xfe) = 0;
                    /* try { // try from 00aa6cac to 00ba6d2f has its CatchHandler @ 00aa6c10 */
    if (*(long *)(param_1 + 0x60) != 0) {
      return 0;
    }
LAB_00aa6cb0:
    *(undefined1 *)(param_1 + 0x301) = 0;
LAB_00aa6cb4:
    iVar5 = 6;
    switch(*(undefined1 *)(param_1 + 0xff)) {
    default:
                    /* catch() { ... } // from try @ 00aa6ee8 with catch @ 00aa6fd8 */
      local_40 = *(long *)(param_1 + 0x38) + 0x10;
                    /* catch() { ... } // from try @ 00aa6ea4 with catch @ 00aa6fdc */
                    /* catch() { ... } // from try @ 00aa6f00 with catch @ 00aa6fe0
                       catch() { ... } // from try @ 00aa6f64 with catch @ 00aa6fe0 */
      local_38 = *(undefined4 *)(param_1 + 0x68);
      FUN_00ab3f44(param_1,0x10,&local_40,0);
      *(undefined4 *)(param_1 + 0x68) = 0;
      return 0;
    case 8:
      if (*(byte *)(param_1 + 0x2ff) - 9 < 2) {
        return 0xffffffff;
      }
      iVar5 = lws_partial_buffered(param_1);
      if (iVar5 != 0) goto LAB_00aa6f44;
      iVar5 = FUN_00aa08a4(*(undefined8 *)(*(long *)(param_1 + 0x248) + 8),param_1,0x26,
                           *(undefined8 *)(param_1 + 0x270),*(long *)(param_1 + 0x38) + 0x10,
                           *(uint *)(param_1 + 0x68));
      if (iVar5 != 0) {
        return 0xffffffff;
      }
      *(undefined1 *)(param_1 + 0x2ff) = 9;
                    /* try { // try from 00aa6d30 to 00ba6d37 has its CatchHandler @ 00aa6d88 */
      *(uint *)(param_1 + 0x106) = *(uint *)(param_1 + 0x106) | 0x40;
                    /* try { // try from 00aa6d38 to 00ba6d7b has its CatchHandler @ 00aa6c10 */
      uVar10 = *(uint *)(param_1 + 0x68);
      goto joined_r0x00aa7010;
    case 9:
      if (*(char *)(param_1 + 0x106) < '\0') goto LAB_00aa7044;
      uVar10 = *(uint *)(param_1 + 0x68);
joined_r0x00aa7010:
      if (uVar10 < 0x7e) {
        memcpy((void *)(param_1 + 0x80),(void *)(*(long *)(param_1 + 0x38) + 0x10),(ulong)uVar10);
        *(char *)(param_1 + 0xfd) = (char)uVar10;
        *(uint *)(param_1 + 0x106) = *(uint *)(param_1 + 0x106) | 0x80;
        lws_callback_on_writable(param_1);
      }
LAB_00aa7044:
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
LAB_00aa6ebc:
        bVar9 = *(byte *)(param_1 + 0x2ff);
joined_r0x00aa6e20:
        if (1 < bVar9 - 9) {
          iVar6 = FUN_00ab3f44(param_1,0x16,&local_40,0);
          puVar1 = (uint *)(param_1 + 0x106);
          uVar10 = *puVar1;
                    /* try { // try from 00aa6ee8 to 00ba6eeb has its CatchHandler @ 00aa6fd8 */
          *puVar1 = uVar10 & 0xfffdffff;
          if (iVar6 < 0) {
LAB_00aa6f44:
            *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x40;
            return 0xffffffff;
          }
          if ((!bVar4) || (local_38 != 0)) {
                    /* try { // try from 00aa6f00 to 00ba6f33 has its CatchHandler @ 00aa6fe0 */
            if ((iVar6 == 0) || (local_38 == 0)) {
              if ((uVar10 >> 0xe & 1) != 0) {
                    /* try { // try from 00aa6f90 to 00ba707b has its CatchHandler @ 00aa6e34 */
                *puVar1 = uVar10 & 0xfffdbfff;
                plVar16 = (long *)(*(long *)(param_1 + 0x220) +
                                   (ulong)*(byte *)(param_1 + 0x304) * 0x6f8 + 0xe8);
                lVar15 = *plVar16;
                while (lVar15 != 0) {
                  if (lVar15 == param_1) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aa718c with catch @ 00aa70c8
                        */
                    *plVar16 = *(long *)(param_1 + 0x48);
                    break;
                  }
                  plVar16 = (long *)(lVar15 + 0x48);
                  lVar15 = *plVar16;
                    /* catch() { ... } // from try @ 00aa6f38 with catch @ 00aa6fbc */
                }
                *(undefined8 *)(param_1 + 0x48) = 0;
              }
            }
            else if ((uVar10 >> 0xe & 1) == 0) {
              *puVar1 = uVar10 & 0xfffdffff | 0x4000;
              lVar15 = *(long *)(param_1 + 0x220) + (ulong)*(byte *)(param_1 + 0x304) * 0x6f8;
              *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar15 + 0xe8);
              *(long *)(lVar15 + 0xe8) = param_1;
                    /* try { // try from 00aa6f38 to 00ba6f4b has its CatchHandler @ 00aa6fbc */
            }
            if ((iVar5 == 7) || (0 < local_38)) {
              *(undefined1 *)(local_40 + local_38) = 0;
              lVar15 = *(long *)(*(long *)(param_1 + 0x248) + 8);
              if (lVar15 != 0) {
                    /* try { // try from 00aa7104 to 00ba715b has its CatchHandler @ 00aa7258 */
                uVar7 = FUN_00aa08a4(lVar15,param_1,iVar5,*(undefined8 *)(param_1 + 0x270),local_40,
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
    }
    break;
  case 0x14:
    if ((*(uint *)(param_1 + 0x106) >> 0xe & 1) == 0) {
      uVar14 = (ulong)*(uint *)(param_1 + 0x68) + 0x10;
      if (*(uint *)(param_1 + 0x40) <= uVar14) {
        pcVar11 = "Attempted overflow \n";
        uVar8 = 1;
        goto LAB_00aa6ea0;
      }
      if ((*(uint *)(param_1 + 0x106) >> 2 & 1) == 0) {
        bVar2 = *(byte *)(param_1 + 0xfe);
        *(byte *)(param_1 + 0xfe) = bVar2 + 1;
                    /* try { // try from 00aa6d7c to 00ba6d83 has its CatchHandler @ 00aa6da0 */
                    /* try { // try from 00aa6d84 to 00ba6d87 has its CatchHandler @ 00aa6d88 */
        bVar9 = *(byte *)(param_1 + ((ulong)bVar2 & 3) + 0x6c) ^ bVar9;
      }
                    /* catch() { ... } // from try @ 00aa6d30 with catch @ 00aa6d88
                       catch() { ... } // from try @ 00aa6d84 with catch @ 00aa6d88
                       try { // try from 00aa6d88 to 00ba6de7 has its CatchHandler @ 00aa6c10 */
      *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) + 1;
      *(byte *)(*(long *)(param_1 + 0x38) + uVar14) = bVar9;
      lVar15 = *(long *)(param_1 + 0x60) + -1;
                    /* catch() { ... } // from try @ 00aa6ca4 with catch @ 00aa6da0
                       catch() { ... } // from try @ 00aa6d7c with catch @ 00aa6da0 */
      *(long *)(param_1 + 0x60) = lVar15;
      if (lVar15 == 0) goto LAB_00aa6cb0;
      uVar14 = *(ulong *)(*(long *)(param_1 + 0x248) + 0x18);
      if (uVar14 == 0) {
        if (*(uint *)(param_1 + 0x68) != *(uint *)(*(long *)(param_1 + 0x220) + 0xc84)) {
          return 0;
        }
      }
      else if (uVar14 != *(uint *)(param_1 + 0x68)) {
        return 0;
      }
      goto LAB_00aa6cb4;
    }
    bVar4 = false;
    iVar5 = 6;
    bVar9 = *(byte *)(param_1 + 0x2ff);
    goto joined_r0x00aa6e20;
  default:
    return 0;
  }
                    /* try { // try from 00aa6f64 to 00ba6f8f has its CatchHandler @ 00aa6fe0 */
  return 0;
}

