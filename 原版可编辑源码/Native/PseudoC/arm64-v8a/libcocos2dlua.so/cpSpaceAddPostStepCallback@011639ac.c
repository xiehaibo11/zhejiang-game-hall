
undefined4 cpSpaceAddPostStepCallback(long param_1,code *param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0xf0);
  if (0 < *piVar4) {
    lVar2 = 0;
    do {
      lVar3 = *(long *)(*(long *)(piVar4 + 2) + lVar2 * 8);
      if ((lVar3 != 0) && (*(long *)(lVar3 + 8) == param_3)) {
        return 0;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *piVar4);
  }
  puVar1 = calloc(1,0x18);
  if (param_2 == (code *)0x0) {
    param_2 = FUN_01163a5c;
  }
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  cpArrayPush(piVar4,puVar1);
  return 1;
}

