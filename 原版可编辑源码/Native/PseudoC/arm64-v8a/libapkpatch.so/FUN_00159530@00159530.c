
void FUN_00159530(long param_1,undefined8 *param_2)

{
  char cVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  lVar3 = param_2[1];
  if (*(char *)(param_1 + 0x38) != '\0') {
    uVar6 = lVar3 + 0xb;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar6 <= uVar4) {
        uVar6 = uVar4;
      }
      param_2[2] = uVar6;
      pvVar2 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_00159874;
      lVar3 = param_2[1];
    }
    builtin_strncpy((char *)((long)pvVar2 + lVar3),"::operator ",0xb);
    lVar3 = param_2[1] + 0xb;
    param_2[1] = lVar3;
  }
  uVar6 = lVar3 + 3;
  if (uVar6 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    param_2[2] = uVar6;
    pvVar2 = realloc((void *)*param_2,uVar6);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_00159874;
    lVar3 = param_2[1];
  }
  *(undefined1 *)((undefined2 *)((long)pvVar2 + lVar3) + 1) = 0x77;
  *(undefined2 *)((long)pvVar2 + lVar3) = 0x656e;
  lVar5 = param_2[1];
  cVar1 = *(char *)(param_1 + 0x39);
  lVar3 = lVar5 + 3;
  param_2[1] = lVar3;
  if (cVar1 != '\0') {
    uVar6 = lVar5 + 5;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar6 <= uVar4) {
        uVar6 = uVar4;
      }
      param_2[2] = uVar6;
      pvVar2 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_00159874;
      lVar3 = param_2[1];
    }
    *(undefined2 *)((long)pvVar2 + lVar3) = 0x5d5b;
    lVar3 = param_2[1] + 2;
    param_2[1] = lVar3;
  }
  uVar6 = lVar3 + 1;
  if (uVar6 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    param_2[2] = uVar6;
    pvVar2 = realloc((void *)*param_2,uVar6);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_00159874;
    lVar3 = param_2[1];
    uVar6 = lVar3 + 1;
  }
  param_2[1] = uVar6;
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar3 = param_2[1];
    uVar6 = lVar3 + 1;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar6 <= uVar4) {
        uVar6 = uVar4;
      }
      param_2[2] = uVar6;
      pvVar2 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_00159874;
      lVar3 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x28;
    param_2[1] = param_2[1] + 1;
    FUN_0015555c(param_1 + 0x10,param_2);
    lVar3 = param_2[1];
    uVar6 = lVar3 + 1;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar6 <= uVar4) {
        uVar6 = uVar4;
      }
      param_2[2] = uVar6;
      pvVar2 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_00159874;
      lVar3 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x29;
    param_2[1] = param_2[1] + 1;
  }
  plVar7 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
  if (*(char *)((long)plVar7 + 9) != '\x01') {
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar3 = param_2[1];
    uVar6 = lVar3 + 1;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar6 <= uVar4) {
        uVar6 = uVar4;
      }
      param_2[2] = uVar6;
      pvVar2 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_00159874;
      lVar3 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x28;
    param_2[1] = param_2[1] + 1;
    FUN_0015555c(param_1 + 0x28,param_2);
    lVar3 = param_2[1];
    uVar6 = lVar3 + 1;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar6 <= uVar4) {
        uVar6 = uVar4;
      }
      param_2[2] = uVar6;
      pvVar2 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
LAB_00159874:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar3 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x29;
    param_2[1] = param_2[1] + 1;
  }
  return;
}

