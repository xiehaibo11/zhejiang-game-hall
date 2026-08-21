
void FUN_015d8a20(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  Zone *pZVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uStack_20;
  undefined3 uStack_1c;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  piVar1 = (int *)(param_2 + 0x40);
  if (*(char *)(param_3 + 4) == '\n') {
    uVar10 = **(ulong **)(param_3 + 0x10);
    iVar9 = (int)uVar10;
    *piVar1 = iVar9;
    if (iVar9 == 0) goto LAB_015d8b34;
    if (iVar9 != 1) {
      pZVar8 = *(Zone **)(param_1 + 0x70);
      uVar10 = uVar10 & 0xffffffff;
      uVar11 = uVar10 * 0x18;
      lVar5 = *(long *)(pZVar8 + 0x10);
      if (uVar11 < (ulong)(*(long *)(pZVar8 + 0x18) - lVar5) ||
          uVar11 - (*(long *)(pZVar8 + 0x18) - lVar5) == 0) {
        *(ulong *)(pZVar8 + 0x10) = lVar5 + uVar11;
      }
      else {
        lVar5 = v8::internal::Zone::NewExpand(pZVar8,uVar11);
      }
      lVar12 = 0;
      uVar11 = 0;
      *(long *)(param_2 + 0x48) = lVar5;
      do {
        cVar6 = *(char *)(param_3 + 4);
        if (cVar6 == '\n') {
          cVar6 = *(char *)(*(long *)(*(long *)(param_3 + 0x10) + 0x10) + uVar11);
        }
        uVar11 = uVar11 + 1;
        puVar4 = (undefined8 *)(*(long *)(param_2 + 0x48) + lVar12);
        *puVar4 = uVar13;
        *(char *)(puVar4 + 1) = cVar6;
        lVar12 = lVar12 + 0x18;
        puVar4[2] = 0;
        *(uint *)((long)puVar4 + 0xc) = CONCAT31(uStack_1c,uStack_20._3_1_);
        *(undefined4 *)((long)puVar4 + 9) = uStack_20;
      } while (uVar10 != uVar11);
      goto LAB_015d8b34;
    }
  }
  else {
    if (*(char *)(param_3 + 4) == '\0') {
      *piVar1 = 0;
      goto LAB_015d8b34;
    }
    *piVar1 = 1;
  }
  cVar6 = *(char *)(param_3 + 4);
  if (cVar6 == '\n') {
    cVar6 = **(char **)(*(long *)(param_3 + 0x10) + 0x10);
  }
  *(undefined8 *)(param_2 + 0x48) = uVar13;
  *(char *)(param_2 + 0x50) = cVar6;
  *(uint *)(param_2 + 0x54) = CONCAT31(uStack_1c,uStack_20._3_1_);
  *(undefined4 *)(param_2 + 0x51) = uStack_20;
  *(undefined8 *)(param_2 + 0x58) = 0;
LAB_015d8b34:
  if (*(char *)(param_3 + 4) == '\n') {
    uVar10 = *(ulong *)(*(long *)(param_3 + 0x10) + 8);
    iVar9 = (int)uVar10;
    *(int *)(param_2 + 0x18) = iVar9;
    if (iVar9 != 0) {
      if (iVar9 == 1) {
        uVar14 = param_4[1];
        uVar13 = *param_4;
        *(undefined8 *)(param_2 + 0x30) = param_4[2];
        *(undefined8 *)(param_2 + 0x28) = uVar14;
        *(undefined8 *)(param_2 + 0x20) = uVar13;
      }
      else {
        pZVar8 = *(Zone **)(param_1 + 0x70);
        uVar10 = uVar10 & 0xffffffff;
        uVar11 = uVar10 * 0x18;
        puVar4 = *(undefined8 **)(pZVar8 + 0x10);
        if (uVar11 < (ulong)(*(long *)(pZVar8 + 0x18) - (long)puVar4) ||
            uVar11 - (*(long *)(pZVar8 + 0x18) - (long)puVar4) == 0) {
          *(undefined8 **)(pZVar8 + 0x10) = puVar4 + uVar10 * 3;
        }
        else {
          puVar4 = (undefined8 *)v8::internal::Zone::NewExpand(pZVar8,uVar11);
        }
        *(undefined8 **)(param_2 + 0x20) = puVar4;
        uVar14 = param_4[1];
        uVar13 = *param_4;
        lVar5 = uVar10 - 1;
        puVar4[2] = param_4[2];
        puVar4[1] = uVar14;
        *puVar4 = uVar13;
        if (lVar5 != 0) {
          lVar12 = 0x18;
          do {
            puVar4 = (undefined8 *)((long)param_4 + lVar12);
            uVar14 = puVar4[1];
            uVar13 = *puVar4;
            lVar5 = lVar5 + -1;
            puVar2 = (undefined8 *)(*(long *)(param_2 + 0x20) + lVar12);
            lVar12 = lVar12 + 0x18;
            puVar2[2] = puVar4[2];
            puVar2[1] = uVar14;
            *puVar2 = uVar13;
          } while (lVar5 != 0);
        }
      }
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x18) = 0;
  }
  if (*(long *)(lVar3 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

