
undefined8 uv_timer_start(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  
  if (param_2 == 0) {
    uVar5 = 0xffffffea;
  }
  else {
    if ((*(byte *)(param_1 + 0x58) >> 2 & 1) != 0) {
      uv_timer_stop(param_1);
    }
    lVar12 = *(long *)(param_1 + 8);
    uVar6 = *(ulong *)(lVar12 + 0x220);
    *(long *)(param_1 + 0x60) = param_2;
    uVar9 = uVar6 + param_3;
    if (CARRY8(uVar6,param_3)) {
      uVar9 = 0xffffffffffffffff;
    }
    *(ulong *)(param_1 + 0x80) = uVar9;
    *(undefined8 *)(param_1 + 0x88) = param_4;
    lVar8 = *(long *)(lVar12 + 0x218);
    *(long *)(lVar12 + 0x218) = lVar8 + 1;
    plVar7 = (long *)(param_1 + 0x68);
    *plVar7 = 0;
    *(long *)(param_1 + 0x90) = lVar8;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    uVar1 = *(int *)(lVar12 + 0x210) + 1;
    puVar2 = (undefined8 *)(lVar12 + 0x208);
    puVar11 = puVar2;
    puVar14 = puVar2;
    if (1 < uVar1) {
      uVar16 = 0;
      iVar15 = -1;
      uVar3 = uVar1;
      do {
        uVar16 = uVar3 & 1 | uVar16 << 1;
        iVar15 = iVar15 + 1;
        bVar4 = 3 < uVar3;
        uVar3 = uVar3 >> 1;
      } while (bVar4);
      iVar17 = 0;
      do {
        puVar11 = puVar14;
        uVar3 = uVar16 & 1;
        uVar16 = uVar16 >> 1;
        puVar14 = (undefined8 *)*puVar11;
        if (uVar3 != 0) {
          puVar14 = (undefined8 *)*puVar11 + 1;
        }
        bVar4 = iVar17 != iVar15;
        iVar17 = iVar17 + 1;
      } while (bVar4);
    }
    *(undefined8 *)(param_1 + 0x78) = *puVar11;
    *puVar14 = plVar7;
    *(uint *)(lVar12 + 0x210) = uVar1;
    plVar13 = *(long **)(param_1 + 0x78);
    if (plVar13 != (long *)0x0) {
      while ((uVar9 < (ulong)plVar13[3] ||
             ((uVar9 <= (ulong)plVar13[3] && (*(ulong *)(param_1 + 0x90) < (ulong)plVar13[5]))))) {
        lVar18 = plVar13[1];
        lVar12 = *plVar13;
        lVar8 = *plVar7;
        plVar13[1] = *(long *)(param_1 + 0x70);
        *plVar13 = lVar8;
        *(long *)(param_1 + 0x78) = plVar13[2];
        *(long *)(param_1 + 0x70) = lVar18;
        *plVar7 = lVar12;
        plVar13[2] = (long)plVar7;
        plVar10 = (long *)*plVar7;
        if (plVar10 == plVar7) {
          plVar10 = *(long **)(param_1 + 0x70);
          *(long **)(param_1 + 0x68) = plVar13;
        }
        else {
          *(long **)(param_1 + 0x70) = plVar13;
        }
        if (plVar10 != (long *)0x0) {
          plVar10[2] = (long)plVar7;
        }
        if (*plVar13 != 0) {
          *(long **)(*plVar13 + 0x10) = plVar13;
        }
        if (plVar13[1] != 0) {
          *(long **)(plVar13[1] + 0x10) = plVar13;
        }
        puVar11 = *(undefined8 **)(param_1 + 0x78);
        puVar14 = puVar2;
        if ((puVar11 != (undefined8 *)0x0) && (puVar14 = puVar11, (long *)*puVar11 != plVar13)) {
          puVar14 = puVar11 + 1;
        }
        *puVar14 = plVar7;
        plVar13 = *(long **)(param_1 + 0x78);
        if (plVar13 == (long *)0x0) break;
        uVar9 = *(ulong *)(param_1 + 0x80);
      }
    }
    uVar1 = *(uint *)(param_1 + 0x58);
    if ((uVar1 >> 2 & 1) == 0) {
      uVar5 = 0;
      *(uint *)(param_1 + 0x58) = uVar1 | 4;
      if ((uVar1 >> 3 & 1) != 0) {
        *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + 1;
      }
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}

