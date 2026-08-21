
/* WARNING: Type propagation algorithm not settling */

int TT_RunIns(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  char *pcVar5;
  short *psVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ushort *puVar12;
  long *plVar13;
  long *plVar14;
  undefined1 (*__s) [16];
  byte *pbVar15;
  undefined4 *puVar16;
  long *plVar17;
  long *plVar18;
  code *pcVar19;
  int iVar20;
  byte bVar21;
  undefined2 uVar22;
  short sVar23;
  short sVar24;
  ushort uVar25;
  byte bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  code *pcVar30;
  bool bVar31;
  bool bVar32;
  char cVar33;
  ulong uVar34;
  long lVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  long lVar38;
  undefined4 uVar39;
  long lVar40;
  long lVar41;
  int *piVar42;
  int *piVar43;
  long *plVar44;
  code *pcVar45;
  int *piVar46;
  ulong uVar47;
  int iVar48;
  ulong uVar49;
  ulong uVar50;
  uint *puVar51;
  ushort uVar52;
  code *pcVar53;
  long lVar54;
  long lVar55;
  ulong uVar56;
  long *plVar57;
  long lVar58;
  ulong uVar59;
  long lVar60;
  ushort uVar61;
  long lVar62;
  ulong uVar63;
  long lVar64;
  long lVar65;
  byte bVar67;
  undefined1 auVar66 [16];
  uint uVar68;
  uint uVar69;
  uint uVar70;
  long lVar71;
  int iVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  undefined8 local_148;
  long local_138;
  long local_c0;
  long lStack_b8;
  ushort local_ac [2];
  ulong local_a8;
  ulong local_a0;
  long lStack_98;
  uint local_90;
  undefined4 uStack_8c;
  
  lVar40 = *param_1;
  if (((*(int *)(*(long *)(lVar40 + 0xb0) + 0x78) == 0x28) &&
      (*(char *)((long)param_1 + 0x429) != '\0')) && ((*(byte *)(lVar40 + 0x11) >> 5 & 1) == 0)) {
    bVar67 = (*(byte *)((long)param_1 + 0x264) >> 2 ^ 0xff) & 1;
  }
  else {
    bVar67 = 0;
  }
  uVar52 = *(ushort *)((long)param_1 + 0x114);
  uVar49 = param_1[0x55];
  *(byte *)((long)param_1 + 0x42b) = bVar67;
  uVar56 = (uVar49 + uVar52) * 2;
  if (uVar56 < 0x1f) {
    uVar56 = 0x1e;
  }
  *(undefined2 *)((long)param_1 + 0x42c) = 0;
  if (uVar56 < *(ushort *)((long)param_1 + 0x154)) {
    if (0xfffe < uVar56) {
      uVar56 = 0xffff;
    }
    *(short *)((long)param_1 + 0x154) = (short)uVar56;
  }
  param_1[0x86] = 0;
  param_1[0x88] = 0;
  if (uVar52 == 0) {
    uVar56 = uVar49 * 8 + 300;
  }
  else {
    uVar75 = ((uint)uVar52 + (uint)uVar52 * 4) * 2;
    if (uVar75 < 0x33) {
      uVar75 = 0x32;
    }
    uVar56 = 0x32;
    if (499 < uVar49) {
      uVar56 = uVar49 / 10;
    }
    uVar56 = uVar56 + uVar75;
  }
  param_1[0x87] = uVar56;
  uVar49 = *(long *)(lVar40 + 0x20) * 100;
  if (uVar56 <= uVar49) {
    uVar49 = uVar56;
  }
  bVar31 = (short)param_1[0x32] != *(short *)((long)param_1 + 0x192);
  param_1[0x87] = uVar49;
  param_1[0x89] = uVar49;
  pcVar53 = FUN_00e2d9ec;
  if (bVar31) {
    pcVar53 = FUN_00e2d5c4;
  }
  pcVar45 = FUN_00e2da00;
  pcVar30 = FUN_00e2d9f4;
  if (bVar31) {
    pcVar45 = FUN_00e2d7cc;
    pcVar30 = FUN_00e2d6c4;
  }
  pcVar19 = FUN_00e2da0c;
  if (bVar31) {
    pcVar19 = FUN_00e2d8d8;
  }
  param_1[0x3c] = 0;
  param_1[0x81] = (long)pcVar53;
  param_1[0x82] = (long)pcVar30;
  param_1[0x83] = (long)pcVar45;
  param_1[0x84] = (long)pcVar19;
  sVar23 = *(short *)((long)param_1 + 0x226);
  if ((long)sVar23 == 0x4000) {
    sVar24 = *(short *)((long)param_1 + 0x222);
    lVar40 = (long)sVar24;
    param_1[0x7a] = lVar40;
joined_r0x00e28428:
    if (sVar24 == 0x4000) goto LAB_00e283c4;
LAB_00e283f0:
    if (*(short *)((long)param_1 + 0x224) == 0x4000) {
      pcVar53 = FUN_00e34aa8;
    }
    else {
      pcVar53 = FUN_00e34ab0;
    }
  }
  else {
    if ((long)(short)param_1[0x45] != 0x4000) {
      sVar24 = *(short *)((long)param_1 + 0x222);
      lVar40 = (long)sVar24 * (long)sVar23 +
               (long)*(short *)((long)param_1 + 0x224) * (long)(short)param_1[0x45] >> 0xe;
      param_1[0x7a] = lVar40;
      goto joined_r0x00e28428;
    }
    lVar40 = (long)*(short *)((long)param_1 + 0x224);
    param_1[0x7a] = lVar40;
    if (*(short *)((long)param_1 + 0x222) != 0x4000) goto LAB_00e283f0;
LAB_00e283c4:
    pcVar53 = FUN_00e34aa0;
  }
  param_1[0x7c] = (long)pcVar53;
  plVar3 = param_1 + 0x7f;
  if (*(short *)((long)param_1 + 0x21e) == 0x4000) {
    pcVar53 = FUN_00e34aa0;
  }
  else if ((short)param_1[0x44] == 0x4000) {
    pcVar53 = FUN_00e34aa8;
  }
  else {
    pcVar53 = FUN_00e34b2c;
  }
  param_1[0x7d] = (long)pcVar53;
  param_1[0x80] = (long)FUN_00e34cc8;
  *plVar3 = (long)FUN_00e34ba8;
  if (lVar40 == 0x4000) {
    if (sVar23 == 0x4000) {
      pcVar53 = FUN_00e34d6c;
      pcVar45 = FUN_00e34dc0;
    }
    else {
      if ((short)param_1[0x45] != 0x4000) goto LAB_00e284e8;
      pcVar53 = FUN_00e34ddc;
      pcVar45 = FUN_00e34e3c;
    }
    param_1[0x80] = (long)pcVar45;
    *plVar3 = (long)pcVar53;
  }
LAB_00e284e8:
  lVar41 = -lVar40;
  if (-1 < lVar40) {
    lVar41 = lVar40;
  }
  plVar4 = param_1 + 0x7a;
  if (lVar41 < 0x400) {
    *plVar4 = 0x4000;
  }
  param_1[0x3c] = 0;
  switch((char)param_1[0x48]) {
  case '\0':
    pcVar53 = FUN_00e34f00;
    break;
  case '\x01':
    pcVar53 = FUN_00e34e70;
    break;
  case '\x02':
    pcVar53 = FUN_00e34f40;
    break;
  case '\x03':
    pcVar53 = FUN_00e34ed8;
    break;
  case '\x04':
    pcVar53 = FUN_00e34ea4;
    break;
  case '\x05':
    pcVar53 = FUN_00e34e54;
    break;
  case '\x06':
    pcVar53 = FUN_00e34f74;
    break;
  case '\a':
    pcVar53 = FUN_00e34fcc;
    break;
  default:
    goto switchD_00e28528_default;
  }
  param_1[0x7b] = (long)pcVar53;
switchD_00e28528_default:
  pcVar5 = (char *)((long)param_1 + 0x3c9);
  psVar6 = (short *)((long)param_1 + 0x224);
  plVar7 = param_1 + 9;
  lVar40 = param_1[0x51];
  plVar8 = param_1 + 0x29;
  plVar9 = param_1 + 0x21;
  uVar56 = 0;
  plVar10 = param_1 + 0x51;
  plVar11 = param_1 + 3;
  puVar12 = (ushort *)(param_1 + 0x45);
  plVar13 = param_1 + 0x11;
  plVar14 = param_1 + 0x19;
LAB_00e285ec:
  lVar41 = param_1[0x50];
  bVar67 = *(byte *)(lVar41 + lVar40);
  uVar49 = (ulong)bVar67;
  cVar33 = (&DAT_01975a50)[uVar49];
  iVar48 = (int)cVar33;
  *(byte *)(param_1 + 0x53) = bVar67;
  *(int *)((long)param_1 + 0x29c) = (int)cVar33;
  if ((uVar49 | 1) == 0x41) {
    if (lVar40 + 1 < param_1[0x52]) {
      iVar48 = 2 - (uint)*(byte *)(lVar41 + lVar40 + 1) * iVar48;
      *(int *)((long)param_1 + 0x29c) = iVar48;
      if (lVar40 + iVar48 <= param_1[0x52]) goto LAB_00e2864c;
    }
    goto LAB_00e2d51c;
  }
  if (param_1[0x52] < lVar40 + (int)cVar33) goto LAB_00e2d51c;
LAB_00e2864c:
  bVar21 = (&DAT_01975b50)[uVar49];
  bVar26 = bVar21 >> 4;
  lVar40 = param_1[4] - (ulong)bVar26;
  param_1[7] = lVar40;
  uVar75 = (uint)bVar67;
  if (lVar40 < 0) {
    if (*pcVar5 != '\0') {
      iVar48 = 0x81;
      goto LAB_00e2d520;
    }
    if (bVar26 != 0) {
      lVar40 = param_1[6];
      uVar68 = (uint)bVar26;
      if (bVar67 == 0xf) {
        uVar69 = bVar26 - 1;
        uVar59 = 0;
        if ((uVar69 != 0xffffffff) && (uVar69 < 0x10000)) {
          uVar69 = 0;
          uVar70 = uVar68 & 0xc;
          uVar59 = (ulong)uVar70;
          do {
            uVar74 = uVar69 & 0xfffc;
            uVar69 = uVar69 + 4;
            puVar1 = (undefined8 *)(lVar40 + (ulong)uVar74 * 8);
            puVar1[1] = 0;
            *puVar1 = 0;
            puVar1[3] = 0;
            puVar1[2] = 0;
          } while (uVar70 != uVar69);
          if (uVar70 == uVar68) goto LAB_00e28714;
        }
      }
      else {
        uVar59 = 0;
      }
      do {
        uVar34 = uVar59 & 0xffff;
        uVar69 = (int)uVar59 + 1;
        uVar59 = (ulong)uVar69;
        *(undefined8 *)(lVar40 + uVar34 * 8) = 0;
      } while ((uVar69 & 0xffff) < uVar68);
    }
LAB_00e28714:
    lVar40 = 0;
    param_1[7] = 0;
  }
  if (uVar75 == 0x91) {
    if (*(uint **)(*param_1 + 0x4c0) != (uint *)0x0) {
      uVar59 = (ulong)**(uint **)(*param_1 + 0x4c0);
      goto LAB_00e28728;
    }
    lVar58 = param_1[8];
    lVar62 = param_1[5];
    if (lVar58 <= lVar62) goto LAB_00e2873c;
    goto LAB_00e2d500;
  }
  uVar59 = (ulong)bVar21 & 0xf;
LAB_00e28728:
  lVar58 = lVar40 + uVar59;
  param_1[8] = lVar58;
  lVar62 = param_1[5];
  if (lVar62 < lVar58) goto LAB_00e2d500;
LAB_00e2873c:
  lVar60 = param_1[6];
  uVar68 = (uint)bVar67;
  *(undefined1 *)(param_1 + 0x54) = 1;
  *(undefined4 *)(param_1 + 3) = 0;
  __s = (undefined1 (*) [16])(lVar60 + lVar40 * 8);
  uVar52 = (ushort)bVar67;
  iVar72 = (int)lVar62;
  switch(uVar49) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    uVar61 = (uVar52 & 1) << 0xe;
    uVar25 = uVar61 ^ 0x4000;
    if (uVar52 < 4) {
      *(ushort *)((long)param_1 + 0x222) = uVar61;
      *(ushort *)((long)param_1 + 0x224) = uVar25;
      *(ushort *)((long)param_1 + 0x21e) = uVar61;
      *(ushort *)(param_1 + 0x44) = uVar25;
    }
    if ((bVar67 >> 1 & 1) == 0) {
      *(ushort *)((long)param_1 + 0x226) = uVar61;
      *puVar12 = uVar25;
      if ((uVar52 & 1) != 1) goto LAB_00e287a4;
LAB_00e28a2c:
      sVar23 = *(short *)((long)param_1 + 0x222);
      lVar40 = (long)sVar23;
      *plVar4 = lVar40;
joined_r0x00e291e8:
      if (sVar23 != 0x4000) goto LAB_00e287cc;
LAB_00e28a44:
      param_1[0x7c] = (long)FUN_00e34aa0;
      if (*(short *)((long)param_1 + 0x21e) != 0x4000) goto LAB_00e28a5c;
LAB_00e287fc:
      pcVar53 = FUN_00e34aa0;
    }
    else {
      uVar61 = *(ushort *)((long)param_1 + 0x226);
      if (uVar61 == 0x4000) goto LAB_00e28a2c;
LAB_00e287a4:
      if ((long)(short)*puVar12 != 0x4000) {
        sVar23 = *(short *)((long)param_1 + 0x222);
        lVar40 = (long)sVar23 * (long)(short)uVar61 + (long)*psVar6 * (long)(short)*puVar12 >> 0xe;
        *plVar4 = lVar40;
        goto joined_r0x00e291e8;
      }
      lVar40 = (long)*psVar6;
      *plVar4 = lVar40;
      if (*(short *)((long)param_1 + 0x222) == 0x4000) goto LAB_00e28a44;
LAB_00e287cc:
      pcVar53 = FUN_00e34aa8;
      if (*psVar6 != 0x4000) {
        pcVar53 = FUN_00e34ab0;
      }
      param_1[0x7c] = (long)pcVar53;
      if (*(short *)((long)param_1 + 0x21e) == 0x4000) goto LAB_00e287fc;
LAB_00e28a5c:
      pcVar53 = FUN_00e34aa8;
      if ((short)param_1[0x44] != 0x4000) {
        pcVar53 = FUN_00e34b2c;
      }
    }
    param_1[0x7d] = (long)pcVar53;
    param_1[0x80] = (long)FUN_00e34cc8;
    *plVar3 = (long)FUN_00e34ba8;
    if (lVar40 == 0x4000) {
      if (uVar61 == 0x4000) goto LAB_00e28aa0;
LAB_00e2c0cc:
      if (*puVar12 == 0x4000) goto LAB_00e2c0d8;
    }
    goto LAB_00e2c0f4;
  case 6:
  case 7:
    uVar49 = *(ulong *)((long)*__s + 8);
    if (((uint)*(ushort *)((long)param_1 + 0xd4) <= ((uint)uVar49 & 0xffff)) ||
       (*(ushort *)((long)param_1 + 0x94) <= *(ushort *)*__s)) goto LAB_00e2ac90;
    plVar44 = (long *)(param_1[0x14] + (ulong)*(ushort *)*__s * 0x10);
    plVar57 = (long *)(param_1[0x1c] + (uVar49 & 0xffff) * 0x10);
    uVar47 = *plVar44 - *plVar57;
    uVar59 = plVar44[1] - plVar57[1];
    uVar34 = 0x4000;
    if (uVar59 != 0 || uVar47 != 0) {
      uVar34 = uVar47;
    }
    uVar49 = uVar34;
    if ((bVar67 & 1) != 0 && (uVar59 != 0 || uVar47 != 0)) {
      uVar49 = -uVar59;
      uVar59 = uVar34;
    }
    if (uVar59 != 0 || uVar49 != 0) goto LAB_00e2932c;
    goto LAB_00e293a0;
  case 8:
  case 9:
    uVar49 = *(ulong *)((long)*__s + 8);
    if ((((uint)uVar49 & 0xffff) < (uint)*(ushort *)((long)param_1 + 0xd4)) &&
       (*(ushort *)*__s < *(ushort *)((long)param_1 + 0x94))) {
      plVar44 = (long *)(param_1[0x14] + (ulong)*(ushort *)*__s * 0x10);
      plVar57 = (long *)(param_1[0x1c] + (uVar49 & 0xffff) * 0x10);
      uVar34 = *plVar44 - *plVar57;
      uVar59 = plVar44[1] - plVar57[1];
      uVar49 = 0x4000;
      if (uVar59 != 0 || uVar34 != 0) {
        uVar49 = uVar34;
      }
      uVar47 = uVar49;
      if ((bVar67 & 1) != 0 && (uVar59 != 0 || uVar34 != 0)) {
        uVar47 = -uVar59;
        uVar59 = uVar49;
      }
      if (uVar59 == 0 && uVar47 == 0) {
        uVar52 = *(ushort *)((long)param_1 + 0x226);
        uVar68 = (uint)uVar52;
        uVar75 = (uint)uVar52;
        if (uVar52 == 0x4000) goto LAB_00e2c068;
      }
      else {
        local_a8 = uVar47;
        local_a0 = uVar59;
        FUN_00e13480(&local_a8);
        uVar49 = local_a8 + 3;
        if (-1 < (long)local_a8) {
          uVar49 = local_a8;
        }
        uVar68 = (uint)((long)uVar49 >> 2);
        *(short *)((long)param_1 + 0x226) = (short)((long)uVar49 >> 2);
        uVar49 = local_a0 + 3;
        if (-1 < (long)local_a0) {
          uVar49 = local_a0;
        }
        *puVar12 = (ushort)(uVar49 >> 2);
        uVar75 = uVar68;
        if ((uVar68 & 0xffff) == 0x4000) goto LAB_00e2c068;
      }
      uVar52 = *puVar12;
joined_r0x00e2b640:
      if ((long)(short)uVar52 == 0x4000) {
        lVar40 = (long)*psVar6;
        *plVar4 = lVar40;
        sVar23 = *(short *)((long)param_1 + 0x222);
        goto joined_r0x00e2c07c;
      }
      lVar40 = (long)*(short *)((long)param_1 + 0x222) * (long)(short)uVar75 +
               (long)*psVar6 * (long)(short)uVar52 >> 0xe;
      *plVar4 = lVar40;
      if (*(short *)((long)param_1 + 0x222) != 0x4000) goto LAB_00e2b660;
      goto LAB_00e2c080;
    }
    goto LAB_00e2ac90;
  case 10:
    uVar36 = *(undefined8 *)((long)*__s + 8);
    if ((((uint)uVar36 | (uint)*(undefined8 *)*__s) & 0xffff) != 0) {
      uVar49 = (long)(short)*(undefined8 *)*__s;
      uVar59 = (long)(short)uVar36;
LAB_00e2932c:
      local_a0 = uVar59;
      local_a8 = uVar49;
      FUN_00e13480(&local_a8);
      uVar49 = local_a8 + 3;
      if (-1 < (long)local_a8) {
        uVar49 = local_a8;
      }
      *(short *)((long)param_1 + 0x222) = (short)(uVar49 >> 2);
      uVar49 = local_a0 + 3;
      if (-1 < (long)local_a0) {
        uVar49 = local_a0;
      }
      *psVar6 = (short)(uVar49 >> 2);
    }
LAB_00e293a0:
    uVar75 = *(uint *)((long)param_1 + 0x222);
    *(uint *)((long)param_1 + 0x21e) = uVar75;
    lVar40 = (long)*(short *)((long)param_1 + 0x226);
    if (lVar40 == 0x4000) {
      lVar41 = (long)(short)uVar75;
      *plVar4 = lVar41;
joined_r0x00e2b848:
      if ((uVar75 & 0xffff) == 0x4000) goto LAB_00e293cc;
LAB_00e2b010:
      pcVar53 = FUN_00e34aa8;
      if (*(short *)((long)param_1 + 0x224) != 0x4000) {
        pcVar53 = FUN_00e34ab0;
      }
      param_1[0x7c] = (long)pcVar53;
      pcVar53 = FUN_00e34aa8;
      if (uVar75 >> 0x10 != 0x4000) {
        pcVar53 = FUN_00e34b2c;
      }
    }
    else {
      if ((long)(short)*puVar12 != 0x4000) {
        lVar41 = lVar40 * (short)uVar75 + (long)*psVar6 * (long)(short)*puVar12 >> 0xe;
        *plVar4 = lVar41;
        goto joined_r0x00e2b848;
      }
      lVar41 = (long)*psVar6;
      *plVar4 = lVar41;
      if ((uVar75 & 0xffff) != 0x4000) goto LAB_00e2b010;
LAB_00e293cc:
      param_1[0x7c] = (long)FUN_00e34aa0;
      pcVar53 = FUN_00e34aa0;
    }
LAB_00e2c7e8:
    param_1[0x7d] = (long)pcVar53;
    param_1[0x80] = (long)FUN_00e34cc8;
    *plVar3 = (long)FUN_00e34ba8;
    if (lVar41 == 0x4000) {
      if ((int)lVar40 == 0x4000) {
        pcVar53 = FUN_00e34d6c;
        pcVar45 = FUN_00e34dc0;
      }
      else {
        if (*puVar12 != 0x4000) goto LAB_00e2c850;
        pcVar53 = FUN_00e34ddc;
        pcVar45 = FUN_00e34e3c;
      }
      param_1[0x80] = (long)pcVar45;
      *plVar3 = (long)pcVar53;
    }
LAB_00e2c850:
    lVar58 = -lVar41;
    if (-1 < lVar41) {
      lVar58 = lVar41;
    }
    goto joined_r0x00e2c85c;
  case 0xb:
    uVar36 = *(undefined8 *)((long)*__s + 8);
    if ((((uint)uVar36 | (uint)*(undefined8 *)*__s) & 0xffff) == 0) {
      uVar52 = *(ushort *)((long)param_1 + 0x226);
      uVar68 = (uint)uVar52;
      uVar75 = (uint)uVar52;
      if (uVar52 != 0x4000) goto LAB_00e2b638;
    }
    else {
      local_a0 = (ulong)(short)uVar36;
      local_a8 = (ulong)(short)*(undefined8 *)*__s;
      FUN_00e13480(&local_a8);
      uVar49 = local_a8 + 3;
      if (-1 < (long)local_a8) {
        uVar49 = local_a8;
      }
      uVar68 = (uint)((long)uVar49 >> 2);
      *(short *)((long)param_1 + 0x226) = (short)((long)uVar49 >> 2);
      uVar49 = local_a0 + 3;
      if (-1 < (long)local_a0) {
        uVar49 = local_a0;
      }
      *puVar12 = (ushort)(uVar49 >> 2);
      uVar75 = uVar68;
      if ((uVar68 & 0xffff) != 0x4000) {
LAB_00e2b638:
        uVar52 = *puVar12;
        goto joined_r0x00e2b640;
      }
    }
LAB_00e2c068:
    sVar23 = *(short *)((long)param_1 + 0x222);
    lVar40 = (long)sVar23;
    *plVar4 = lVar40;
    uVar75 = uVar68;
joined_r0x00e2c07c:
    if (sVar23 == 0x4000) {
LAB_00e2c080:
      param_1[0x7c] = (long)FUN_00e34aa0;
      if (*(short *)((long)param_1 + 0x21e) == 0x4000) goto LAB_00e2c098;
LAB_00e2b690:
      pcVar53 = FUN_00e34aa8;
      if ((short)param_1[0x44] != 0x4000) {
        pcVar53 = FUN_00e34b2c;
      }
    }
    else {
LAB_00e2b660:
      pcVar53 = FUN_00e34aa8;
      if (*psVar6 != 0x4000) {
        pcVar53 = FUN_00e34ab0;
      }
      param_1[0x7c] = (long)pcVar53;
      if (*(short *)((long)param_1 + 0x21e) != 0x4000) goto LAB_00e2b690;
LAB_00e2c098:
      pcVar53 = FUN_00e34aa0;
    }
    param_1[0x7d] = (long)pcVar53;
    param_1[0x80] = (long)FUN_00e34cc8;
    *plVar3 = (long)FUN_00e34ba8;
    if (lVar40 == 0x4000) {
      if ((uVar75 & 0xffff) != 0x4000) goto LAB_00e2c0cc;
LAB_00e28aa0:
      pcVar53 = FUN_00e34d6c;
      pcVar45 = FUN_00e34dc0;
      goto LAB_00e2c0ec;
    }
    goto LAB_00e2c0f4;
  case 0xc:
    sVar23 = *(short *)((long)param_1 + 0x222);
    sVar24 = *(short *)((long)param_1 + 0x224);
    goto LAB_00e29498;
  case 0xd:
    sVar23 = *(short *)((long)param_1 + 0x226);
    sVar24 = (short)param_1[0x45];
LAB_00e29498:
    *(long *)((long)*__s + 8) = (long)sVar24;
    *(long *)*__s = (long)sVar23;
    iVar48 = (int)*plVar11;
    break;
  case 0xe:
    uVar75 = *(uint *)((long)param_1 + 0x222);
    *(uint *)((long)param_1 + 0x226) = uVar75;
    if ((uVar75 & 0xffff) == 0x4000) {
      lVar40 = 0x4000;
      *plVar4 = 0x4000;
      param_1[0x7c] = (long)FUN_00e34aa0;
      if (*(short *)((long)param_1 + 0x21e) == 0x4000) goto LAB_00e294e8;
LAB_00e2bcf0:
      pcVar53 = FUN_00e34aa8;
      if ((short)param_1[0x44] != 0x4000) {
        pcVar53 = FUN_00e34b2c;
      }
    }
    else {
      if (uVar75 >> 0x10 == 0x4000) {
        sVar23 = *psVar6;
        lVar40 = (long)sVar23;
      }
      else {
        sVar23 = *psVar6;
        lVar40 = (long)(short)uVar75 * (long)(short)uVar75 +
                 (long)sVar23 * (long)(short)(uVar75 >> 0x10) >> 0xe;
      }
      pcVar53 = FUN_00e34aa8;
      if (sVar23 != 0x4000) {
        pcVar53 = FUN_00e34ab0;
      }
      *plVar4 = lVar40;
      param_1[0x7c] = (long)pcVar53;
      if (*(short *)((long)param_1 + 0x21e) != 0x4000) goto LAB_00e2bcf0;
LAB_00e294e8:
      pcVar53 = FUN_00e34aa0;
    }
    param_1[0x7d] = (long)pcVar53;
    param_1[0x80] = (long)FUN_00e34cc8;
    *plVar3 = (long)FUN_00e34ba8;
    if (lVar40 != 0x4000) goto LAB_00e2c0f4;
    if ((uVar75 & 0xffff) == 0x4000) goto LAB_00e28aa0;
    if (uVar75 >> 0x10 != 0x4000) goto LAB_00e2c0f4;
LAB_00e2c0d8:
    pcVar53 = FUN_00e34ddc;
    pcVar45 = FUN_00e34e3c;
LAB_00e2c0ec:
    param_1[0x80] = (long)pcVar45;
    *plVar3 = (long)pcVar53;
LAB_00e2c0f4:
    lVar58 = -lVar40;
    if (-1 < lVar40) {
      lVar58 = lVar40;
    }
joined_r0x00e2c85c:
    if (lVar58 < 0x400) {
      *plVar4 = 0x4000;
    }
    param_1[0x3c] = 0;
    iVar48 = (int)*plVar11;
    break;
  case 0xf:
    uVar49 = *(ulong *)(__s[1] + 8);
    if ((((uint)uVar49 & 0xffff) < (uint)*(ushort *)((long)param_1 + 0x54)) &&
       (uVar59 = *(ulong *)__s[2], ((uint)uVar59 & 0xffff) < (uint)*(ushort *)((long)param_1 + 0x54)
       )) {
      uVar34 = *(ulong *)((long)*__s + 8);
      if ((((uint)uVar34 & 0xffff) < (uint)*(ushort *)((long)param_1 + 0x94)) &&
         ((uVar47 = *(ulong *)__s[1],
          ((uint)uVar47 & 0xffff) < (uint)*(ushort *)((long)param_1 + 0x94) &&
          (uVar50 = *(ulong *)*__s,
          ((uint)uVar50 & 0xffff) < (uint)*(ushort *)((long)param_1 + 0xd4))))) {
        plVar44 = (long *)(param_1[0xc] + (uVar59 & 0xffff) * 0x10);
        plVar57 = (long *)(param_1[0xc] + (uVar49 & 0xffff) * 0x10);
        plVar17 = (long *)(param_1[0x14] + (uVar47 & 0xffff) * 0x10);
        plVar2 = (long *)(param_1[0x14] + (uVar34 & 0xffff) * 0x10);
        lVar58 = *plVar57;
        lVar60 = plVar57[1];
        lVar62 = *plVar2;
        lVar71 = plVar2[1];
        lVar54 = *plVar44 - lVar58;
        lVar55 = plVar44[1] - lVar60;
        lVar65 = *plVar17 - lVar62;
        lVar64 = plVar17[1] - lVar71;
        lVar38 = -lVar55;
        lVar41 = FT_MulDiv(lVar65,lVar38,0x40);
        lVar40 = FT_MulDiv(lVar64,lVar54,0x40);
        lVar40 = lVar40 + lVar41;
        lVar41 = -lVar40;
        if (-1 < lVar40) {
          lVar41 = lVar40;
        }
        lVar35 = FT_MulDiv(lVar65,lVar54,0x40);
        lVar55 = FT_MulDiv(lVar64,lVar55,0x40);
        lVar55 = lVar55 + lVar35;
        lVar35 = -lVar55;
        if (-1 < lVar55) {
          lVar35 = lVar55;
        }
        if (lVar41 * 0x13 - lVar35 == 0 || lVar41 * 0x13 < lVar35) {
          plVar57 = (long *)(param_1[0x14] + (uVar34 & 0xffff) * 0x10);
          plVar17 = (long *)(param_1[0x14] + (uVar47 & 0xffff) * 0x10);
          plVar2 = (long *)(param_1[0xc] + (uVar49 & 0xffff) * 0x10);
          plVar18 = (long *)(param_1[0xc] + (uVar59 & 0xffff) * 0x10);
          lVar40 = *plVar17 + *plVar57 + *plVar2 + *plVar18;
          plVar44 = (long *)(param_1[0x1c] + (uVar50 & 0xffff) * 0x10);
          lVar41 = lVar40 + 3;
          if (-1 < lVar40) {
            lVar41 = lVar40;
          }
          *plVar44 = lVar41 >> 2;
          lVar41 = plVar17[1] + plVar57[1] + plVar2[1] + plVar18[1];
          lVar40 = lVar41 + 3;
          if (-1 < lVar41) {
            lVar40 = lVar41;
          }
          lVar40 = lVar40 >> 2;
        }
        else {
          lVar41 = FT_MulDiv(lVar58 - lVar62,lVar38,0x40);
          lVar58 = FT_MulDiv(lVar60 - lVar71,lVar54,0x40);
          lVar62 = FT_MulDiv(lVar58 + lVar41,lVar65,lVar40);
          lVar40 = FT_MulDiv(lVar58 + lVar41,lVar64,lVar40);
          plVar57 = (long *)(param_1[0x14] + (uVar34 & 0xffff) * 0x10);
          plVar44 = (long *)(param_1[0x1c] + (uVar50 & 0xffff) * 0x10);
          *plVar44 = *plVar57 + lVar62;
          lVar40 = plVar57[1] + lVar40;
        }
        plVar44[1] = lVar40;
        *(byte *)(param_1[0x1e] + (uVar50 & 0xffff)) =
             *(byte *)(param_1[0x1e] + (uVar50 & 0xffff)) | 0x18;
        iVar48 = (int)*plVar11;
        break;
      }
    }
    cVar33 = *pcVar5;
    goto joined_r0x00e29280;
  case 0x10:
    *(short *)(param_1 + 0x43) = (short)*(undefined8 *)*__s;
    iVar48 = (int)*plVar11;
    break;
  case 0x11:
    *(short *)((long)param_1 + 0x21a) = (short)*(undefined8 *)*__s;
    iVar48 = (int)*plVar11;
    break;
  case 0x12:
    *(short *)((long)param_1 + 0x21c) = (short)*(undefined8 *)*__s;
    iVar48 = (int)*plVar11;
    break;
  case 0x13:
    plVar44 = plVar9;
    if ((*(int *)*__s != 1) && (plVar44 = plVar8, *(int *)*__s != 0)) goto LAB_00e2ac90;
    auVar66 = *(undefined1 (*) [16])(plVar44 + 4);
    lVar41 = plVar44[7];
    lVar40 = plVar44[6];
    lVar62 = plVar44[1];
    lVar58 = *plVar44;
    lVar71 = plVar44[3];
    lVar60 = plVar44[2];
    param_1[0xe] = auVar66._8_8_;
    param_1[0xd] = auVar66._0_8_;
    param_1[0x10] = lVar41;
    param_1[0xf] = lVar40;
    param_1[10] = lVar62;
    *plVar7 = lVar58;
    param_1[0xc] = lVar71;
    param_1[0xb] = lVar60;
    *(short *)((long)param_1 + 0x26c) = (short)*(undefined8 *)*__s;
    iVar48 = (int)*plVar11;
    break;
  case 0x14:
    plVar44 = plVar9;
    if ((*(int *)*__s != 1) && (plVar44 = plVar8, *(int *)*__s != 0)) goto LAB_00e2ac90;
    auVar66 = *(undefined1 (*) [16])(plVar44 + 4);
    lVar41 = plVar44[7];
    lVar40 = plVar44[6];
    lVar62 = plVar44[1];
    lVar58 = *plVar44;
    lVar71 = plVar44[3];
    lVar60 = plVar44[2];
    param_1[0x16] = auVar66._8_8_;
    param_1[0x15] = auVar66._0_8_;
    param_1[0x18] = lVar41;
    param_1[0x17] = lVar40;
    param_1[0x12] = lVar62;
    *plVar13 = lVar58;
    param_1[0x14] = lVar71;
    param_1[0x13] = lVar60;
    *(short *)((long)param_1 + 0x26e) = (short)*(undefined8 *)*__s;
    iVar48 = (int)*plVar11;
    break;
  case 0x15:
    plVar44 = plVar9;
    if ((*(int *)*__s != 1) && (plVar44 = plVar8, *(int *)*__s != 0)) goto LAB_00e2ac90;
    auVar66 = *(undefined1 (*) [16])(plVar44 + 4);
    lVar41 = plVar44[7];
    lVar40 = plVar44[6];
    lVar62 = plVar44[1];
    lVar58 = *plVar44;
    lVar71 = plVar44[3];
    lVar60 = plVar44[2];
    param_1[0x1e] = auVar66._8_8_;
    param_1[0x1d] = auVar66._0_8_;
    param_1[0x20] = lVar41;
    param_1[0x1f] = lVar40;
    param_1[0x1a] = lVar62;
    *plVar14 = lVar58;
    param_1[0x1c] = lVar71;
    param_1[0x1b] = lVar60;
    *(short *)(param_1 + 0x4e) = (short)*(undefined8 *)*__s;
    iVar48 = (int)*plVar11;
    break;
  case 0x16:
    plVar44 = plVar9;
    if ((*(int *)*__s != 1) && (plVar44 = plVar8, *(int *)*__s != 0)) goto LAB_00e2ac90;
    lVar40 = plVar44[4];
    lVar58 = plVar44[7];
    lVar41 = plVar44[6];
    lVar60 = plVar44[1];
    lVar62 = *plVar44;
    lVar38 = plVar44[3];
    lVar71 = plVar44[2];
    param_1[0xe] = plVar44[5];
    param_1[0xd] = lVar40;
    param_1[0x10] = lVar58;
    param_1[0xf] = lVar41;
    param_1[10] = lVar60;
    *plVar7 = lVar62;
    param_1[0xc] = lVar38;
    param_1[0xb] = lVar71;
    param_1[0x16] = param_1[0xe];
    param_1[0x15] = param_1[0xd];
    param_1[0x18] = param_1[0x10];
    param_1[0x17] = param_1[0xf];
    param_1[0x12] = param_1[10];
    *plVar13 = *plVar7;
    param_1[0x14] = param_1[0xc];
    param_1[0x13] = param_1[0xb];
    param_1[0x1e] = SUB168(*(undefined1 (*) [16])(param_1 + 0xd),8);
    param_1[0x1d] = SUB168(*(undefined1 (*) [16])(param_1 + 0xd),0);
    param_1[0x20] = param_1[0x10];
    param_1[0x1f] = param_1[0xf];
    param_1[0x1a] = param_1[10];
    *plVar14 = *plVar7;
    param_1[0x1c] = param_1[0xc];
    param_1[0x1b] = param_1[0xb];
    uVar22 = *(undefined2 *)*__s;
    *(undefined2 *)((long)param_1 + 0x26c) = uVar22;
    *(undefined2 *)((long)param_1 + 0x26e) = uVar22;
    *(undefined2 *)(param_1 + 0x4e) = uVar22;
    iVar48 = (int)*plVar11;
    break;
  case 0x17:
    lVar40 = *(long *)*__s;
    if (-1 < lVar40) {
      if (0xfffe < lVar40) {
        lVar40 = 0xffff;
      }
      param_1[0x46] = lVar40;
      iVar48 = (int)*plVar11;
      break;
    }
    goto LAB_00e2d564;
  case 0x18:
    uVar39 = 1;
    pcVar53 = FUN_00e34e70;
    goto LAB_00e2a8cc;
  case 0x19:
    *(undefined4 *)(param_1 + 0x48) = 0;
    param_1[0x7b] = (long)FUN_00e34f00;
    iVar48 = (int)*plVar11;
    break;
  case 0x1a:
    param_1[0x47] = *(long *)*__s;
    iVar48 = (int)*plVar11;
    break;
  case 0x1b:
    lVar40 = param_1[0x51];
    lVar58 = param_1[0x52];
    iVar72 = 1;
    do {
      while( true ) {
        lVar40 = lVar40 + iVar48;
        *plVar10 = lVar40;
        if (lVar58 <= lVar40) goto LAB_00e2d51c;
        bVar67 = *(byte *)(lVar41 + lVar40);
        iVar48 = (int)(char)(&DAT_01975a50)[bVar67];
        *(byte *)(param_1 + 0x53) = bVar67;
        *(int *)((long)param_1 + 0x29c) = iVar48;
        if (((ulong)bVar67 | 1) == 0x41) {
          if (lVar58 <= lVar40 + 1) goto LAB_00e2d51c;
          iVar48 = 2 - (uint)*(byte *)(lVar41 + lVar40 + 1) * iVar48;
          *(int *)((long)param_1 + 0x29c) = iVar48;
        }
        if (lVar58 < lVar40 + iVar48) goto LAB_00e2d51c;
        if (bVar67 != 0x59) break;
        iVar72 = iVar72 + -1;
LAB_00e29844:
        if (iVar72 == 0) goto LAB_00e2c56c;
      }
      if (bVar67 != 0x58) goto LAB_00e29844;
      iVar72 = iVar72 + 1;
    } while (iVar72 != 0);
    goto LAB_00e2c56c;
  case 0x1c:
switchD_00e28768_caseD_1c:
    if (*(long *)*__s != 0 || lVar40 != 0) {
      lVar40 = *plVar10 + *(long *)*__s;
      *plVar10 = lVar40;
      if ((-1 < lVar40) &&
         (((int)param_1[0x5e] < 1 ||
          (lVar40 <= *(long *)(*(long *)(param_1[0x5f] + (long)(int)param_1[0x5e] * 0x20 + -8) +
                              0x10))))) {
        *(undefined1 *)(param_1 + 0x54) = 0;
        if ((*(long *)*__s < 0) &&
           (lVar40 = param_1[0x88], param_1[0x88] = lVar40 + 1U, (ulong)param_1[0x89] < lVar40 + 1U)
           ) goto LAB_00e2d5a0;
        goto LAB_00e2c56c;
      }
    }
    goto LAB_00e2d564;
  case 0x1d:
    param_1[0x49] = *(long *)*__s;
    iVar48 = (int)*plVar11;
    break;
  case 0x1e:
    param_1[0x4a] = *(long *)*__s;
    iVar48 = (int)*plVar11;
    break;
  case 0x1f:
    lVar40 = FT_MulFix(*(undefined8 *)*__s,param_1[0x3d]);
    param_1[0x4b] = lVar40;
    iVar48 = (int)*plVar11;
    break;
  case 0x20:
    *(undefined8 *)((long)*__s + 8) = *(undefined8 *)*__s;
    iVar48 = (int)*plVar11;
    break;
  case 0x21:
  case 0x59:
  case 0x7e:
  case 0x7f:
    param_1[4] = lVar58;
    goto LAB_00e2c128;
  case 0x22:
    param_1[8] = 0;
    cVar33 = (char)param_1[0x54];
    param_1[4] = param_1[8];
    goto joined_r0x00e2a384;
  case 0x23:
    auVar66 = NEON_ext(*__s,*__s,8,1);
    *(long *)((long)*__s + 8) = auVar66._8_8_;
    *(long *)*__s = auVar66._0_8_;
    iVar48 = (int)*plVar11;
    break;
  case 0x24:
    *(long *)*__s = param_1[4];
    iVar48 = (int)*plVar11;
    break;
  case 0x25:
    lVar41 = *(long *)*__s;
    if ((lVar41 < 1) || (lVar40 < lVar41)) {
      if (*pcVar5 == '\0') {
LAB_00e2b4c8:
        *(undefined8 *)*__s = 0;
        iVar48 = (int)*plVar11;
      }
      else {
        *(int *)plVar11 = 0x86;
        *(undefined8 *)*__s = 0;
        iVar48 = (int)*plVar11;
      }
    }
    else {
      *(undefined8 *)*__s = *(undefined8 *)(lVar60 + (lVar40 - lVar41) * 8);
      iVar48 = (int)*plVar11;
    }
    break;
  case 0x26:
    lVar41 = *(long *)*__s;
    if ((0 < lVar41) && (lVar41 <= lVar40)) {
      puVar1 = (undefined8 *)(lVar60 + (lVar40 - lVar41) * 8);
      uVar36 = *puVar1;
      memmove(puVar1,puVar1 + 1,lVar41 * 8 - 8);
      *(undefined8 *)(param_1[6] + param_1[7] * 8 + -8) = uVar36;
      goto LAB_00e288f4;
    }
    goto LAB_00e2ac90;
  case 0x27:
    uVar68 = *(uint *)*__s;
    uVar75 = uVar68 & 0xffff;
    if (uVar75 < *(ushort *)((long)param_1 + 0x94)) {
      uVar49 = *(ulong *)((long)*__s + 8);
      uVar69 = (uint)uVar49 & 0xffff;
      if (uVar69 < *(ushort *)((long)param_1 + 0x54)) {
        plVar44 = (long *)(param_1[0xc] + (ulong)uVar69 * 0x10);
        plVar57 = (long *)(param_1[0x14] + (ulong)uVar75 * 0x10);
        lVar40 = (*(code *)param_1[0x7c])(param_1,*plVar44 - *plVar57,plVar44[1] - plVar57[1]);
        if (lVar40 < 0) {
          lVar40 = lVar40 + 1;
        }
        (*(code *)param_1[0x7f])(param_1,plVar13,uVar68,lVar40 >> 1);
        (*(code *)param_1[0x7f])(param_1,plVar7,uVar49 & 0xffffffff,-(lVar40 >> 1));
        goto LAB_00e288f4;
      }
    }
    goto LAB_00e2ac90;
  case 0x28:
    piVar46 = (int *)param_1[0x5c];
    if (*(uint *)(param_1 + 0x5b) != 0) {
      piVar43 = piVar46;
      do {
        if (((char)piVar43[6] == '(') && ((char)piVar43[7] != '\0')) goto LAB_00e2b754;
        piVar43 = piVar43 + 10;
      } while (piVar43 < piVar46 + (ulong)*(uint *)(param_1 + 0x5b) * 10);
    }
    goto LAB_00e2b740;
  case 0x29:
    if ((uint)*(ushort *)((long)param_1 + 0x54) <= ((uint)*(ulong *)*__s & 0xffff))
    goto LAB_00e2ac90;
    uVar49 = *(ulong *)*__s & 0xffff;
    bVar67 = 0xf7;
    if (*(short *)((long)param_1 + 0x226) == 0) {
      bVar67 = 0xff;
    }
    if ((short)param_1[0x45] != 0) {
      bVar67 = bVar67 & 0xef;
    }
    *(byte *)(param_1[0xe] + uVar49) = bVar67 & *(byte *)(param_1[0xe] + uVar49);
    iVar48 = (int)*plVar11;
    break;
  case 0x2a:
    uVar49 = *(ulong *)((long)*__s + 8);
    uVar75 = (int)param_1[0x5d] + 1;
    if (uVar49 < uVar75) {
      uVar68 = *(uint *)(param_1 + 0x59);
      piVar46 = (int *)param_1[0x5a];
      if ((uVar75 != uVar68) || (piVar43 = piVar46 + uVar49 * 10, uVar49 != (uint)piVar43[6])) {
        piVar42 = piVar46 + (ulong)uVar68 * 10;
        piVar43 = piVar46;
        if (uVar68 != 0) {
          do {
            piVar43 = piVar46;
            if (uVar49 == (uint)piVar46[6]) break;
            piVar46 = piVar46 + 10;
            piVar43 = piVar46;
          } while (piVar46 < piVar42);
        }
        if (piVar43 == piVar42) goto LAB_00e2d55c;
      }
      if ((char)piVar43[7] == '\0') goto LAB_00e2d55c;
      iVar48 = (int)param_1[0x5e];
      if (*(int *)((long)param_1 + 0x2f4) <= iVar48) goto LAB_00e2d500;
      if (*(long *)*__s < 1) goto LAB_00e2c56c;
      puVar16 = (undefined4 *)(param_1[0x5f] + (long)iVar48 * 0x20);
      *puVar16 = (int)param_1[0x4f];
      *(long *)(puVar16 + 2) = param_1[0x51] + 1;
      *(long *)(puVar16 + 4) = (long)*(int *)*__s;
      *(int **)(puVar16 + 6) = piVar43;
      *(int *)(param_1 + 0x5e) = iVar48 + 1;
      iVar48 = *piVar43;
      uVar75 = iVar48 - 1;
      if (uVar75 < 3) {
        if (param_1[(long)(int)uVar75 * 2 + 0x61] == 0) {
          *(int *)plVar11 = 0x8a;
        }
        else {
          lVar40 = *(long *)(piVar43 + 2);
          lVar41 = param_1[(long)(int)uVar75 * 2 + 0x62];
          if (lVar41 < lVar40) {
            *(int *)plVar11 = 0x83;
          }
          else {
            param_1[0x50] = param_1[(long)(int)uVar75 * 2 + 0x61];
            param_1[0x52] = lVar41;
            param_1[0x51] = lVar40;
            *(int *)(param_1 + 0x4f) = iVar48;
          }
        }
      }
      else {
        *(int *)plVar11 = 0x84;
      }
      *(undefined1 *)(param_1 + 0x54) = 0;
      uVar49 = param_1[0x86] + *(long *)*__s;
      param_1[0x86] = uVar49;
      if (uVar49 <= (ulong)param_1[0x87]) goto LAB_00e2c56c;
LAB_00e2d5a0:
      iVar48 = 0x8b;
      goto LAB_00e2d520;
    }
    goto LAB_00e2d55c;
  case 0x2b:
    uVar49 = *(ulong *)*__s;
    uVar75 = (int)param_1[0x5d] + 1;
    if (uVar75 <= uVar49) goto LAB_00e2d55c;
    uVar68 = *(uint *)(param_1 + 0x59);
    piVar46 = (int *)param_1[0x5a];
    if ((uVar75 != uVar68) || (piVar43 = piVar46 + uVar49 * 10, uVar49 != (uint)piVar43[6])) {
      piVar42 = piVar46 + (ulong)uVar68 * 10;
      piVar43 = piVar46;
      if (uVar68 != 0) {
        do {
          piVar43 = piVar46;
          if (uVar49 == (uint)piVar46[6]) break;
          piVar46 = piVar46 + 10;
          piVar43 = piVar46;
        } while (piVar46 < piVar42);
      }
      if (piVar43 == piVar42) goto LAB_00e2d55c;
    }
    if ((char)piVar43[7] == '\0') goto LAB_00e2d55c;
    iVar48 = (int)param_1[0x5e];
    if (*(int *)((long)param_1 + 0x2f4) <= iVar48) goto LAB_00e2d500;
    puVar16 = (undefined4 *)(param_1[0x5f] + (long)iVar48 * 0x20);
    *puVar16 = (int)param_1[0x4f];
    lVar40 = param_1[0x51];
    *(undefined8 *)(puVar16 + 4) = 1;
    *(int **)(puVar16 + 6) = piVar43;
    *(long *)(puVar16 + 2) = lVar40 + 1;
    *(int *)(param_1 + 0x5e) = iVar48 + 1;
    iVar48 = *piVar43;
    uVar75 = iVar48 - 1;
    if (uVar75 < 3) {
      if (param_1[(long)(int)uVar75 * 2 + 0x61] == 0) goto LAB_00e2b7f4;
      lVar40 = *(long *)(piVar43 + 2);
      lVar41 = param_1[(long)(int)uVar75 * 2 + 0x62];
      if (lVar40 <= lVar41) {
        param_1[0x50] = param_1[(long)(int)uVar75 * 2 + 0x61];
        param_1[0x52] = lVar41;
        param_1[0x51] = lVar40;
        *(int *)(param_1 + 0x4f) = iVar48;
        *(undefined1 *)(param_1 + 0x54) = 0;
        iVar48 = (int)*plVar11;
        break;
      }
      goto LAB_00e2b7dc;
    }
    goto LAB_00e2b7a0;
  case 0x2c:
    if ((int)param_1[0x4f] == 3) {
LAB_00e2d588:
      iVar48 = 0x9c;
      goto LAB_00e2d520;
    }
    piVar46 = (int *)param_1[0x5a];
    uVar75 = *(uint *)(param_1 + 0x59);
    uVar49 = *(ulong *)*__s;
    piVar43 = piVar46 + (ulong)uVar75 * 10;
    if (uVar75 != 0) {
      do {
        if (uVar49 == (uint)piVar46[6]) break;
        piVar46 = piVar46 + 10;
      } while (piVar46 < piVar43);
    }
    if (piVar46 == piVar43) {
      if (uVar75 < *(uint *)((long)param_1 + 0x2cc)) {
        *(uint *)(param_1 + 0x59) = uVar75 + 1;
        goto LAB_00e29d68;
      }
    }
    else {
LAB_00e29d68:
      if (uVar49 < 0x10000) {
        uVar75 = (uint)uVar49 & 0xffff;
        *piVar46 = (int)param_1[0x4f];
        piVar46[6] = uVar75;
        lVar58 = param_1[0x51];
        *(undefined2 *)(piVar46 + 7) = 1;
        piVar46[8] = 0;
        piVar46[9] = 0;
        *(long *)(piVar46 + 2) = lVar58 + 1;
        if (*(uint *)(param_1 + 0x5d) < uVar49) {
          *(uint *)(param_1 + 0x5d) = uVar75;
        }
        lVar40 = param_1[0x52];
        while( true ) {
          lVar58 = lVar58 + iVar48;
          *plVar10 = lVar58;
          if (lVar40 <= lVar58) goto LAB_00e2d51c;
          bVar67 = *(byte *)(lVar41 + lVar58);
          iVar48 = (int)(char)(&DAT_01975a50)[bVar67];
          *(byte *)(param_1 + 0x53) = bVar67;
          *(int *)((long)param_1 + 0x29c) = iVar48;
          if (((ulong)bVar67 | 1) == 0x41) {
            if (lVar40 <= lVar58 + 1) goto LAB_00e2d51c;
            iVar48 = 2 - (uint)*(byte *)(lVar41 + lVar58 + 1) * iVar48;
            *(int *)((long)param_1 + 0x29c) = iVar48;
          }
          if (lVar40 < lVar58 + iVar48) goto LAB_00e2d51c;
          if (bVar67 == 0x89) goto LAB_00e2d580;
          if (bVar67 == 0x2d) break;
          if (bVar67 == 0x2c) goto LAB_00e2d580;
        }
        goto LAB_00e2c3ec;
      }
    }
    iVar48 = 0x8c;
    goto LAB_00e2d520;
  case 0x2d:
    iVar48 = (int)param_1[0x5e];
    if (iVar48 < 1) {
      iVar48 = 0x88;
      goto LAB_00e2d520;
    }
    *(int *)(param_1 + 0x5e) = (int)((long)iVar48 + -1);
    piVar46 = (int *)(param_1[0x5f] + ((long)iVar48 + -1) * 0x20);
    lVar40 = *(long *)(piVar46 + 4);
    *(long *)(piVar46 + 4) = lVar40 + -1;
    *(undefined1 *)(param_1 + 0x54) = 0;
    if (0 < lVar40 + -1) {
      *(int *)(param_1 + 0x5e) = iVar48;
      param_1[0x51] = *(long *)(*(long *)(piVar46 + 6) + 8);
      iVar48 = (int)*plVar11;
      break;
    }
    iVar48 = *piVar46;
    uVar75 = iVar48 - 1;
    if (2 < uVar75) goto LAB_00e2d564;
    if (param_1[(long)(int)uVar75 * 2 + 0x61] != 0) {
      lVar40 = *(long *)(piVar46 + 2);
      lVar41 = param_1[(long)(int)uVar75 * 2 + 0x62];
      if (lVar41 < lVar40) goto LAB_00e2d51c;
      param_1[0x50] = param_1[(long)(int)uVar75 * 2 + 0x61];
      param_1[0x52] = lVar41;
      param_1[0x51] = lVar40;
      *(int *)(param_1 + 0x4f) = iVar48;
      iVar48 = (int)*plVar11;
      break;
    }
    goto LAB_00e2d56c;
  case 0x2e:
  case 0x2f:
    uVar49 = *(ulong *)*__s;
    if (((uint)uVar49 & 0xffff) < (uint)*(ushort *)((long)param_1 + 0x54)) {
      if ((bVar67 & 1) == 0) {
        lVar41 = 0;
      }
      else {
        puVar1 = (undefined8 *)(param_1[0xc] + (uVar49 & 0xffff) * 0x10);
        lVar40 = (*(code *)param_1[0x7c])(param_1,*puVar1,puVar1[1]);
        lVar41 = (*(code *)param_1[0x7b])(param_1,lVar40,param_1[0x3e]);
        lVar41 = lVar41 - lVar40;
      }
      (*(code *)param_1[0x7f])(param_1,plVar7,uVar49 & 0xffffffff,lVar41);
      *(short *)(param_1 + 0x43) = (short)uVar49;
      *(short *)((long)param_1 + 0x21a) = (short)uVar49;
      iVar48 = (int)*plVar11;
      goto joined_r0x00e2c464;
    }
    goto LAB_00e2ac90;
  case 0x30:
  case 0x31:
    if ((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) == 0x28) &&
       (*(char *)((long)param_1 + 0x42b) != '\0')) {
      if ((*(char *)((long)param_1 + 0x42c) == '\0') || (*(char *)((long)param_1 + 0x42d) == '\0'))
      {
        if ((bVar67 & 1) != 0) {
          *(undefined1 *)((long)param_1 + 0x42c) = 1;
          goto LAB_00e2bdac;
        }
        *(undefined1 *)((long)param_1 + 0x42d) = 1;
        if (*(short *)((long)param_1 + 0x116) == 0) goto LAB_00e2c030;
        goto LAB_00e2bdb4;
      }
    }
    else {
LAB_00e2bdac:
      if (*(short *)((long)param_1 + 0x116) != 0) {
LAB_00e2bdb4:
        if ((bVar67 & 1) == 0) {
          bVar67 = 0x10;
          local_a8 = param_1[0x23] + 8;
          uVar49 = param_1[0x24] + 8;
          lStack_98 = param_1[0x25] + 8;
        }
        else {
          local_a8 = param_1[0x23];
          bVar67 = 8;
          lStack_98 = SUB168(*(undefined1 (*) [16])(param_1 + 0x24),8);
          uVar49 = SUB168(*(undefined1 (*) [16])(param_1 + 0x24),0);
        }
        uVar59 = local_a8;
        uVar52 = *(ushort *)((long)param_1 + 0x114);
        lVar40 = 0;
        uVar75 = 0;
        local_90 = (uint)uVar52;
        local_a0 = uVar49;
LAB_00e2be28:
        uVar68 = (uint)*(ushort *)(param_1[0x27] + lVar40 * 2) - (uint)*(ushort *)(param_1 + 0x28);
        if (uVar52 <= uVar68) {
          uVar68 = uVar52 - 1;
        }
        if (uVar75 <= uVar68) {
          lVar41 = param_1[0x26];
          uVar69 = uVar75;
          do {
            uVar70 = uVar69 + 1;
            if ((bVar67 & *(byte *)(lVar41 + (ulong)uVar69)) != 0) {
              uVar34 = (ulong)uVar69;
              uVar74 = uVar70;
              if (uVar70 <= uVar68) goto LAB_00e2beb8;
              goto LAB_00e2bf04;
            }
            uVar69 = uVar70;
          } while (uVar70 <= uVar68);
          uVar75 = uVar70;
          if (lVar40 + 1 < (long)*(short *)((long)param_1 + 0x116)) goto LAB_00e2be20;
          goto LAB_00e2c030;
        }
        if ((long)*(short *)((long)param_1 + 0x116) <= lVar40 + 1) goto LAB_00e2c030;
        goto LAB_00e2be20;
      }
    }
