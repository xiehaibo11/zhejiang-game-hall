
void FUN_011a8838(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    *(int *)(*(long *)(param_1 + 8) + 0x20) = *(int *)(*(long *)(param_1 + 8) + 0x20) + -1;
    (**(code **)(*(long *)(param_1 + 0x78) + 0x40))(*(long *)(param_1 + 0x78),0xffffff83);
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  plVar1 = (long *)(param_1 + 0xc0);
  plVar2 = (long *)*plVar1;
  if (plVar1 != plVar2) {
    do {
      *(long *)plVar2[1] = *plVar2;
      *(long *)(*plVar2 + 8) = plVar2[1];
      *(undefined4 *)((long)plVar2 + 0x24) = 0xffffff83;
      *plVar2 = param_1 + 0xd0;
      puVar3 = *(undefined8 **)(param_1 + 0xd8);
      plVar2[1] = (long)puVar3;
      *puVar3 = plVar2;
      *(long **)(param_1 + 0xd8) = plVar2;
      plVar2 = *(long **)(param_1 + 0xc0);
    } while (plVar1 != plVar2);
  }
  FUN_011a8900(param_1);
  if (*(long *)(param_1 + 0x80) != 0) {
    *(int *)(*(long *)(param_1 + 8) + 0x20) = *(int *)(*(long *)(param_1 + 8) + 0x20) + -1;
    (**(code **)(*(long *)(param_1 + 0x80) + 0x48))(*(long *)(param_1 + 0x80),0xffffff83);
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  return;
}

