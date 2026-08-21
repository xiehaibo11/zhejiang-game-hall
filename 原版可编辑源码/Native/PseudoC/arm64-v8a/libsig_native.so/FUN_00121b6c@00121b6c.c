
void FUN_00121b6c(long param_1,undefined8 param_2)

{
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
  undefined1 *puVar12;
  undefined1 *puVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  float local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar9 = tpidr_el0;
  local_38 = *(long *)(lVar9 + 0x28);
  pbVar7 = *(byte **)(param_1 + 0x10);
  if (8 < (*(long *)(param_1 + 0x18) - (long)pbVar7) + 1U) {
    cVar14 = '\t';
    cVar1 = '\0';
    if (9 < *pbVar7 - 0x30) {
      cVar1 = cVar14;
    }
    cVar15 = -0x30;
    cVar2 = -0x30;
    if (9 < pbVar7[1] - 0x30) {
      cVar2 = -0x57;
    }
    cVar3 = '\0';
    if (9 < pbVar7[2] - 0x30) {
      cVar3 = cVar14;
    }
    if (9 < pbVar7[3] - 0x30) {
      cVar15 = -0x57;
    }
    cVar4 = '\0';
    if (9 < pbVar7[4] - 0x30) {
      cVar4 = cVar14;
    }
    cVar16 = -0x30;
    cVar5 = cVar16;
    if (9 < pbVar7[5] - 0x30) {
      cVar5 = -0x57;
    }
    puVar12 = (undefined1 *)((ulong)local_58 | 2);
    cVar6 = '\0';
    if (9 < pbVar7[6] - 0x30) {
      cVar6 = cVar14;
    }
    if (9 < pbVar7[7] - 0x30) {
      cVar16 = -0x57;
    }
    local_58[0] = (float)CONCAT31(CONCAT12(cVar2 + pbVar7[1] + (cVar1 + *pbVar7) * '\x10',
                                           CONCAT11(cVar5 + pbVar7[5] + (cVar4 + pbVar7[4]) * '\x10'
                                                    ,cVar15 + pbVar7[3] +
                                                     (cVar3 + pbVar7[2]) * '\x10')),
                                  cVar16 + pbVar7[7] + (cVar6 + pbVar7[6]) * '\x10');
    puVar13 = puVar12;
    do {
      uVar8 = puVar12[-1];
      puVar12[-1] = *puVar13;
      *puVar13 = uVar8;
      bVar10 = puVar12 < puVar13 + -1;
      puVar12 = puVar12 + 1;
      puVar13 = puVar13 + -1;
    } while (bVar10);
    local_48 = 0;
    uStack_40 = 0;
    local_50 = 0;
    iVar11 = FUN_00121d04((double)local_58[0],&local_50,0x18,0x18,&DAT_0012efc6);
    FUN_0011bcc0(param_2,&local_50,(long)&local_50 + (long)iVar11);
  }
  if (*(long *)(lVar9 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

