
void FUN_0015daf4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (*(char *)((long)plVar1 + 10) != '\0') {
    if (*(char *)((long)plVar1 + 10) == '\x02') {
      uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_2);
      if ((uVar2 & 1) != 0) goto LAB_0015db5c;
      plVar1 = *(long **)(param_1 + 0x18);
    }
    if ((*(char *)((long)plVar1 + 0xb) != '\0') &&
       ((*(char *)((long)plVar1 + 0xb) != '\x02' ||
        (uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2), (uVar2 & 1) == 0))))
    goto LAB_0015dbac;
  }
LAB_0015db5c:
  lVar5 = param_2[1];
  uVar2 = lVar5 + 1;
  if (uVar2 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar2 <= uVar4) {
      uVar2 = uVar4;
    }
    param_2[2] = uVar2;
    pvVar3 = realloc((void *)*param_2,uVar2);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar5) = 0x29;
  param_2[1] = param_2[1] + 1;
LAB_0015dbac:
                    /* WARNING: Could not recover jumptable at 0x0015dbc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),param_2);
  return;
}