LAB_00e2c030:
    iVar48 = (int)*plVar11;
    goto joined_r0x00e2c464;
  case 0x32:
  case 0x33:
    if (param_1[4] < param_1[0x46]) {
      if (*pcVar5 != '\0') {
        *(int *)plVar11 = 0x86;
      }
    }
    else {
      cVar33 = FUN_00e351ec(param_1,&lStack_b8,&local_c0,&local_a8,local_ac);
      if (cVar33 != '\0') goto LAB_00e2c56c;
      lVar40 = param_1[0x46];
      while (0 < lVar40) {
        lVar40 = param_1[7];
        param_1[7] = lVar40 + -1;
        uVar49 = *(ulong *)(param_1[6] + (lVar40 + -1) * 8);
        if (((uint)uVar49 & 0xffff) < (uint)*(ushort *)((long)param_1 + 0xd4)) {
          if (*(short *)((long)param_1 + 0x226) != 0) {
            if ((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) != 0x28) ||
               (*(char *)((long)param_1 + 0x42b) == '\0')) {
              lVar40 = (uVar49 & 0xffff) * 0x10;
              *(long *)(param_1[0x1c] + lVar40) = *(long *)(param_1[0x1c] + lVar40) + lStack_b8;
            }
            *(byte *)(param_1[0x1e] + (uVar49 & 0xffff)) =
                 *(byte *)(param_1[0x1e] + (uVar49 & 0xffff)) | 8;
          }
          if (*puVar12 != 0) {
            if (((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) != 0x28) ||
                (*(char *)((long)param_1 + 0x42b) == '\0')) ||
               ((*(char *)((long)param_1 + 0x42c) == '\0' ||
                (*(char *)((long)param_1 + 0x42d) == '\0')))) {
              lVar40 = param_1[0x1c] + (uVar49 & 0xffff) * 0x10;
              *(long *)(lVar40 + 8) = *(long *)(lVar40 + 8) + local_c0;
            }
            *(byte *)(param_1[0x1e] + (uVar49 & 0xffff)) =
                 *(byte *)(param_1[0x1e] + (uVar49 & 0xffff)) | 0x10;
          }
        }
        else if (*pcVar5 != '\0') goto LAB_00e28dec;
        lVar40 = param_1[0x46] + -1;
        param_1[0x46] = lVar40;
      }
    }
    param_1[0x46] = 1;
    param_1[8] = param_1[7];
    iVar48 = (int)*plVar11;
    goto joined_r0x00e2c464;
  case 0x34:
  case 0x35:
    uVar49 = *(ulong *)*__s;
    uVar52 = (ushort)uVar49;
    if ((short)param_1[0x4e] == 0) {
      if (uVar52 != 0) goto LAB_00e2afd4;
    }
    else if (*(ushort *)((long)param_1 + 0xd6) <= uVar52) {
LAB_00e2afd4:
      if (*pcVar5 != '\0') {
        *(int *)plVar11 = 0x86;
      }
      goto LAB_00e2c56c;
    }
    cVar33 = FUN_00e351ec(param_1,&lStack_b8,&local_c0,&local_a8,local_ac);
    if (cVar33 == '\0') {
      if ((uVar49 & 0xffff) == 0) {
        uVar52 = 0;
        if ((short)param_1[0x4e] == 0) goto LAB_00e2c478;
LAB_00e28dac:
        uVar61 = (*(short *)(param_1[0x1f] +
                            (-(uVar49 >> 0xf & 1) & 0xfffffffffffe0000 | (uVar49 & 0xffff) << 1)) +
                 1) - (short)param_1[0x20];
        if (uVar61 <= uVar52) goto LAB_00e2c56c;
      }
      else {
        uVar52 = (*(short *)(param_1[0x1f] + (long)((short)uVar52 + -1) * 2) + 1) -
                 (short)param_1[0x20];
        if ((short)param_1[0x4e] != 0) goto LAB_00e28dac;
LAB_00e2c478:
        uVar61 = *(ushort *)((long)param_1 + 0xd4);
        if (uVar61 <= uVar52) goto LAB_00e2c56c;
      }
      uVar49 = (ulong)uVar52;
      lVar40 = uVar49 << 4;
      do {
        lVar41 = param_1[0x1c];
        if ((local_ac[0] != uVar49) || (CONCAT44(uStack_8c,local_90) != lVar41)) {
          if (*(short *)((long)param_1 + 0x226) != 0) {
            if ((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) != 0x28) ||
               (*(char *)((long)param_1 + 0x42b) == '\0')) {
              *(long *)(lVar41 + lVar40) = *(long *)(lVar41 + lVar40) + lStack_b8;
            }
            *(byte *)(param_1[0x1e] + uVar49) = *(byte *)(param_1[0x1e] + uVar49) | 8;
          }
          if (*puVar12 != 0) {
            if ((((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) != 0x28) ||
                 (*(char *)((long)param_1 + 0x42b) == '\0')) ||
                (*(char *)((long)param_1 + 0x42c) == '\0')) ||
               (*(char *)((long)param_1 + 0x42d) == '\0')) {
              *(long *)(param_1[0x1c] + lVar40 + 8) =
                   *(long *)(param_1[0x1c] + lVar40 + 8) + local_c0;
            }
            *(byte *)(param_1[0x1e] + uVar49) = *(byte *)(param_1[0x1e] + uVar49) | 0x10;
          }
        }
        uVar49 = uVar49 + 1;
        lVar40 = lVar40 + 0x10;
      } while (uVar61 != uVar49);
    }
    goto LAB_00e2c56c;
  case 0x36:
  case 0x37:
    if (*(uint *)*__s < 2) {
      cVar33 = FUN_00e351ec(param_1,&lStack_b8,&local_c0,&local_a8,local_ac);
      if (cVar33 == '\0') {
        if ((short)param_1[0x4e] == 1) {
          if ((0 < (long)*(short *)((long)param_1 + 0xd6)) &&
             (sVar23 = *(short *)(param_1[0x1f] + (long)*(short *)((long)param_1 + 0xd6) * 2 + -2),
             uVar52 = sVar23 + 1, sVar23 != -1)) goto LAB_00e2c664;
        }
        else if (((short)param_1[0x4e] == 0) &&
                (uVar52 = *(ushort *)((long)param_1 + 0xd4), uVar52 != 0)) {
LAB_00e2c664:
          lVar40 = param_1[0x1c];
          if (CONCAT44(uStack_8c,local_90) == lVar40) {
            uVar49 = (ulong)local_ac[0];
            uVar59 = (ulong)uVar52;
            plVar44 = (long *)(CONCAT44(uStack_8c,local_90) + 8);
            do {
              if (uVar49 != 0) {
                if ((*(short *)((long)param_1 + 0x226) != 0) &&
                   ((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) != 0x28 ||
                    (*(char *)((long)param_1 + 0x42b) == '\0')))) {
                  plVar44[-1] = plVar44[-1] + lStack_b8;
                }
                if ((*puVar12 != 0) &&
                   ((((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) != 0x28 ||
                      (*(char *)((long)param_1 + 0x42b) == '\0')) ||
                     (*(char *)((long)param_1 + 0x42c) == '\0')) ||
                    (*(char *)((long)param_1 + 0x42d) == '\0')))) {
                  *plVar44 = *plVar44 + local_c0;
                }
              }
              uVar59 = uVar59 - 1;
              plVar44 = plVar44 + 2;
              uVar49 = uVar49 - 1;
            } while (uVar59 != 0);
          }
          else {
            uVar49 = (ulong)uVar52;
            uVar52 = *puVar12;
            if (*(short *)((long)param_1 + 0x226) == 0) {
              plVar44 = (long *)(lVar40 + 8);
              do {
                if ((uVar52 != 0) &&
                   (((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) != 0x28 ||
                     (*(char *)((long)param_1 + 0x42b) == '\0')) ||
                    ((*(char *)((long)param_1 + 0x42c) == '\0' ||
                     (*(char *)((long)param_1 + 0x42d) == '\0')))))) {
                  *plVar44 = *plVar44 + local_c0;
                }
                uVar49 = uVar49 - 1;
                plVar44 = plVar44 + 2;
              } while (uVar49 != 0);
            }
            else {
              lVar41 = *param_1;
              plVar44 = (long *)(lVar40 + 8);
              iVar48 = *(int *)(*(long *)(lVar41 + 0xb0) + 0x78);
              do {
                if ((iVar48 != 0x28) || (*(char *)((long)param_1 + 0x42b) == '\0')) {
                  plVar44[-1] = plVar44[-1] + lStack_b8;
                }
                if ((uVar52 != 0) &&
                   ((((*(int *)(*(long *)(lVar41 + 0xb0) + 0x78) != 0x28 ||
                      (*(char *)((long)param_1 + 0x42b) == '\0')) ||
                     (*(char *)((long)param_1 + 0x42c) == '\0')) ||
                    (*(char *)((long)param_1 + 0x42d) == '\0')))) {
                  *plVar44 = *plVar44 + local_c0;
                }
                uVar49 = uVar49 - 1;
                plVar44 = plVar44 + 2;
              } while (uVar49 != 0);
            }
          }
        }
      }
    }
    else if (*pcVar5 != '\0') {
LAB_00e28dec:
      *(int *)plVar11 = 0x86;
      iVar48 = (int)*plVar11;
      goto joined_r0x00e2c464;
    }
    goto LAB_00e2c56c;
  case 0x38:
    if ((*(short *)((long)param_1 + 0x26c) == 0) || (*(short *)((long)param_1 + 0x26e) == 0)) {
      bVar31 = true;
      lVar41 = param_1[0x46];
      if (lVar41 < param_1[4]) goto LAB_00e2b05c;
    }
    else {
      bVar31 = (short)param_1[0x4e] == 0;
      lVar41 = param_1[0x46];
      if (lVar41 < param_1[4]) {
LAB_00e2b05c:
        uVar68 = *(uint *)*__s;
        uVar52 = *puVar12;
        sVar23 = *(short *)((long)param_1 + 0x226);
        uVar75 = -uVar68;
        if (-1 < (int)uVar68) {
          uVar75 = uVar68;
        }
        iVar48 = -(int)sVar23;
        if (-1 < sVar23) {
          iVar48 = (int)sVar23;
        }
        uVar74 = (uVar75 & 0xffff) * iVar48;
        uVar70 = (uVar75 >> 0x10) * iVar48;
        uVar69 = uVar70 * 0x10000 | 0x2000;
        uVar70 = uVar70 >> 0x10;
        if (CARRY4(uVar69,uVar74)) {
          uVar70 = uVar70 + 1;
        }
        iVar72 = (int)(CONCAT44(uVar70,uVar69 + uVar74) >> 0xe);
        iVar48 = -iVar72;
        if (-1 < (int)((int)sVar23 ^ uVar68)) {
          iVar48 = iVar72;
        }
        iVar72 = -(int)(short)uVar52;
        if (-1 < (short)uVar52) {
          iVar72 = (int)(short)uVar52;
        }
        uVar70 = iVar72 * (uVar75 & 0xffff);
        uVar69 = iVar72 * (uVar75 >> 0x10);
        uVar75 = uVar69 * 0x10000 | 0x2000;
        uVar69 = uVar69 >> 0x10;
        if (CARRY4(uVar75,uVar70)) {
          uVar69 = uVar69 + 1;
        }
        iVar20 = (int)(CONCAT44(uVar69,uVar75 + uVar70) >> 0xe);
        iVar72 = -iVar20;
        if (-1 < (int)((int)(short)uVar52 ^ uVar68)) {
          iVar72 = iVar20;
        }
        if (0 < lVar41) {
          do {
            param_1[7] = lVar40 + -1;
            uVar49 = *(ulong *)(lVar60 + (lVar40 + -1) * 8);
            if (((uint)uVar49 & 0xffff) < (uint)*(ushort *)((long)param_1 + 0xd4)) {
              iVar20 = *(int *)(*(long *)(*param_1 + 0xb0) + 0x78);
              if ((iVar20 == 0x28) && (*(char *)((long)param_1 + 0x42b) != '\0')) {
                if ((bVar31) ||
                   (((*(char *)((long)param_1 + 0x42c) == '\0' ||
                     (*(char *)((long)param_1 + 0x42d) == '\0')) &&
                    ((((char)param_1[0x79] != '\0' && (*puVar12 != 0)) ||
                     ((*(byte *)(param_1[0x1e] + (uVar49 & 0xffff)) >> 4 & 1) != 0)))))) {
                  if (*(short *)((long)param_1 + 0x226) != 0) {
                    *(byte *)(param_1[0x1e] + (uVar49 & 0xffff)) =
                         *(byte *)(param_1[0x1e] + (uVar49 & 0xffff)) | 8;
                  }
                  if (*puVar12 != 0) {
                    if (((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) == 0x28) &&
                        (*(char *)((long)param_1 + 0x42b) != '\0')) &&
                       (*(char *)((long)param_1 + 0x42c) != '\0')) {
                      cVar33 = *(char *)((long)param_1 + 0x42d);
                      goto joined_r0x00e2b220;
                    }
                    goto LAB_00e2b22c;
                  }
                }
              }
              else {
                if (*(short *)((long)param_1 + 0x226) != 0) {
                  if ((iVar20 != 0x28) || (*(char *)((long)param_1 + 0x42b) == '\0')) {
                    lVar40 = (uVar49 & 0xffff) * 0x10;
                    *(long *)(param_1[0x1c] + lVar40) =
                         *(long *)(param_1[0x1c] + lVar40) + (long)iVar48;
                  }
                  *(byte *)(param_1[0x1e] + (uVar49 & 0xffff)) =
                       *(byte *)(param_1[0x1e] + (uVar49 & 0xffff)) | 8;
                }
                if (*puVar12 != 0) {
                  if (((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) == 0x28) &&
                      (*(char *)((long)param_1 + 0x42b) != '\0')) &&
                     (*(char *)((long)param_1 + 0x42c) != '\0')) {
                    cVar33 = *(char *)((long)param_1 + 0x42d);
joined_r0x00e2b220:
                    if (cVar33 == '\0') goto LAB_00e2b22c;
                  }
                  else {
LAB_00e2b22c:
                    lVar40 = param_1[0x1c] + (uVar49 & 0xffff) * 0x10;
                    *(long *)(lVar40 + 8) = *(long *)(lVar40 + 8) + (long)iVar72;
                  }
                  *(byte *)(param_1[0x1e] + (uVar49 & 0xffff)) =
                       *(byte *)(param_1[0x1e] + (uVar49 & 0xffff)) | 0x10;
                }
              }
            }
            else if (*pcVar5 != '\0') goto LAB_00e2d55c;
            lVar41 = param_1[0x46];
            lVar40 = param_1[7];
            param_1[0x46] = lVar41 + -1;
            if (lVar41 + -1 < 1) break;
            lVar60 = param_1[6];
          } while( true );
        }
        goto LAB_00e2b2b8;
      }
    }
