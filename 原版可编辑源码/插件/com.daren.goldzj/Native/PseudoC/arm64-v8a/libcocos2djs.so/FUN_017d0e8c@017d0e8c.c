
void FUN_017d0e8c(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  char cVar5;
  Zone *pZVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  if (*(char *)(param_3 + 4) == '\n') {
    uVar8 = **(ulong **)(param_3 + 0x10);
    iVar7 = (int)uVar8;
    *(int *)(param_2 + 0x38) = iVar7;
    if (iVar7 == 0) goto LAB_017d0f64;
    if (iVar7 != 1) {
      pZVar6 = *(Zone **)(param_1 + 0x70);
      uVar8 = uVar8 & 0xffffffff;
      uVar9 = uVar8 * 0x10;
      lVar4 = *(long *)(pZVar6 + 0x10);
      if (uVar9 < (ulong)(*(long *)(pZVar6 + 0x18) - lVar4) ||
          uVar9 - (*(long *)(pZVar6 + 0x18) - lVar4) == 0) {
        *(ulong *)(pZVar6 + 0x10) = lVar4 + uVar9;
      }
      else {
        lVar4 = v8::internal::Zone::NewExpand(pZVar6,uVar9);
      }
      lVar10 = 0;
      uVar9 = 0;
      *(long *)(param_2 + 0x40) = lVar4;
      do {
        cVar5 = *(char *)(param_3 + 4);
        if (cVar5 == '\n') {
          cVar5 = *(char *)(*(long *)(*(long *)(param_3 + 0x10) + 0x10) + uVar9);
        }
        uVar9 = uVar9 + 1;
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x40) + lVar10);
        lVar10 = lVar10 + 0x10;
        *puVar3 = uVar11;
        *(char *)(puVar3 + 1) = cVar5;
      } while (uVar8 != uVar9);
      goto LAB_017d0f64;
    }
  }
  else {
    if (*(char *)(param_3 + 4) == '\0') {
      *(undefined4 *)(param_2 + 0x38) = 0;
      goto LAB_017d0f64;
    }
    *(undefined4 *)(param_2 + 0x38) = 1;
  }
  cVar5 = *(char *)(param_3 + 4);
  if (cVar5 == '\n') {
    cVar5 = **(char **)(*(long *)(param_3 + 0x10) + 0x10);
  }
  *(undefined8 *)(param_2 + 0x40) = uVar11;
  *(char *)(param_2 + 0x48) = cVar5;
LAB_017d0f64:
  if (*(char *)(param_3 + 4) == '\n') {
    uVar8 = *(ulong *)(*(long *)(param_3 + 0x10) + 8);
    iVar7 = (int)uVar8;
    *(int *)(param_2 + 0x18) = iVar7;
    if (iVar7 != 0) {
      if (iVar7 == 1) {
        uVar11 = param_4[1];
        *(undefined8 *)(param_2 + 0x20) = *param_4;
        *(char *)(param_2 + 0x28) = (char)uVar11;
      }
      else {
        pZVar6 = *(Zone **)(param_1 + 0x70);
        uVar8 = uVar8 & 0xffffffff;
        uVar9 = uVar8 * 0x10;
        puVar3 = *(undefined8 **)(pZVar6 + 0x10);
        if (uVar9 < (ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar3) ||
            uVar9 - (*(long *)(pZVar6 + 0x18) - (long)puVar3) == 0) {
          *(undefined8 **)(pZVar6 + 0x10) = puVar3 + uVar8 * 2;
        }
        else {
          puVar3 = (undefined8 *)v8::internal::Zone::NewExpand(pZVar6,uVar9);
        }
        *(undefined8 **)(param_2 + 0x20) = puVar3;
        uVar11 = param_4[1];
        lVar4 = uVar8 - 1;
        *puVar3 = *param_4;
        *(char *)(puVar3 + 1) = (char)uVar11;
        if (lVar4 != 0) {
          lVar10 = 0;
          do {
            lVar2 = lVar10 + 0x10;
            uVar11 = *(undefined8 *)((long)param_4 + lVar10 + 0x18);
            lVar4 = lVar4 + -1;
            lVar1 = *(long *)(param_2 + 0x20) + lVar10;
            lVar10 = lVar10 + 0x10;
            *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)((long)param_4 + lVar2);
            *(char *)(lVar1 + 0x18) = (char)uVar11;
          } while (lVar4 != 0);
        }
      }
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x18) = 0;
  }
  return;
}

