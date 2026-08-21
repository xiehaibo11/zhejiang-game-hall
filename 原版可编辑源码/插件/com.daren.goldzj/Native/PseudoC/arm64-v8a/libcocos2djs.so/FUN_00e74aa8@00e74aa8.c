
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00e74aa8(undefined8 *param_1,long param_2,long param_3)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  char cVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  ulong uVar24;
  int *piVar25;
  short *psVar26;
  ulong uVar27;
  short sVar28;
  undefined1 uVar29;
  uint uVar30;
  ulong uVar31;
  int iVar32;
  long lVar33;
  int iVar34;
  ulong uVar35;
  int iVar36;
  undefined8 *puVar37;
  uint uVar38;
  long lVar39;
  char *pcVar40;
  ulong local_c0;
  long lStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  int local_88;
  int local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_64;
  
  local_88 = 0;
  cVar15 = *(char *)((long)param_1 + 0x5c);
  if ((cVar15 != '\0') && (param_1[0x84] == 0)) {
    return 8;
  }
  puVar37 = *(undefined8 **)param_1[0x85];
  if (puVar37 == (undefined8 *)0x0) {
    uVar23 = *param_1;
    ((long *)param_1[0x85])[1] = (long)FUN_00e78b70;
    puVar37 = (undefined8 *)FUN_00e1388c(uVar23,0x290,&local_88);
    *(undefined8 **)param_1[0x85] = puVar37;
    if (local_88 != 0) {
      return 0x40;
    }
    *puVar37 = uVar23;
    if (cVar15 == '\0') {
      puVar37[0x51] = *(undefined8 *)(param_1[0x83] + 0x1368);
    }
    puVar37[0x1b] = 0;
    puVar37[0x1a] = 0;
    puVar37[0x1d] = 0;
    puVar37[0x1c] = 0;
    puVar37[0x1b] = uVar23;
    puVar37[0x1c] = puVar37 + 1;
    puVar37[0x17] = FUN_00e78cd4;
    puVar37[0x16] = FUN_00e78bb4;
    puVar37[0x19] = 0;
    puVar37[0x18] = 0;
    puVar37[0x19] = FUN_00e78ec4;
  }
  puVar37[0x1d] = param_1;
  puVar37[0x1e] = param_1;
  lVar22 = param_1[1];
  lVar39 = param_1[2];
  local_98 = param_2 + param_3;
  lVar21 = *(long *)(lVar22 + 0xb0);
  cVar2 = *(char *)(lVar21 + 0x3c);
  cVar10 = *(char *)(*(long *)(lVar22 + 0xf0) + 0x70);
  local_a8 = 0;
  local_b0 = 0;
  cVar3 = *(char *)(lVar39 + 0x130);
  cVar4 = *(char *)(lVar39 + 0x131);
  if (cVar3 == '\0') {
    uVar20 = 0x400;
    uVar38 = 0x400;
    local_c0 = 0x400;
    lStack_b8 = 0x40000000000;
    if (cVar15 != '\0') goto LAB_00e74b68;
LAB_00e74bc4:
    uVar29 = *(undefined1 *)(lVar22 + 0x4b8);
  }
  else {
    iVar16 = *(int *)(lVar39 + 0x138) + 0x20;
    iVar17 = *(int *)(lVar39 + 0x138) + 0x5f;
    if (-1 < iVar16) {
      iVar17 = iVar16;
    }
    uVar20 = iVar17 >> 6;
    local_c0 = (ulong)uVar20;
    iVar16 = *(int *)(lVar39 + 0x140) + 0x20;
    iVar17 = *(int *)(lVar39 + 0x140) + 0x5f;
    if (-1 < iVar16) {
      iVar17 = iVar16;
    }
    uVar38 = iVar17 >> 6;
    lStack_b8 = (ulong)uVar38 << 0x20;
    if (cVar15 == '\0') goto LAB_00e74bc4;
LAB_00e74b68:
    uVar29 = 0;
  }
  *(undefined1 *)((long)puVar37 + 0xd) = uVar29;
  *(char *)((long)puVar37 + 0xc) = cVar15;
  uVar30 = (uint)(cVar3 != '\0');
  *(uint *)(puVar37 + 2) = uVar30;
  if ((cVar4 != '\0') && ((cVar10 == '\0' || ((cVar2 == '\0' && (cVar10 < '\0')))))) {
    *(uint *)(puVar37 + 2) = uVar30 | 2;
  }
  *(undefined4 *)((long)puVar37 + 0x104) = *(undefined4 *)(lVar21 + 0x40);
  *(undefined4 *)(puVar37 + 0x21) = *(undefined4 *)(lVar21 + 0x44);
  *(undefined4 *)((long)puVar37 + 0x10c) = *(undefined4 *)(lVar21 + 0x48);
  *(undefined4 *)(puVar37 + 0x22) = *(undefined4 *)(lVar21 + 0x4c);
  *(undefined4 *)((long)puVar37 + 0x114) = *(undefined4 *)(lVar21 + 0x50);
  *(undefined4 *)(puVar37 + 0x23) = *(undefined4 *)(lVar21 + 0x54);
  *(undefined4 *)((long)puVar37 + 0x11c) = *(undefined4 *)(lVar21 + 0x58);
  *(undefined4 *)(puVar37 + 0x24) = *(undefined4 *)(lVar21 + 0x5c);
  uVar9 = *(ushort *)(param_1[1] + 0x88);
  *(uint *)(puVar37 + 0x14) = (uint)uVar9;
  lStack_a0 = param_2;
  lStack_90 = param_2;
  if (cVar4 != '\0') {
    if ((int)uVar38 < 1) {
      return 0x24;
    }
    if ((int)uVar20 < 1) {
      return 0x24;
    }
    if ((short)uVar9 < 0) {
      return 0xa4;
    }
    iVar16 = FT_DivFix(0x7d00000,(long)(int)((uint)uVar9 << 0x10));
    if (iVar16 < (int)uVar20) {
      return 0xa4;
    }
    if (iVar16 < (int)uVar38) {
      return 0xa4;
    }
    param_1 = (undefined8 *)puVar37[0x1e];
  }
  local_84 = 0;
  local_80 = 0;
  uStack_78 = 0;
  iVar16 = *(int *)((long)puVar37 + 0xa4);
  uVar19 = *(undefined4 *)(puVar37 + 0x15);
  local_64 = 0;
  local_70 = 0;
  *(undefined4 *)(puVar37 + 1) = 0;
  lVar39 = param_1[0x84];
  lVar22 = puVar37[0x1f];
  if (lVar22 == lVar39) {
    cVar15 = *(char *)((long)puVar37 + 0xc);
  }
  else {
    puVar37[0x1f] = lVar39;
    cVar15 = *(char *)((long)puVar37 + 0xc);
  }
  bVar14 = lVar22 != lVar39;
  if ((cVar15 == '\0') && (*(int *)(param_1[0x83] + 0x1398) != 0)) {
    lVar22 = puVar37[0x51];
    iVar17 = (**(code **)(*(long *)(param_1[1] + 0x380) + 0x50))(param_1[1],&local_64,0,&local_70,0)
    ;
    *(int *)(puVar37 + 1) = iVar17;
    if (iVar17 != 0) {
      return 3;
    }
    cVar15 = (**(code **)(lVar22 + 0x18))
                       (lVar39 + 0x420,*(undefined4 *)(lVar39 + 0x410),local_64,local_70);
    if (cVar15 != '\0') {
      (**(code **)(lVar22 + 8))(param_1[0x83],lVar39,local_64,local_70);
    }
    bVar14 = cVar15 != '\0' || bVar14;
    uVar23 = *(undefined8 *)(lVar39 + 0x428);
    *(undefined1 *)((long)puVar37 + 0x61) = 0;
    puVar37[0xd] = uVar23;
    *(undefined4 *)(puVar37 + 0x12) = *(undefined4 *)(lVar39 + 0x410);
    *(undefined4 *)((long)puVar37 + 0x94) = local_64;
    puVar37[0x13] = local_70;
  }
  uVar20 = (uint)*(ushort *)(*(long *)(param_1[1] + 0xa0) + 0x1a);
  iVar17 = uVar20 * 0x10000;
  if (*(int *)((long)puVar37 + 0x5c) != iVar17) {
    bVar14 = true;
    *(int *)((long)puVar37 + 0x5c) = iVar17;
  }
  uVar38 = *(uint *)(puVar37 + 2);
  *(byte *)(puVar37 + 0x20) = (byte)uVar38 & 1;
  iVar18 = memcmp(&local_c0,(ulong *)((long)puVar37 + 0x14),0x10);
  if (iVar18 != 0) {
    bVar14 = true;
    *(long *)((long)puVar37 + 0x1c) = lStack_b8;
    *(ulong *)((long)puVar37 + 0x14) = local_c0;
    *(undefined4 *)((long)puVar37 + 0x24) = 0;
    *(undefined4 *)(puVar37 + 5) = 0;
    *(undefined8 *)((long)puVar37 + 0x4c) = 0x1000000000000;
    *(undefined8 *)((long)puVar37 + 0x44) = 0x10000;
    *(undefined8 *)((long)puVar37 + 0x3c) = local_b0;
    *(long *)((long)puVar37 + 0x34) = lStack_b8;
    *(ulong *)((long)puVar37 + 0x2c) = local_c0;
  }
  uVar38 = uVar38 & 2;
  if (uVar38 == *(byte *)((long)puVar37 + 0x102)) {
    if (bVar14) goto LAB_00e74e58;
  }
  else {
    *(char *)((long)puVar37 + 0x102) = (char)(uVar38 >> 1);
LAB_00e74e58:
    iVar18 = 1000;
    if (*(int *)(puVar37 + 0x14) != 0) {
      iVar18 = *(int *)(puVar37 + 0x14);
    }
    if (uVar20 == 4 || iVar17 < 0x40000) {
      iVar17 = 0x40000;
    }
    uVar20 = *(int *)(param_1[0x84] + 0x2f0) * 0x10000;
    uVar31 = (ulong)uVar20;
    pcVar40 = "rnal27Runtime_SerializeWasmModuleEiPmPNS0_7IsolateE";
    iVar32 = 0;
    if (iVar18 != 0) {
      iVar32 = 0x3e80000 / iVar18;
    }
    *(uint *)((long)puVar37 + 0x124) = uVar20;
    if ((int)uVar20 < 1) {
      uVar31 = FT_DivFix("rnal27Runtime_SerializeWasmModuleEiPmPNS0_7IsolateE",(long)iVar32);
      *(int *)((long)puVar37 + 0x124) = (int)uVar31;
      if (0 < iVar16) goto LAB_00e74ea8;
LAB_00e74f18:
      FUN_00e8196c(iVar32,iVar17,uVar31,(long)puVar37 + 300,0,*(undefined1 *)((long)puVar37 + 0x102)
                   ,(long)puVar37 + 0x104);
    }
    else {
      if (iVar16 < 1) goto LAB_00e74f18;
LAB_00e74ea8:
      lVar22 = FT_DivFix((long)(iVar18 << 0x10),iVar17);
      if (iVar16 <= lVar22) {
        iVar16 = FT_DivFix((long)(iVar18 << 0x10),iVar17);
      }
      *(undefined4 *)((long)puVar37 + 300) = 0;
      if ((0x28e < iVar32) && (iVar16 != 0)) {
        if (iVar16 < 0) {
          iVar16 = iVar16 + 1;
        }
        *(int *)((long)puVar37 + 300) = iVar16 >> 1;
      }
    }
    if ((*(int *)(param_1[0x84] + 0x2e8) * 0x10000 < 1) ||
       (*(int *)((long)puVar37 + 0x124) <= *(int *)(param_1[0x84] + 0x2e8) * 0x20000)) {
      pcVar40 = "";
    }
    uVar23 = FT_DivFix(pcVar40,(long)iVar32);
    piVar25 = (int *)(puVar37 + 0x26);
    *(int *)(puVar37 + 0x25) = (int)uVar23;
    FUN_00e8196c(iVar32,iVar17,uVar23,piVar25,uVar19,*(undefined1 *)((long)puVar37 + 0x102),
                 (long)puVar37 + 0x104);
    if (*(int *)((long)puVar37 + 300) == 0) {
      bVar14 = *piVar25 != 0;
    }
    else {
      bVar14 = true;
    }
    *(bool *)((long)puVar37 + 0x101) = bVar14;
    *(undefined1 *)((long)puVar37 + 0x134) = 0;
    lVar22 = puVar37[0x1e];
    puVar37[0x50] = 0;
    puVar37[0x4f] = 0;
    puVar37[0x4e] = 0;
    puVar37[0x4d] = 0;
    puVar37[0x4c] = 0;
    puVar37[0x4b] = 0;
    puVar37[0x4a] = 0;
    puVar37[0x49] = 0;
    puVar37[0x48] = 0;
    puVar37[0x47] = 0;
    puVar37[0x46] = 0;
    puVar37[0x45] = 0;
    puVar37[0x44] = 0;
    puVar37[0x43] = 0;
    puVar37[0x42] = 0;
    puVar37[0x41] = 0;
    puVar37[0x40] = 0;
    puVar37[0x3f] = 0;
    puVar37[0x3e] = 0;
    puVar37[0x3d] = 0;
    puVar37[0x3c] = 0;
    puVar37[0x3b] = 0;
    puVar37[0x3a] = 0;
    puVar37[0x39] = 0;
    puVar37[0x38] = 0;
    puVar37[0x37] = 0;
    puVar37[0x36] = 0;
    puVar37[0x35] = 0;
    puVar37[0x34] = 0;
    puVar37[0x33] = 0;
    puVar37[0x32] = 0;
    puVar37[0x31] = 0;
    puVar37[0x30] = 0;
    puVar37[0x2f] = 0;
    puVar37[0x2e] = 0;
    puVar37[0x2d] = 0;
    piVar1 = (int *)(puVar37 + 0x27);
    puVar37[0x2c] = 0;
    puVar37[0x2b] = 0;
    puVar37[0x2a] = 0;
    puVar37[0x29] = 0;
    puVar37[0x28] = 0;
    piVar1[0] = 0;
    piVar1[1] = 0;
    *(undefined4 *)(puVar37 + 0x27) = *(undefined4 *)(puVar37 + 7);
    uVar19 = FT_DivFix(*(undefined8 *)(*(long *)(lVar22 + 0x420) + 0x2d0),0x3e80000);
    *(undefined4 *)((long)puVar37 + 0x144) = uVar19;
    lVar22 = *(long *)(lVar22 + 0x420);
    puVar37[0x29] =
         CONCAT44((int)*(undefined8 *)(lVar22 + 0x2e0) << 0x10,
                  (int)*(undefined8 *)(lVar22 + 0x2d8) << 0x10);
    bVar5 = *(byte *)(lVar22 + 0x148);
    bVar6 = *(byte *)(lVar22 + 0x149);
    bVar7 = *(byte *)(lVar22 + 0x14a);
    bVar8 = *(byte *)(lVar22 + 0x14b);
    uVar31 = (ulong)bVar8;
    if (*(int *)(lVar22 + 0x3e4) == 1) {
      if ((bVar5 == 0) ||
         ((((bVar5 == 4 && (*(int *)(lVar22 + 0x150) * 0x10000 < -0x780000)) &&
           (*(int *)(lVar22 + 0x158) * 0x10000 < -0x780000)) &&
          ((0x3700000 < *(int *)(lVar22 + 0x160) * 0x10000 &&
           (0x3700000 < *(int *)(lVar22 + 0x168) * 0x10000)))))) {
        *(undefined4 *)(puVar37 + 0x31) = 0xff87ffff;
        iVar16 = FT_MulFix(0xffffffffff87ffff,(long)*(int *)(puVar37 + 0x27));
        *(undefined4 *)(puVar37 + 0x2f) = 0x31;
        *(uint *)((long)puVar37 + 0x18c) = (iVar16 + 0x8000U & 0xffff0000) - 0x8000;
        *(undefined4 *)(puVar37 + 0x32) = *(undefined4 *)(puVar37 + 0x27);
        *(int *)(puVar37 + 0x2d) = *(int *)(puVar37 + 0x26) * 2 + 0x3700001;
        iVar16 = FT_MulFix();
        *(undefined4 *)(puVar37 + 0x2b) = 0x32;
        *(uint *)((long)puVar37 + 0x16c) = iVar16 + 0x8000U & 0xffff0000 | 0x8000;
        *(undefined4 *)(puVar37 + 0x2e) = *(undefined4 *)(puVar37 + 0x27);
        *(undefined1 *)((long)puVar37 + 0x141) = 1;
        iVar16 = *(int *)(puVar37 + 1);
        goto joined_r0x00e75170;
      }
LAB_00e7517c:
      uVar20 = *(uint *)((long)puVar37 + 0x13c);
      iVar16 = 0;
      uVar27 = 0;
      do {
        lVar39 = lVar22 + uVar27 * 8;
        iVar18 = *(int *)(lVar39 + 0x150);
        iVar32 = iVar18 * 0x10000;
        *(int *)((long)puVar37 + (ulong)uVar20 * 0x14 + 0x198) = iVar32;
        iVar17 = *(int *)(lVar39 + 0x158) * 0x10000;
        iVar18 = iVar17 + iVar18 * -0x10000;
        *(int *)((long)puVar37 + (ulong)uVar20 * 0x14 + 0x19c) = iVar17;
        if (-1 < iVar18) {
          if (iVar18 <= iVar16) {
            iVar18 = iVar16;
          }
          if (uVar27 != 0) {
            iVar16 = *piVar25 * 2 + iVar17;
            iVar17 = *piVar25 * 2 + iVar32;
            *(int *)((long)puVar37 + (ulong)uVar20 * 0x14 + 0x19c) = iVar16;
            *(int *)((long)puVar37 + (ulong)uVar20 * 0x14 + 0x198) = iVar17;
          }
          *(bool *)((long)puVar37 + (ulong)uVar20 * 0x14 + 0x1a8) = uVar27 == 0;
          *(int *)((long)puVar37 + (ulong)uVar20 * 0x14 + 0x1a0) = iVar17;
          *(uint *)((long)puVar37 + 0x13c) = uVar20 + 1;
          uVar20 = uVar20 + 1;
          iVar16 = iVar18;
        }
        uVar27 = uVar27 + 2;
      } while (uVar27 < bVar5);
    }
    else {
      if (bVar5 != 0) goto LAB_00e7517c;
      iVar16 = 0;
    }
    if (bVar6 != 0) {
      uVar20 = *(uint *)((long)puVar37 + 0x13c);
      uVar27 = 0;
      iVar17 = iVar16;
      do {
        lVar39 = lVar22 + uVar27 * 8;
        iVar16 = *(int *)(lVar39 + 0x1c0);
        *(int *)((long)puVar37 + (ulong)uVar20 * 0x14 + 0x198) = iVar16 * 0x10000;
        iVar18 = *(int *)(lVar39 + 0x1c8) * 0x10000;
        iVar32 = iVar18 + iVar16 * -0x10000;
        *(int *)((long)puVar37 + (ulong)uVar20 * 0x14 + 0x19c) = iVar18;
        iVar16 = iVar17;
        if (-1 < iVar32) {
          iVar16 = iVar32;
          if (iVar32 <= iVar17) {
            iVar16 = iVar17;
          }
          *(undefined1 *)((long)puVar37 + (ulong)uVar20 * 0x14 + 0x1a8) = 1;
          *(int *)((long)puVar37 + (ulong)uVar20 * 0x14 + 0x1a0) = iVar18;
          *(uint *)((long)puVar37 + 0x13c) = uVar20 + 1;
          uVar20 = uVar20 + 1;
        }
        uVar27 = uVar27 + 2;
        iVar17 = iVar16;
      } while (uVar27 < bVar6);
    }
    iVar17 = FT_DivFix(0x10000,(long)*piVar1);
    uVar20 = *(uint *)((long)puVar37 + 0x13c);
    uVar27 = (ulong)uVar20;
    if (uVar20 != 0) {
      if (bVar7 < 2) {
        if (bVar8 != 0) {
          uVar24 = 0;
          do {
            if (*(char *)((long)puVar37 + uVar24 * 0x14 + 0x1a8) != '\0') {
              iVar18 = *(int *)((long)puVar37 + uVar24 * 0x14 + 0x1a0);
              uVar35 = 0;
              iVar32 = 0x7fffffff;
              do {
                iVar36 = (int)*(undefined8 *)(lVar22 + 0x288 + uVar35 * 8);
                iVar12 = iVar18 + iVar36 * -0x10000;
                iVar34 = -iVar12;
                if (-1 < iVar12) {
                  iVar34 = iVar12;
                }
              } while ((((iVar32 <= iVar34) || (iVar17 <= iVar34)) ||
                       (*(int *)((long)puVar37 + uVar24 * 0x14 + 0x1a0) = iVar36 * 0x10000,
                       iVar32 = iVar34, iVar34 != 0)) && (uVar35 = uVar35 + 2, uVar35 < uVar31));
            }
            uVar24 = uVar24 + 1;
          } while (uVar24 != uVar27);
        }
      }
      else if (bVar8 == 0) {
        if (bVar7 < 3) {
          piVar25 = (int *)(puVar37 + 0x34);
          do {
            if ((char)piVar25[2] != '\0') {
              iVar32 = *piVar25 + *(int *)(lVar22 + 0x218) * -0x10000;
              iVar18 = -iVar32;
              if (-1 < iVar32) {
                iVar18 = iVar32;
              }
              if ((iVar18 != 0x7fffffff) && (iVar18 < iVar17)) {
                *piVar25 = *(int *)(lVar22 + 0x218) * 0x10000;
              }
            }
            uVar27 = uVar27 - 1;
            piVar25 = piVar25 + 5;
          } while (uVar27 != 0);
        }
        else {
          uVar31 = 0;
          do {
            while( true ) {
              iVar18 = *(int *)((long)puVar37 + uVar31 * 0x14 + 0x1a0);
              piVar1 = (int *)((long)puVar37 + uVar31 * 0x14 + 0x1a0);
              if (*(char *)((long)puVar37 + uVar31 * 0x14 + 0x1a8) != '\0') break;
              iVar32 = *piVar25;
              iVar34 = 0x7fffffff;
              lVar39 = 0x44;
              do {
                iVar12 = iVar32 * 2 + (int)*(undefined8 *)(lVar22 + lVar39 * 8) * 0x10000;
                iVar13 = iVar18 - iVar12;
                iVar36 = -iVar13;
                if (-1 < iVar13) {
                  iVar36 = iVar13;
                }
              } while ((((iVar34 <= iVar36) || (iVar17 <= iVar36)) ||
                       (*piVar1 = iVar12, iVar34 = iVar36, iVar36 != 0)) &&
                      (uVar24 = lVar39 - 0x40, lVar39 = lVar39 + 2, uVar24 < bVar7));
LAB_00e75554:
              uVar31 = uVar31 + 1;
              if (uVar31 == uVar27) goto LAB_00e755a8;
            }
            iVar18 = iVar18 + *(int *)(lVar22 + 0x218) * -0x10000;
            iVar32 = -iVar18;
            if (-1 < iVar18) {
              iVar32 = iVar18;
            }
            if ((iVar32 == 0x7fffffff) || (iVar17 <= iVar32)) goto LAB_00e75554;
            *piVar1 = *(int *)(lVar22 + 0x218) * 0x10000;
            uVar31 = uVar31 + 1;
          } while (uVar31 != uVar27);
        }
      }
      else {
        uVar24 = 0;
        if (bVar7 < 3) {
          do {
            if (*(char *)((long)puVar37 + uVar24 * 0x14 + 0x1a8) != '\0') {
              iVar18 = *(int *)((long)puVar37 + uVar24 * 0x14 + 0x1a0);
              uVar35 = 0;
              piVar25 = (int *)((long)puVar37 + uVar24 * 0x14 + 0x1a0);
              iVar32 = 0x7fffffff;
              do {
                iVar36 = (int)*(undefined8 *)(lVar22 + 0x288 + uVar35 * 8);
                iVar12 = iVar18 + iVar36 * -0x10000;
                iVar34 = -iVar12;
                if (-1 < iVar12) {
                  iVar34 = iVar12;
                }
              } while ((((iVar32 <= iVar34) || (iVar17 <= iVar34)) ||
                       (*piVar25 = iVar36 * 0x10000, iVar32 = iVar34, iVar34 != 0)) &&
                      (uVar35 = uVar35 + 2, uVar35 < uVar31));
              iVar18 = iVar18 + *(int *)(lVar22 + 0x218) * -0x10000;
              iVar34 = -iVar18;
              if (-1 < iVar18) {
                iVar34 = iVar18;
              }
              if ((iVar34 < iVar32) && (iVar34 < iVar17)) {
                *piVar25 = *(int *)(lVar22 + 0x218) * 0x10000;
              }
            }
            uVar24 = uVar24 + 1;
          } while (uVar24 != uVar27);
        }
        else {
          do {
            while( true ) {
              iVar18 = *(int *)((long)puVar37 + uVar24 * 0x14 + 0x1a0);
              piVar1 = (int *)((long)puVar37 + uVar24 * 0x14 + 0x1a0);
              if (*(char *)((long)puVar37 + uVar24 * 0x14 + 0x1a8) != '\0') break;
              iVar32 = *piVar25;
              iVar34 = 0x7fffffff;
              lVar39 = 0x44;
              do {
                iVar12 = iVar32 * 2 + (int)*(undefined8 *)(lVar22 + lVar39 * 8) * 0x10000;
                iVar13 = iVar18 - iVar12;
                iVar36 = -iVar13;
                if (-1 < iVar13) {
                  iVar36 = iVar13;
                }
              } while ((((iVar34 <= iVar36) || (iVar17 <= iVar36)) ||
                       (*piVar1 = iVar12, iVar34 = iVar36, iVar36 != 0)) &&
                      (uVar35 = lVar39 - 0x40, lVar39 = lVar39 + 2, uVar35 < bVar7));
LAB_00e7538c:
              uVar24 = uVar24 + 1;
              if (uVar24 == uVar27) goto LAB_00e755a8;
            }
            uVar35 = 0;
            iVar32 = 0x7fffffff;
            do {
              iVar36 = (int)*(undefined8 *)(lVar22 + 0x288 + uVar35 * 8);
              iVar12 = iVar18 + iVar36 * -0x10000;
              iVar34 = -iVar12;
              if (-1 < iVar12) {
                iVar34 = iVar12;
              }
            } while ((((iVar32 <= iVar34) || (iVar17 <= iVar34)) ||
                     (*piVar1 = iVar36 * 0x10000, iVar32 = iVar34, iVar34 != 0)) &&
                    (uVar35 = uVar35 + 2, uVar35 < uVar31));
            iVar18 = iVar18 + *(int *)(lVar22 + 0x218) * -0x10000;
            iVar34 = -iVar18;
            if (-1 < iVar18) {
              iVar34 = iVar18;
            }
            if ((iVar32 <= iVar34) || (iVar17 <= iVar34)) goto LAB_00e7538c;
            *piVar1 = *(int *)(lVar22 + 0x218) * 0x10000;
            uVar24 = uVar24 + 1;
          } while (uVar24 != uVar27);
        }
      }
    }
LAB_00e755a8:
    if (0 < iVar16) {
      iVar17 = *(int *)((long)puVar37 + 0x144);
      lVar22 = FT_DivFix(0x10000,(long)iVar16);
      if (lVar22 < iVar17) {
        uVar19 = FT_DivFix(0x10000,(long)iVar16);
        *(undefined4 *)((long)puVar37 + 0x144) = uVar19;
      }
    }
    if (*(int *)(puVar37 + 0x27) < *(int *)((long)puVar37 + 0x144)) {
      *(undefined1 *)(puVar37 + 0x28) = 1;
      iVar16 = FT_MulDiv(0x999a);
      iVar16 = 0x999a - iVar16;
      if (0x7ffe < iVar16) {
        iVar16 = 0x7fff;
      }
      *(int *)(puVar37 + 0x2a) = iVar16;
    }
    if (*(char *)((long)puVar37 + 0x102) != '\0') {
      *(undefined4 *)(puVar37 + 0x2a) = 0;
    }
    if (*(uint *)((long)puVar37 + 0x13c) != 0) {
      uVar31 = 0;
      pcVar40 = (char *)(puVar37 + 0x35);
      do {
        cVar15 = *pcVar40;
        iVar16 = FT_MulFix((long)*(int *)(pcVar40 + -8),(long)*(int *)(puVar37 + 0x27));
        uVar31 = uVar31 + 1;
        uVar20 = iVar16 + *(int *)(puVar37 + 0x2a) + 0x8000;
        if (cVar15 != '\0') {
          uVar20 = (0x8000 - *(int *)(puVar37 + 0x2a)) + iVar16;
        }
        *(uint *)(pcVar40 + -4) = uVar20 & 0xffff0000;
        pcVar40 = pcVar40 + 0x14;
      } while (uVar31 < *(uint *)((long)puVar37 + 0x13c));
    }
  }
  iVar16 = *(int *)(puVar37 + 1);
