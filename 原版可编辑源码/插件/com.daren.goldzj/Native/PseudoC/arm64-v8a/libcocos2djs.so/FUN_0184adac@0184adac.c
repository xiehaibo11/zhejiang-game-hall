
void FUN_0184adac(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  void *pvVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 uVar7;
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  plVar1 = *(long **)(param_1 + 0x18);
  if (*(char *)((long)plVar1 + 10) == '\0') {
LAB_0184ae20:
    lVar6 = param_2[1];
    uVar2 = lVar6 + 1;
    if (uVar2 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar2 <= uVar5) {
        uVar2 = uVar5;
      }
      param_2[2] = uVar2;
      pvVar3 = realloc((void *)*param_2,uVar2);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_0184af5c;
      lVar6 = param_2[1];
    }
    puVar4 = (undefined1 *)((long)pvVar3 + lVar6);
    uVar7 = 0x28;
  }
  else {
    if (*(char *)((long)plVar1 + 10) == '\x02') {
      uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_2);
      if ((uVar2 & 1) != 0) goto LAB_0184ae20;
      plVar1 = *(long **)(param_1 + 0x18);
    }
    if ((*(char *)((long)plVar1 + 0xb) == '\0') ||
       ((*(char *)((long)plVar1 + 0xb) == '\x02' &&
        (uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2), (uVar2 & 1) != 0))))
    goto LAB_0184ae20;
    lVar6 = param_2[1];
    uVar2 = lVar6 + 1;
    if (uVar2 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar2 <= uVar5) {
        uVar2 = uVar5;
      }
      param_2[2] = uVar2;
      pvVar3 = realloc((void *)*param_2,uVar2);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_0184af5c;
      lVar6 = param_2[1];
    }
    puVar4 = (undefined1 *)((long)pvVar3 + lVar6);
    uVar7 = 0x20;
  }
  *puVar4 = uVar7;
  param_2[1] = param_2[1] + 1;
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  if (*(char *)((long)plVar1 + 9) != '\x01') {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  }
  lVar6 = param_2[1];
  uVar2 = lVar6 + 3;
  if (uVar2 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar2 <= uVar5) {
      uVar2 = uVar5;
    }
    param_2[2] = uVar2;
    pvVar3 = realloc((void *)*param_2,uVar2);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
LAB_0184af5c:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar6 = param_2[1];
  }
  *(undefined1 *)((undefined2 *)((long)pvVar3 + lVar6) + 1) = 0x2a;
  *(undefined2 *)((long)pvVar3 + lVar6) = 0x3a3a;
  param_2[1] = param_2[1] + 3;
  return;
}

