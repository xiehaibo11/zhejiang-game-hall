
undefined8 FUN_00d8e46c(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  char *pcVar11;
  long *plVar12;
  bool bVar13;
  undefined8 uVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  long *plVar18;
  uint *puVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  undefined8 *puVar27;
  long *plVar28;
  long lVar29;
  char *pcVar30;
  long lVar31;
  ulong uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  ulong local_68;
  
  lVar31 = param_1[0x4d];
  plVar28 = (long *)param_1[5];
  puVar27 = *(undefined8 **)(lVar31 + 0xf8);
  pcVar30 = (char *)*plVar28;
  lVar29 = plVar28[1];
  if (puVar27 == (undefined8 *)0x0) {
    if (lVar29 == 0) {
      uVar14 = (*(code *)plVar28[3])(param_1);
      if ((int)uVar14 == 0) {
        return uVar14;
      }
      pcVar30 = (char *)*plVar28;
      lVar29 = plVar28[1];
    }
    pcVar16 = pcVar30 + 1;
    cVar4 = *pcVar30;
    lVar29 = lVar29 + -1;
    if (lVar29 == 0) {
      uVar14 = (*(code *)plVar28[3])(param_1);
      if ((int)uVar14 == 0) {
        return uVar14;
      }
      pcVar16 = (char *)*plVar28;
      lVar29 = plVar28[1];
    }
    pcVar30 = pcVar16 + 1;
    lVar29 = lVar29 + -1;
    local_68 = (ulong)CONCAT11(cVar4,*pcVar16) - 2;
    if ((ulong)CONCAT11(cVar4,*pcVar16) < 2) {
      uVar25 = 0;
      pcVar16 = (char *)0x0;
      goto LAB_00d8e70c;
    }
    if (*(int *)((long)param_1 + 0x23c) == 0xfe) {
      puVar19 = (uint *)(lVar31 + 0xb0);
    }
    else {
      puVar19 = (uint *)(lVar31 + (long)(*(int *)((long)param_1 + 0x23c) + -0xe0) * 4 + 0xb4);
    }
    uVar26 = (uint)local_68;
    uVar24 = uVar26;
    if (*puVar19 <= uVar26) {
      uVar24 = *puVar19;
    }
    uVar25 = (ulong)uVar24;
    puVar27 = (undefined8 *)(**(code **)(param_1[1] + 8))(param_1,1,uVar25 + 0x20);
    *puVar27 = 0;
    uVar2 = *(undefined4 *)((long)param_1 + 0x23c);
    pcVar16 = (char *)(puVar27 + 4);
    uVar32 = 0;
    *(uint *)((long)puVar27 + 0xc) = uVar26;
    *(uint *)(puVar27 + 2) = uVar24;
    puVar27[3] = pcVar16;
    *(char *)(puVar27 + 1) = (char)uVar2;
    *(undefined8 **)(lVar31 + 0xf8) = puVar27;
    *(undefined4 *)(lVar31 + 0x100) = 0;
    if (uVar24 != 0) goto LAB_00d8e4c0;
  }
  else {
    local_68 = 0;
    uVar32 = (ulong)*(uint *)(lVar31 + 0x100);
    uVar25 = (ulong)*(uint *)(puVar27 + 2);
    pcVar16 = (char *)(puVar27[3] + uVar32);
    if (*(uint *)(lVar31 + 0x100) < *(uint *)(puVar27 + 2)) {
LAB_00d8e4c0:
      uVar24 = (uint)uVar25;
      pcVar15 = pcVar16;
      do {
        *plVar28 = (long)pcVar30;
        plVar28[1] = lVar29;
        uVar26 = (uint)uVar32;
        *(uint *)(lVar31 + 0x100) = uVar26;
        pcVar17 = pcVar30;
        if (lVar29 == 0) {
          uVar14 = (*(code *)plVar28[3])(param_1);
          if ((int)uVar14 == 0) {
            return uVar14;
          }
          lVar29 = plVar28[1];
          pcVar17 = (char *)*plVar28;
        }
        pcVar16 = pcVar15;
        pcVar30 = pcVar17;
        if ((uVar26 < uVar24) && (lVar29 != 0)) {
          uVar32 = (ulong)((uVar24 - 1) - uVar26);
          uVar20 = -lVar29;
          if (uVar20 < ~uVar32 || -~uVar32 == lVar29) {
            uVar20 = ~uVar32;
          }
          uVar20 = -uVar20;
          if ((0x1f < uVar20) && (uVar22 = uVar20 & 0x1ffffffe0, uVar22 != 0)) {
            uVar23 = -lVar29;
            if (uVar23 < ~uVar32 || -~uVar32 == lVar29) {
              uVar23 = ~uVar32;
            }
            if ((pcVar17 + -uVar23 <= pcVar15) || (pcVar15 + -uVar23 <= pcVar17)) {
              lVar29 = lVar29 - uVar22;
              pcVar30 = pcVar17 + uVar22;
              pcVar16 = pcVar15 + uVar22;
              uVar26 = uVar26 + (int)uVar22;
              uVar32 = (ulong)uVar26;
              pcVar15 = pcVar15 + 0x10;
              pcVar17 = pcVar17 + 0x10;
              uVar23 = uVar22;
              do {
                pcVar11 = pcVar17 + -8;
                uVar14 = *(undefined8 *)(pcVar17 + -0x10);
                uVar34 = *(undefined8 *)(pcVar17 + 8);
                uVar33 = *(undefined8 *)pcVar17;
                uVar23 = uVar23 - 0x20;
                pcVar17 = pcVar17 + 0x20;
                *(undefined8 *)(pcVar15 + -8) = *(undefined8 *)pcVar11;
                *(undefined8 *)(pcVar15 + -0x10) = uVar14;
                *(undefined8 *)(pcVar15 + 8) = uVar34;
                *(undefined8 *)pcVar15 = uVar33;
                pcVar15 = pcVar15 + 0x20;
              } while (uVar23 != 0);
              pcVar15 = pcVar16;
              pcVar17 = pcVar30;
              if (uVar22 == uVar20) goto LAB_00d8e5e8;
            }
          }
          lVar21 = 0;
          do {
            pcVar15[lVar21] = pcVar17[lVar21];
            lVar1 = lVar21 + 1;
            if (uVar24 <= uVar26 + (int)lVar21 + 1) break;
            bVar13 = lVar29 + -1 != lVar21;
            lVar21 = lVar1;
          } while (bVar13);
          lVar29 = lVar29 - lVar1;
          uVar32 = (ulong)(uVar26 + (int)lVar1);
          pcVar16 = pcVar15 + lVar1;
          pcVar30 = pcVar17 + lVar1;
        }
LAB_00d8e5e8:
        pcVar15 = pcVar16;
      } while ((uint)uVar32 < uVar24);
    }
  }
  if (puVar27 != (undefined8 *)0x0) {
    plVar12 = (long *)param_1[0x33];
    if ((long *)param_1[0x33] == (long *)0x0) {
      plVar18 = param_1 + 0x33;
    }
    else {
      do {
        plVar18 = plVar12;
        plVar12 = (long *)*plVar18;
      } while ((long *)*plVar18 != (long *)0x0);
    }
    *plVar18 = (long)puVar27;
    pcVar16 = (char *)puVar27[3];
    local_68 = (ulong)(uint)(*(int *)((long)puVar27 + 0xc) - (int)uVar25);
  }
LAB_00d8e70c:
  *(undefined8 *)(lVar31 + 0xf8) = 0;
  iVar3 = *(int *)((long)param_1 + 0x23c);
  uVar24 = (uint)uVar25;
  if (iVar3 == 0xee) {
    if ((((uVar24 < 0xc) || (*pcVar16 != 'A')) || (pcVar16[1] != 'd')) ||
       (((pcVar16[2] != 'o' || (pcVar16[3] != 'b')) || (pcVar16[4] != 'e')))) {
      lVar31 = *param_1;
      *(undefined4 *)(lVar31 + 0x28) = 0x50;
      *(uint *)(lVar31 + 0x2c) = (int)local_68 + uVar24;
      (**(code **)(lVar31 + 8))(param_1,1);
    }
    else {
      cVar4 = pcVar16[5];
      cVar5 = pcVar16[6];
      cVar6 = pcVar16[7];
      cVar7 = pcVar16[8];
      cVar8 = pcVar16[9];
      cVar9 = pcVar16[10];
      lVar31 = *param_1;
      bVar10 = pcVar16[0xb];
      *(undefined4 *)(lVar31 + 0x28) = 0x4e;
      *(uint *)(lVar31 + 0x2c) = (uint)CONCAT11(cVar4,cVar5);
      *(uint *)(lVar31 + 0x30) = (uint)CONCAT11(cVar6,cVar7);
      *(uint *)(lVar31 + 0x34) = (uint)CONCAT11(cVar8,cVar9);
      *(uint *)(lVar31 + 0x38) = (uint)bVar10;
      (**(code **)(lVar31 + 8))(param_1,1);
      *(undefined4 *)((long)param_1 + 0x184) = 1;
      *(byte *)(param_1 + 0x31) = bVar10;
    }
  }
  else if (iVar3 == 0xe0) {
    FUN_00d8ed08(param_1,pcVar16,uVar25,local_68);
  }
  else {
    lVar31 = *param_1;
    *(undefined4 *)(lVar31 + 0x28) = 0x5d;
    *(int *)(lVar31 + 0x2c) = iVar3;
    *(uint *)(lVar31 + 0x30) = (int)local_68 + uVar24;
    (**(code **)(lVar31 + 8))(param_1,1);
  }
  *plVar28 = (long)pcVar30;
  plVar28[1] = lVar29;
  if (0 < (long)local_68) {
    (**(code **)(param_1[5] + 0x20))(param_1,local_68);
  }
  return 1;
}