joined_r0x00e75170:
  if (iVar16 == 0) {
    cVar15 = *(char *)((long)puVar37 + 0x101);
    *(undefined1 *)((long)puVar37 + 0x134) = 0;
    while( true ) {
      *(undefined4 *)(puVar37 + 0x1a) = 0;
      FUN_00e13908(*(undefined8 *)(puVar37[0x1d] + 0x18));
      FUN_00e79134(puVar37,&local_a8,puVar37 + 0x16,&local_80,0,0,0,&local_84);
      if (*(int *)(puVar37 + 1) != 0) break;
      if ((cVar15 == '\0') || (-1 < *(int *)(puVar37 + 0x1a))) {
        lVar22 = puVar37[0x1d];
        psVar26 = *(short **)(lVar22 + 0x28);
        if (psVar26 != (short *)0x0) {
          sVar11 = *psVar26;
          lVar39 = (long)sVar11;
          if (lVar39 < 2) {
            if (sVar11 == 0) {
              sVar28 = psVar26[1];
              uVar31 = 0;
            }
            else {
              uVar31 = 0;
              sVar28 = psVar26[1];
              if (sVar28 == 0) goto LAB_00e75764;
            }
          }
          else {
            uVar20 = (int)*(short *)(*(long *)(psVar26 + 0xc) + lVar39 * 2 + -4) + 1;
            uVar31 = (ulong)uVar20;
            sVar28 = psVar26[1];
            if (uVar20 == (int)sVar28) {
LAB_00e75764:
              *psVar26 = sVar11 + -1;
              FUN_00e1436c(*(undefined8 *)(lVar22 + 0x18));
              iVar16 = *(int *)(puVar37 + 1);
              goto joined_r0x00e75830;
            }
          }
          if (1 < sVar28) {
            lVar33 = *(long *)(psVar26 + 4);
            lVar21 = lVar33 + (long)sVar28 * 0x10;
            if (((*(long *)(lVar33 + (-(uVar31 >> 0x1f) & 0xfffffff000000000 | uVar31 << 4)) ==
                  *(long *)(lVar21 + -0x10)) &&
                (*(long *)(lVar33 + (long)(int)uVar31 * 0x10 + 8) == *(long *)(lVar21 + -8))) &&
               (*(char *)(*(long *)(psVar26 + 8) + (long)sVar28 + -1) == '\x01')) {
              sVar28 = sVar28 + -1;
              psVar26[1] = sVar28;
            }
          }
          if (0 < sVar11) {
            if ((int)uVar31 == sVar28 + -1) {
              *psVar26 = sVar11 + -1;
              psVar26[1] = sVar28 + -1;
              FUN_00e1436c(*(undefined8 *)(lVar22 + 0x18));
              iVar16 = *(int *)(puVar37 + 1);
              goto joined_r0x00e75830;
            }
            *(short *)(*(long *)(psVar26 + 0xc) + lVar39 * 2 + -2) = (short)(sVar28 + -1);
          }
        }
        FUN_00e1436c(*(undefined8 *)(lVar22 + 0x18));
        iVar16 = *(int *)(puVar37 + 1);
joined_r0x00e75830:
        if (iVar16 != 0) {
          return 3;
        }
        *(undefined4 *)(puVar37 + 1) = 0;
        if (*(char *)(puVar37[0x1d] + 0x5c) != '\0') {
          return 0;
        }
        **(long **)(puVar37[0x1d] + 0x430) = (long)(short)((uint)(local_84 + 0x8000) >> 0x10);
        return 0;
      }
      cVar15 = '\0';
      *(undefined1 *)((long)puVar37 + 0x134) = 1;
    }
  }
  return 3;
}