LAB_00e2b2a4:
    if (*pcVar5 != '\0') {
      iVar48 = 0x86;
LAB_00e2b2b4:
      *(int *)plVar11 = iVar48;
    }
    goto LAB_00e2b2b8;
  case 0x39:
    lVar40 = param_1[0x46];
    if (param_1[4] < lVar40) {
LAB_00e29ee4:
      if (*pcVar5 != '\0') {
        *(int *)plVar11 = 0x86;
      }
    }
    else {
      if ((*(short *)((long)param_1 + 0x26c) == 0) || (*(short *)((long)param_1 + 0x26e) == 0)) {
        bVar31 = true;
        uVar52 = *(ushort *)((long)param_1 + 0x21a);
        if (*(ushort *)((long)param_1 + 0x54) <= uVar52) goto LAB_00e29ee4;
      }
      else {
        bVar31 = (short)param_1[0x4e] == 0;
        uVar52 = *(ushort *)((long)param_1 + 0x21a);
        if (*(ushort *)((long)param_1 + 0x54) <= uVar52) goto LAB_00e29ee4;
      }
      uVar49 = (ulong)uVar52;
      if (bVar31) {
        lVar41 = param_1[0xb];
      }
      else {
        lVar41 = param_1[0xd];
      }
      plVar44 = (long *)(lVar41 + uVar49 * 0x10);
      uVar52 = *(ushort *)((long)param_1 + 0x21c);
      lVar41 = param_1[0xc];
      plVar57 = (long *)(lVar41 + uVar49 * 0x10);
      if (uVar52 < *(ushort *)((long)param_1 + 0x94)) {
        if (bVar31) {
          lVar40 = param_1[0x13];
LAB_00e2c938:
          plVar17 = (long *)(lVar40 + (ulong)uVar52 * 0x10);
          local_138 = (*(code *)param_1[0x7d])(param_1,*plVar17 - *plVar44,plVar17[1] - plVar44[1]);
        }
        else {
          if (param_1[0x33] == param_1[0x34]) {
            lVar40 = param_1[0x15];
            goto LAB_00e2c938;
          }
          uVar36 = FT_MulFix(*(long *)(param_1[0x15] + (ulong)uVar52 * 0x10) - *plVar44);
          uVar37 = FT_MulFix(*(long *)(param_1[0x15] +
                                       (ulong)*(ushort *)((long)param_1 + 0x21c) * 0x10 + 8) -
                             plVar44[1],param_1[0x34]);
          local_138 = (*(code *)param_1[0x7d])(param_1,uVar36,uVar37);
        }
        plVar17 = (long *)(param_1[0x14] + (ulong)*(ushort *)((long)param_1 + 0x21c) * 0x10);
        local_148 = (*(code *)param_1[0x7c])
                              (param_1,*plVar17 - *plVar57,
                               plVar17[1] - *(long *)(lVar41 + uVar49 * 0x10 + 8));
        lVar40 = param_1[0x46];
      }
      else {
        local_148 = 0;
        local_138 = 0;
      }
      if (0 < lVar40) {
        do {
          while( true ) {
            lVar58 = param_1[7];
            param_1[7] = lVar58 + -1;
            uVar59 = *(ulong *)(param_1[6] + (lVar58 + -1) * 8);
            if ((uint)*(ushort *)((long)param_1 + 0xd4) <= (uint)uVar59) break;
            uVar59 = uVar59 & 0xffffffff;
            if (bVar31) {
              lVar40 = param_1[0x1b];
LAB_00e2cd64:
              plVar17 = (long *)(lVar40 + uVar59 * 0x10);
              lVar40 = (*(code *)param_1[0x7d])(param_1,*plVar17 - *plVar44,plVar17[1] - plVar44[1])
              ;
            }
            else {
              if (param_1[0x33] == param_1[0x34]) {
                lVar40 = param_1[0x1d];
                goto LAB_00e2cd64;
              }
              uVar36 = FT_MulFix(*(long *)(param_1[0x1d] + uVar59 * 0x10) - *plVar44);
              uVar37 = FT_MulFix(*(long *)(param_1[0x1d] + uVar59 * 0x10 + 8) - plVar44[1],
                                 param_1[0x34]);
              lVar40 = (*(code *)param_1[0x7d])(param_1,uVar36,uVar37);
            }
            plVar17 = (long *)(param_1[0x1c] + uVar59 * 0x10);
            lVar58 = (*(code *)param_1[0x7c])
                               (param_1,*plVar17 - *plVar57,
                                plVar17[1] - *(long *)(lVar41 + uVar49 * 0x10 + 8));
            if ((local_138 != 0) && (lVar40 != 0)) {
              lVar40 = FT_MulDiv(lVar40,local_148,local_138);
            }
            (*(code *)param_1[0x7f])(param_1,plVar14,uVar59,lVar40 - lVar58);
            lVar40 = param_1[0x46] + -1;
            param_1[0x46] = lVar40;
            if (lVar40 < 1) goto LAB_00e29ef8;
          }
          if (*pcVar5 != '\0') goto LAB_00e2d55c;
          lVar40 = lVar40 + -1;
          param_1[0x46] = lVar40;
        } while (0 < lVar40);
      }
    }
