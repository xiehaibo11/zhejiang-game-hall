
void FUN_0125e14c(long param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  byte *pbVar3;
  undefined1 uVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  char local_68;
  char cStack_67;
  char cStack_66;
  char cStack_65;
  char cStack_64;
  char cStack_63;
  char cStack_62;
  char cStack_61;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  pbVar3 = *(byte **)(param_1 + 0x10);
  if (0x10 < (*(long *)(param_1 + 0x18) - (long)pbVar3) + 1U) {
    cVar8 = '\t';
    cVar1 = '\0';
    if (9 < *pbVar3 - 0x30) {
      cVar1 = cVar8;
    }
    cVar9 = -0x30;
    cVar2 = -0x30;
    if (9 < pbVar3[1] - 0x30) {
      cVar2 = -0x57;
    }
    cStack_61 = cVar2 + pbVar3[1] + (cVar1 + *pbVar3) * '\x10';
    cVar1 = '\0';
    if (9 < pbVar3[2] - 0x30) {
      cVar1 = cVar8;
    }
    if (9 < pbVar3[3] - 0x30) {
      cVar9 = -0x57;
    }
    cStack_67 = cVar9 + pbVar3[3] + (cVar1 + pbVar3[2]) * '\x10';
    cVar1 = '\0';
    if (9 < pbVar3[4] - 0x30) {
      cVar1 = cVar8;
    }
    cVar9 = -0x30;
    cVar2 = cVar9;
    if (9 < pbVar3[5] - 0x30) {
      cVar2 = -0x57;
    }
    cStack_66 = cVar2 + pbVar3[5] + (cVar1 + pbVar3[4]) * '\x10';
    cVar1 = '\0';
    if (9 < pbVar3[6] - 0x30) {
      cVar1 = cVar8;
    }
    cVar8 = cVar9;
    if (9 < pbVar3[7] - 0x30) {
      cVar8 = -0x57;
    }
    cStack_65 = cVar8 + pbVar3[7] + (cVar1 + pbVar3[6]) * '\x10';
    cVar8 = '\t';
    cVar1 = '\0';
    if (9 < pbVar3[8] - 0x30) {
      cVar1 = cVar8;
    }
    cVar2 = -0x30;
    if (9 < pbVar3[9] - 0x30) {
      cVar2 = -0x57;
    }
    cStack_64 = cVar2 + pbVar3[9] + (cVar1 + pbVar3[8]) * '\x10';
    cVar1 = '\0';
    if (9 < pbVar3[10] - 0x30) {
      cVar1 = cVar8;
    }
    if (9 < pbVar3[0xb] - 0x30) {
      cVar9 = -0x57;
    }
    cStack_63 = cVar9 + pbVar3[0xb] + (cVar1 + pbVar3[10]) * '\x10';
    cVar1 = '\0';
    if (9 < pbVar3[0xc] - 0x30) {
      cVar1 = cVar8;
    }
    cVar9 = -0x30;
    cVar2 = cVar9;
    if (9 < pbVar3[0xd] - 0x30) {
      cVar2 = -0x57;
    }
    cStack_62 = cVar2 + pbVar3[0xd] + (cVar1 + pbVar3[0xc]) * '\x10';
    puVar10 = (undefined1 *)((ulong)&local_68 | 2);
    cVar1 = '\0';
    if (9 < pbVar3[0xe] - 0x30) {
      cVar1 = cVar8;
    }
    if (9 < pbVar3[0xf] - 0x30) {
      cVar9 = -0x57;
    }
    local_68 = cVar9 + pbVar3[0xf] + (cVar1 + pbVar3[0xe]) * '\x10';
    puVar11 = (undefined1 *)((ulong)&local_68 | 6);
    do {
      uVar4 = puVar10[-1];
      puVar10[-1] = *puVar11;
      *puVar11 = uVar4;
      bVar6 = puVar10 < puVar11 + -1;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + -1;
    } while (bVar6);
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    iVar7 = FUN_0125e0a8(CONCAT17(cStack_61,
                                  CONCAT16(cStack_62,
                                           CONCAT15(cStack_63,
                                                    CONCAT14(cStack_64,
                                                             CONCAT13(cStack_65,
                                                                      CONCAT12(cStack_66,
                                                                               CONCAT11(cStack_67,
                                                                                        local_68))))
                                                   ))),&local_60,0x20,0x20,&DAT_014a2461);
    FUN_01258064(param_2,&local_60,(long)&local_60 + (long)iVar7);
  }
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

