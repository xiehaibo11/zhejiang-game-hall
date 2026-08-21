
void FUN_0116cb04(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  
  lVar1 = cpHashSetRemove(param_1[5],param_3,param_2);
  lVar2 = param_1[6];
  if (lVar2 == lVar1) {
    lVar2 = 0;
  }
  else {
    lVar4 = *(long *)(lVar1 + 0x18);
    if (lVar4 == lVar2) {
      plVar7 = (long *)(lVar2 + 0x28);
      if (*(long *)(lVar2 + 0x20) != lVar1) {
        plVar7 = (long *)(lVar2 + 0x20);
      }
      lVar4 = *plVar7;
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
      *(undefined8 *)(lVar2 + 0x18) = param_1[7];
      param_1[7] = lVar2;
      lVar2 = lVar4;
    }
    else {
      lVar3 = *(long *)(lVar4 + 0x18);
      plVar7 = (long *)(lVar4 + 0x28);
      if (*(long *)(lVar4 + 0x20) != lVar1) {
        plVar7 = (long *)(lVar4 + 0x20);
      }
      lVar6 = *plVar7;
      plVar7 = (long *)(lVar3 + 0x20);
      if (*plVar7 != lVar4) {
        plVar7 = (long *)(lVar3 + 0x28);
        lVar4 = *plVar7;
      }
      *(undefined8 *)(lVar4 + 0x18) = param_1[7];
      param_1[7] = lVar4;
      *plVar7 = lVar6;
      *(long *)(lVar6 + 0x18) = lVar3;
      do {
        lVar4 = *(long *)(lVar3 + 0x20);
        lVar6 = *(long *)(lVar3 + 0x28);
        uVar11 = NEON_fminnm(*(undefined4 *)(lVar4 + 8),*(undefined4 *)(lVar6 + 8));
        uVar12 = NEON_fminnm(*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar6 + 0xc));
        fVar13 = *(float *)(lVar4 + 0x10);
        if (*(float *)(lVar4 + 0x10) <= *(float *)(lVar6 + 0x10)) {
          fVar13 = *(float *)(lVar6 + 0x10);
        }
        fVar14 = *(float *)(lVar4 + 0x14);
        if (*(float *)(lVar4 + 0x14) <= *(float *)(lVar6 + 0x14)) {
          fVar14 = *(float *)(lVar6 + 0x14);
        }
        *(undefined4 *)(lVar3 + 8) = uVar11;
        *(undefined4 *)(lVar3 + 0xc) = uVar12;
        *(float *)(lVar3 + 0x10) = fVar13;
        *(float *)(lVar3 + 0x14) = fVar14;
        lVar3 = *(long *)(lVar3 + 0x18);
      } while (lVar3 != 0);
    }
  }
  param_1[6] = lVar2;
  plVar7 = *(long **)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = 0;
  while (plVar7 != (long *)0x0) {
    lVar2 = plVar7[1];
    if (lVar2 == lVar1) {
      plVar5 = (long *)plVar7[2];
      lVar4 = plVar7[4];
      plVar8 = (long *)plVar7[5];
      lVar2 = plVar7[3];
      if (plVar8 != (long *)0x0) {
        plVar10 = plVar8;
        if (plVar8[1] != lVar4) {
          plVar10 = plVar8 + 3;
        }
        *plVar10 = lVar2;
      }
      if (lVar2 == 0) {
        plVar10 = (long *)(lVar4 + 0x28);
      }
      else {
        if (*(long *)(lVar2 + 8) != lVar4) {
          lVar2 = lVar2 + 0x18;
        }
        plVar10 = (long *)(lVar2 + 0x10);
      }
    }
    else {
      plVar5 = (long *)plVar7[5];
      lVar4 = *plVar7;
      plVar8 = (long *)plVar7[2];
      if (plVar8 != (long *)0x0) {
        plVar10 = plVar8;
        if (plVar8[1] != lVar2) {
          plVar10 = plVar8 + 3;
        }
        *plVar10 = lVar4;
      }
      if (lVar4 == 0) {
        plVar10 = (long *)(lVar2 + 0x28);
      }
      else {
        if (*(long *)(lVar4 + 8) != lVar2) {
          lVar4 = lVar4 + 0x18;
        }
        plVar10 = (long *)(lVar4 + 0x10);
      }
    }
    *plVar10 = (long)plVar8;
    puVar9 = (undefined8 *)param_1[3];
    if ((puVar9 != (undefined8 *)0x0) && ((undefined **)*puVar9 != &PTR_FUN_01781708)) {
      puVar9 = (undefined8 *)0x0;
    }
    if (puVar9 == (undefined8 *)0x0) {
      puVar9 = param_1;
    }
    plVar7[2] = puVar9[8];
    puVar9[8] = plVar7;
    plVar7 = plVar5;
  }
  *(undefined8 *)(lVar1 + 0x18) = param_1[7];
  param_1[7] = lVar1;
  return;
}

