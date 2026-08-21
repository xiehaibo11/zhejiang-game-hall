
undefined8
FUN_0116d6e0(undefined1 param_1 [16],float param_2,float param_3,float param_4,undefined8 *param_5,
            undefined8 *param_6)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  puVar9 = (undefined8 *)param_6[6];
  fVar11 = (float)(*(code *)param_6[1])(*param_5);
  if ((((*(float *)(param_5 + 1) <= fVar11) && (param_4 <= *(float *)((long)param_5 + 0x14))) &&
      (param_3 <= *(float *)(param_5 + 2))) && (*(float *)((long)param_5 + 0xc) <= param_2)) {
    return 0;
  }
  uVar10 = *param_5;
  fVar11 = (float)(*(code *)param_6[1])(uVar10);
  if ((code *)param_6[4] != (code *)0x0) {
    fVar17 = param_4 - param_2;
    fVar16 = param_3 - fVar11;
    fVar15 = param_2;
    fVar12 = (float)(*(code *)param_6[4])(uVar10);
    fVar12 = (float)NEON_fminnm(fVar12 * 0.1,-(fVar16 * 0.1));
    fVar15 = (float)NEON_fminnm(fVar15 * 0.1,-(fVar17 * 0.1));
    fVar11 = fVar12 + fVar11;
    param_2 = fVar15 + param_2;
    param_3 = fVar16 * 0.1 + param_3;
    param_4 = fVar17 * 0.1 + param_4;
  }
  *(float *)(param_5 + 1) = fVar11;
  *(float *)((long)param_5 + 0xc) = param_2;
  *(float *)(param_5 + 2) = param_3;
  *(float *)((long)param_5 + 0x14) = param_4;
  if (puVar9 == param_5) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)param_5[3];
    if (puVar3 == puVar9) {
      puVar3 = puVar9 + 5;
      if ((undefined8 *)puVar9[4] != param_5) {
        puVar3 = puVar9 + 4;
      }
      puVar3 = (undefined8 *)*puVar3;
      puVar3[3] = puVar9[3];
      puVar9[3] = param_6[7];
      param_6[7] = puVar9;
      puVar9 = puVar3;
    }
    else {
      lVar2 = puVar3[3];
      plVar6 = puVar3 + 5;
      if ((undefined8 *)puVar3[4] != param_5) {
        plVar6 = puVar3 + 4;
      }
      lVar4 = *plVar6;
      plVar6 = (long *)(lVar2 + 0x20);
      if ((undefined8 *)*plVar6 != puVar3) {
        plVar6 = (long *)(lVar2 + 0x28);
        puVar3 = (undefined8 *)*plVar6;
      }
      puVar3[3] = param_6[7];
      param_6[7] = puVar3;
      *plVar6 = lVar4;
      *(long *)(lVar4 + 0x18) = lVar2;
      do {
        lVar4 = *(long *)(lVar2 + 0x20);
        lVar1 = *(long *)(lVar2 + 0x28);
        uVar13 = NEON_fminnm(*(undefined4 *)(lVar4 + 8),*(undefined4 *)(lVar1 + 8));
        uVar14 = NEON_fminnm(*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar1 + 0xc));
        fVar11 = *(float *)(lVar4 + 0x10);
        if (*(float *)(lVar4 + 0x10) <= *(float *)(lVar1 + 0x10)) {
          fVar11 = *(float *)(lVar1 + 0x10);
        }
        fVar15 = *(float *)(lVar4 + 0x14);
        if (*(float *)(lVar4 + 0x14) <= *(float *)(lVar1 + 0x14)) {
          fVar15 = *(float *)(lVar1 + 0x14);
        }
        *(undefined4 *)(lVar2 + 8) = uVar13;
        *(undefined4 *)(lVar2 + 0xc) = uVar14;
        *(float *)(lVar2 + 0x10) = fVar11;
        *(float *)(lVar2 + 0x14) = fVar15;
        lVar2 = *(long *)(lVar2 + 0x18);
      } while (lVar2 != 0);
    }
  }
  uVar10 = FUN_0116d150(puVar9,param_5,param_6);
  param_6[6] = uVar10;
  plVar6 = (long *)param_5[5];
  param_5[5] = 0;
  if (plVar6 == (long *)0x0) {
    puVar9 = (undefined8 *)param_6[3];
  }
  else {
    do {
      puVar9 = (undefined8 *)plVar6[1];
      if (puVar9 == param_5) {
        plVar5 = (long *)plVar6[2];
        lVar4 = plVar6[4];
        plVar7 = (long *)plVar6[5];
        lVar2 = plVar6[3];
        if (plVar7 != (long *)0x0) {
          plVar8 = plVar7;
          if (plVar7[1] != lVar4) {
            plVar8 = plVar7 + 3;
          }
          *plVar8 = lVar2;
        }
        if (lVar2 == 0) {
          plVar8 = (long *)(lVar4 + 0x28);
        }
        else {
          if (*(long *)(lVar2 + 8) != lVar4) {
            lVar2 = lVar2 + 0x18;
          }
          plVar8 = (long *)(lVar2 + 0x10);
        }
      }
      else {
        plVar5 = (long *)plVar6[5];
        lVar2 = *plVar6;
        plVar7 = (long *)plVar6[2];
        if (plVar7 != (long *)0x0) {
          plVar8 = plVar7;
          if ((undefined8 *)plVar7[1] != puVar9) {
            plVar8 = plVar7 + 3;
          }
          *plVar8 = lVar2;
        }
        if (lVar2 == 0) {
          plVar8 = puVar9 + 5;
        }
        else {
          if (*(undefined8 **)(lVar2 + 8) != puVar9) {
            lVar2 = lVar2 + 0x18;
          }
          plVar8 = (long *)(lVar2 + 0x10);
        }
      }
      *plVar8 = (long)plVar7;
      puVar9 = (undefined8 *)param_6[3];
      if (puVar9 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        puVar3 = puVar9;
        if ((undefined **)*puVar9 != &PTR_FUN_01781708) {
          puVar3 = (undefined8 *)0x0;
        }
      }
      if (puVar3 == (undefined8 *)0x0) {
        puVar3 = param_6;
      }
      plVar6[2] = puVar3[8];
      puVar3[8] = plVar6;
      plVar6 = plVar5;
    } while (plVar5 != (long *)0x0);
  }
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else if ((undefined **)*puVar9 != &PTR_FUN_01781708) {
    puVar9 = (undefined8 *)0x0;
  }
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = param_6;
  }
  *(undefined4 *)(param_5 + 4) = *(undefined4 *)(puVar9 + 10);
  return 1;
}

