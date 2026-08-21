
void FUN_01848cb4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if ((*(char *)((long)puVar2 + 9) != '\0') &&
       ((*(char *)((long)puVar2 + 9) != '\x02' ||
        (uVar3 = (**(code **)*puVar2)(puVar2,param_2), (uVar3 & 1) == 0)))) {
      lVar6 = param_2[1];
      uVar3 = lVar6 + 1;
      if (uVar3 < (ulong)param_2[2]) {
        pvVar4 = (void *)*param_2;
      }
      else {
        uVar5 = param_2[2] << 1;
        if (uVar3 <= uVar5) {
          uVar3 = uVar5;
        }
        param_2[2] = uVar3;
        pvVar4 = realloc((void *)*param_2,uVar3);
        *param_2 = pvVar4;
        if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar6 = param_2[1];
      }
      *(undefined1 *)((long)pvVar4 + lVar6) = 0x20;
      param_2[1] = param_2[1] + 1;
    }
  }
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  if (*(char *)((long)plVar1 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01848da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  return;
}

