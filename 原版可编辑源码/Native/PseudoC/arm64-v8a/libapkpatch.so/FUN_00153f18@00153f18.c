
void FUN_00153f18(long param_1,undefined8 *param_2)

{
  ulong __size;
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  byte *pbVar5;
  undefined1 uVar6;
  long lVar7;
  bool bVar8;
  int iVar9;
  void *pvVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined1 *puVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  size_t __n;
  float local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar7 = tpidr_el0;
  local_38 = *(long *)(lVar7 + 0x28);
  pbVar5 = *(byte **)(param_1 + 0x10);
  if (8 < (*(long *)(param_1 + 0x18) - (long)pbVar5) + 1U) {
    cVar15 = '\t';
    cVar1 = cVar15;
    if (*pbVar5 - 0x30 < 10) {
      cVar1 = '\0';
    }
    cVar17 = -0x57;
    cVar2 = -0x57;
    if (pbVar5[1] - 0x30 < 10) {
      cVar2 = -0x30;
    }
    if (pbVar5[2] - 0x30 < 10) {
      cVar15 = '\0';
    }
    if (pbVar5[3] - 0x30 < 10) {
      cVar17 = -0x30;
    }
    cVar16 = '\t';
    cVar3 = cVar16;
    if (pbVar5[4] - 0x30 < 10) {
      cVar3 = '\0';
    }
    cVar18 = -0x57;
    cVar4 = cVar18;
    if (pbVar5[5] - 0x30 < 10) {
      cVar4 = -0x30;
    }
    if (pbVar5[6] - 0x30 < 10) {
      cVar16 = '\0';
    }
    if (pbVar5[7] - 0x30 < 10) {
      cVar18 = -0x30;
    }
    puVar11 = (undefined1 *)((ulong)local_58 | 2);
    local_58[0] = (float)CONCAT31(CONCAT12(cVar2 + pbVar5[1] + (cVar1 + *pbVar5) * '\x10',
                                           CONCAT11(cVar4 + pbVar5[5] + (cVar3 + pbVar5[4]) * '\x10'
                                                    ,cVar17 + pbVar5[3] +
                                                     (cVar15 + pbVar5[2]) * '\x10')),
                                  cVar18 + pbVar5[7] + (cVar16 + pbVar5[6]) * '\x10');
    puVar14 = puVar11;
    do {
      uVar6 = puVar11[-1];
      puVar11[-1] = *puVar14;
      *puVar14 = uVar6;
      bVar8 = puVar11 < puVar14 + -1;
      puVar11 = puVar11 + 1;
      puVar14 = puVar14 + -1;
    } while (bVar8);
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    iVar9 = FUN_00154108((double)local_58[0],&local_50,0x18,0x18,&DAT_00117fae);
    if (iVar9 != 0) {
      lVar13 = param_2[1];
      __n = (size_t)iVar9;
      __size = lVar13 + __n;
      if (__size < (ulong)param_2[2]) {
        pvVar10 = (void *)*param_2;
      }
      else {
        uVar12 = param_2[2] << 1;
        if (__size <= uVar12) {
          __size = uVar12;
        }
        param_2[2] = __size;
        pvVar10 = realloc((void *)*param_2,__size);
        *param_2 = pvVar10;
        if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar13 = param_2[1];
      }
      memmove((void *)((long)pvVar10 + lVar13),&local_50,__n);
      param_2[1] = param_2[1] + __n;
    }
  }
  if (*(long *)(lVar7 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

