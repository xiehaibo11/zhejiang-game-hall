
ulong FUN_00c18f7c(long param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  char *pcVar10;
  uint uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong *puVar18;
  int iVar19;
  uint uVar20;
  
  lVar16 = *(long *)(param_1 + 0x48);
  cVar5 = *(char *)(lVar16 + 9);
  *(byte *)(lVar16 + 8) = *(byte *)(lVar16 + 8) | 4;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar16 + 0x18);
  if (cVar5 != '\v') {
    if (cVar5 != '\b') {
      if (cVar5 == '\a') {
        *(byte *)(*(long *)(lVar16 + 0x40) + 8) = *(byte *)(*(long *)(lVar16 + 0x40) + 8) & 0xfc;
        lVar17 = (ulong)*(uint *)(lVar16 + 0x30) * -8;
        for (lVar15 = -(ulong)*(uint *)(lVar16 + 0x30); lVar15 != 0; lVar15 = lVar15 + 1) {
          plVar1 = (long *)(*(long *)(lVar16 + 0x20) + lVar17);
          lVar17 = lVar17 + 8;
          if ((*(byte *)(*plVar1 + 8) & 3) != 0) {
            FUN_00c18e3c(param_1);
          }
        }
        return (ulong)*(uint *)(lVar16 + 0x38);
      }
      if (cVar5 != '\x06') {
        return 0;
      }
      *(undefined8 *)(lVar16 + 0x18) = *(undefined8 *)(param_1 + 0x50);
      *(long *)(param_1 + 0x50) = lVar16;
      puVar18 = *(ulong **)(lVar16 + 0x28);
      puVar8 = (ulong *)(*(long *)(lVar16 + 0x38) + 0x10);
      *(byte *)(lVar16 + 8) = *(byte *)(lVar16 + 8) & 0xfb;
      while (puVar8 < puVar18) {
        uVar7 = *puVar8;
        puVar8 = puVar8 + 1;
        if ((0xfffffff6 < (int)((long)uVar7 >> 0x2f) + 4U) &&
           ((*(byte *)((uVar7 & 0x7fffffffffff) + 8) & 3) != 0)) {
          FUN_00c18e3c(param_1);
        }
      }
      if ((*(char *)(param_1 + 0x31) == '\x02') &&
         (puVar18 = (ulong *)(*(long *)(lVar16 + 0x38) + (ulong)*(uint *)(lVar16 + 0x58) * 8),
         puVar8 < puVar18)) {
        puVar12 = puVar8 + 1;
        uVar9 = (long)puVar18 + (7 - (long)puVar12);
        uVar13 = uVar9 >> 3;
        uVar7 = (uVar13 - 1 >> 1) + 1;
        if (0x17 < uVar9) {
          uVar9 = 0;
          puVar12 = puVar8;
          do {
            puVar12[1] = 0xffffffffffffffff;
            *puVar12 = 0xffffffffffffffff;
            uVar9 = uVar9 + 1;
            puVar12 = puVar12 + 2;
          } while (uVar9 < uVar7);
          puVar8 = puVar8 + uVar7 * 2;
          if (uVar13 + 1 == uVar7 * 2) goto LAB_00c193dc;
          puVar12 = puVar8 + 1;
        }
        *puVar8 = 0xffffffffffffffff;
        if ((puVar12 < puVar18) && (puVar8[1] = 0xffffffffffffffff, puVar8 + 2 < puVar18)) {
          puVar8[2] = 0xffffffffffffffff;
        }
      }
LAB_00c193dc:
      if ((*(byte *)(*(long *)(lVar16 + 0x48) + 8) & 3) != 0) {
        FUN_00c18e3c(param_1);
      }
      puVar18 = (ulong *)(*(long *)(lVar16 + 0x28) - 8);
      puVar8 = (ulong *)(*(long *)(lVar16 + 0x38) + 8);
      for (puVar12 = (ulong *)(*(long *)(lVar16 + 0x20) - 8); puVar8 < puVar12;
          puVar12 = (ulong *)((long)puVar12 - (uVar7 & 0xfffffffffffffff8))) {
        while( true ) {
          puVar14 = puVar12;
          if (*(char *)((puVar12[-1] & 0x7fffffffffff) + 10) == '\0') {
            puVar14 = puVar12 + *(byte *)(*(long *)((puVar12[-1] & 0x7fffffffffff) + 0x20) + -0x5d);
          }
          uVar7 = *puVar12;
          if (puVar18 < puVar14) {
            puVar18 = puVar14;
          }
          if ((uVar7 & 3) != 0) break;
          puVar12 = puVar12 + -((ulong)*(byte *)(uVar7 - 3) + 2);
          if (puVar12 <= puVar8) goto LAB_00c19464;
        }
      }
LAB_00c19464:
      puVar8 = puVar18 + 1;
      if (*(ulong **)(lVar16 + 0x30) < puVar18 + 1) {
        puVar8 = *(ulong **)(lVar16 + 0x30);
      }
      FUN_00bfe0a0(lVar16,(ulong)((long)puVar8 - *(long *)(lVar16 + 0x38)) >> 3);
      return ((ulong)*(uint *)(lVar16 + 0x58) + 0xc) * 8;
    }
    if ((*(byte *)(*(long *)(lVar16 + 0x10) + 8) & 3) != 0) {
      FUN_00c18e3c();
    }
    if (*(char *)(lVar16 + 10) == '\0') {
      if ((*(byte *)(*(long *)(lVar16 + 0x20) + -0x60) & 3) == 0) {
        uVar11 = (uint)*(byte *)(lVar16 + 0xb);
        bVar6 = 0;
        if (*(byte *)(lVar16 + 0xb) == 0) goto LAB_00c192c4;
      }
      else {
        FUN_00c18e3c(param_1,*(long *)(lVar16 + 0x20) + -0x68);
        uVar11 = (uint)*(byte *)(lVar16 + 0xb);
        if (*(byte *)(lVar16 + 0xb) == 0) goto LAB_00c192e8;
      }
      uVar7 = 0;
      do {
        lVar15 = uVar7 * 8;
        uVar20 = (int)uVar7 + 1;
        uVar7 = (ulong)uVar20;
        if ((*(byte *)(*(long *)(lVar16 + lVar15 + 0x28) + 8) & 3) != 0) {
          FUN_00c18e3c(param_1);
          uVar11 = (uint)*(byte *)(lVar16 + 0xb);
        }
      } while (uVar20 < uVar11);
    }
    else {
      uVar11 = (uint)*(byte *)(lVar16 + 0xb);
      uVar7 = 0;
      if (*(byte *)(lVar16 + 0xb) == 0) {
        bVar6 = 0;
        goto LAB_00c192f0;
      }
      do {
        uVar9 = *(ulong *)(lVar16 + uVar7 * 8 + 0x30);
        uVar20 = (int)uVar7 + 1;
        uVar7 = (ulong)uVar20;
        if ((0xfffffff6 < (int)((long)uVar9 >> 0x2f) + 4U) &&
           ((*(byte *)((uVar9 & 0x7fffffffffff) + 8) & 3) != 0)) {
          FUN_00c18e3c(param_1);
          uVar11 = (uint)*(byte *)(lVar16 + 0xb);
        }
      } while (uVar20 < uVar11);
    }
LAB_00c192e8:
    bVar6 = (byte)uVar11;
    if (*(char *)(lVar16 + 10) == '\0') {
LAB_00c192c4:
      return ((ulong)bVar6 + 5) * 8;
    }
LAB_00c192f0:
    return ((ulong)bVar6 + 6) * 8;
  }
  lVar15 = *(long *)(lVar16 + 0x20);
  if (lVar15 == 0) {
LAB_00c18fd8:
    uVar11 = 0;
LAB_00c18fdc:
    if (*(int *)(lVar16 + 0x30) != 0) {
      lVar15 = 0;
      lVar17 = ((ulong)(*(int *)(lVar16 + 0x30) - 1) + 1) * 8;
      do {
        while( true ) {
          uVar7 = *(ulong *)(lVar15 + *(long *)(lVar16 + 0x10));
          lVar15 = lVar15 + 8;
          if (((int)((long)uVar7 >> 0x2f) + 4U < 0xfffffff7) ||
             ((*(byte *)((uVar7 & 0x7fffffffffff) + 8) & 3) == 0)) break;
          FUN_00c18e3c(param_1);
          if (lVar15 == lVar17) goto LAB_00c1903c;
        }
      } while (lVar15 != lVar17);
    }
LAB_00c1903c:
    uVar20 = 0;
LAB_00c19040:
    uVar3 = *(uint *)(lVar16 + 0x34);
    iVar19 = 0;
    if (uVar3 != 0) {
      lVar15 = *(long *)(lVar16 + 0x28);
      uVar7 = 0;
      do {
        uVar2 = (int)uVar7 + 1;
        lVar17 = uVar7 * 0x18;
        if (*(long *)(lVar15 + lVar17) != -1) {
          if ((((uVar11 & 8) == 0) &&
              (uVar7 = *(ulong *)(lVar15 + lVar17 + 8), 0xfffffff6 < (int)((long)uVar7 >> 0x2f) + 4U
              )) && ((*(byte *)((uVar7 & 0x7fffffffffff) + 8) & 3) != 0)) {
            FUN_00c18e3c(param_1);
          }
          if (((uVar20 == 0) && (0xfffffff6 < (int)((long)*(ulong *)(lVar15 + lVar17) >> 0x2f) + 4U)
              ) && ((*(byte *)((*(ulong *)(lVar15 + lVar17) & 0x7fffffffffff) + 8) & 3) != 0)) {
            FUN_00c18e3c(param_1);
          }
        }
        uVar7 = (ulong)uVar2;
      } while (uVar2 <= uVar3);
      iVar19 = *(int *)(lVar16 + 0x34);
    }
    if ((int)uVar11 < 1) goto LAB_00c190e4;
  }
  else {
    if ((*(byte *)(lVar15 + 8) & 3) != 0) {
      FUN_00c18e3c(param_1,lVar15);
    }
    if ((((*(byte *)(lVar15 + 10) >> 3 & 1) != 0) ||
        (puVar8 = (ulong *)FUN_00c1ccbc(lVar15,3,*(undefined8 *)(param_1 + 0x188)),
        puVar8 == (ulong *)0x0)) || ((int)((long)*puVar8 >> 0x2f) != -5)) goto LAB_00c18fd8;
    uVar11 = 0;
    pcVar10 = (char *)((*puVar8 & 0x7fffffffffff) + 0x18);
LAB_00c1914c:
    cVar5 = *pcVar10;
    if (cVar5 != '\0') {
      while (pcVar10 = pcVar10 + 1, cVar5 != 'k') {
        if (cVar5 == 'v') {
          uVar11 = uVar11 | 0x10;
          goto LAB_00c1914c;
        }
        bVar4 = cVar5 == 'K';
        cVar5 = *pcVar10;
        if (bVar4) {
          uVar11 = 0xffffffef;
        }
        if (cVar5 == '\0') goto LAB_00c19178;
      }
      uVar11 = uVar11 | 8;
      goto LAB_00c1914c;
    }
LAB_00c19178:
    if ((int)uVar11 < 1) {
LAB_00c191d4:
      uVar20 = uVar11 & 0x10;
      if (uVar20 == 0) goto LAB_00c18fdc;
      goto LAB_00c19040;
    }
    *(byte *)(lVar16 + 8) = (byte)uVar11 | *(byte *)(lVar16 + 8) & 0xe7;
    *(undefined8 *)(lVar16 + 0x18) = *(undefined8 *)(param_1 + 0x58);
    *(long *)(param_1 + 0x58) = lVar16;
    if (uVar11 != 0x18) goto LAB_00c191d4;
    iVar19 = *(int *)(lVar16 + 0x34);
  }
  *(byte *)(lVar16 + 8) = *(byte *)(lVar16 + 8) & 0xfb;
LAB_00c190e4:
  return ((ulong)*(uint *)(lVar16 + 0x30) + 8 + (ulong)(iVar19 + 1) * 3) * 8;
}

