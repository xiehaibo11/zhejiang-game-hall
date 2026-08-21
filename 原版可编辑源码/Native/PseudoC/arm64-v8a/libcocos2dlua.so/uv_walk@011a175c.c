
void uv_walk(long param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *local_50;
  undefined8 local_48;
  
  plVar2 = (long *)(param_1 + 0x10);
  local_50 = (long *)*plVar2;
  if (plVar2 != local_50) {
    local_48 = *(undefined8 *)(param_1 + 0x18);
    *(long ***)local_48 = &local_50;
    puVar1 = (undefined8 *)local_50[1];
    *(undefined8 **)(param_1 + 0x18) = puVar1;
    *puVar1 = plVar2;
    local_50[1] = (long)&local_50;
    if (&local_50 != (long **)local_50) {
      do {
        *(long *)local_50[1] = *local_50;
        *(long *)(*local_50 + 8) = local_50[1];
        *local_50 = (long)plVar2;
        puVar1 = *(undefined8 **)(param_1 + 0x18);
        local_50[1] = (long)puVar1;
        *puVar1 = local_50;
        *(long **)(param_1 + 0x18) = local_50;
        if ((*(byte *)(local_50 + 7) >> 4 & 1) == 0) {
          (*param_2)(local_50 + -4,param_3);
        }
      } while (&local_50 != (long **)local_50);
    }
  }
  return;
}