LAB_00e29ef8:
    param_1[0x46] = 1;
    param_1[8] = param_1[7];
    goto LAB_00e2c56c;
  case 0x3a:
  case 0x3b:
    uVar49 = *(ulong *)*__s;
    uVar75 = (uint)uVar49 & 0xffff;
    if ((*(ushort *)((long)param_1 + 0x94) <= uVar75) ||
       (uVar59 = (ulong)*(ushort *)(param_1 + 0x43),
       *(ushort *)((long)param_1 + 0x54) <= *(ushort *)(param_1 + 0x43))) {
      cVar33 = *pcVar5;
      goto joined_r0x00e29280;
    }
    if (*(short *)((long)param_1 + 0x26e) == 0) {
      lVar40 = param_1[0x13];
      lVar41 = (uVar49 & 0xffff) * 0x10;
      auVar66 = *(undefined1 (*) [16])(param_1[0xb] + uVar59 * 0x10);
      ((undefined8 *)(lVar40 + lVar41))[1] = auVar66._8_8_;
      *(undefined8 *)(lVar40 + lVar41) = auVar66._0_8_;
      (*(code *)param_1[0x80])(param_1,plVar13,uVar49 & 0xffffffff,*(undefined8 *)((long)*__s + 8));
      lVar40 = param_1[0x14];
      auVar66 = *(undefined1 (*) [16])(param_1[0x13] + lVar41);
      ((undefined8 *)(lVar40 + lVar41))[1] = auVar66._8_8_;
      *(undefined8 *)(lVar40 + lVar41) = auVar66._0_8_;
      uVar59 = (ulong)*(ushort *)(param_1 + 0x43);
    }
    plVar44 = (long *)(param_1[0x14] + (ulong)uVar75 * 0x10);
    plVar57 = (long *)(param_1[0xc] + uVar59 * 0x10);
    lVar40 = (*(code *)param_1[0x7c])(param_1,*plVar44 - *plVar57,plVar44[1] - plVar57[1]);
    (*(code *)param_1[0x7f])(param_1,plVar13,uVar49 & 0xffffffff,*(long *)((long)*__s + 8) - lVar40)
    ;
    *(short *)((long)param_1 + 0x21a) = (short)param_1[0x43];
    *(short *)((long)param_1 + 0x21c) = (short)uVar49;
    if ((*(byte *)(param_1 + 0x53) & 1) == 0) goto LAB_00e2c56c;
    *(short *)(param_1 + 0x43) = (short)uVar49;
    iVar48 = (int)*plVar11;
    break;
  case 0x3c:
    lVar41 = param_1[0x46];
    if ((param_1[4] < lVar41) || (*(ushort *)((long)param_1 + 0x54) <= *(ushort *)(param_1 + 0x43)))
    goto LAB_00e2b2a4;
    if (0 < lVar41) {
      while( true ) {
        param_1[7] = lVar40 + -1;
        uVar49 = *(ulong *)(lVar60 + (lVar40 + -1) * 8);
        uVar75 = (uint)uVar49 & 0xffff;
        if (uVar75 < *(ushort *)((long)param_1 + 0x94)) {
          plVar44 = (long *)(param_1[0x14] + (ulong)uVar75 * 0x10);
          plVar57 = (long *)(param_1[0xc] + (ulong)*(ushort *)(param_1 + 0x43) * 0x10);
          lVar40 = (*(code *)param_1[0x7c])(param_1,*plVar44 - *plVar57,plVar44[1] - plVar57[1]);
          (*(code *)param_1[0x7f])(param_1,plVar13,uVar49 & 0xffffffff,-lVar40);
          lVar41 = param_1[0x46];
        }
        else if (*pcVar5 != '\0') goto LAB_00e2d55c;
        lVar40 = param_1[7];
        lVar41 = lVar41 + -1;
        param_1[0x46] = lVar41;
        if (lVar41 < 1) break;
        lVar60 = param_1[6];
      }
    }
    goto LAB_00e2b2b8;
  case 0x3d:
    uVar39 = 2;
    pcVar53 = FUN_00e34f40;
    goto LAB_00e2a8cc;
  case 0x3e:
  case 0x3f:
    uVar49 = *(ulong *)*__s;
    if ((((uint)uVar49 & 0xffff) < (uint)*(ushort *)((long)param_1 + 0x54)) &&
       (*(ulong *)((long)*__s + 8) < (ulong)param_1[0x55])) {
      lVar41 = param_1[0x49];
      lVar40 = (*(code *)param_1[0x82])(param_1);
      if (*(short *)((long)param_1 + 0x26c) == 0) {
        uVar68 = (uint)lVar40;
        uVar75 = -uVar68;
        if (-1 < (int)uVar68) {
          uVar75 = uVar68;
        }
        bVar67 = (byte)((ulong)lVar40 >> 0x18);
        iVar48 = MP_INT_ABS((int)*(short *)((long)param_1 + 0x226));
        iVar72 = MP_INT_ABS((int)(short)param_1[0x45]);
        uVar69 = iVar48 * (uVar75 >> 0x10);
        uVar70 = iVar72 * (uVar75 >> 0x10);
        uVar68 = uVar69 * 0x10000 | 0x2000;
        uVar73 = uVar70 * 0x10000 | 0x2000;
        uVar74 = uVar68 + iVar48 * (uVar75 & 0xffff);
        uVar75 = uVar73 + iVar72 * (uVar75 & 0xffff);
        iVar48 = ((uVar69 >> 0x10) + (uint)(uVar74 < uVar68)) * 0x40000;
        iVar72 = ((uVar70 >> 0x10) + (uint)(uVar75 < uVar73)) * 0x40000;
        lVar58 = param_1[0xb];
        iVar48 = CONCAT13((char)((uint)iVar48 >> 0x18),
                          CONCAT12((byte)((uint)iVar48 >> 0x10) | (byte)(uVar74 >> 0x1e),
                                   (short)(uVar74 >> 0xe)));
        uVar59 = CONCAT17((char)((uint)iVar72 >> 0x18),
                          CONCAT16((byte)((uint)iVar72 >> 0x10) | (byte)(uVar75 >> 0x1e),
                                   CONCAT15((char)((uVar75 >> 0xe) >> 8),
                                            CONCAT14((char)(uVar75 >> 0xe),iVar48))));
        uVar34 = CONCAT44(-(int)(uVar59 >> 0x20),-iVar48);
        uVar34 = uVar34 ^ (uVar34 ^ uVar59) &
                          CONCAT44(-(uint)(-1 < (char)(bVar67 ^ (byte)((short)param_1[0x45] >> 0xf))
                                          ),-(uint)(-1 < (char)(bVar67 ^ (byte)(*(short *)((long)
                                                  param_1 + 0x226) >> 0xf))));
        lVar60 = (uVar49 & 0xffff) * 0x10;
        plVar44 = (long *)(lVar58 + lVar60);
        plVar44[1] = (long)(int)(uVar34 >> 0x20);
        *plVar44 = (long)(int)uVar34;
        lVar62 = param_1[0xc];
        auVar66 = *(undefined1 (*) [16])(lVar58 + lVar60);
        ((undefined8 *)(lVar62 + lVar60))[1] = auVar66._8_8_;
        *(undefined8 *)(lVar62 + lVar60) = auVar66._0_8_;
      }
      puVar1 = (undefined8 *)(param_1[0xc] + (uVar49 & 0xffff) * 0x10);
      lVar58 = (*(code *)param_1[0x7c])(param_1,*puVar1,puVar1[1]);
      if ((*(byte *)(param_1 + 0x53) & 1) != 0) {
        lVar60 = lVar40 - lVar58;
        lVar62 = -lVar60;
        if (-1 < lVar60) {
          lVar62 = lVar60;
        }
        lVar60 = lVar58;
        if (lVar62 <= lVar41) {
          lVar60 = lVar40;
        }
        lVar40 = (*(code *)param_1[0x7b])(param_1,lVar60,param_1[0x3e]);
      }
      (*(code *)param_1[0x7f])(param_1,plVar7,uVar49 & 0xffffffff,lVar40 - lVar58);
    }
    else if (*pcVar5 != '\0') {
      *(int *)plVar11 = 0x86;
    }
    *(short *)(param_1 + 0x43) = (short)uVar49;
    *(short *)((long)param_1 + 0x21a) = (short)uVar49;
    iVar48 = (int)*plVar11;
    break;
  case 0x40:
    bVar67 = *(byte *)(lVar41 + param_1[0x51] + 1);
    if ((uint)((iVar72 + 1) - (int)param_1[4]) <= (uint)bVar67) goto LAB_00e2d500;
    if (bVar67 != 0) {
      *(ulong *)*__s = (ulong)*(byte *)(lVar41 + param_1[0x51] + 2);
      if (bVar67 != 1) {
        uVar75 = 2;
        do {
          iVar48 = uVar75 - 1;
          uVar52 = (ushort)uVar75;
          uVar75 = uVar75 + 1 & 0xffff;
          *(ulong *)((long)*__s + (long)iVar48 * 8) =
               (ulong)*(byte *)(lVar41 + *plVar10 + (ulong)uVar52 + 1);
        } while (uVar75 <= bVar67);
      }
    }
    lVar40 = param_1[8];
