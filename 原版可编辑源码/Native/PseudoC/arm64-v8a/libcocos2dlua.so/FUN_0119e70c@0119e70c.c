
void FUN_0119e70c(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *local_40;
  long local_38;
  
  uv_mutex_lock(param_1 + -0x28);
  plVar4 = (long *)(param_1 + -0x38);
  local_40 = (long *)*plVar4;
  if (local_40 == plVar4) {
    plVar2 = &local_38;
    local_40 = (long *)&local_40;
  }
  else {
    local_38 = *(long *)(param_1 + -0x30);
    *(long ***)local_38 = &local_40;
    plVar2 = local_40 + 1;
    puVar3 = (undefined8 *)*plVar2;
    *(undefined8 **)(param_1 + -0x30) = puVar3;
    *puVar3 = plVar4;
  }
  *plVar2 = (long)&local_40;
  uv_mutex_unlock(param_1 + -0x28);
  if (&local_40 != (long **)local_40) {
    do {
      *(long *)local_40[1] = *local_40;
      *(long *)(*local_40 + 8) = local_40[1];
      uVar1 = 0xffffff83;
      if ((code *)local_40[-3] != FUN_0119e7dc) {
        uVar1 = 0;
      }
      (*(code *)local_40[-2])(local_40 + -3,uVar1);
    } while (&local_40 != (long **)local_40);
  }
  return;
}

