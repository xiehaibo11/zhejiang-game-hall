
void cpSpaceSetGravity(undefined4 param_1,undefined4 param_2,long param_3)

{
  int *piVar1;
  long lVar2;
  
  piVar1 = *(int **)(param_3 + 0x50);
  *(undefined4 *)(param_3 + 4) = param_1;
  *(undefined4 *)(param_3 + 8) = param_2;
  if (0 < *piVar1) {
    lVar2 = 0;
    do {
      cpBodyActivate(*(undefined8 *)(*(long *)(piVar1 + 2) + lVar2 * 8));
      lVar2 = lVar2 + 1;
    } while (lVar2 < *piVar1);
  }
  return;
}