LAB_00e2a130:
    param_1[8] = lVar40 + (ulong)bVar67;
    iVar48 = (int)*plVar11;
    break;
  case 0x41:
    lVar40 = param_1[0x51];
    bVar67 = *(byte *)(lVar41 + lVar40 + 1);
    if ((uint)bVar67 < (uint)((iVar72 + 1) - (int)param_1[4])) {
      *plVar10 = lVar40 + 2;
      if (bVar67 != 0) {
        *plVar10 = lVar40 + 4;
        *(ulong *)*__s =
             (long)(short)((ushort)*(byte *)(lVar41 + lVar40 + 2) << 8) |
             (ulong)*(byte *)(lVar41 + lVar40 + 3);
        if (bVar67 != 1) {
          uVar52 = 1;
          do {
            uVar49 = (ulong)uVar52;
            uVar52 = uVar52 + 1;
            pbVar15 = (byte *)(lVar41 + *plVar10);
            *plVar10 = *plVar10 + 2;
            *(ulong *)((long)*__s + uVar49 * 8) =
                 (long)(short)((ushort)*pbVar15 << 8) | (ulong)pbVar15[1];
          } while (uVar52 < bVar67);
        }
      }
      lVar40 = param_1[8];
      *(undefined1 *)(param_1 + 0x54) = 0;
      goto LAB_00e2a130;
    }
    goto LAB_00e2d500;
  case 0x42:
    if ((ulong)*(ushort *)(param_1 + 0x67) <= *(ulong *)*__s) goto LAB_00e2ac90;
    *(undefined8 *)(param_1[0x68] + *(ulong *)*__s * 8) = *(undefined8 *)((long)*__s + 8);
    iVar48 = (int)*plVar11;
    break;
  case 0x43:
    if ((ulong)*(ushort *)(param_1 + 0x67) <= *(ulong *)*__s) {
      if (*pcVar5 == '\0') goto LAB_00e2b4c8;
      goto LAB_00e2d55c;
    }
    *(undefined8 *)*__s = *(undefined8 *)(param_1[0x68] + *(ulong *)*__s * 8);
    iVar48 = (int)*plVar11;
    break;
  case 0x44:
    if ((ulong)param_1[0x55] <= *(ulong *)*__s) {
      cVar33 = *pcVar5;
      goto joined_r0x00e29280;
    }
    (*(code *)param_1[0x83])(param_1,*(ulong *)*__s,*(undefined8 *)((long)*__s + 8));
    iVar48 = (int)*plVar11;
    break;
  case 0x45:
    if (*(ulong *)*__s < (ulong)param_1[0x55]) {
      uVar36 = (*(code *)param_1[0x82])(param_1);
    }
    else {
      if (*pcVar5 != '\0') {
        *(int *)plVar11 = 0x86;
        return 0x86;
      }
      uVar36 = 0;
    }
    *(undefined8 *)*__s = uVar36;
    iVar48 = (int)*plVar11;
    break;
  case 0x46:
  case 0x47:
    if (*(ulong *)*__s < (ulong)*(ushort *)((long)param_1 + 0xd4)) {
      if ((bVar67 & 1) == 0) {
        lVar40 = param_1[0x1c];
        pcVar53 = (code *)param_1[0x7c];
      }
      else {
        lVar40 = param_1[0x1b];
        pcVar53 = (code *)param_1[0x7d];
      }
      puVar1 = (undefined8 *)(lVar40 + *(ulong *)*__s * 0x10);
      uVar36 = (*pcVar53)(param_1,*puVar1,puVar1[1]);
      *(undefined8 *)*__s = uVar36;
      iVar48 = (int)*plVar11;
      goto joined_r0x00e2c464;
    }
    if (*pcVar5 == '\0') {
      *(undefined8 *)*__s = 0;
      iVar48 = (int)*plVar11;
    }
    else {
      *(int *)plVar11 = 0x86;
      *(undefined8 *)*__s = 0;
      iVar48 = (int)*plVar11;
    }
    break;
  case 0x48:
    uVar49 = *(ulong *)*__s;
    if ((uint)*(ushort *)((long)param_1 + 0xd4) <= ((uint)uVar49 & 0xffff)) goto LAB_00e2ac90;
    puVar1 = (undefined8 *)(param_1[0x1c] + (uVar49 & 0xffff) * 0x10);
    lVar40 = (*(code *)param_1[0x7c])(param_1,*puVar1,puVar1[1]);
    (*(code *)param_1[0x7f])(param_1,plVar14,uVar49 & 0xffffffff,*(long *)((long)*__s + 8) - lVar40)
    ;
    if ((short)param_1[0x4e] == 0) {
      lVar40 = (uVar49 & 0xffff) * 0x10;
      auVar66 = *(undefined1 (*) [16])(param_1[0x1c] + lVar40);
      puVar1 = (undefined8 *)(param_1[0x1b] + lVar40);
      puVar1[1] = auVar66._8_8_;
      *puVar1 = auVar66._0_8_;
      iVar48 = (int)*plVar11;
      goto joined_r0x00e2c464;
    }
    goto LAB_00e2c56c;
  case 0x49:
  case 0x4a:
    uVar52 = *(ushort *)*__s;
    if ((uint)uVar52 < (uint)*(ushort *)((long)param_1 + 0x54)) {
      uVar61 = *(ushort *)((long)*__s + 8);
      if ((uint)uVar61 < (uint)*(ushort *)((long)param_1 + 0x94)) {
        if ((bVar67 & 1) == 0) {
          if ((*(short *)((long)param_1 + 0x26c) != 0) && (*(short *)((long)param_1 + 0x26e) != 0))
          {
            lVar40 = param_1[0xd];
            lVar41 = param_1[0x15];
            plVar44 = (long *)(lVar40 + (ulong)(uint)uVar52 * 0x10);
            plVar57 = (long *)(lVar41 + (ulong)(uint)uVar61 * 0x10);
            if (param_1[0x33] == param_1[0x34]) {
              uVar36 = (*(code *)param_1[0x7d])
                                 (param_1,*plVar44 - *plVar57,
                                  *(long *)(lVar40 + (ulong)uVar52 * 0x10 + 8) -
                                  *(long *)(lVar41 + (ulong)uVar61 * 0x10 + 8));
              uVar36 = FT_MulFix(uVar36,param_1[0x33]);
            }
            else {
              uVar36 = FT_MulFix(*plVar44 - *plVar57);
              uVar37 = FT_MulFix(*(long *)(lVar40 + (ulong)uVar52 * 0x10 + 8) -
                                 *(long *)(lVar41 + (ulong)uVar61 * 0x10 + 8),param_1[0x34]);
              uVar36 = (*(code *)param_1[0x7d])(param_1,uVar36,uVar37);
            }
            *(undefined8 *)*__s = uVar36;
            iVar48 = (int)*plVar11;
            break;
          }
          plVar44 = (long *)(param_1[0xb] + (ulong)(uint)uVar52 * 0x10);
          plVar57 = (long *)(param_1[0x13] + (ulong)(uint)uVar61 * 0x10);
          uVar36 = (*(code *)param_1[0x7d])(param_1,*plVar44 - *plVar57,plVar44[1] - plVar57[1]);
        }
        else {
          plVar44 = (long *)(param_1[0xc] + (ulong)(uint)uVar52 * 0x10);
          plVar57 = (long *)(param_1[0x14] + (ulong)(uint)uVar61 * 0x10);
          uVar36 = (*(code *)param_1[0x7c])(param_1,*plVar44 - *plVar57,plVar44[1] - plVar57[1]);
        }
        *(undefined8 *)*__s = uVar36;
        iVar48 = (int)*plVar11;
        goto joined_r0x00e2c464;
      }
    }
    if (*pcVar5 != '\0') {
      *(int *)plVar11 = 0x86;
    }
    *(undefined8 *)*__s = 0;
    iVar48 = (int)*plVar11;
    goto joined_r0x00e2c464;
  case 0x4b:
switchD_00e28768_caseD_4b:
    uVar36 = (*(code *)param_1[0x81])(param_1);
    goto LAB_00e2a678;
  case 0x4c:
    if (*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) == 0x23) goto switchD_00e28768_caseD_4b;
    *(long *)*__s = param_1[0x31];
    iVar48 = (int)*plVar11;
    break;
  case 0x4d:
    *(undefined1 *)((long)param_1 + 0x244) = 1;
    cVar33 = (char)param_1[0x54];
    param_1[4] = param_1[8];
    goto joined_r0x00e2a384;
  case 0x4e:
    *(undefined1 *)((long)param_1 + 0x244) = 0;
    cVar33 = (char)param_1[0x54];
    param_1[4] = param_1[8];
    goto joined_r0x00e2a384;
  case 0x4f:
    iVar48 = 0x87;
    goto LAB_00e2d520;
  case 0x50:
    *(ulong *)*__s = (ulong)(*(long *)*__s < *(long *)((long)*__s + 8));
    iVar48 = (int)*plVar11;
    break;
  case 0x51:
    *(ulong *)*__s = (ulong)(*(long *)*__s <= *(long *)((long)*__s + 8));
    iVar48 = (int)*plVar11;
    break;
  case 0x52:
    *(ulong *)*__s = (ulong)(*(long *)((long)*__s + 8) < *(long *)*__s);
    iVar48 = (int)*plVar11;
    break;
  case 0x53:
    *(ulong *)*__s = (ulong)(*(long *)((long)*__s + 8) <= *(long *)*__s);
    iVar48 = (int)*plVar11;
    break;
  case 0x54:
    bVar31 = *(long *)*__s == *(long *)((long)*__s + 8);
    goto LAB_00e2a568;
  case 0x55:
    *(ulong *)*__s = (ulong)(*(long *)*__s != *(long *)((long)*__s + 8));
    iVar48 = (int)*plVar11;
    break;
  case 0x56:
    uVar49 = (*(code *)param_1[0x7b])(param_1,*(undefined8 *)*__s,0);
    bVar31 = (uVar49 & 0x7f) == 0x40;
    goto LAB_00e2a4f4;
  case 0x57:
    uVar49 = (*(code *)param_1[0x7b])(param_1,*(undefined8 *)*__s,0);
    bVar31 = (uVar49 & 0x7f) == 0;
