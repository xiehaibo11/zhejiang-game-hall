
/* WARNING: Removing unreachable block (ram,0x00e57b7c) */

uint FUN_00e57404(undefined8 param_1,ulong param_2,undefined8 param_3,uint param_4,long *param_5)

{
  long *plVar1;
  undefined2 *puVar2;
  short sVar3;
  undefined2 uVar4;
  ushort uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  ulong uVar17;
  long *plVar18;
  code *pcVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  long lVar25;
  long *plVar26;
  undefined8 uVar27;
  long lVar28;
  short sVar29;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong local_78;
  uint local_64;
  
  lVar28 = *(long *)(param_2 + 0x370);
  if ((int)param_4 < 1) {
    bVar7 = false;
    bVar6 = false;
    bVar9 = false;
    bVar8 = false;
    if (*(long *)(*(long *)(param_2 + 0xf0) + 0x68) == 0) goto LAB_00e57498;
LAB_00e57548:
    uVar12 = 1;
  }
  else {
    bVar6 = false;
    bVar7 = false;
    uVar17 = (ulong)param_4;
    do {
      while (*param_5 == 0x69677066) {
        bVar6 = true;
        uVar17 = uVar17 - 1;
        param_5 = param_5 + 2;
        if (uVar17 == 0) goto LAB_00e5748c;
      }
      if (*param_5 == 0x69677073) {
        bVar7 = true;
      }
      uVar17 = uVar17 - 1;
      param_5 = param_5 + 2;
    } while (uVar17 != 0);
LAB_00e5748c:
    bVar9 = bVar6;
    bVar8 = bVar7;
    if (*(long *)(*(long *)(param_2 + 0xf0) + 0x68) != 0) goto LAB_00e57548;
LAB_00e57498:
    bVar7 = bVar8;
    bVar6 = bVar9;
    if ((ulong)*(ushort *)(param_2 + 0x120) != 0) {
      plVar18 = *(long **)(param_2 + 0x128);
      plVar1 = plVar18 + (ulong)*(ushort *)(param_2 + 0x120) * 4;
      plVar26 = plVar18;
      do {
        if ((*plVar26 == 0x676c7966) && (plVar26[3] != 0)) goto LAB_00e57548;
        plVar26 = plVar26 + 4;
        plVar24 = plVar18;
      } while (plVar26 < plVar1);
      do {
        if ((*plVar24 == 0x43464620) && (plVar24[3] != 0)) goto LAB_00e57548;
        plVar24 = plVar24 + 4;
      } while (plVar24 < plVar1);
      do {
        if ((*plVar18 == 0x43464632) && (plVar18[3] != 0)) goto LAB_00e57528;
        plVar18 = plVar18 + 4;
      } while (plVar18 < plVar1);
    }
    plVar18 = (long *)0x0;
LAB_00e57528:
    uVar12 = (uint)(plVar18 != (long *)0x0);
  }
  iVar10 = (**(code **)(param_2 + 0x340))(param_2,0x73626978,param_1,0);
  uVar12 = uVar12 & iVar10 != 0;
  if ((uVar12 == 0) && (*(code **)(lVar28 + 0x88) != (code *)0x0)) {
    local_64 = (**(code **)(lVar28 + 0x88))(param_2,param_1);
    bVar9 = local_64 == 0;
    if ((iVar10 == 0) || (local_64 != 0)) goto LAB_00e575ac;
  }
  else {
    bVar9 = false;
LAB_00e575ac:
    local_64 = (**(code **)(lVar28 + 0x30))(param_2,param_1);
    if (local_64 != 0) {
      return local_64;
    }
  }
  iVar10 = (**(code **)(param_2 + 0x340))(param_2,0x43424c43,param_1,0);
  iVar11 = (**(code **)(param_2 + 0x340))(param_2,0x43424454,param_1,0);
  if (0x3ff0 < (ushort)(*(short *)(param_2 + 0x152) - 0x10U)) {
    return 8;
  }
  uVar17 = (ulong)(uVar12 & (iVar10 != 0 && iVar11 != 0));
  (**(code **)(lVar28 + 0x48))(param_2,param_1);
  (**(code **)(lVar28 + 0x40))(param_2,param_1);
  (**(code **)(lVar28 + 0x60))(param_2,param_1);
  uVar12 = (**(code **)(lVar28 + 0x58))(param_2,param_1);
  local_64 = uVar12;
  if (bVar9) {
LAB_00e57684:
    pcVar19 = *(code **)(lVar28 + 0xc0);
  }
  else {
    local_64 = (**(code **)(lVar28 + 0x38))(param_2,param_1,0);
    if (local_64 == 0) {
      uVar13 = (**(code **)(lVar28 + 0xb8))(param_2,param_1,0);
      if ((uVar13 & 0xff) == 0x8e) {
        local_64 = 0x93;
        plVar26 = *(long **)(*(long *)(param_2 + 0xf0) + 0x68);
        goto joined_r0x00e57854;
      }
      if (uVar13 != 0) {
        return uVar13;
      }
    }
    else {
      if ((local_64 & 0xff) != 0x8e) {
        return local_64;
      }
      if (*(long *)(param_2 + 0x118) == 0x74727565) {
        uVar17 = 0;
      }
      else {
        local_64 = 0x8f;
        plVar26 = *(long **)(*(long *)(param_2 + 0xf0) + 0x68);
joined_r0x00e57854:
        if (plVar26 == (long *)0x0) {
          return local_64;
        }
        if (*(long *)(*plVar26 + 0x10) == 0) {
          return local_64;
        }
        *(undefined2 *)(param_2 + 0x1b6) = 0;
      }
    }
    local_64 = 0;
    local_64 = (**(code **)(lVar28 + 0x38))(param_2,param_1,1);
    if ((local_64 == 0) &&
       (local_64 = (**(code **)(lVar28 + 0xb8))(param_2,param_1,1), local_64 == 0)) {
      *(undefined1 *)(param_2 + 0x1f0) = 1;
    }
    else if ((local_64 != 0) && ((local_64 & 0xff) != 0x8e)) {
      return local_64;
    }
    local_64 = (**(code **)(lVar28 + 0x50))(param_2,param_1);
    if (local_64 == 0) goto LAB_00e57684;
    *(undefined2 *)(param_2 + 0x268) = 0xffff;
    pcVar19 = *(code **)(lVar28 + 0xc0);
  }
  if (pcVar19 != (code *)0x0) {
    local_64 = (*pcVar19)(param_2,param_1);
  }
  if (*(code **)(lVar28 + 0xe0) != (code *)0x0) {
    (**(code **)(lVar28 + 0xe0))(param_2,param_1);
    local_64 = (**(code **)(lVar28 + 0xe8))(param_2,param_1);
  }
  (**(code **)(lVar28 + 0x80))(param_2,param_1);
  (**(code **)(lVar28 + 0x78))(param_2,param_1);
  local_64 = (**(code **)(lVar28 + 0x70))(param_2,param_1);
  plVar18 = (long *)(param_2 + 0x28);
  *plVar18 = 0;
  *(ulong *)(param_2 + 0x20) = (ulong)*(ushort *)(param_2 + 0x1d0);
  plVar26 = (long *)(param_2 + 0x30);
  *plVar26 = 0;
  if ((*(short *)(param_2 + 0x268) == -1) || ((*(byte *)(param_2 + 0x2bd) & 1) == 0)) {
    local_64 = FUN_00e5b18c(param_2,0x15,plVar18);
    if (local_64 != 0) {
      return local_64;
    }
    lVar20 = *plVar18;
    if ((!bVar6) && (lVar20 == 0)) {
      uVar13 = FUN_00e5b18c(param_2,0x10,plVar18);
      if (uVar13 != 0) {
        return uVar13;
      }
      lVar20 = *plVar18;
    }
    local_64 = 0;
    if ((lVar20 == 0) && (uVar13 = FUN_00e5b18c(param_2,1,plVar18), uVar13 != 0)) {
      return uVar13;
    }
    local_64 = 0;
    local_64 = FUN_00e5b18c(param_2,0x16,plVar26);
    if (local_64 != 0) {
      return local_64;
    }
    lVar20 = *plVar26;
    uVar13 = 0;
    if ((!bVar7) && (lVar20 == 0)) {
      uVar13 = FUN_00e5b18c(param_2,0x11,plVar26);
      if (uVar13 != 0) {
        return uVar13;
      }
      lVar20 = *plVar26;
      uVar13 = 0;
    }
  }
  else {
    if (bVar6) {
LAB_00e57804:
      uVar13 = FUN_00e5b18c(param_2,1,plVar18);
      if (uVar13 != 0) {
        return uVar13;
      }
    }
    else {
      uVar13 = FUN_00e5b18c(param_2,0x10,plVar18);
      if (uVar13 != 0) {
        return uVar13;
      }
      local_64 = 0;
      uVar13 = 0;
      if (*plVar18 == 0) goto LAB_00e57804;
    }
    local_64 = uVar13;
    if ((!bVar7) && (local_64 = FUN_00e5b18c(param_2,0x11,plVar26), local_64 != 0)) {
      return local_64;
    }
    lVar20 = *plVar26;
    uVar13 = local_64;
  }
  local_64 = uVar13;
  if ((lVar20 == 0) && (local_64 = FUN_00e5b18c(param_2,2,plVar26), local_64 != 0)) {
    return local_64;
  }
  uVar21 = *(ulong *)(param_2 + 0x10);
  if (((*(uint *)(param_2 + 0x538) & 0xfffffffe) == 2) || (*(long *)(param_2 + 0x5b8) != 0)) {
    uVar21 = uVar21 | 0x4000;
  }
  uVar22 = uVar21 | uVar17 | 0x18;
  if ((uVar12 == 0) && (*(long *)(param_2 + 0x2f0) != 0x30000)) {
    uVar22 = uVar21 | uVar17 | 0x218;
  }
  if (*(long *)(param_2 + 0x308) != 0) {
    uVar22 = uVar22 | 4;
  }
  if (*(char *)(param_2 + 0x1f0) != '\0') {
    uVar22 = uVar22 | 0x20;
  }
  if (*(int *)(param_2 + 0x55c) != 0) {
    uVar22 = uVar22 | 0x40;
  }
  if ((*(byte *)(param_2 + 0x4c8) & 1) != 0) {
    if ((ulong)*(ushort *)(param_2 + 0x120) != 0) {
      plVar18 = *(long **)(param_2 + 0x128);
      plVar1 = plVar18 + (ulong)*(ushort *)(param_2 + 0x120) * 4;
      plVar26 = plVar18;
      do {
        if ((*plVar26 == 0x676c7966) && (plVar24 = plVar18, plVar26[3] != 0)) goto LAB_00e57a50;
        plVar26 = plVar26 + 4;
      } while (plVar26 < plVar1);
      goto LAB_00e57a88;
    }
    goto LAB_00e57aa8;
  }
  goto LAB_00e57ab8;
  while (plVar24 = plVar24 + 4, plVar24 < plVar1) {
LAB_00e57a50:
    if ((*plVar24 == 0x67766172) && (plVar24[3] != 0)) goto LAB_00e57a74;
  }
  plVar24 = (long *)0x0;
LAB_00e57a74:
  if (plVar24 != (long *)0x0) {
    uVar22 = uVar22 | 0x100;
  }
LAB_00e57a88:
  do {
    if ((*plVar18 == 0x43464632) && (plVar18[3] != 0)) goto LAB_00e57aac;
    plVar18 = plVar18 + 4;
  } while (plVar18 < plVar1);
LAB_00e57aa8:
  plVar18 = (long *)0x0;
LAB_00e57aac:
  if (plVar18 != (long *)0x0) {
    uVar22 = uVar22 | 0x100;
  }
LAB_00e57ab8:
  *(ulong *)(param_2 + 0x10) = uVar22;
  if (((int)uVar17 == 0) || (*(short *)(param_2 + 0x268) == -1)) {
    uVar17 = ((ulong)*(ushort *)(param_2 + 0x180) & 1) << 1 |
             (ulong)(*(ushort *)(param_2 + 0x180) >> 1) & 1;
  }
  else {
    uVar17 = (ulong)((*(ushort *)(param_2 + 700) & 0x201) != 0) |
             (ulong)(*(ushort *)(param_2 + 700) >> 4) & 2;
  }
  *(ulong *)(param_2 + 0x18) = *(ulong *)(param_2 + 0x18) | uVar17;
  FUN_00e5b52c(param_2);
  iVar10 = *(int *)(param_2 + 0x48);
  if (iVar10 < 1) {
LAB_00e57c1c:
    uStack_98 = 0x10003756e6963;
    local_a0 = param_2;
    uVar12 = FUN_00e17cf8(&DAT_01c965a8,0,&local_a0,0);
    if (((uVar12 != 0) && ((uVar12 & 0xff) != 0xa3)) && ((uVar12 & 0xff) != 7)) {
      return uVar12;
    }
    local_64 = 0;
  }
  else {
    lVar25 = *(long *)(param_2 + 0x50);
    lVar20 = 0;
    bVar6 = false;
    do {
      while( true ) {
        lVar15 = *(long *)(lVar25 + lVar20 * 8);
        if (3 < *(ushort *)(lVar15 + 0xc)) break;
        uVar5 = *(ushort *)(lVar15 + 0xe);
        puVar16 = &DAT_01977de4;
        switch(*(ushort *)(lVar15 + 0xc)) {
        case 0:
          puVar16 = &UNK_01977df0;
          break;
        case 1:
          if (uVar5 != 0) goto LAB_00e57b94;
          iVar11 = 0x61726d6e;
          *(undefined4 *)(lVar15 + 8) = 0x61726d6e;
          goto LAB_00e57bfc;
        case 3:
          if ((10 < uVar5) || ((0x47fU >> (ulong)((int)(short)uVar5 & 0x1f) & 1) == 0))
          goto LAB_00e57b94;
          iVar11 = *(int *)((&PTR_DAT_01c96708)[(short)uVar5] + 8);
          *(int *)(lVar15 + 8) = iVar11;
          if (iVar11 != 0x756e6963) goto LAB_00e57bfc;
          goto LAB_00e57c04;
        }
        iVar11 = *(int *)(puVar16 + 8);
        *(int *)(lVar15 + 8) = iVar11;
        if (iVar11 == 0x756e6963) {
LAB_00e57c04:
          bVar6 = true;
        }
        else {
LAB_00e57bfc:
          if (iVar11 == 0x73796d62) goto LAB_00e57c04;
        }
        lVar20 = lVar20 + 1;
        if (iVar10 <= lVar20) goto LAB_00e57c14;
      }
LAB_00e57b94:
      *(undefined4 *)(lVar15 + 8) = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < iVar10);
LAB_00e57c14:
    if (!bVar6) goto LAB_00e57c1c;
  }
  uVar17 = (ulong)*(uint *)(param_2 + 0x53c);
  if (*(uint *)(param_2 + 0x53c) != 0) {
    uVar21 = (ulong)*(ushort *)(param_2 + 0x152);
    uVar27 = *(undefined8 *)(*(long *)(param_2 + 0xc0) + 0x38);
    if ((*(ushort *)(param_2 + 0x152) == 0) || (*(short *)(param_2 + 0x268) == -1)) {
      uVar21 = 1;
      sVar29 = 1;
    }
    else {
      sVar29 = *(short *)(param_2 + 0x26a);
    }
    uVar14 = FUN_00e13bcc(uVar27,0x20,0,uVar17,0,&local_64);
    *(undefined8 *)(param_2 + 0x40) = uVar14;
    if (local_64 != 0) {
      return local_64;
    }
    lVar20 = FUN_00e13bcc(uVar27,4,0,uVar17,0,&local_64);
    if (local_64 != 0) {
      return local_64;
    }
    uVar22 = 0;
    uVar12 = 0;
    do {
      lVar25 = *(long *)(param_2 + 0x40);
      local_64 = (**(code **)(lVar28 + 0xd8))(param_2,uVar22,&local_a0);
      if (local_64 == 0) {
        uVar23 = (ulong)uVar12;
        puVar2 = (undefined2 *)(lVar25 + uVar23 * 0x20);
        *puVar2 = (short)(local_78 >> 6);
        uVar4 = 0;
        if ((int)uVar21 != 0) {
          uVar4 = (undefined2)
                  ((int)((int)(uVar21 >> 1) + (uint)(ushort)local_a0 * (int)sVar29) / (int)uVar21);
        }
        *(ulong *)(puVar2 + 8) = (local_a0 & 0xffff) << 6;
        puVar2[1] = uVar4;
        *(ulong *)(puVar2 + 0xc) = (ulong)local_a0._2_2_ << 6;
        *(ulong *)(puVar2 + 4) = (ulong)local_a0._2_2_ << 6;
        if (((local_a0 & 0xffff) != 0) && (local_a0._2_2_ != 0)) {
          uVar12 = uVar12 + 1;
          *(int *)(lVar20 + uVar23 * 4) = (int)uVar22;
        }
      }
      uVar22 = uVar22 + 1;
    } while (uVar17 != uVar22);
    uVar27 = FUN_00e13bcc(uVar27,4,uVar17,uVar12,lVar20,&local_64);
    if (uVar12 != 0) {
      *(undefined8 *)(param_2 + 0x540) = uVar27;
      *(uint *)(param_2 + 0x38) = uVar12;
      *(ulong *)(param_2 + 0x10) = *(ulong *)(param_2 + 0x10) | 2;
    }
  }
  uVar17 = *(ulong *)(param_2 + 0x10);
  if ((uVar17 & 3) == 0) {
    uVar17 = uVar17 | 1;
    *(ulong *)(param_2 + 0x10) = uVar17;
  }
  if ((uVar17 & 1) == 0) {
    return local_64;
  }
  *(long *)(param_2 + 0x70) = (long)*(short *)(param_2 + 0x17a);
  *(long *)(param_2 + 0x68) = (long)*(short *)(param_2 + 0x178);
  *(undefined2 *)(param_2 + 0x88) = *(undefined2 *)(param_2 + 0x152);
  *(long *)(param_2 + 0x80) = (long)*(short *)(param_2 + 0x17e);
  *(long *)(param_2 + 0x78) = (long)*(short *)(param_2 + 0x17c);
  if ((*(short *)(param_2 + 0x268) == -1) || (-1 < *(char *)(param_2 + 700))) {
    sVar29 = *(short *)(param_2 + 0x198);
    sVar3 = *(short *)(param_2 + 0x19a);
    *(short *)(param_2 + 0x8a) = sVar29;
    *(short *)(param_2 + 0x8c) = sVar3;
    *(short *)(param_2 + 0x8e) = (sVar29 - sVar3) + *(short *)(param_2 + 0x19c);
    if ((*(short *)(param_2 + 0x268) == -1) || (sVar3 != 0 || sVar29 != 0)) goto LAB_00e57e8c;
    sVar29 = *(short *)(param_2 + 0x2c2);
    sVar3 = *(short *)(param_2 + 0x2c4);
    if (sVar29 != 0 || sVar3 != 0) goto LAB_00e57e74;
    *(short *)(param_2 + 0x8a) = *(short *)(param_2 + 0x2c8);
    sVar29 = *(short *)(param_2 + 0x2ca) + *(short *)(param_2 + 0x2c8);
    *(short *)(param_2 + 0x8c) = -*(short *)(param_2 + 0x2ca);
  }
  else {
    sVar29 = *(short *)(param_2 + 0x2c2);
    sVar3 = *(short *)(param_2 + 0x2c4);
LAB_00e57e74:
    *(short *)(param_2 + 0x8a) = sVar29;
    *(short *)(param_2 + 0x8c) = sVar3;
    sVar29 = (sVar29 - sVar3) + *(short *)(param_2 + 0x2c6);
  }
  *(short *)(param_2 + 0x8e) = sVar29;
LAB_00e57e8c:
  *(undefined2 *)(param_2 + 0x90) = *(undefined2 *)(param_2 + 0x19e);
  sVar29 = *(short *)(param_2 + 0x302);
  lVar28 = 0x8e;
  if (*(char *)(param_2 + 0x1f0) != '\0') {
    lVar28 = 0x206;
  }
  uVar4 = *(undefined2 *)(param_2 + lVar28);
  *(short *)(param_2 + 0x94) =
       *(short *)(param_2 + 0x300) - (short)((uint)(int)(short)(sVar29 - (sVar29 >> 0xf)) >> 1);
  *(undefined2 *)(param_2 + 0x92) = uVar4;
  *(short *)(param_2 + 0x96) = sVar29;
  return local_64;
}

