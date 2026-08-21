
void FUN_0087ce2c(undefined8 *param_1,ulong *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  void *pvVar10;
  ulong *puVar11;
  void *pvVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  puVar13 = (undefined8 *)param_1[2];
  if (puVar13 == (undefined8 *)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
    puVar15 = (undefined8 *)param_1[1];
    if (puVar15 < puVar5 || (long)puVar15 - (long)puVar5 == 0) {
      lVar4 = (long)param_1[3] - (long)puVar5;
      uVar14 = (lVar4 >> 3) * 0x5555555555555556;
      if (lVar4 == 0) {
        uVar14 = 1;
      }
      if (uVar14 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (0xaaaaaaaaaaaaaaa < uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        pvVar10 = operator_new(uVar14 * 0x18);
      }
      puVar6 = (undefined8 *)((long)pvVar10 + (uVar14 >> 2) * 0x18);
      pvVar12 = (void *)((long)pvVar10 + uVar14 * 0x18);
      puVar7 = puVar6;
      if (puVar15 == puVar13) {
        *param_1 = pvVar10;
        param_1[1] = puVar6;
        param_1[2] = puVar6;
        param_1[3] = pvVar12;
      }
      else {
        do {
          uVar18 = puVar15[1];
          uVar17 = *puVar15;
          puVar7[2] = puVar15[2];
          puVar8 = puVar7 + 3;
          puVar7[1] = uVar18;
          *puVar7 = uVar17;
          puVar15[1] = 0;
          puVar15[2] = 0;
          puVar5 = puVar15 + 3;
          *puVar15 = 0;
          puVar7 = puVar8;
          puVar15 = puVar5;
        } while (puVar13 != puVar5);
        puVar5 = (undefined8 *)*param_1;
        pbVar1 = (byte *)param_1[1];
        pbVar9 = (byte *)param_1[2];
        *param_1 = pvVar10;
        param_1[1] = puVar6;
        param_1[2] = puVar8;
        param_1[3] = pvVar12;
        while (pbVar2 = pbVar9, pbVar2 != pbVar1) {
          pbVar9 = pbVar2 + -0x18;
          if ((*pbVar9 & 1) != 0) {
            operator_delete(*(void **)(pbVar2 + -8));
          }
        }
      }
      if (puVar5 != (undefined8 *)0x0) {
        operator_delete(puVar5);
      }
    }
    else {
      lVar3 = ((long)puVar15 - (long)puVar5 >> 3) * -0x5555555555555555;
      lVar4 = lVar3 + 2;
      if (-1 < lVar3 + 1) {
        lVar4 = lVar3 + 1;
      }
      lVar4 = lVar4 >> 1;
      if (puVar15 == puVar13) {
        puVar5 = puVar15 + lVar4 * -3;
      }
      else {
        do {
          pbVar1 = (byte *)(puVar15 + lVar4 * -3);
          if ((*pbVar1 & 1) == 0) {
            *(undefined2 *)(puVar15 + lVar4 * -3) = 0;
          }
          else {
            **(undefined1 **)(pbVar1 + 0x10) = 0;
            pbVar1[8] = 0;
            pbVar1[9] = 0;
            pbVar1[10] = 0;
            pbVar1[0xb] = 0;
            pbVar1[0xc] = 0;
            pbVar1[0xd] = 0;
            pbVar1[0xe] = 0;
            pbVar1[0xf] = 0;
            if ((*pbVar1 & 1) != 0) {
              operator_delete(*(void **)(pbVar1 + 0x10));
              puVar15[lVar4 * -3] = 0;
            }
          }
          uVar18 = puVar15[1];
          uVar17 = *puVar15;
          *(undefined8 *)(pbVar1 + 0x10) = puVar15[2];
          *(undefined8 *)(pbVar1 + 8) = uVar18;
          *(undefined8 *)pbVar1 = uVar17;
          puVar15[1] = 0;
          puVar15[2] = 0;
          puVar5 = puVar15 + 3;
          *puVar15 = 0;
          puVar15 = puVar5;
        } while (puVar13 != puVar5);
        puVar13 = (undefined8 *)param_1[1];
        puVar5 = puVar5 + lVar4 * -3;
      }
      param_1[1] = puVar13 + lVar4 * -3;
      param_1[2] = puVar5;
    }
  }
  puVar11 = (ulong *)param_1[2];
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = 0;
  if ((*param_2 & 1) == 0) {
    uVar16 = param_2[1];
    uVar14 = *param_2;
    puVar11[2] = param_2[2];
    puVar11[1] = uVar16;
    *puVar11 = uVar14;
    goto LAB_0087d064;
  }
  uVar14 = param_2[1];
  if (0xffffffffffffffef < uVar14) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  pvVar10 = (void *)param_2[2];
  if (uVar14 < 0x17) {
    pvVar12 = (void *)((long)puVar11 + 1);
    *(char *)puVar11 = (char)((int)uVar14 << 1);
    if (uVar14 != 0) goto LAB_0087d050;
  }
  else {
    uVar16 = uVar14 + 0x10 & 0xfffffffffffffff0;
    pvVar12 = operator_new(uVar16);
    puVar11[1] = uVar14;
    puVar11[2] = (ulong)pvVar12;
    *puVar11 = uVar16 | 1;
LAB_0087d050:
    memcpy(pvVar12,pvVar10,uVar14);
  }
  *(undefined1 *)((long)pvVar12 + uVar14) = 0;
LAB_0087d064:
  param_1[2] = param_1[2] + 0x18;
  return;
}

