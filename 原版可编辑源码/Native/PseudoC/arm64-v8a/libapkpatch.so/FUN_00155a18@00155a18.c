
void FUN_00155a18(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = param_2[1];
  uVar1 = lVar5 + 2;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar6 = param_2[2] << 1;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_00155b0c;
    lVar5 = param_2[1];
  }
  *(undefined2 *)((long)pvVar3 + lVar5) = 0x5d5b;
  lVar4 = *(long *)(param_1 + 0x10);
  cVar2 = *(char *)(lVar4 + 8);
  lVar5 = param_2[1] + 2;
  param_2[1] = lVar5;
  if (cVar2 == '-') {
    FUN_00155888(lVar4,param_2);
    lVar5 = param_2[1];
  }
  uVar1 = lVar5 + 5;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar6 = param_2[2] << 1;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
LAB_00155b0c:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((undefined4 *)((long)pvVar3 + lVar5) + 1) = 0x7d;
  *(undefined4 *)((long)pvVar3 + lVar5) = 0x2e2e2e7b;
  param_2[1] = param_2[1] + 5;
  return;
}

