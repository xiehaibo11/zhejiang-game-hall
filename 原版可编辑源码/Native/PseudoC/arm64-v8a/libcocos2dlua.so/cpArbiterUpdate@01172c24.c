
void cpArbiterUpdate(float *param_1,long *param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  float *pfVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  long local_60;
  long lStack_58;
  
  lVar11 = *param_2;
  lVar12 = param_2[1];
  *(long *)(param_1 + 6) = lVar11;
  lVar6 = *(long *)(lVar11 + 0x10);
  *(long *)(param_1 + 8) = lVar12;
  *(long *)(param_1 + 10) = lVar6;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(lVar12 + 0x10);
  fVar13 = *(float *)((long)param_2 + 0x1c);
  if (0 < (int)fVar13) {
    lVar5 = 0;
    while( true ) {
      lVar9 = param_2[4];
      fVar13 = *(float *)(lVar6 + 0x2c);
      pfVar7 = (float *)(lVar9 + lVar5 * 0x38);
      *pfVar7 = *pfVar7 - *(float *)(lVar6 + 0x28);
      pfVar7[1] = pfVar7[1] - fVar13;
      fVar13 = *(float *)(*(long *)(lVar12 + 0x10) + 0x28);
      fVar14 = *(float *)(*(long *)(lVar12 + 0x10) + 0x2c);
      pfVar8 = pfVar7 + 7;
      pfVar8[0] = 0.0;
      pfVar8[1] = 0.0;
      pfVar7[2] = pfVar7[2] - fVar13;
      pfVar7[3] = pfVar7[3] - fVar14;
      fVar13 = param_1[0x16];
      if (0 < (int)fVar13) {
        lVar9 = *(long *)(lVar9 + lVar5 * 0x38 + 0x30);
        lVar6 = 0;
        pfVar10 = (float *)(*(long *)(param_1 + 0x18) + 0x1c);
        do {
          if (lVar9 == *(long *)(pfVar10 + 5)) {
            *pfVar8 = *pfVar10;
            pfVar7[8] = pfVar10[1];
          }
          lVar6 = lVar6 + 1;
          pfVar10 = pfVar10 + 0xe;
        } while (lVar6 < (int)fVar13);
      }
      fVar13 = *(float *)((long)param_2 + 0x1c);
      lVar5 = lVar5 + 1;
      if ((int)fVar13 <= lVar5) break;
      lVar6 = *(long *)(lVar11 + 0x10);
    }
  }
  *(long *)(param_1 + 0x18) = param_2[4];
  param_1[0x16] = fVar13;
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)((long)param_2 + 0x14);
  *param_1 = *(float *)(lVar12 + 0x40) * *(float *)(lVar11 + 0x40);
  param_1[1] = *(float *)(lVar12 + 0x44) * *(float *)(lVar11 + 0x44);
  fVar16 = *(float *)(param_2 + 3);
  fVar13 = *(float *)(lVar12 + 0x48) - *(float *)(lVar11 + 0x48);
  fVar14 = *(float *)(lVar12 + 0x4c) - *(float *)(lVar11 + 0x4c);
  fVar15 = *(float *)((long)param_2 + 0x14) * fVar13 + fVar14 * fVar16;
  param_1[2] = fVar13 - *(float *)((long)param_2 + 0x14) * fVar15;
  param_1[3] = fVar14 - fVar16 * fVar15;
  lVar11 = *(long *)(*param_2 + 0x58);
  lVar12 = *(long *)(param_2[1] + 0x58);
  local_60 = lVar11;
  lStack_58 = lVar12;
  plVar3 = (long *)cpHashSetFind(*(undefined8 *)(param_3 + 0xa8),
                                 lVar12 * 0xc75f71e1 ^ lVar11 * 0xc75f71e1,&local_60);
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)(param_3 + 0xb0);
  }
  *(long **)(param_1 + 0x1c) = plVar3;
  bVar1 = lVar11 != *plVar3;
  bVar2 = *plVar3 != -1;
  *(bool *)(param_1 + 0x22) = bVar2 && bVar1;
  if ((plVar3 != (long *)(param_3 + 0xb0)) || (*(char *)(param_3 + 0xa4) != '\0')) {
    local_60 = lVar12;
    if (!bVar2 || !bVar1) {
      local_60 = lVar11;
    }
    lStack_58 = 0xffffffffffffffff;
    if (!bVar2 || !bVar1) {
      lVar11 = lVar12;
    }
    puVar4 = (undefined1 *)
             cpHashSetFind(*(undefined8 *)(param_3 + 0xa8),
                           local_60 * 0xc75f71e1 ^ 0xffffffff38a08e1f,&local_60);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = cpCollisionHandlerDoNothing;
    }
    *(undefined1 **)(param_1 + 0x1e) = puVar4;
    lStack_58 = 0xffffffffffffffff;
    local_60 = lVar11;
    puVar4 = (undefined1 *)
             cpHashSetFind(*(undefined8 *)(param_3 + 0xa8),lVar11 * 0xc75f71e1 ^ 0xffffffff38a08e1f,
                           &local_60);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = cpCollisionHandlerDoNothing;
    }
    *(undefined1 **)(param_1 + 0x20) = puVar4;
  }
  if (param_1[0x24] == 4.2039e-45) {
    param_1[0x24] = 0.0;
  }
  return;
}