LAB_00e2a4f4:
    *(ulong *)*__s = (ulong)bVar31;
    iVar48 = (int)*plVar11;
    break;
  case 0x58:
    if (*(long *)*__s == 0) {
      lVar40 = param_1[0x51];
      lVar58 = param_1[0x52];
      iVar72 = 1;
      do {
        while( true ) {
          while (iVar72 == 1) {
            lVar40 = lVar40 + iVar48;
            *plVar10 = lVar40;
            if (lVar58 <= lVar40) goto LAB_00e2d51c;
            bVar67 = *(byte *)(lVar41 + lVar40);
            iVar48 = (int)(char)(&DAT_01975a50)[bVar67];
            *(byte *)(param_1 + 0x53) = bVar67;
            *(int *)((long)param_1 + 0x29c) = iVar48;
            if (((ulong)bVar67 | 1) == 0x41) {
              if (lVar58 <= lVar40 + 1) goto LAB_00e2d51c;
              iVar48 = 2 - (uint)*(byte *)(lVar41 + lVar40 + 1) * iVar48;
              *(int *)((long)param_1 + 0x29c) = iVar48;
            }
            if (lVar58 < lVar40 + iVar48) goto LAB_00e2d51c;
            if (bVar67 == 0x58) goto LAB_00e2c9d8;
            if ((bVar67 == 0x1b) || (iVar72 = 1, bVar67 == 0x59)) goto LAB_00e2c56c;
          }
          do {
            lVar40 = lVar40 + iVar48;
            *plVar10 = lVar40;
            if (lVar58 <= lVar40) goto LAB_00e2d51c;
            bVar67 = *(byte *)(lVar41 + lVar40);
            iVar48 = (int)(char)(&DAT_01975a50)[bVar67];
            *(byte *)(param_1 + 0x53) = bVar67;
            *(int *)((long)param_1 + 0x29c) = iVar48;
            if (((ulong)bVar67 | 1) == 0x41) {
              if (lVar58 <= lVar40 + 1) goto LAB_00e2d51c;
              iVar48 = 2 - (uint)*(byte *)(lVar41 + lVar40 + 1) * iVar48;
              *(int *)((long)param_1 + 0x29c) = iVar48;
            }
            if (lVar58 < lVar40 + iVar48) goto LAB_00e2d51c;
          } while (bVar67 == 0x1b);
          if (bVar67 == 0x59) break;
          if (bVar67 == 0x58) {
LAB_00e2c9d8:
            iVar72 = iVar72 + 1;
          }
        }
        iVar72 = iVar72 + -1;
      } while (iVar72 != 0);
    }
    goto LAB_00e2c56c;
  case 0x5a:
    lVar40 = 0;
    if (*(long *)*__s == 0) {
LAB_00e2ac34:
      *(long *)*__s = lVar40;
      iVar48 = (int)*plVar11;
    }
    else {
      *(ulong *)*__s = (ulong)(*(long *)((long)*__s + 8) != 0);
      iVar48 = (int)*plVar11;
    }
    break;
  case 0x5b:
    if (*(long *)*__s == 0) {
      *(ulong *)*__s = (ulong)(*(long *)((long)*__s + 8) != 0);
      iVar48 = (int)*plVar11;
    }
    else {
      *(undefined8 *)*__s = 1;
      iVar48 = (int)*plVar11;
    }
    break;
  case 0x5c:
    bVar31 = *(long *)*__s == 0;
LAB_00e2a568:
    *(ulong *)*__s = (ulong)bVar31;
    iVar48 = (int)*plVar11;
    break;
  case 0x5d:
  case 0x71:
  case 0x72:
    FUN_00e2da24(param_1,__s);
LAB_00e288f4:
    iVar48 = (int)*plVar11;
    break;
  case 0x5e:
    *(short *)(param_1 + 0x4c) = (short)*(undefined8 *)*__s;
    iVar48 = (int)*plVar11;
    break;
  case 0x5f:
    if (6 < *(ulong *)*__s) goto LAB_00e2d564;
    *(short *)((long)param_1 + 0x262) = (short)*(ulong *)*__s;
    iVar48 = (int)*plVar11;
    break;
  case 0x60:
    *(long *)*__s = *(long *)((long)*__s + 8) + *(long *)*__s;
    iVar48 = (int)*plVar11;
    break;
  case 0x61:
    *(long *)*__s = *(long *)*__s - *(long *)((long)*__s + 8);
    iVar48 = (int)*plVar11;
    break;
  case 0x62:
    if (*(long *)((long)*__s + 8) == 0) {
      iVar48 = 0x85;
      goto LAB_00e2d520;
    }
    uVar36 = FUN_00e12c3c(*(undefined8 *)*__s,0x40);
    goto LAB_00e2a678;
  case 99:
    uVar36 = FT_MulDiv(*(undefined8 *)*__s,*(undefined8 *)((long)*__s + 8),0x40);
LAB_00e2a678:
    *(undefined8 *)*__s = uVar36;
    iVar48 = (int)*plVar11;
    break;
  case 100:
    lVar40 = *(long *)*__s;
    if (lVar40 < 0) goto LAB_00e2a6a8;
    goto LAB_00e2c56c;
  case 0x65:
    lVar40 = *(long *)*__s;
LAB_00e2a6a8:
    *(long *)*__s = -lVar40;
    iVar48 = (int)*plVar11;
    break;
  case 0x66:
    uVar49 = *(ulong *)*__s;
    goto LAB_00e2a6cc;
  case 0x67:
    uVar49 = *(long *)*__s + 0x3f;
LAB_00e2a6cc:
    *(ulong *)*__s = uVar49 & 0xffffffffffffffc0;
    iVar48 = (int)*plVar11;
    break;
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
    uVar36 = (*(code *)param_1[0x7b])(param_1,*(undefined8 *)*__s,param_1[uVar49 - 0x2a]);
    *(undefined8 *)*__s = uVar36;
    iVar48 = (int)*plVar11;
    break;
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
    lVar40 = *(long *)*__s;
    if (lVar40 < 0) {
      uVar49 = lVar40 - param_1[uVar49 - 0x2e];
      *(ulong *)*__s = uVar49 & (long)uVar49 >> 0x3f;
      iVar48 = (int)*plVar11;
    }
    else {
      uVar49 = param_1[uVar49 - 0x2e] + lVar40;
      *(ulong *)*__s = uVar49 & ((long)uVar49 >> 0x3f ^ 0xffffffffffffffffU);
      iVar48 = (int)*plVar11;
    }
    goto joined_r0x00e2c464;
  case 0x70:
    uVar49 = *(ulong *)*__s;
    if ((ulong)param_1[0x55] <= uVar49) {
      cVar33 = *pcVar5;
      goto joined_r0x00e29280;
    }
    uVar36 = FT_MulFix(*(undefined8 *)((long)*__s + 8),param_1[0x3d]);
    *(undefined8 *)(param_1[0x56] + uVar49 * 8) = uVar36;
    iVar48 = (int)*plVar11;
    break;
  case 0x73:
  case 0x74:
  case 0x75:
    lVar40 = (*(code *)param_1[0x81])(param_1);
    uVar49 = *(ulong *)*__s;
    if (uVar49 != 0) {
      uVar59 = 1;
      do {
        lVar41 = param_1[7];
        if (lVar41 < 2) {
          if (*pcVar5 != '\0') {
            *(int *)plVar11 = 0x81;
          }
          param_1[7] = 0;
          break;
        }
        param_1[7] = lVar41 + -2;
        uVar34 = *(ulong *)(param_1[6] + lVar41 * 8 + -8);
        if (uVar34 < (ulong)param_1[0x55]) {
          uVar47 = *(ulong *)(param_1[6] + (lVar41 + -2) * 8);
          uVar50 = uVar47 >> 4 & 0xf;
          if ((char)param_1[0x53] == 'u') {
            lVar41 = (uVar50 | 0x20) + (ulong)*(ushort *)(param_1 + 0x4c);
          }
          else {
            if ((char)param_1[0x53] == 't') {
              uVar50 = uVar50 | 0x10;
            }
            lVar41 = uVar50 + *(ushort *)(param_1 + 0x4c);
          }
          if (lVar40 == lVar41) {
            uVar47 = uVar47 & 0xf;
            lVar58 = uVar47 - 8;
            lVar41 = uVar47 - 7;
            if (lVar58 < 0) {
              lVar41 = lVar58;
            }
            (*(code *)param_1[0x84])
                      (param_1,uVar34,
                       lVar41 << ((ulong)(6 - *(ushort *)((long)param_1 + 0x262)) & 0x3f));
          }
        }
        else if (*pcVar5 != '\0') {
          *(int *)plVar11 = 0x86;
          return 0x86;
        }
        uVar59 = uVar59 + 1;
      } while (uVar59 <= uVar49);
    }
    param_1[8] = param_1[7];
    iVar48 = (int)*plVar11;
    break;
  case 0x76:
    uVar59 = *(ulong *)*__s;
    uVar49 = (&DAT_01976438)[(uint)uVar59 >> 6 & 3];
    uVar75 = (uint)uVar59 >> 4 & 3;
    param_1[0x69] = uVar49;
    if (uVar75 == 3) {
      uVar34 = uVar49 * 3 >> 2;
      param_1[0x6a] = uVar34;
joined_r0x00e2babc:
      if ((uVar59 & 0xf) == 0) goto LAB_00e2bac0;
LAB_00e2bad8:
      lVar41 = uVar49 * ((uVar59 & 0xf) - 4);
      lVar40 = lVar41 + 7;
      if (-1 < lVar41) {
        lVar40 = lVar41;
      }
      lVar40 = lVar40 >> 3;
    }
    else {
      if (uVar75 == 2) {
        uVar34 = uVar49 >> 1;
        param_1[0x6a] = uVar34;
        goto joined_r0x00e2babc;
      }
      if (uVar75 == 1) {
        uVar34 = uVar49 >> 2;
        param_1[0x6a] = uVar34;
        goto joined_r0x00e2babc;
      }
      uVar34 = 0;
      param_1[0x6a] = 0;
      if ((uVar59 & 0xf) != 0) goto LAB_00e2bad8;
LAB_00e2bac0:
      lVar40 = uVar49 - 1;
    }
    uVar39 = 6;
    pcVar53 = FUN_00e34f74;
    goto LAB_00e2bb7c;
  case 0x77:
    uVar59 = *(ulong *)*__s;
    uVar49 = (&DAT_01976458)[(uint)uVar59 >> 6 & 3];
    uVar75 = (uint)uVar59 >> 4 & 3;
    param_1[0x69] = uVar49;
    if (uVar75 == 3) {
      uVar34 = uVar49 * 3 >> 2;
      param_1[0x6a] = uVar34;
joined_r0x00e2bb30:
      if ((uVar59 & 0xf) == 0) goto LAB_00e2bb34;
LAB_00e2bb4c:
      lVar41 = uVar49 * ((uVar59 & 0xf) - 4);
      lVar40 = lVar41 + 7;
      if (-1 < lVar41) {
        lVar40 = lVar41;
      }
      lVar40 = lVar40 >> 3;
    }
    else {
      if (uVar75 == 2) {
        uVar34 = uVar49 >> 1;
        param_1[0x6a] = uVar34;
        goto joined_r0x00e2bb30;
      }
      if (uVar75 == 1) {
        uVar34 = uVar49 >> 2;
        param_1[0x6a] = uVar34;
        goto joined_r0x00e2bb30;
      }
      uVar34 = 0;
      param_1[0x6a] = 0;
      if ((uVar59 & 0xf) != 0) goto LAB_00e2bb4c;
LAB_00e2bb34:
      lVar40 = uVar49 - 1;
    }
    uVar39 = 7;
    pcVar53 = FUN_00e34fcc;
LAB_00e2bb7c:
    param_1[0x69] = uVar49 >> 8;
    param_1[0x6a] = uVar34 >> 8;
    param_1[0x6b] = lVar40 >> 8;
    *(undefined4 *)(param_1 + 0x48) = uVar39;
    param_1[0x7b] = (long)pcVar53;
    iVar48 = (int)*plVar11;
    break;
  case 0x78:
    if (*(long *)((long)*__s + 8) != 0) goto switchD_00e28768_caseD_1c;
    goto LAB_00e2c56c;
  case 0x79:
    if (*(long *)((long)*__s + 8) == 0) goto switchD_00e28768_caseD_1c;
    goto LAB_00e2c56c;
  case 0x7a:
    uVar39 = 5;
    pcVar53 = FUN_00e34e54;
    goto LAB_00e2a8cc;
  case 0x7b:
    piVar46 = (int *)param_1[0x5c];
    if (*(uint *)(param_1 + 0x5b) != 0) {
      piVar43 = piVar46;
      do {
        if (((char)piVar43[6] == '{') && ((char)piVar43[7] != '\0')) goto LAB_00e2b754;
        piVar43 = piVar43 + 10;
      } while (piVar43 < piVar46 + (ulong)*(uint *)(param_1 + 0x5b) * 10);
    }
    goto LAB_00e2b740;
  case 0x7c:
    uVar39 = 4;
    pcVar53 = FUN_00e34ea4;
    goto LAB_00e2a8cc;
  case 0x7d:
    uVar39 = 3;
    pcVar53 = FUN_00e34ed8;
LAB_00e2a8cc:
    *(undefined4 *)(param_1 + 0x48) = uVar39;
    param_1[0x7b] = (long)pcVar53;
    iVar48 = (int)*plVar11;
    break;
  case 0x80:
    if (((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) != 0x28) ||
        (*(char *)((long)param_1 + 0x42b) == '\0')) ||
       ((*(char *)((long)param_1 + 0x42c) == '\0' || (*(char *)((long)param_1 + 0x42d) == '\0')))) {
      lVar41 = param_1[0x46];
      if (param_1[4] < lVar41) {
        if (*pcVar5 != '\0') {
          iVar48 = 0x81;
          goto LAB_00e2b2b4;
        }
      }
      else if (0 < lVar41) {
        while( true ) {
          param_1[7] = lVar40 + -1;
          uVar49 = *(ulong *)(lVar60 + (lVar40 + -1) * 8);
          if (((uint)uVar49 & 0xffff) < (uint)*(ushort *)((long)param_1 + 0x114)) {
            uVar49 = uVar49 & 0xffff;
            *(byte *)(param_1[0x26] + uVar49) = *(byte *)(param_1[0x26] + uVar49) ^ 1;
            lVar41 = param_1[0x46];
          }
          else if (*pcVar5 != '\0') goto LAB_00e2d55c;
          lVar40 = param_1[7];
          lVar41 = lVar41 + -1;
          param_1[0x46] = lVar41;
          if (lVar41 < 1) break;
          lVar60 = param_1[6];
        }
      }
    }
