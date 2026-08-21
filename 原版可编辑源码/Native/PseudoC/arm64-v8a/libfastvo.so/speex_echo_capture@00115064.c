
ulong speex_echo_capture(uint *param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined2 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  param_1[0x4f] = 1;
  if ((int)param_1[0x4e] < (int)*param_1) {
    uVar2 = fprintf((FILE *)0x14d168,"warning: %s\n",
                    "No playback frame available (your application is buggy and/or got xruns)");
    if (param_1[0x4e] != 0) {
      uVar2 = fprintf((FILE *)0x14d168,"warning: %s\n","internal playback buffer corruption?");
      param_1[0x4e] = 0;
    }
    uVar3 = (ulong)uVar2;
    uVar2 = *param_1;
    uVar4 = (ulong)(int)uVar2;
    if (0 < (int)uVar2) {
      if (uVar2 < 0x10) {
        uVar6 = 0;
      }
      else if ((param_3 < param_2 + uVar4 * 2) && (param_2 < param_3 + uVar4 * 2)) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar4 & 0xfffffffffffffff0;
        puVar7 = (undefined8 *)(param_2 + 0x10);
        puVar10 = (undefined8 *)(param_3 + 0x10);
        uVar12 = uVar6;
        do {
          puVar1 = puVar7 + -1;
          uVar13 = puVar7[-2];
          uVar15 = puVar7[1];
          uVar14 = *puVar7;
          puVar7 = puVar7 + 4;
          uVar12 = uVar12 - 0x10;
          puVar10[-1] = *puVar1;
          puVar10[-2] = uVar13;
          puVar10[1] = uVar15;
          *puVar10 = uVar14;
          puVar10 = puVar10 + 4;
        } while (uVar12 != 0);
        if (uVar6 == uVar4) {
          return uVar3;
        }
      }
      do {
        lVar9 = uVar6 * 2;
        uVar6 = uVar6 + 1;
        *(undefined2 *)(param_3 + lVar9) = *(undefined2 *)(param_2 + lVar9);
      } while ((long)uVar6 < (long)uVar4);
    }
  }
  else {
    uVar3 = speex_echo_cancellation(param_1,param_2,*(undefined8 *)(param_1 + 0x4c),param_3);
    lVar9 = (long)(int)*param_1;
    uVar2 = param_1[0x4e] - *param_1;
    param_1[0x4e] = uVar2;
    if (0 < (int)uVar2) {
      puVar7 = *(undefined8 **)(param_1 + 0x4c);
      uVar4 = (ulong)uVar2;
      if ((uVar2 < 0x10) ||
         ((puVar7 < (undefined8 *)((long)puVar7 + (lVar9 + uVar4) * 2) &&
          ((ulong)((long)puVar7 + lVar9 * 2) < (long)puVar7 + uVar4 * 2)))) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar4 & 0xfffffff0;
        uVar12 = uVar6;
        puVar10 = puVar7;
        do {
          puVar1 = (undefined8 *)((long)puVar10 + lVar9 * 2);
          uVar13 = *puVar1;
          uVar15 = puVar1[3];
          uVar14 = puVar1[2];
          uVar12 = uVar12 - 0x10;
          puVar10[1] = puVar1[1];
          *puVar10 = uVar13;
          puVar10[3] = uVar15;
          puVar10[2] = uVar14;
          puVar10 = puVar10 + 4;
        } while (uVar12 != 0);
        if (uVar6 == uVar4) {
          return uVar3;
        }
      }
      lVar8 = uVar4 - uVar6;
      puVar5 = (undefined2 *)((long)puVar7 + (uVar6 + lVar9) * 2);
      puVar11 = (undefined2 *)((long)puVar7 + uVar6 * 2);
      do {
        lVar8 = lVar8 + -1;
        *puVar11 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar11 = puVar11 + 1;
      } while (lVar8 != 0);
    }
  }
  return uVar3;
}

