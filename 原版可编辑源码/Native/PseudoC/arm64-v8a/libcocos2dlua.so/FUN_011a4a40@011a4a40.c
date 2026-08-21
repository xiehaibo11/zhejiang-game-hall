
void FUN_011a4a40(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *local_40;
  undefined8 local_38;
  
  local_40 = *(long **)(param_1 + 0x180);
  plVar1 = (long *)(param_1 + 0x180);
  if (plVar1 != local_40) {
    local_38 = *(undefined8 *)(param_1 + 0x188);
    *(long ***)local_38 = &local_40;
    plVar2 = (long *)local_40[1];
    *(long **)(param_1 + 0x188) = plVar2;
    *plVar2 = (long)plVar1;
    local_40[1] = (long)&local_40;
    if (&local_40 != (long **)local_40) {
      do {
        *(long *)local_40[1] = *local_40;
        *(long *)(*local_40 + 8) = local_40[1];
        *local_40 = (long)plVar1;
        puVar3 = *(undefined8 **)(param_1 + 0x188);
        local_40[1] = (long)puVar3;
        *puVar3 = local_40;
        *(long **)(param_1 + 0x188) = local_40;
        (*(code *)local_40[-1])(local_40 + -0xd);
      } while (&local_40 != (long **)local_40);
    }
  }
  return;
}

