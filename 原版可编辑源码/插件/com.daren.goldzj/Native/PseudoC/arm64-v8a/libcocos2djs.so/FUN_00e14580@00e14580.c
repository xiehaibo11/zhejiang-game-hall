
void FUN_00e14580(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 != 0) {
      plVar2 = *(long **)(param_1 + 0x20);
      do {
        if (*plVar2 != 0) {
          (**(code **)(param_2 + 0x10))(param_2);
        }
        iVar1 = iVar1 + -1;
        *plVar2 = 0;
        plVar2 = plVar2 + 1;
      } while (iVar1 != 0);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(param_2 + 0x10))(param_2);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}

