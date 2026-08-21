
undefined8 FUN_00e40044(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte *pbVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long local_c0 [6];
  long local_90 [6];
  
  lVar11 = *(long *)(param_1 + 0x20);
  if (*(ulong *)(param_1 + 0x28) < lVar11 + 0x30U) {
    return 0xa1;
  }
  lVar18 = *(long *)(param_1 + 0x38);
  lVar20 = 0;
  *(undefined1 *)(lVar18 + 0x60) = 1;
  lVar13 = -0x8000000000000000;
  lVar14 = 0x7fffffffffffffff;
  do {
    puVar1 = (undefined8 *)(lVar11 + lVar20);
    pbVar6 = (byte *)*puVar1;
    plVar2 = (long *)((long)local_c0 + lVar20);
    bVar4 = *pbVar6;
    uVar9 = (ulong)bVar4;
    lVar19 = lVar13;
    lVar10 = lVar14;
    if (bVar4 == 0x1e) {
      lVar7 = FUN_00e41c10(pbVar6,*(undefined8 *)(param_1 + 0x10),0,plVar2);
      *(long *)((long)local_90 + lVar20) = lVar7;
joined_r0x00e4027c:
      if (lVar7 != 0) {
LAB_00e402b4:
        lVar10 = *plVar2;
        lVar19 = lVar10;
        if (lVar10 <= lVar13) {
          lVar19 = lVar13;
        }
        if (lVar14 <= lVar10) {
          lVar10 = lVar14;
        }
      }
    }
    else {
      pbVar12 = (byte *)puVar1[1];
      if (bVar4 == 0x1d) {
        if (pbVar12 < pbVar6 + 5) goto LAB_00e401ac;
        uVar9 = (ulong)pbVar6[1] << 0x18 | (ulong)pbVar6[2] << 0x10 | (ulong)pbVar6[3] << 8 |
                (ulong)pbVar6[4];
        if (uVar9 < 0x8000) {
LAB_00e401f4:
          *plVar2 = 0;
          lVar7 = uVar9 << 0x10;
          *(long *)((long)local_90 + lVar20) = lVar7;
          goto joined_r0x00e40200;
        }
LAB_00e40138:
        if ((long)uVar9 < 100000) {
          iVar8 = 5;
        }
        else if ((long)uVar9 < 1000000) {
          iVar8 = 6;
        }
        else if ((long)uVar9 < 10000000) {
          iVar8 = 7;
        }
        else if ((long)uVar9 < 100000000) {
          iVar8 = 8;
        }
        else {
          iVar8 = 9;
          if (999999999 < (long)uVar9) {
            iVar8 = 10;
          }
        }
        lVar17 = (long)iVar8 + -5;
        lVar15 = (&DAT_01976c90)[lVar17];
        lVar7 = 0;
        if (lVar15 != 0) {
          lVar7 = (long)uVar9 / lVar15;
        }
        if (0x7fff < lVar7) {
          lVar17 = (long)iVar8 + -4;
          lVar15 = (&DAT_01976c90)[lVar17];
        }
        *plVar2 = lVar17;
        lVar7 = FT_DivFix(uVar9,lVar15);
        *(long *)((long)local_90 + lVar20) = lVar7;
        goto joined_r0x00e4027c;
      }
      if (bVar4 == 0x1c) {
        if (pbVar12 < pbVar6 + 3) goto LAB_00e401ac;
        bVar4 = pbVar6[1];
        bVar3 = pbVar6[2];
        *plVar2 = 0;
        lVar7 = ((long)(short)((ushort)bVar4 << 8) | (ulong)bVar3) << 0x10;
        *(long *)((long)local_90 + lVar20) = lVar7;
joined_r0x00e40200:
        if (lVar7 == 0) goto LAB_00e402c8;
        goto LAB_00e402b4;
      }
      if (bVar4 < 0xf7) {
        *plVar2 = 0;
        lVar7 = (uVar9 - 0x8b) * 0x10000;
        *(long *)((long)local_90 + lVar20) = lVar7;
        goto joined_r0x00e4027c;
      }
      if (bVar4 < 0xfb) {
        if (pbVar6 + 2 <= pbVar12) {
          uVar9 = (uVar9 * 0x100 - 0xf700 | (ulong)pbVar6[1]) + 0x6c;
joined_r0x00e401f0:
          if (0x7fff < (long)uVar9) goto LAB_00e40138;
          goto LAB_00e401f4;
        }
      }
      else if (pbVar6 + 2 <= pbVar12) {
        uVar9 = (uVar9 * -0x100 + 0xfa94) - (ulong)pbVar6[1];
        goto joined_r0x00e401f0;
      }
LAB_00e401ac:
      *plVar2 = 0;
      *(undefined8 *)((long)local_90 + lVar20) = 0;
    }
LAB_00e402c8:
    lVar20 = lVar20 + 8;
    lVar13 = lVar19;
    lVar14 = lVar10;
  } while (lVar20 != 0x30);
  if ((9 < lVar19 + 9U) || (9 < (ulong)(lVar19 - lVar10))) goto LAB_00e40584;
  if (local_90[0] == 0) {
    lVar11 = 0;
    if (local_90[1] == 0) goto LAB_00e40330;
LAB_00e40390:
    lVar13 = (&DAT_01976c90)[lVar19 - local_c0[1]];
    uVar9 = lVar13 >> 1;
    if (-1 < local_90[1]) {
      lVar14 = uVar9 + local_90[1];
      if ((long)(0x7fffffffffffffff - uVar9) <= local_90[1]) {
        lVar14 = 0x7fffffffffffffff;
      }
      lVar20 = 0;
      local_90[1] = lVar20;
      if (lVar13 != 0) {
        lVar20 = lVar14 / lVar13;
        local_90[1] = lVar20;
      }
      goto joined_r0x00e403c4;
    }
    lVar14 = local_90[1] - uVar9;
    if (local_90[1] <= (long)(uVar9 | 0x8000000000000000)) {
      lVar14 = -0x8000000000000000;
    }
    lVar20 = 0;
    if (lVar13 != 0) {
      lVar20 = lVar14 / lVar13;
    }
    local_90[1] = lVar20;
    if (local_90[2] != 0) goto LAB_00e403c8;
LAB_00e4033c:
    lVar10 = 0;
joined_r0x00e40344:
    if (local_90[3] != 0) goto LAB_00e40400;
LAB_00e40348:
    lVar13 = 0;
joined_r0x00e40350:
    if (local_90[4] == 0) goto LAB_00e40354;
LAB_00e40438:
    lVar14 = (&DAT_01976c90)[lVar19 - local_c0[4]];
    uVar9 = lVar14 >> 1;
    if (-1 < local_90[4]) {
      lVar7 = uVar9 + local_90[4];
      if ((long)(0x7fffffffffffffff - uVar9) <= local_90[4]) {
        lVar7 = 0x7fffffffffffffff;
      }
      lVar15 = 0;
      local_90[4] = lVar15;
      if (lVar14 != 0) {
        lVar15 = lVar7 / lVar14;
        local_90[4] = lVar15;
      }
      goto joined_r0x00e4035c;
    }
    lVar7 = local_90[4] - uVar9;
    if (local_90[4] <= (long)(uVar9 | 0x8000000000000000)) {
      lVar7 = -0x8000000000000000;
    }
    lVar15 = 0;
    if (lVar14 != 0) {
      lVar15 = lVar7 / lVar14;
    }
    local_90[4] = lVar15;
    if (local_90[5] == 0) goto LAB_00e40360;
LAB_00e40470:
    lVar7 = (&DAT_01976c90)[lVar19 - local_c0[5]];
    uVar9 = lVar7 >> 1;
    if (local_90[5] < 0) {
      lVar17 = local_90[5] - uVar9;
      if (local_90[5] <= (long)(uVar9 | 0x8000000000000000)) {
        lVar17 = -0x8000000000000000;
      }
    }
    else {
      lVar17 = uVar9 + local_90[5];
      if ((long)(0x7fffffffffffffff - uVar9) <= local_90[5]) {
        lVar17 = 0x7fffffffffffffff;
      }
    }
    lVar14 = 0;
    local_90[5] = lVar14;
    if (lVar7 != 0) {
      lVar14 = lVar17 / lVar7;
      local_90[5] = lVar14;
    }
  }
  else {
    lVar20 = (&DAT_01976c90)[lVar19 - local_c0[0]];
    uVar9 = lVar20 >> 1;
    if (local_90[0] < 0) {
      lVar13 = local_90[0] - uVar9;
      if (local_90[0] <= (long)(uVar9 | 0x8000000000000000)) {
        lVar13 = -0x8000000000000000;
      }
    }
    else {
      lVar13 = uVar9 + local_90[0];
      if ((long)(0x7fffffffffffffff - uVar9) <= local_90[0]) {
        lVar13 = 0x7fffffffffffffff;
      }
    }
    lVar11 = 0;
    if (lVar20 != 0) {
      lVar11 = lVar13 / lVar20;
    }
    local_90[0] = lVar11;
    if (local_90[1] != 0) goto LAB_00e40390;
LAB_00e40330:
    lVar20 = 0;
joined_r0x00e403c4:
    if (local_90[2] == 0) goto LAB_00e4033c;
LAB_00e403c8:
    lVar13 = (&DAT_01976c90)[lVar19 - local_c0[2]];
    uVar9 = lVar13 >> 1;
    if (local_90[2] < 0) {
      lVar14 = local_90[2] - uVar9;
      if (local_90[2] <= (long)(uVar9 | 0x8000000000000000)) {
        lVar14 = -0x8000000000000000;
      }
      lVar10 = 0;
      local_90[2] = lVar10;
      if (lVar13 != 0) {
        lVar10 = lVar14 / lVar13;
        local_90[2] = lVar10;
      }
      goto joined_r0x00e40344;
    }
    lVar14 = uVar9 + local_90[2];
    if ((long)(0x7fffffffffffffff - uVar9) <= local_90[2]) {
      lVar14 = 0x7fffffffffffffff;
    }
    lVar10 = 0;
    if (lVar13 != 0) {
      lVar10 = lVar14 / lVar13;
    }
    local_90[2] = lVar10;
    if (local_90[3] == 0) goto LAB_00e40348;
LAB_00e40400:
    lVar14 = (&DAT_01976c90)[lVar19 - local_c0[3]];
    uVar9 = lVar14 >> 1;
    if (-1 < local_90[3]) {
      lVar7 = uVar9 + local_90[3];
      if ((long)(0x7fffffffffffffff - uVar9) <= local_90[3]) {
        lVar7 = 0x7fffffffffffffff;
      }
      lVar13 = 0;
      local_90[3] = lVar13;
      if (lVar14 != 0) {
        lVar13 = lVar7 / lVar14;
        local_90[3] = lVar13;
      }
      goto joined_r0x00e40350;
    }
    lVar7 = local_90[3] - uVar9;
    if (local_90[3] <= (long)(uVar9 | 0x8000000000000000)) {
      lVar7 = -0x8000000000000000;
    }
    lVar13 = 0;
    if (lVar14 != 0) {
      lVar13 = lVar7 / lVar14;
    }
    local_90[3] = lVar13;
    if (local_90[4] != 0) goto LAB_00e40438;
LAB_00e40354:
    lVar15 = 0;
joined_r0x00e4035c:
    if (local_90[5] != 0) goto LAB_00e40470;
LAB_00e40360:
    lVar14 = 0;
  }
  uVar16 = (&DAT_01976c90)[-lVar19];
  *(long *)(lVar18 + 0x40) = lVar11;
  *(long *)(lVar18 + 0x48) = lVar10;
  *(long *)(lVar18 + 0x50) = lVar20;
  *(long *)(lVar18 + 0x58) = lVar13;
  *(long *)(lVar18 + 0x78) = lVar14;
  *(undefined8 *)(lVar18 + 0x68) = uVar16;
  *(long *)(lVar18 + 0x70) = lVar15;
  cVar5 = FUN_00e1317c();
  if (cVar5 != '\0') {
    return 0;
  }
LAB_00e40584:
  *(undefined8 *)(lVar18 + 0x40) = 0x10000;
  *(undefined8 *)(lVar18 + 0x48) = 0;
  *(undefined8 *)(lVar18 + 0x50) = 0;
  *(undefined8 *)(lVar18 + 0x58) = 0x10000;
  *(undefined8 *)(lVar18 + 0x70) = 0;
  *(undefined8 *)(lVar18 + 0x78) = 0;
  *(undefined8 *)(lVar18 + 0x68) = 1;
  return 0;
}

