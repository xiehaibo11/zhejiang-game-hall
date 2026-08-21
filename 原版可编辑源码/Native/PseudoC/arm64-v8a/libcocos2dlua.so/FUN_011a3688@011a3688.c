
void FUN_011a3688(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  param_3 = *(uint *)(param_2 + 0x28) | param_3;
  *(uint *)(param_2 + 0x28) = param_3;
  uVar1 = *(uint *)(param_1 + 0x70);
  if (uVar1 < *(int *)(param_2 + 0x30) + 1U) {
    pvVar4 = *(void **)(param_1 + 0x68);
    if (pvVar4 == (void *)0x0) {
      uVar11 = 0;
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)((long)pvVar4 + (ulong)uVar1 * 8);
      uVar11 = *(undefined8 *)((long)pvVar4 + (ulong)(uVar1 + 1) * 8);
    }
    uVar1 = *(int *)(param_2 + 0x30) + 2;
    uVar1 = uVar1 | uVar1 >> 1;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 0x10;
    pvVar4 = realloc(pvVar4,(ulong)(uVar1 + 1) << 3);
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar2 = *(uint *)(param_1 + 0x70);
    uVar3 = uVar1 - 1;
    if (uVar2 < uVar3) {
      memset((void *)((long)pvVar4 + (ulong)uVar2 * 8),0,(ulong)((uVar1 - 2) - uVar2) * 8 + 8);
    }
    *(undefined8 *)((long)pvVar4 + (ulong)uVar3 * 8) = uVar10;
    *(undefined8 *)((long)pvVar4 + (ulong)uVar1 * 8) = uVar11;
    *(void **)(param_1 + 0x68) = pvVar4;
    *(uint *)(param_1 + 0x70) = uVar3;
    param_3 = *(uint *)(param_2 + 0x28);
  }
  if (*(uint *)(param_2 + 0x2c) != param_3) {
    plVar5 = (long *)(param_2 + 0x18);
    if (plVar5 == (long *)*plVar5) {
      *(long *)(param_2 + 0x18) = param_1 + 0x58;
      plVar8 = *(long **)(param_1 + 0x60);
      *(long **)(param_2 + 0x20) = plVar8;
      *plVar8 = (long)plVar5;
      *(long **)(param_1 + 0x60) = plVar5;
      lVar6 = *(long *)(param_1 + 0x68);
      lVar7 = (long)*(int *)(param_2 + 0x30);
      lVar9 = *(long *)(lVar6 + lVar7 * 8);
    }
    else {
      lVar6 = *(long *)(param_1 + 0x68);
      lVar7 = (long)*(int *)(param_2 + 0x30);
      lVar9 = *(long *)(lVar6 + lVar7 * 8);
    }
    if (lVar9 == 0) {
      *(long *)(lVar6 + lVar7 * 8) = param_2;
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
    }
  }
  return;
}

