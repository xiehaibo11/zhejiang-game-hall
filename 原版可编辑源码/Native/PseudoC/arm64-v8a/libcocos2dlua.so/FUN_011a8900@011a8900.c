
void FUN_011a8900(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *local_40;
  undefined8 local_38;
  
  plVar2 = (long *)(param_1 + 0xd0);
  local_40 = (long *)*plVar2;
  if (plVar2 != local_40) {
    local_38 = *(undefined8 *)(param_1 + 0xd8);
    *(long ***)local_38 = &local_40;
    puVar3 = (undefined8 *)local_40[1];
    *(undefined8 **)(param_1 + 0xd8) = puVar3;
    *puVar3 = plVar2;
    local_40[1] = (long)&local_40;
    while (plVar2 = local_40, &local_40 != (long **)local_40) {
      *(long *)local_40[1] = *local_40;
      *(long *)(*local_40 + 8) = local_40[1];
      *(int *)(*(long *)(param_1 + 8) + 0x20) = *(int *)(*(long *)(param_1 + 8) + 0x20) + -1;
      if (local_40[3] != 0) {
        lVar1 = FUN_011a1a9c(local_40[3] + (ulong)*(uint *)(local_40 + 2) * 0x10,
                             (int)local_40[4] - *(uint *)(local_40 + 2));
        *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) - lVar1;
        if ((long *)plVar2[3] != plVar2 + 5) {
          FUN_0119f27c();
        }
        plVar2[3] = 0;
      }
      if ((code *)plVar2[-3] != (code *)0x0) {
        (*(code *)plVar2[-3])(plVar2 + -0xb,*(undefined4 *)((long)plVar2 + 0x24));
      }
    }
  }
  return;
}

