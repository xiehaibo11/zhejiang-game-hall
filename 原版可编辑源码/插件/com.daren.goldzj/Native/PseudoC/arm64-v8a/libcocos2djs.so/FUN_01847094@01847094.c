
void FUN_01847094(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong *puVar5;
  ulong *puVar6;
  
  puVar5 = param_2 + 1;
  uVar2 = *puVar5;
  if (*(char *)(param_1 + 0x38) != '\0') {
    uVar3 = uVar2 + 0xb;
    if (uVar3 < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar2 = param_2[2] << 1;
      if (uVar3 <= uVar2) {
        uVar3 = uVar2;
      }
      param_2[2] = uVar3;
      pvVar1 = realloc((void *)*param_2,uVar3);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_018473f4;
      uVar2 = *puVar5;
    }
    builtin_strncpy((char *)((long)pvVar1 + uVar2),"::operator ",0xb);
    uVar2 = *puVar5 + 0xb;
    *puVar5 = uVar2;
  }
  puVar6 = param_2 + 2;
  uVar3 = uVar2 + 3;
  if (uVar3 < *puVar6) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = *puVar6 << 1;
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    param_2[2] = uVar3;
    pvVar1 = realloc((void *)*param_2,uVar3);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) goto LAB_018473f4;
    uVar2 = *puVar5;
  }
  *(undefined1 *)((undefined2 *)((long)pvVar1 + uVar2) + 1) = 0x77;
  *(undefined2 *)((long)pvVar1 + uVar2) = 0x656e;
  uVar3 = *puVar5;
  uVar2 = uVar3 + 3;
  *puVar5 = uVar2;
  if (*(char *)(param_1 + 0x39) != '\0') {
    uVar3 = uVar3 + 5;
    if (uVar3 < *puVar6) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar2 = *puVar6 << 1;
      if (uVar3 <= uVar2) {
        uVar3 = uVar2;
      }
      param_2[2] = uVar3;
      pvVar1 = realloc((void *)*param_2,uVar3);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_018473f4;
      uVar2 = *puVar5;
    }
    *(undefined2 *)((long)pvVar1 + uVar2) = 0x5d5b;
    uVar2 = *puVar5 + 2;
    *puVar5 = uVar2;
  }
  uVar3 = uVar2 + 1;
  if (uVar3 < *puVar6) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = *puVar6 << 1;
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    param_2[2] = uVar3;
    pvVar1 = realloc((void *)*param_2,uVar3);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) goto LAB_018473f4;
    uVar2 = *puVar5;
    uVar3 = uVar2 + 1;
  }
  *puVar5 = uVar3;
  *(undefined1 *)((long)pvVar1 + uVar2) = 0x20;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar3 = *puVar5;
    uVar2 = uVar3 + 1;
    if (uVar2 < *puVar6) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar3 = *puVar6 << 1;
      if (uVar2 <= uVar3) {
        uVar2 = uVar3;
      }
      param_2[2] = uVar2;
      pvVar1 = realloc((void *)*param_2,uVar2);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_018473f4;
      uVar3 = *puVar5;
    }
    *(undefined1 *)((long)pvVar1 + uVar3) = 0x28;
    param_2[1] = param_2[1] + 1;
    FUN_01844180(param_1 + 0x10,param_2);
    uVar3 = param_2[1];
    uVar2 = uVar3 + 1;
    if (uVar2 < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar3 = param_2[2] << 1;
      if (uVar2 <= uVar3) {
        uVar2 = uVar3;
      }
      param_2[2] = uVar2;
      pvVar1 = realloc((void *)*param_2,uVar2);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_018473f4;
      uVar3 = *puVar5;
    }
    *(undefined1 *)((long)pvVar1 + uVar3) = 0x29;
    *puVar5 = *puVar5 + 1;
  }
  plVar4 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
  if (*(char *)((long)plVar4 + 9) != '\x01') {
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar3 = *puVar5;
    uVar2 = uVar3 + 1;
    if (uVar2 < *puVar6) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar3 = *puVar6 << 1;
      if (uVar2 <= uVar3) {
        uVar2 = uVar3;
      }
      param_2[2] = uVar2;
      pvVar1 = realloc((void *)*param_2,uVar2);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_018473f4;
      uVar3 = *puVar5;
    }
    *(undefined1 *)((long)pvVar1 + uVar3) = 0x28;
    param_2[1] = param_2[1] + 1;
    FUN_01844180(param_1 + 0x28,param_2);
    uVar3 = param_2[1];
    uVar2 = uVar3 + 1;
    if (uVar2 < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar3 = param_2[2] << 1;
      if (uVar2 <= uVar3) {
        uVar2 = uVar3;
      }
      param_2[2] = uVar2;
      pvVar1 = realloc((void *)*param_2,uVar2);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
LAB_018473f4:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      uVar3 = *puVar5;
    }
    *(undefined1 *)((long)pvVar1 + uVar3) = 0x29;
    *puVar5 = *puVar5 + 1;
  }
  return;
}