LAB_00e2b2b8:
    param_1[0x46] = 1;
    param_1[8] = lVar40;
    iVar48 = (int)*plVar11;
    break;
  case 0x81:
    if (((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) != 0x28) ||
        (*(char *)((long)param_1 + 0x42b) == '\0')) ||
       ((*(char *)((long)param_1 + 0x42c) == '\0' || (*(char *)((long)param_1 + 0x42d) == '\0')))) {
      uVar52 = *(ushort *)((long)*__s + 8);
      if ((uint)uVar52 < (uint)*(ushort *)((long)param_1 + 0x114)) {
        uVar49 = *(ulong *)*__s;
        uVar75 = (uint)uVar49 & 0xffff;
        if (uVar75 < *(ushort *)((long)param_1 + 0x114)) {
          if (uVar75 <= uVar52) {
            do {
              uVar59 = uVar49 & 0xffff;
              uVar75 = (int)uVar49 + 1;
              uVar49 = (ulong)uVar75;
              *(byte *)(param_1[0x26] + uVar59) = *(byte *)(param_1[0x26] + uVar59) | 1;
            } while ((uVar75 & 0xffff) <= (uint)uVar52);
          }
          goto LAB_00e2c56c;
        }
      }
      goto LAB_00e2ac90;
    }
    goto LAB_00e2c56c;
  case 0x82:
    if ((((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) != 0x28) ||
         (*(char *)((long)param_1 + 0x42b) == '\0')) || (*(char *)((long)param_1 + 0x42c) == '\0'))
       || (*(char *)((long)param_1 + 0x42d) == '\0')) {
      uVar52 = *(ushort *)((long)*__s + 8);
      if ((uint)uVar52 < (uint)*(ushort *)((long)param_1 + 0x114)) {
        uVar49 = *(ulong *)*__s;
        uVar75 = (uint)uVar49 & 0xffff;
        if (uVar75 < *(ushort *)((long)param_1 + 0x114)) {
          if (uVar75 <= uVar52) {
            do {
              uVar59 = uVar49 & 0xffff;
              uVar75 = (int)uVar49 + 1;
              uVar49 = (ulong)uVar75;
              *(byte *)(param_1[0x26] + uVar59) = *(byte *)(param_1[0x26] + uVar59) & 0xfe;
            } while ((uVar75 & 0xffff) <= (uint)uVar52);
          }
          goto LAB_00e2c56c;
        }
      }
      goto LAB_00e2ac90;
    }
    goto LAB_00e2c56c;
  case 0x83:
  case 0x84:
    piVar46 = (int *)param_1[0x5c];
    if (*(uint *)(param_1 + 0x5b) != 0) {
      piVar43 = piVar46;
      do {
        if ((uVar68 == *(byte *)(piVar43 + 6)) && ((char)piVar43[7] != '\0')) goto LAB_00e2b754;
        piVar43 = piVar43 + 10;
      } while (piVar43 < piVar46 + (ulong)*(uint *)(param_1 + 0x5b) * 10);
    }
    goto LAB_00e2b740;
  case 0x85:
    uVar68 = (uint)*(ulong *)*__s;
    uVar75 = uVar68 & 0xff;
    if ((*(ulong *)*__s & 0xff) != 0) {
      if (uVar75 == 0xff) {
        *(undefined1 *)((long)param_1 + 0x265) = 1;
        iVar48 = (int)*plVar11;
        break;
      }
      if (((uVar68 >> 8 & 1) != 0) && (*(ushort *)(param_1 + 0x3b) <= uVar75)) {
        *(undefined1 *)((long)param_1 + 0x265) = 1;
      }
      if (((uVar68 >> 9 & 1) != 0) && (*(char *)((long)param_1 + 0x211) != '\0')) {
        *(undefined1 *)((long)param_1 + 0x265) = 1;
      }
      if (((uVar68 >> 10 & 1) != 0) && (*(char *)((long)param_1 + 0x212) != '\0')) {
        *(undefined1 *)((long)param_1 + 0x265) = 1;
      }
      if (((uVar68 >> 0xb & 1) != 0) && (uVar75 < *(ushort *)(param_1 + 0x3b))) {
        *(undefined1 *)((long)param_1 + 0x265) = 0;
      }
      if (((uVar68 >> 0xc & 1) != 0) && (*(char *)((long)param_1 + 0x211) != '\0')) {
        *(undefined1 *)((long)param_1 + 0x265) = 0;
      }
      if (((uVar68 >> 0xd & 1) == 0) || (*(char *)((long)param_1 + 0x212) == '\0'))
      goto LAB_00e2c56c;
    }
    *(undefined1 *)((long)param_1 + 0x265) = 0;
    iVar48 = (int)*plVar11;
    break;
  case 0x86:
  case 0x87:
    uVar52 = *(ushort *)*__s;
    if ((uint)*(ushort *)((long)param_1 + 0x94) <= (uint)uVar52) {
LAB_00e29264:
      cVar33 = *pcVar5;
      goto joined_r0x00e29280;
    }
    uVar61 = *(ushort *)((long)*__s + 8);
    if ((uint)*(ushort *)((long)param_1 + 0xd4) <= (uint)uVar61) goto LAB_00e29264;
    plVar44 = (long *)(param_1[0x13] + (ulong)(uint)uVar52 * 0x10);
    plVar57 = (long *)(param_1[0x1b] + (ulong)(uint)uVar61 * 0x10);
    uVar34 = *plVar44 - *plVar57;
    uVar59 = plVar44[1] - plVar57[1];
    bVar31 = uVar59 != 0;
    bVar27 = uVar34 != 0;
    uVar49 = 0x4000;
    if (bVar31 || bVar27) {
      uVar49 = uVar34;
    }
    bVar32 = (bVar67 & 1) != 0;
    uVar34 = uVar49;
    if (bVar32 && (bVar31 || bVar27)) {
      uVar34 = -uVar59;
      uVar59 = uVar49;
    }
    if (uVar59 != 0 || uVar34 != 0) {
      local_a8 = uVar34;
      local_a0 = uVar59;
      FUN_00e13480(&local_a8);
      uVar49 = local_a8 + 3;
      if (-1 < (long)local_a8) {
        uVar49 = local_a8;
      }
      *(short *)((long)param_1 + 0x21e) = (short)(uVar49 >> 2);
      uVar49 = local_a0 + 3;
      if (-1 < (long)local_a0) {
        uVar49 = local_a0;
      }
      *(short *)(param_1 + 0x44) = (short)(uVar49 >> 2);
    }
    plVar44 = (long *)(param_1[0x14] + (ulong)uVar52 * 0x10);
    plVar57 = (long *)(param_1[0x1c] + (ulong)uVar61 * 0x10);
    uVar34 = *plVar44 - *plVar57;
    uVar59 = plVar44[1] - plVar57[1];
    bVar28 = uVar59 != 0;
    bVar29 = uVar34 != 0;
    uVar49 = 0x4000;
    if (bVar28 || bVar29) {
      uVar49 = uVar34;
    }
    uVar34 = uVar59;
    if ((bVar32 && (bVar31 || bVar27)) && (bVar28 || bVar29)) {
      uVar34 = uVar49;
    }
    if ((bVar32 && (bVar31 || bVar27)) && (bVar28 || bVar29)) {
      uVar49 = -uVar59;
    }
    if (uVar34 != 0 || uVar49 != 0) {
      local_a8 = uVar49;
      local_a0 = uVar34;
      FUN_00e13480(&local_a8);
      uVar49 = local_a8 + 3;
      if (-1 < (long)local_a8) {
        uVar49 = local_a8;
      }
      *(short *)((long)param_1 + 0x222) = (short)(uVar49 >> 2);
      uVar49 = local_a0 + 3;
      if (-1 < (long)local_a0) {
        uVar49 = local_a0;
      }
      *psVar6 = (short)(uVar49 >> 2);
    }
    lVar40 = (long)*(short *)((long)param_1 + 0x226);
    if (lVar40 == 0x4000) {
      sVar23 = *(short *)((long)param_1 + 0x222);
      lVar41 = (long)sVar23;
LAB_00e2c760:
      *plVar4 = lVar41;
    }
    else {
      if ((long)(short)*puVar12 != 0x4000) {
        sVar23 = *(short *)((long)param_1 + 0x222);
        lVar41 = sVar23 * lVar40 + (long)*psVar6 * (long)(short)*puVar12 >> 0xe;
        goto LAB_00e2c760;
      }
      lVar41 = (long)*psVar6;
      *plVar4 = lVar41;
      sVar23 = *(short *)((long)param_1 + 0x222);
    }
    if (sVar23 == 0x4000) {
      param_1[0x7c] = (long)FUN_00e34aa0;
      if (*(short *)((long)param_1 + 0x21e) == 0x4000) goto LAB_00e2c794;
LAB_00e2c7cc:
      pcVar53 = FUN_00e34aa8;
      if ((short)param_1[0x44] != 0x4000) {
        pcVar53 = FUN_00e34b2c;
      }
    }
    else {
      pcVar53 = FUN_00e34aa8;
      if (*psVar6 != 0x4000) {
        pcVar53 = FUN_00e34ab0;
      }
      param_1[0x7c] = (long)pcVar53;
      if (*(short *)((long)param_1 + 0x21e) != 0x4000) goto LAB_00e2c7cc;
LAB_00e2c794:
      pcVar53 = FUN_00e34aa0;
    }
    goto LAB_00e2c7e8;
  case 0x88:
    uVar49 = *(ulong *)*__s;
    uVar75 = (uint)uVar49;
    if ((uVar49 & 1) == 0) {
      uVar59 = 0;
    }
    else {
      uVar59 = (ulong)*(uint *)(*(long *)(*param_1 + 0xb0) + 0x78);
    }
    if (((uVar75 >> 1 & 1) != 0) && (*(char *)((long)param_1 + 0x211) != '\0')) {
      uVar59 = uVar59 | 0x100;
    }
    if (((uVar75 >> 2 & 1) != 0) && (*(char *)((long)param_1 + 0x212) != '\0')) {
      uVar59 = uVar59 | 0x200;
    }
    if (((uVar75 >> 3 & 1) != 0) && (*(long *)(*param_1 + 0x4c0) != 0)) {
      uVar59 = uVar59 | 0x400;
    }
    if (((uVar75 >> 5 & 1) != 0) && ((char)param_1[0x85] != '\0')) {
      uVar59 = uVar59 | 0x1000;
    }
    if ((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) == 0x28) &&
       (*(char *)((long)param_1 + 0x429) != '\0')) {
      uVar59 = uVar59 | uVar49 << 7 & 0x2000;
      if (((uVar75 >> 8 & 1) != 0) && (*(char *)((long)param_1 + 0x42a) != '\0')) {
        uVar59 = uVar59 | 0x8000;
      }
      uVar59 = uVar59 | uVar49 << 7 & 0x60000;
      if (((uVar75 >> 0xc & 1) != 0) && (*(char *)((long)param_1 + 0x42e) != '\0')) {
        uVar59 = uVar59 | 0x80000;
      }
    }
    *(ulong *)*__s = uVar59;
    iVar48 = (int)*plVar11;
    break;
  case 0x89:
    lVar40 = param_1[0x4f];
    if ((int)lVar40 == 3) goto LAB_00e2d588;
    piVar46 = (int *)param_1[0x5c];
    uVar75 = *(uint *)(param_1 + 0x5b);
    piVar43 = piVar46 + (ulong)uVar75 * 10;
    if (uVar75 != 0) {
      do {
        if (*(ulong *)*__s == (ulong)(uint)piVar46[6]) break;
        piVar46 = piVar46 + 10;
      } while (piVar46 < piVar43);
    }
    if (piVar46 == piVar43) {
      if (uVar75 < *(uint *)((long)param_1 + 0x2dc)) {
        *(uint *)(param_1 + 0x5b) = uVar75 + 1;
        goto LAB_00e2ab44;
      }
LAB_00e2d598:
      iVar48 = 0x8d;
      goto LAB_00e2d520;
    }
LAB_00e2ab44:
    if (0xff < *(ulong *)*__s) goto LAB_00e2d598;
    piVar46[6] = (uint)*(ulong *)*__s & 0xff;
    lVar58 = param_1[0x51];
    *piVar46 = (int)lVar40;
    *(undefined1 *)(piVar46 + 7) = 1;
    *(long *)(piVar46 + 2) = lVar58 + 1;
    if ((ulong)*(uint *)((long)param_1 + 0x2ec) < *(ulong *)*__s) {
      *(uint *)((long)param_1 + 0x2ec) = (uint)*(ulong *)*__s & 0xff;
    }
    lVar40 = param_1[0x52];
    while( true ) {
      lVar58 = lVar58 + iVar48;
      *plVar10 = lVar58;
      if (lVar40 <= lVar58) goto LAB_00e2d51c;
      bVar67 = *(byte *)(lVar41 + lVar58);
      iVar48 = (int)(char)(&DAT_01975a50)[bVar67];
      *(byte *)(param_1 + 0x53) = bVar67;
      *(int *)((long)param_1 + 0x29c) = iVar48;
      if (((ulong)bVar67 | 1) == 0x41) {
        if (lVar40 <= lVar58 + 1) goto LAB_00e2d51c;
        iVar48 = 2 - (uint)*(byte *)(lVar41 + lVar58 + 1) * iVar48;
        *(int *)((long)param_1 + 0x29c) = iVar48;
      }
      if (lVar40 < lVar58 + iVar48) goto LAB_00e2d51c;
      if (bVar67 == 0x89) goto LAB_00e2d580;
      if (bVar67 == 0x2d) break;
      if (bVar67 == 0x2c) goto LAB_00e2d580;
    }
LAB_00e2c3ec:
    *(long *)(piVar46 + 4) = lVar58;
    iVar48 = (int)*plVar11;
    break;
  case 0x8a:
    auVar66 = *(undefined1 (*) [16])((long)*__s + 8);
    *(undefined8 *)__s[1] = *(undefined8 *)*__s;
    *(long *)((long)*__s + 8) = auVar66._8_8_;
    *(long *)*__s = auVar66._0_8_;
    iVar48 = (int)*plVar11;
    break;
  case 0x8b:
    lVar40 = *(long *)((long)*__s + 8);
    if (*(long *)*__s < lVar40) goto LAB_00e2ac34;
    goto LAB_00e2c56c;
  case 0x8c:
    lVar40 = *(long *)((long)*__s + 8);
    if (lVar40 < *(long *)*__s) goto LAB_00e2ac34;
    goto LAB_00e2c56c;
  case 0x8d:
    if (-1 < *(long *)*__s) {
      *(uint *)(param_1 + 0x4d) = (uint)*(long *)*__s & 0xffff;
      iVar48 = (int)*plVar11;
      goto joined_r0x00e2c464;
    }
    goto LAB_00e2c56c;
  case 0x8e:
    lVar40 = *(long *)((long)*__s + 8);
    if (lVar40 - 1U < 3) {
      lVar41 = *(long *)*__s;
      iVar48 = 1 << (ulong)((int)lVar40 - 1U & 0x1f);
      if ((lVar41 == 0) || (lVar41 == iVar48)) {
        *(byte *)((long)param_1 + 0x264) =
             *(byte *)((long)param_1 + 0x264) & ((byte)iVar48 ^ 0xff) | (byte)lVar41;
        if ((lVar40 == 3) && (*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) == 0x28)) {
          *(bool *)((long)param_1 + 0x42b) = lVar41 != 4;
          iVar48 = (int)*plVar11;
          goto joined_r0x00e2c464;
        }
        goto LAB_00e2c56c;
      }
    }
LAB_00e2ac90:
    cVar33 = *pcVar5;
joined_r0x00e29280:
    if (cVar33 == '\0') goto LAB_00e2c56c;
    goto LAB_00e2d55c;
  case 0x8f:
  case 0x90:
    piVar46 = (int *)param_1[0x5c];
    if (*(uint *)(param_1 + 0x5b) != 0) {
      piVar43 = piVar46;
      do {
        if ((uVar68 == *(byte *)(piVar43 + 6)) && ((char)piVar43[7] != '\0')) goto LAB_00e2b754;
        piVar43 = piVar43 + 10;
      } while (piVar43 < piVar46 + (ulong)*(uint *)(param_1 + 0x5b) * 10);
    }
    goto LAB_00e2b740;
  case 0x91:
    puVar51 = *(uint **)(*param_1 + 0x4c0);
    if (puVar51 == (uint *)0x0) {
      piVar46 = (int *)param_1[0x5c];
      if (*(uint *)(param_1 + 0x5b) != 0) {
        piVar43 = piVar46;
        do {
          if (((char)piVar43[6] == -0x6f) && ((char)piVar43[7] != '\0')) goto LAB_00e2b754;
          piVar43 = piVar43 + 10;
        } while (piVar43 < piVar46 + (ulong)*(uint *)(param_1 + 0x5b) * 10);
      }
      goto LAB_00e2b740;
    }
    uVar75 = *puVar51;
    uVar49 = (ulong)uVar75;
    if ((uint)((iVar72 + 1) - (int)param_1[4]) <= uVar75) goto LAB_00e2d500;
    uVar59 = *(ulong *)(puVar51 + 4);
    if (uVar59 == 0) {
      if (uVar75 != 0) {
        memset(__s,0,uVar49 << 3);
        goto LAB_00e288f4;
      }
    }
    else if (uVar75 != 0) {
      if ((uVar75 < 4) ||
         ((__s < (undefined1 (*) [16])(uVar59 + uVar49 * 8) &&
          (uVar59 < lVar60 + (lVar40 + uVar49) * 8)))) {
        uVar34 = 0;
      }
      else {
        uVar34 = uVar49 & 0xfffffffc;
        plVar44 = (long *)(uVar59 + 0x10);
        plVar57 = (long *)(lVar60 + lVar40 * 8 + 0x10);
        uVar47 = uVar34;
        do {
          lVar41 = plVar44[-2];
          plVar17 = plVar44 + -1;
          lVar62 = plVar44[1];
          lVar58 = *plVar44;
          plVar44 = plVar44 + 4;
          uVar47 = uVar47 - 4;
          plVar57[-1] = *plVar17 >> 2;
          plVar57[-2] = lVar41 >> 2;
          plVar57[1] = lVar62 >> 2;
          *plVar57 = lVar58 >> 2;
          plVar57 = plVar57 + 4;
        } while (uVar47 != 0);
        if (uVar34 == uVar49) goto LAB_00e2c56c;
      }
      lVar41 = uVar49 - uVar34;
      plVar44 = (long *)(uVar59 + uVar34 * 8);
      plVar57 = (long *)(lVar60 + (uVar34 + lVar40) * 8);
      do {
        lVar41 = lVar41 + -1;
        *plVar57 = *plVar44 >> 2;
        plVar44 = plVar44 + 1;
        plVar57 = plVar57 + 1;
      } while (lVar41 != 0);
    }
LAB_00e2c56c:
    iVar48 = (int)*plVar11;
    break;
  case 0x92:
    if (*(long *)(*param_1 + 0x4c0) != 0) {
      *(undefined8 *)*__s = 0x11;
      iVar48 = (int)*plVar11;
      goto joined_r0x00e2c464;
    }
    piVar46 = (int *)param_1[0x5c];
    if (*(uint *)(param_1 + 0x5b) != 0) {
      piVar43 = piVar46;
      do {
        if (((char)piVar43[6] == -0x6e) && ((char)piVar43[7] != '\0')) goto LAB_00e2b754;
        piVar43 = piVar43 + 10;
      } while (piVar43 < piVar46 + (ulong)*(uint *)(param_1 + 0x5b) * 10);
    }
