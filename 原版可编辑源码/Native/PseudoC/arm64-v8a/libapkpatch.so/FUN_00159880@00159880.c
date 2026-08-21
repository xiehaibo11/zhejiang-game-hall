
void FUN_00159880(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  size_t sVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  pvVar2 = *(void **)(param_1 + 0x10);
  sVar3 = *(long *)(param_1 + 0x18) - (long)pvVar2;
  if (sVar3 != 0) {
    lVar6 = param_2[1];
    uVar1 = lVar6 + sVar3;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar4 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar4 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_001599b0;
      lVar6 = param_2[1];
    }
    memmove((void *)((long)pvVar4 + lVar6),pvVar2,sVar3);
    param_2[1] = param_2[1] + sVar3;
  }
  plVar7 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
  if (*(char *)((long)plVar7 + 9) != '\x01') {
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
  }
  pvVar2 = *(void **)(param_1 + 0x28);
  sVar3 = *(long *)(param_1 + 0x30) - (long)pvVar2;
  if (sVar3 != 0) {
    lVar6 = param_2[1];
    uVar1 = lVar6 + sVar3;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar4 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar4 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) {
LAB_001599b0:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar6 = param_2[1];
    }
    memmove((void *)((long)pvVar4 + lVar6),pvVar2,sVar3);
    param_2[1] = param_2[1] + sVar3;
  }
  return;
}

