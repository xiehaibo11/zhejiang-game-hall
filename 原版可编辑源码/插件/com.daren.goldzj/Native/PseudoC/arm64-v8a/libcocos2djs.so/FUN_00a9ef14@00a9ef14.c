
void FUN_00a9ef14(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x268);
  if (plVar1 != (long *)0x0) {
    lVar2 = *(long *)(param_1 + 0x260);
    if (lVar2 != 0) {
      *(long **)(lVar2 + 0x268) = plVar1;
      plVar1 = *(long **)(param_1 + 0x268);
    }
    *plVar1 = lVar2;
    *(undefined8 *)(param_1 + 0x260) = 0;
    *(undefined8 *)(param_1 + 0x268) = 0;
  }
  return;
}