LAB_00e2b740:
    *(int *)plVar11 = 0x80;
    uVar75 = *(uint *)(param_1 + 0x5b);
    if (uVar75 != 0) goto LAB_00e2c588;
    goto LAB_00e2d4f8;
  default:
    if (uVar68 < 0xe0) {
      if (uVar68 < 0xc0) {
        if (uVar52 < 0xb8) {
          if (uVar52 < 0xb0) {
            piVar46 = (int *)param_1[0x5c];
            if (*(uint *)(param_1 + 0x5b) != 0) {
              piVar43 = piVar46;
              do {
                if ((uVar75 == *(byte *)(piVar43 + 6)) && ((char)piVar43[7] != '\0')) {
                  iVar48 = (int)param_1[0x5e];
                  if (*(int *)((long)param_1 + 0x2f4) <= iVar48) goto LAB_00e2d500;
                  *(int *)(param_1 + 0x5e) = iVar48 + 1;
                  puVar16 = (undefined4 *)(param_1[0x5f] + (long)iVar48 * 0x20);
                  *puVar16 = (int)param_1[0x4f];
                  lVar40 = param_1[0x51];
                  *(int **)(puVar16 + 6) = piVar43;
                  *(long *)(puVar16 + 2) = lVar40 + 1;
                  *(undefined8 *)(puVar16 + 4) = 1;
                  iVar48 = *piVar43;
                  uVar75 = iVar48 - 1;
                  if (uVar75 < 3) {
                    if (param_1[(long)(int)uVar75 * 2 + 0x61] == 0) {
                      *(int *)plVar11 = 0x8a;
                    }
                    else {
                      lVar40 = *(long *)(piVar43 + 2);
                      lVar41 = param_1[(long)(int)uVar75 * 2 + 0x62];
                      if (lVar41 < lVar40) {
                        *(int *)plVar11 = 0x83;
                      }
                      else {
                        param_1[0x50] = param_1[(long)(int)uVar75 * 2 + 0x61];
                        param_1[0x52] = lVar41;
                        param_1[0x51] = lVar40;
                        *(int *)(param_1 + 0x4f) = iVar48;
                      }
                    }
                    *(undefined1 *)(param_1 + 0x54) = 0;
                    iVar48 = (int)*plVar11;
                  }
                  else {
                    *(int *)plVar11 = 0x84;
                    *(undefined1 *)(param_1 + 0x54) = 0;
                    iVar48 = (int)*plVar11;
                  }
                  goto joined_r0x00e29e64;
                }
                piVar43 = piVar43 + 10;
              } while (piVar43 < piVar46 + (ulong)*(uint *)(param_1 + 0x5b) * 10);
            }
            goto LAB_00e2b740;
          }
          uVar75 = uVar75 + 0xff51 & 0xffff;
          if (uVar75 < (uint)((iVar72 + 1) - (int)param_1[4])) {
            if (uVar75 != 0) {
              uVar68 = 1;
              do {
                iVar48 = uVar68 - 1;
                uVar52 = (ushort)uVar68;
                uVar68 = uVar68 + 1 & 0xffff;
                *(ulong *)((long)*__s + (long)iVar48 * 8) =
                     (ulong)*(byte *)(lVar41 + *plVar10 + (ulong)uVar52);
              } while (uVar68 <= uVar75);
            }
            goto LAB_00e2c56c;
          }
        }
        else {
          uVar75 = uVar68 + 0xff49 & 0xffff;
          if (uVar75 < (uint)((iVar72 + 1) - (int)param_1[4])) {
            lVar40 = *plVar10;
            *plVar10 = lVar40 + 1;
            if (uVar75 != 0) {
              *plVar10 = lVar40 + 3;
              *(ulong *)*__s =
                   (long)(short)((ushort)*(byte *)(lVar41 + lVar40 + 1) << 8) |
                   (ulong)*(byte *)(lVar41 + lVar40 + 2);
              if (uVar75 != 1) {
                uVar49 = 1;
                do {
                  uVar59 = uVar49 & 0xffff;
                  uVar68 = (int)uVar49 + 1;
                  uVar49 = (ulong)uVar68;
                  pbVar15 = (byte *)(lVar41 + *plVar10);
                  *plVar10 = *plVar10 + 2;
                  *(ulong *)((long)*__s + uVar59 * 8) =
                       (long)(short)((ushort)*pbVar15 << 8) | (ulong)pbVar15[1];
                } while ((uVar68 & 0xffff) < uVar75);
              }
            }
            *(undefined1 *)(param_1 + 0x54) = 0;
            iVar48 = (int)*plVar11;
            goto joined_r0x00e2c464;
          }
        }
        goto LAB_00e2d500;
      }
      uVar49 = *(ulong *)*__s;
      uVar22 = (undefined2)uVar49;
      if ((((uint)uVar49 & 0xffff) < (uint)*(ushort *)((long)param_1 + 0x94)) &&
         (uVar52 = *(ushort *)(param_1 + 0x43), uVar52 < *(ushort *)((long)param_1 + 0x54))) {
        uVar59 = param_1[0x47];
        if ((*(short *)((long)param_1 + 0x26c) == 0) || (*(short *)((long)param_1 + 0x26e) == 0)) {
          plVar44 = (long *)(param_1[0x13] + (uVar49 & 0xffff) * 0x10);
          plVar57 = (long *)(param_1[0xb] + (ulong)uVar52 * 0x10);
          lVar41 = (*(code *)param_1[0x7d])(param_1,*plVar44 - *plVar57,plVar44[1] - plVar57[1]);
          lVar40 = param_1[0x4a];
        }
        else {
          lVar40 = param_1[0x15];
          plVar44 = (long *)(lVar40 + (uVar49 & 0xffff) * 0x10);
          plVar57 = (long *)(param_1[0xd] + (ulong)uVar52 * 0x10);
          if (param_1[0x33] == param_1[0x34]) {
            uVar36 = (*(code *)param_1[0x7d])
                               (param_1,*plVar44 - *plVar57,
                                *(long *)(lVar40 + (uVar49 & 0xffff) * 0x10 + 8) - plVar57[1]);
            lVar41 = FT_MulFix(uVar36,param_1[0x33]);
          }
          else {
            uVar36 = FT_MulFix(*plVar44 - *plVar57);
            uVar37 = FT_MulFix(*(long *)(lVar40 + (uVar49 & 0xffff) * 0x10 + 8) - plVar57[1],
                               param_1[0x34]);
            lVar41 = (*(code *)param_1[0x7d])(param_1,uVar36,uVar37);
          }
          lVar40 = param_1[0x4a];
        }
        lVar58 = lVar41;
        if ((((0 < lVar40) && (lVar62 = param_1[0x4b], lVar41 < lVar62 + lVar40)) &&
            (lVar62 - lVar40 < lVar41)) && (lVar58 = -lVar62, -1 < lVar41)) {
          lVar58 = lVar62;
        }
        bVar67 = *(byte *)(param_1 + 0x53);
        if ((bVar67 >> 2 & 1) == 0) {
          if (lVar58 < 0) {
            uVar34 = lVar58 - param_1[((ulong)bVar67 & 3) + 0x3e];
            uVar34 = uVar34 & (long)uVar34 >> 0x3f;
          }
          else {
            uVar34 = param_1[((ulong)bVar67 & 3) + 0x3e] + lVar58;
            uVar34 = uVar34 & ((long)uVar34 >> 0x3f ^ 0xffffffffffffffffU);
          }
        }
        else {
          uVar34 = (*(code *)param_1[0x7b])(param_1,lVar58,param_1[((ulong)bVar67 & 3) + 0x3e]);
          bVar67 = *(byte *)(param_1 + 0x53);
        }
        uVar47 = uVar34;
        if ((bVar67 >> 3 & 1) != 0) {
          if (lVar58 < 0) {
            if ((long)-uVar59 < (long)uVar34) {
              uVar47 = -uVar59;
            }
          }
          else {
            uVar47 = uVar59;
            if ((long)uVar59 <= (long)uVar34) {
              uVar47 = uVar34;
            }
          }
        }
        plVar44 = (long *)(param_1[0x14] + (uVar49 & 0xffff) * 0x10);
        plVar57 = (long *)(param_1[0xc] + (ulong)*(ushort *)(param_1 + 0x43) * 0x10);
        lVar40 = (*(code *)param_1[0x7c])(param_1,*plVar44 - *plVar57,plVar44[1] - plVar57[1]);
        (*(code *)param_1[0x7f])(param_1,plVar13,uVar49 & 0xffffffff,uVar47 - lVar40);
        bVar67 = *(byte *)(param_1 + 0x53);
        *(undefined2 *)((long)param_1 + 0x21c) = uVar22;
        *(short *)((long)param_1 + 0x21a) = (short)param_1[0x43];
      }
      else if (*pcVar5 == '\0') {
        *(undefined2 *)((long)param_1 + 0x21c) = uVar22;
        *(short *)((long)param_1 + 0x21a) = (short)param_1[0x43];
      }
      else {
        *(int *)plVar11 = 0x86;
        *(undefined2 *)((long)param_1 + 0x21c) = uVar22;
        *(short *)((long)param_1 + 0x21a) = (short)param_1[0x43];
      }
      if ((bVar67 >> 4 & 1) == 0) goto LAB_00e2c56c;
      *(undefined2 *)(param_1 + 0x43) = uVar22;
      iVar48 = (int)*plVar11;
    }
    else {
      uVar49 = *(ulong *)*__s;
      if (((((uint)uVar49 & 0xffff) < (uint)*(ushort *)((long)param_1 + 0x94)) &&
          (lVar40 = *(long *)((long)*__s + 8), lVar40 + 1U < param_1[0x55] + 1U)) &&
         (*(ushort *)(param_1 + 0x43) < *(ushort *)((long)param_1 + 0x54))) {
        uVar59 = param_1[0x47];
        lVar41 = param_1[0x49];
        if (lVar40 == -1) {
          uVar34 = 0;
        }
        else {
          uVar34 = (*(code *)param_1[0x82])(param_1);
        }
        uVar47 = param_1[0x4b];
        lVar58 = uVar34 - uVar47;
        lVar40 = -lVar58;
        if (-1 < lVar58) {
          lVar40 = lVar58;
        }
        uVar50 = uVar34;
        if ((lVar40 < param_1[0x4a]) && (uVar50 = -uVar47, -1 < (long)uVar34)) {
          uVar50 = uVar47;
        }
        if (*(short *)((long)param_1 + 0x26e) == 0) {
          uVar68 = (uint)uVar50;
          uVar75 = -uVar68;
          if (-1 < (int)uVar68) {
            uVar75 = uVar68;
          }
          bVar67 = (byte)(uVar50 >> 0x18);
          iVar48 = MP_INT_ABS((int)*(short *)((long)param_1 + 0x226));
          iVar72 = MP_INT_ABS((int)(short)param_1[0x45]);
          uVar68 = iVar48 * (uVar75 >> 0x10);
          uVar69 = iVar72 * (uVar75 >> 0x10);
          uVar70 = uVar68 * 0x10000 | 0x2000;
          uVar73 = uVar69 * 0x10000 | 0x2000;
          uVar74 = uVar70 + iVar48 * (uVar75 & 0xffff);
          uVar75 = uVar73 + iVar72 * (uVar75 & 0xffff);
          plVar44 = (long *)(param_1[0xb] + (ulong)*(ushort *)(param_1 + 0x43) * 0x10);
          lVar40 = *plVar44;
          iVar48 = ((uVar68 >> 0x10) + (uint)(uVar74 < uVar70)) * 0x40000;
          iVar72 = ((uVar69 >> 0x10) + (uint)(uVar75 < uVar73)) * 0x40000;
          lVar58 = param_1[0x13];
          iVar48 = CONCAT13((char)((uint)iVar48 >> 0x18),
                            CONCAT12((byte)((uint)iVar48 >> 0x10) | (byte)(uVar74 >> 0x1e),
                                     (short)(uVar74 >> 0xe)));
          uVar34 = CONCAT17((char)((uint)iVar72 >> 0x18),
                            CONCAT16((byte)((uint)iVar72 >> 0x10) | (byte)(uVar75 >> 0x1e),
                                     CONCAT15((char)((uVar75 >> 0xe) >> 8),
                                              CONCAT14((char)(uVar75 >> 0xe),iVar48))));
          uVar47 = CONCAT44(-(int)(uVar34 >> 0x20),-iVar48);
          uVar47 = uVar47 ^ (uVar47 ^ uVar34) &
                            CONCAT44(-(uint)(-1 < (char)(bVar67 ^ (byte)((short)param_1[0x45] >> 0xf
                                                                        ))),
                                     -(uint)(-1 < (char)(bVar67 ^ (byte)(*(short *)((long)param_1 +
                                                                                   0x226) >> 0xf))))
          ;
          lVar62 = (uVar49 & 0xffff) * 0x10;
          plVar57 = (long *)(lVar58 + lVar62);
          plVar57[1] = plVar44[1] + (long)(int)(uVar47 >> 0x20);
          *plVar57 = lVar40 + (int)uVar47;
          lVar40 = param_1[0x14];
          auVar66 = *(undefined1 (*) [16])(lVar58 + lVar62);
          ((undefined8 *)(lVar40 + lVar62))[1] = auVar66._8_8_;
          *(undefined8 *)(lVar40 + lVar62) = auVar66._0_8_;
        }
        lVar40 = (uVar49 & 0xffff) * 0x10;
        plVar44 = (long *)(param_1[0x13] + lVar40);
        plVar57 = (long *)(param_1[0xb] + (ulong)*(ushort *)(param_1 + 0x43) * 0x10);
        uVar47 = (*(code *)param_1[0x7d])(param_1,*plVar44 - *plVar57,plVar44[1] - plVar57[1]);
        plVar44 = (long *)(param_1[0x14] + lVar40);
        plVar57 = (long *)(param_1[0xc] + (ulong)*(ushort *)(param_1 + 0x43) * 0x10);
        lVar40 = (*(code *)param_1[0x7c])(param_1,*plVar44 - *plVar57,plVar44[1] - plVar57[1]);
        bVar67 = *(byte *)(param_1 + 0x53);
        uVar34 = -uVar50;
        if (*(char *)((long)param_1 + 0x244) == '\0' || -1 < (long)(uVar47 ^ uVar50)) {
          uVar34 = uVar50;
        }
        if ((bVar67 >> 2 & 1) == 0) {
          if ((long)uVar34 < 0) {
            uVar34 = uVar34 - param_1[((ulong)bVar67 & 3) + 0x3e];
            uVar34 = uVar34 & (long)uVar34 >> 0x3f;
          }
          else {
            uVar34 = param_1[((ulong)bVar67 & 3) + 0x3e] + uVar34;
            uVar34 = uVar34 & ((long)uVar34 >> 0x3f ^ 0xffffffffffffffffU);
          }
        }
        else {
          uVar50 = uVar34;
          if (*(short *)((long)param_1 + 0x26c) == *(short *)((long)param_1 + 0x26e)) {
            lVar62 = uVar34 - uVar47;
            lVar58 = -lVar62;
            if (-1 < lVar62) {
              lVar58 = lVar62;
            }
            uVar50 = uVar47;
            if (lVar58 <= lVar41) {
              uVar50 = uVar34;
            }
          }
          uVar34 = (*(code *)param_1[0x7b])(param_1,uVar50,param_1[((ulong)bVar67 & 3) + 0x3e]);
          bVar67 = *(byte *)(param_1 + 0x53);
        }
        uVar50 = uVar34;
        if ((bVar67 >> 3 & 1) != 0) {
          if ((long)uVar47 < 0) {
            if ((long)-uVar59 < (long)uVar34) {
              uVar50 = -uVar59;
            }
          }
          else {
            uVar50 = uVar59;
            if ((long)uVar59 <= (long)uVar34) {
              uVar50 = uVar34;
            }
          }
        }
        (*(code *)param_1[0x7f])(param_1,plVar13,uVar49 & 0xffffffff,uVar50 - lVar40);
        bVar67 = *(byte *)(param_1 + 0x53);
        *(short *)((long)param_1 + 0x21a) = (short)param_1[0x43];
      }
      else if (*pcVar5 == '\0') {
        *(short *)((long)param_1 + 0x21a) = (short)param_1[0x43];
      }
      else {
        *(int *)plVar11 = 0x86;
        *(short *)((long)param_1 + 0x21a) = (short)param_1[0x43];
      }
      if ((bVar67 >> 4 & 1) != 0) {
        *(short *)(param_1 + 0x43) = (short)uVar49;
      }
      *(short *)((long)param_1 + 0x21c) = (short)uVar49;
      iVar48 = (int)*plVar11;
    }
  }
  goto joined_r0x00e29e64;
LAB_00e2beb8:
  while( true ) {
    uVar47 = (ulong)uVar74;
    if ((bVar67 & *(byte *)(lVar41 + uVar47)) != 0) {
      FUN_00e35020(&local_a8,(int)uVar34 + 1,uVar74 - 1,uVar34,uVar47);
      uVar34 = uVar47;
    }
    uVar74 = uVar74 + 1;
    if (uVar68 < uVar74) break;
    lVar41 = param_1[0x26];
  }
  if ((uint)uVar34 != uVar69) {
    FUN_00e35020(&local_a8,(uint)uVar34 + 1 & 0xffff,uVar68,uVar34,uVar69);
    if (uVar69 != 0) {
      FUN_00e35020(&local_a8,uVar75,uVar69 - 1,uVar34,uVar69);
    }
    uVar75 = uVar74;
    if ((long)*(short *)((long)param_1 + 0x116) <= lVar40 + 1) goto LAB_00e2c030;
    goto LAB_00e2be20;
  }
LAB_00e2bf04:
  uVar34 = (ulong)uVar69;
  lVar41 = *(long *)(uVar49 + uVar34 * 0x10) - *(long *)(uVar59 + uVar34 * 0x10);
  if (lVar41 != 0) {
    if (uVar75 < uVar69) {
      uVar47 = (ulong)uVar75;
      uVar50 = uVar34 - uVar47;
      if (2 < uVar50) {
        uVar63 = uVar34 - uVar47 & 0xfffffffffffffffe;
        lVar58 = uVar47 * 0x10;
        uVar47 = (uVar50 & 0xfffffffffffffffe) + uVar47;
        plVar44 = (long *)(uVar49 + 0x10 + lVar58);
        do {
          uVar63 = uVar63 - 2;
          plVar44[-2] = plVar44[-2] + lVar41;
          *plVar44 = *plVar44 + lVar41;
          plVar44 = plVar44 + 4;
        } while (uVar63 != 0);
        if (uVar50 == (uVar50 & 0xfffffffffffffffe)) goto joined_r0x00e2bf98;
      }
      lVar58 = uVar34 - uVar47;
      plVar44 = (long *)(uVar49 + uVar47 * 0x10);
      do {
        lVar58 = lVar58 + -1;
        *plVar44 = *plVar44 + lVar41;
        plVar44 = plVar44 + 2;
      } while (lVar58 != 0);
    }
joined_r0x00e2bf98:
    for (; uVar70 <= uVar68; uVar70 = uVar70 + 1) {
      *(long *)(uVar49 + (ulong)uVar70 * 0x10) = *(long *)(uVar49 + (ulong)uVar70 * 0x10) + lVar41;
    }
  }
  uVar75 = uVar74;
  if ((long)*(short *)((long)param_1 + 0x116) <= lVar40 + 1) goto LAB_00e2c030;
LAB_00e2be20:
  lVar40 = lVar40 + 1;
  uVar52 = *(ushort *)((long)param_1 + 0x114);
  goto LAB_00e2be28;
LAB_00e2d580:
  iVar48 = 0x89;
  goto LAB_00e2d520;
LAB_00e2b754:
  iVar48 = (int)param_1[0x5e];
  if (*(int *)((long)param_1 + 0x2f4) <= iVar48) {
LAB_00e2d500:
    iVar48 = 0x82;
    goto LAB_00e2d520;
  }
  *(int *)(param_1 + 0x5e) = iVar48 + 1;
  puVar16 = (undefined4 *)(param_1[0x5f] + (long)iVar48 * 0x20);
  *puVar16 = (int)param_1[0x4f];
  lVar40 = param_1[0x51];
  *(int **)(puVar16 + 6) = piVar43;
  *(long *)(puVar16 + 2) = lVar40 + 1;
  *(undefined8 *)(puVar16 + 4) = 1;
  iVar48 = *piVar43;
  uVar75 = iVar48 - 1;
  if (uVar75 < 3) {
    if (param_1[(long)(int)uVar75 * 2 + 0x61] == 0) {
LAB_00e2b7f4:
      *(int *)plVar11 = 0x8a;
      *(undefined1 *)(param_1 + 0x54) = 0;
      iVar48 = (int)*plVar11;
    }
    else {
      lVar40 = *(long *)(piVar43 + 2);
      lVar41 = param_1[(long)(int)uVar75 * 2 + 0x62];
      if (lVar40 <= lVar41) {
        param_1[0x50] = param_1[(long)(int)uVar75 * 2 + 0x61];
        param_1[0x52] = lVar41;
        param_1[0x51] = lVar40;
        *(int *)(param_1 + 0x4f) = iVar48;
        *(undefined1 *)(param_1 + 0x54) = 0;
        iVar48 = (int)*plVar11;
        goto joined_r0x00e2c464;
      }
LAB_00e2b7dc:
      *(int *)plVar11 = 0x83;
      *(undefined1 *)(param_1 + 0x54) = 0;
      iVar48 = (int)*plVar11;
    }
joined_r0x00e29e64:
    if (iVar48 == 0) goto LAB_00e2c118;
LAB_00e2c574:
    if (iVar48 != 0x80) {
      return iVar48;
    }
    piVar46 = (int *)param_1[0x5c];
    uVar75 = *(uint *)(param_1 + 0x5b);
    if (uVar75 == 0) {
LAB_00e2d4f8:
      iVar48 = 0x80;
      goto LAB_00e2d520;
    }
LAB_00e2c588:
    piVar43 = piVar46 + (ulong)uVar75 * 10;
    while (((char)piVar46[7] == '\0' || ((char)param_1[0x53] != (char)piVar46[6]))) {
      piVar46 = piVar46 + 10;
      if (piVar43 <= piVar46) goto LAB_00e2d4f8;
    }
    if (*(int *)((long)param_1 + 0x2f4) <= (int)param_1[0x5e]) {
LAB_00e2d55c:
      iVar48 = 0x86;
      goto LAB_00e2d520;
    }
    puVar16 = (undefined4 *)(param_1[0x5f] + (long)(int)param_1[0x5e] * 0x20);
    *puVar16 = (int)param_1[0x4f];
    lVar40 = param_1[0x51];
    *(int **)(puVar16 + 6) = piVar46;
    *(long *)(puVar16 + 2) = lVar40 + 1;
    *(undefined8 *)(puVar16 + 4) = 1;
    iVar48 = *piVar46;
    uVar75 = iVar48 - 1;
    if (2 < uVar75) {
LAB_00e2d564:
      iVar48 = 0x84;
      goto LAB_00e2d520;
    }
    if (param_1[(long)(int)uVar75 * 2 + 0x61] == 0) {
LAB_00e2d56c:
      iVar48 = 0x8a;
      goto LAB_00e2d520;
    }
    lVar40 = *(long *)(piVar46 + 2);
    lVar41 = param_1[(long)(int)uVar75 * 2 + 0x62];
    if (lVar40 <= lVar41) {
      param_1[0x50] = param_1[(long)(int)uVar75 * 2 + 0x61];
      param_1[0x52] = lVar41;
      param_1[0x51] = lVar40;
      *(int *)(param_1 + 0x4f) = iVar48;
      lVar40 = param_1[0x51];
      if (lVar40 < param_1[0x52]) goto LAB_00e2c15c;
      goto LAB_00e2d510;
    }
  }
  else {
LAB_00e2b7a0:
    *(int *)plVar11 = 0x84;
    *(undefined1 *)(param_1 + 0x54) = 0;
    iVar48 = (int)*plVar11;
joined_r0x00e2c464:
    if (iVar48 != 0) goto LAB_00e2c574;
LAB_00e2c118:
    cVar33 = (char)param_1[0x54];
    param_1[4] = param_1[8];
joined_r0x00e2a384:
    if (cVar33 != '\0') {
LAB_00e2c128:
      param_1[0x51] = param_1[0x51] + (long)*(int *)((long)param_1 + 0x29c);
    }
    uVar56 = uVar56 + 1;
    if (1000000 < uVar56) {
      return 0x8b;
    }
    lVar40 = param_1[0x51];
    if (lVar40 < param_1[0x52]) {
LAB_00e2c15c:
      if ((char)param_1[0x6c] != '\0') {
        return 0;
      }
      goto LAB_00e285ec;
    }
LAB_00e2d510:
    if ((int)param_1[0x5e] < 1) {
      return 0;
    }
  }
LAB_00e2d51c:
  iVar48 = 0x83;
LAB_00e2d520:
  *(int *)plVar11 = iVar48;
  return iVar48;
}

