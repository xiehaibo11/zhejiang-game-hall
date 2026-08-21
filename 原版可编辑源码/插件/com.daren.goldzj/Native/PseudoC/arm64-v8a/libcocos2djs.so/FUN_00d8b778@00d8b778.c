
void FUN_00d8b778(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  if (0 < param_2) {
    plVar2 = *(long **)(param_1 + 0x28);
    lVar1 = plVar2[1];
    if (lVar1 < param_2) {
      do {
        param_2 = param_2 - lVar1;
        (*(code *)plVar2[3])(param_1);
        lVar1 = plVar2[1];
      } while (lVar1 < param_2);
    }
    *plVar2 = *plVar2 + param_2;
    plVar2[1] = lVar1 - param_2;
  }
  return;
}

