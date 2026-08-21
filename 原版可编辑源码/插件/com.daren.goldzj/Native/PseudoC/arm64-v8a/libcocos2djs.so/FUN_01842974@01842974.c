
void FUN_01842974(long param_1,undefined8 *param_2)

{
  ulong __size;
  char cVar1;
  char cVar2;
  byte *pbVar3;
  undefined1 uVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  void *pvVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  char cVar12;
  undefined1 *puVar13;
  char cVar14;
  size_t __n;
  char local_68;
  char cStack_67;
  char cStack_66;
  char cStack_65;
  char cStack_64;
  char cStack_63;
  char cStack_62;
  char cStack_61;
  char local_60 [40];
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  pbVar3 = *(byte **)(param_1 + 0x10);
  if (0x10 < (ulong)((*(long *)(param_1 + 0x18) + 1) - (long)pbVar3)) {
    cVar12 = '\t';
    cVar1 = '\0';
    if (9 < *pbVar3 - 0x30) {
      cVar1 = cVar12;
    }
    cVar14 = -0x30;
    cVar2 = -0x30;
    if (9 < pbVar3[1] - 0x30) {
      cVar2 = -0x57;
    }
    cStack_61 = cVar2 + pbVar3[1] + (cVar1 + *pbVar3) * '\x10';
    cVar1 = '\0';
    if (9 < pbVar3[2] - 0x30) {
      cVar1 = cVar12;
    }
    if (9 < pbVar3[3] - 0x30) {
      cVar14 = -0x57;
    }
    cStack_67 = cVar14 + pbVar3[3] + (cVar1 + pbVar3[2]) * '\x10';
    cVar1 = '\0';
    if (9 < pbVar3[4] - 0x30) {
      cVar1 = cVar12;
    }
    cVar14 = -0x30;
    cVar2 = cVar14;
    if (9 < pbVar3[5] - 0x30) {
      cVar2 = -0x57;
    }
    cStack_66 = cVar2 + pbVar3[5] + (cVar1 + pbVar3[4]) * '\x10';
    cVar1 = '\0';
    if (9 < pbVar3[6] - 0x30) {
      cVar1 = cVar12;
    }
    cVar12 = cVar14;
    if (9 < pbVar3[7] - 0x30) {
      cVar12 = -0x57;
    }
    cStack_65 = cVar12 + pbVar3[7] + (cVar1 + pbVar3[6]) * '\x10';
    cVar12 = '\t';
    cVar1 = '\0';
    if (9 < pbVar3[8] - 0x30) {
      cVar1 = cVar12;
    }
    cVar2 = -0x30;
    if (9 < pbVar3[9] - 0x30) {
      cVar2 = -0x57;
    }
    cStack_64 = cVar2 + pbVar3[9] + (cVar1 + pbVar3[8]) * '\x10';
    cVar1 = '\0';
    if (9 < pbVar3[10] - 0x30) {
      cVar1 = cVar12;
    }
    if (9 < pbVar3[0xb] - 0x30) {
      cVar14 = -0x57;
    }
    cStack_63 = cVar14 + pbVar3[0xb] + (cVar1 + pbVar3[10]) * '\x10';
    cVar1 = '\0';
    if (9 < pbVar3[0xc] - 0x30) {
      cVar1 = cVar12;
    }
    cVar14 = -0x30;
    cVar2 = cVar14;
    if (9 < pbVar3[0xd] - 0x30) {
      cVar2 = -0x57;
    }
    cStack_62 = cVar2 + pbVar3[0xd] + (cVar1 + pbVar3[0xc]) * '\x10';
    cVar1 = '\0';
    if (9 < pbVar3[0xe] - 0x30) {
      cVar1 = cVar12;
    }
    if (9 < pbVar3[0xf] - 0x30) {
      cVar14 = -0x57;
    }
    local_68 = cVar14 + pbVar3[0xf] + (cVar1 + pbVar3[0xe]) * '\x10';
    puVar13 = (undefined1 *)((ulong)&local_68 | 2);
    puVar9 = (undefined1 *)((ulong)&local_68 | 6);
    do {
      uVar4 = puVar13[-1];
      puVar13[-1] = *puVar9;
      *puVar9 = uVar4;
      bVar6 = puVar13 < puVar9 + -1;
      puVar13 = puVar13 + 1;
      puVar9 = puVar9 + -1;
    } while (bVar6);
    local_60[8] = '\0';
    local_60[9] = '\0';
    local_60[10] = '\0';
    local_60[0xb] = '\0';
    local_60[0xc] = '\0';
    local_60[0xd] = '\0';
    local_60[0xe] = '\0';
    local_60[0xf] = '\0';
    local_60[0] = '\0';
    local_60[1] = '\0';
    local_60[2] = '\0';
    local_60[3] = '\0';
    local_60[4] = '\0';
    local_60[5] = '\0';
    local_60[6] = '\0';
    local_60[7] = '\0';
    local_60[0x18] = '\0';
    local_60[0x19] = '\0';
    local_60[0x1a] = '\0';
    local_60[0x1b] = '\0';
    local_60[0x1c] = '\0';
    local_60[0x1d] = '\0';
    local_60[0x1e] = '\0';
    local_60[0x1f] = '\0';
    local_60[0x10] = '\0';
    local_60[0x11] = '\0';
    local_60[0x12] = '\0';
    local_60[0x13] = '\0';
    local_60[0x14] = '\0';
    local_60[0x15] = '\0';
    local_60[0x16] = '\0';
    local_60[0x17] = '\0';
    iVar7 = snprintf(local_60,0x20,"%a",
                     CONCAT17(cStack_61,
                              CONCAT16(cStack_62,
                                       CONCAT15(cStack_63,
                                                CONCAT14(cStack_64,
                                                         CONCAT13(cStack_65,
                                                                  CONCAT12(cStack_66,
                                                                           CONCAT11(cStack_67,
                                                                                    local_68))))))))
    ;
    if (iVar7 != 0) {
      lVar11 = param_2[1];
      __n = (size_t)iVar7;
      __size = lVar11 + __n;
      if (__size < (ulong)param_2[2]) {
        pvVar8 = (void *)*param_2;
      }
      else {
        uVar10 = param_2[2] << 1;
        if (__size <= uVar10) {
          __size = uVar10;
        }
        param_2[2] = __size;
        pvVar8 = realloc((void *)*param_2,__size);
        *param_2 = pvVar8;
        if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar11 = param_2[1];
      }
      memmove((void *)((long)pvVar8 + lVar11),local_60,__n);
      param_2[1] = param_2[1] + __n;
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

