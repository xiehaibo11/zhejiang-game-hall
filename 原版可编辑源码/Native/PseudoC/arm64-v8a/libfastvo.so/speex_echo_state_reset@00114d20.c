
void speex_echo_state_reset(uint *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  
  uVar3 = param_1[1];
  uVar6 = param_1[2];
  uVar4 = param_1[7];
  uVar5 = (ulong)uVar4;
  uVar7 = param_1[8];
  param_1[3] = 0;
  uVar10 = uVar6 * uVar3;
  param_1[6] = 0;
  if (0 < (int)uVar10) {
    memset(*(void **)(param_1 + 0x20),0,(ulong)uVar10 << 2);
    memset(*(void **)(param_1 + 0x22),0,(ulong)uVar10 << 1);
  }
  uVar6 = (uVar6 + 1) * uVar3;
  if (0 < (int)uVar6) {
    memset(*(void **)(param_1 + 0x12),0,(ulong)uVar6 << 1);
  }
  if (-1 < (int)*param_1) {
    lVar14 = 0;
    do {
      lVar15 = lVar14 * 4;
      *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar15) = 0;
      *(undefined4 *)(*(long *)(param_1 + 0x2a) + lVar15) = 0xfff24000;
      *(undefined4 *)(*(long *)(param_1 + 0x36) + lVar15) = 0;
      *(undefined4 *)(*(long *)(param_1 + 0x38) + lVar15) = 0;
      uVar6 = *param_1;
      bVar1 = lVar14 < (int)uVar6;
      lVar14 = lVar14 + 1;
    } while (bVar1);
    if (0 < (int)uVar6) {
      memset(*(void **)(param_1 + 0x18),0,(ulong)uVar6 << 1);
    }
  }
  if (0 < (int)(uVar4 * uVar3)) {
    memset(*(void **)(param_1 + 0x1c),0,(ulong)(uVar4 * uVar3) << 1);
  }
  if (0 < (int)(uVar7 * uVar3)) {
    memset(*(void **)(param_1 + 0x10),0,(ulong)(uVar7 * uVar3) << 1);
  }
  if (0 < (int)uVar4) {
    uVar3 = uVar4 * 2;
    if ((int)uVar3 < 2) {
      uVar3 = 1;
    }
    memset(*(void **)(param_1 + 0x4a),0,(ulong)uVar3 << 2);
    uVar8 = *(ulong *)(param_1 + 0x44);
    uVar9 = *(ulong *)(param_1 + 0x46);
    if ((uVar4 < 0x10) || ((uVar9 < uVar8 + uVar5 * 2 && (uVar8 < uVar9 + uVar5 * 2)))) {
      uVar13 = 0;
    }
    else {
      uVar13 = uVar5 & 0xfffffff0;
      puVar16 = (undefined8 *)(uVar9 + 0x10);
      puVar17 = (undefined8 *)(uVar8 + 0x10);
      uVar18 = uVar13;
      do {
        puVar16[-1] = 0;
        puVar16[-2] = 0;
        puVar16[1] = 0;
        *puVar16 = 0;
        puVar17[-1] = 0;
        puVar17[-2] = 0;
        puVar17[1] = 0;
        *puVar17 = 0;
        puVar16 = puVar16 + 4;
        uVar18 = uVar18 - 0x10;
        puVar17 = puVar17 + 4;
      } while (uVar18 != 0);
      if (uVar13 == uVar5) goto LAB_00114eb0;
    }
    lVar14 = uVar5 - uVar13;
    puVar11 = (undefined2 *)(uVar9 + uVar13 * 2);
    puVar12 = (undefined2 *)(uVar8 + uVar13 * 2);
    do {
      *puVar11 = 0;
      lVar14 = lVar14 + -1;
      *puVar12 = 0;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    } while (lVar14 != 0);
  }
LAB_00114eb0:
  if (0 < (int)uVar7) {
    memset(*(void **)(param_1 + 0x42),0,(ulong)uVar7 << 1);
  }
  uVar3 = *param_1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xc] = 0;
  param_1[0x3a] = 0xfff24000;
  param_1[0x3b] = 0xfff24000;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  if (0 < (int)uVar3) {
    iVar2 = uVar3 * 3;
    if (iVar2 < 2) {
      iVar2 = 1;
    }
    memset(*(void **)(param_1 + 0x4c),0,(ulong)(uint)(iVar2 << 1));
  }
  param_1[0x4e] = uVar3 << 1;
  param_1[0x4f] = 0;
  return;
}

