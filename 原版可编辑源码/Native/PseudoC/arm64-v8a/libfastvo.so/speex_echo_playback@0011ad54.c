
uint * speex_echo_playback(uint *param_1,ulong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined2 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  if (param_1[0x4f] == 0) {
    pcVar4 = "discarded first playback frame";
LAB_0011adb8:
    uVar2 = fprintf((FILE *)0x14d168,"warning: %s\n",pcVar4);
    return (uint *)(ulong)uVar2;
  }
  uVar3 = param_1[0x4e];
  lVar5 = (long)(int)uVar3;
  uVar2 = *param_1;
  uVar7 = (ulong)uVar2;
  if ((int)(uVar2 * 2) < (int)uVar3) {
    pcVar4 = "Had to discard a playback frame (your application is buggy and/or got xruns)";
    goto LAB_0011adb8;
  }
  if (0 < (int)uVar2) {
    lVar8 = *(long *)(param_1 + 0x4c);
    if ((uVar2 < 0x10) ||
       ((uVar15 = lVar8 + lVar5 * 2, uVar15 < param_2 + uVar7 * 2 &&
        (param_2 < lVar8 + (lVar5 + uVar7) * 2)))) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar7 & 0xfffffff0;
      puVar13 = (undefined8 *)(param_2 + 0x10);
      puVar14 = (undefined8 *)(uVar15 + 0x10);
      uVar15 = uVar10;
      do {
        puVar1 = puVar13 + -1;
        uVar16 = puVar13[-2];
        uVar18 = puVar13[1];
        uVar17 = *puVar13;
        puVar13 = puVar13 + 4;
        uVar15 = uVar15 - 0x10;
        puVar14[-1] = *puVar1;
        puVar14[-2] = uVar16;
        puVar14[1] = uVar18;
        *puVar14 = uVar17;
        puVar14 = puVar14 + 4;
      } while (uVar15 != 0);
      if (uVar10 == uVar7) goto LAB_0011ae20;
    }
    lVar11 = uVar7 - uVar10;
    puVar9 = (undefined2 *)(lVar8 + (uVar10 + lVar5) * 2);
    puVar12 = (undefined2 *)(param_2 + uVar10 * 2);
    do {
      lVar11 = lVar11 + -1;
      *puVar9 = *puVar12;
      puVar9 = puVar9 + 1;
      puVar12 = puVar12 + 1;
    } while (lVar11 != 0);
  }
LAB_0011ae20:
  param_1[0x4e] = uVar2 + uVar3;
  if (0 < (int)uVar3) {
    return param_1;
  }
  uVar3 = fprintf((FILE *)0x14d168,"warning: %s\n",
                  "Auto-filling the buffer (your application is buggy and/or got xruns)");
  uVar2 = *param_1;
  uVar7 = (ulong)(int)uVar2;
  if ((int)uVar2 < 1) {
    uVar6 = param_1[0x4e];
  }
  else {
    uVar6 = param_1[0x4e];
    lVar5 = *(long *)(param_1 + 0x4c);
    lVar8 = (long)(int)uVar6;
    if ((uVar2 < 0x10) ||
       ((uVar15 = lVar5 + lVar8 * 2, uVar15 < param_2 + uVar7 * 2 &&
        (param_2 < lVar5 + (uVar7 + lVar8) * 2)))) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar7 & 0xfffffffffffffff0;
      puVar13 = (undefined8 *)(param_2 + 0x10);
      puVar14 = (undefined8 *)(uVar15 + 0x10);
      uVar15 = uVar10;
      do {
        puVar1 = puVar13 + -1;
        uVar16 = puVar13[-2];
        uVar18 = puVar13[1];
        uVar17 = *puVar13;
        puVar13 = puVar13 + 4;
        uVar15 = uVar15 - 0x10;
        puVar14[-1] = *puVar1;
        puVar14[-2] = uVar16;
        puVar14[1] = uVar18;
        *puVar14 = uVar17;
        puVar14 = puVar14 + 4;
      } while (uVar15 != 0);
      if (uVar10 == uVar7) goto LAB_0011af20;
    }
    do {
      lVar11 = uVar10 * 2;
      uVar10 = uVar10 + 1;
      *(undefined2 *)(lVar5 + lVar8 * 2 + lVar11) = *(undefined2 *)(param_2 + lVar11);
    } while ((long)uVar10 < (long)uVar7);
  }
LAB_0011af20:
  param_1[0x4e] = uVar6 + uVar2;
  return (uint *)(ulong)uVar3;
}

