
void FUN_01842790(long param_1,undefined8 *param_2)

{
  ulong __size;
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  byte *pbVar7;
  undefined1 uVar8;
  long lVar9;
  bool bVar10;
  int iVar11;
  void *pvVar12;
  undefined1 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined1 *puVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  size_t __n;
  float local_58 [2];
  char local_50 [24];
  long local_38;
  
  lVar9 = tpidr_el0;
  local_38 = *(long *)(lVar9 + 0x28);
  pbVar7 = *(byte **)(param_1 + 0x10);
  if (8 < (ulong)((*(long *)(param_1 + 0x18) + 1) - (long)pbVar7)) {
    cVar17 = '\t';
    cVar1 = '\0';
    if (9 < *pbVar7 - 0x30) {
      cVar1 = cVar17;
    }
    cVar18 = -0x30;
    cVar2 = -0x30;
    if (9 < pbVar7[1] - 0x30) {
      cVar2 = -0x57;
    }
    cVar3 = '\0';
    if (9 < pbVar7[2] - 0x30) {
      cVar3 = cVar17;
    }
    if (9 < pbVar7[3] - 0x30) {
      cVar18 = -0x57;
    }
    cVar4 = '\0';
    if (9 < pbVar7[4] - 0x30) {
      cVar4 = cVar17;
    }
    cVar19 = -0x30;
    cVar5 = cVar19;
    if (9 < pbVar7[5] - 0x30) {
      cVar5 = -0x57;
    }
    puVar13 = (undefined1 *)((ulong)local_58 | 2);
    cVar6 = '\0';
    if (9 < pbVar7[6] - 0x30) {
      cVar6 = cVar17;
    }
    if (9 < pbVar7[7] - 0x30) {
      cVar19 = -0x57;
    }
    local_58[0] = (float)CONCAT31(CONCAT12(cVar2 + pbVar7[1] + (cVar1 + *pbVar7) * '\x10',
                                           CONCAT11(cVar5 + pbVar7[5] + (cVar4 + pbVar7[4]) * '\x10'
                                                    ,cVar18 + pbVar7[3] +
                                                     (cVar3 + pbVar7[2]) * '\x10')),
                                  cVar19 + pbVar7[7] + (cVar6 + pbVar7[6]) * '\x10');
    puVar16 = puVar13;
    do {
      uVar8 = puVar13[-1];
      puVar13[-1] = *puVar16;
      *puVar16 = uVar8;
      bVar10 = puVar13 < puVar16 + -1;
      puVar13 = puVar13 + 1;
      puVar16 = puVar16 + -1;
    } while (bVar10);
    local_50[0] = '\0';
    local_50[1] = '\0';
    local_50[2] = '\0';
    local_50[3] = '\0';
    local_50[4] = '\0';
    local_50[5] = '\0';
    local_50[6] = '\0';
    local_50[7] = '\0';
    local_50[8] = '\0';
    local_50[9] = '\0';
    local_50[10] = '\0';
    local_50[0xb] = '\0';
    local_50[0xc] = '\0';
    local_50[0xd] = '\0';
    local_50[0xe] = '\0';
    local_50[0xf] = '\0';
    local_50[0x10] = '\0';
    local_50[0x11] = '\0';
    local_50[0x12] = '\0';
    local_50[0x13] = '\0';
    local_50[0x14] = '\0';
    local_50[0x15] = '\0';
    local_50[0x16] = '\0';
    local_50[0x17] = '\0';
    iVar11 = snprintf(local_50,0x18,"%af",(double)local_58[0]);
    if (iVar11 != 0) {
      lVar15 = param_2[1];
      __n = (size_t)iVar11;
      __size = lVar15 + __n;
      if (__size < (ulong)param_2[2]) {
        pvVar12 = (void *)*param_2;
      }
      else {
        uVar14 = param_2[2] << 1;
        if (__size <= uVar14) {
          __size = uVar14;
        }
        param_2[2] = __size;
        pvVar12 = realloc((void *)*param_2,__size);
        *param_2 = pvVar12;
        if (pvVar12 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar15 = param_2[1];
      }
      memmove((void *)((long)pvVar12 + lVar15),local_50,__n);
      param_2[1] = param_2[1] + __n;
    }
  }
  if (*(long *)(lVar9 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

