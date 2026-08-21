
void FUN_01171d00(undefined8 param_1,long param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  int *piVar3;
  long lVar4;
  
  piVar3 = *(int **)(param_2 + 0x40);
  if (*piVar3 == 0) {
    pvVar1 = calloc(1,0x8000);
    cpArrayPush(*(undefined8 *)(param_2 + 0x48),pvVar1);
    lVar4 = 0;
    do {
      cpArrayPush(*(undefined8 *)(param_2 + 0x40),(long)pvVar1 + lVar4);
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != 0x8000);
    piVar3 = *(int **)(param_2 + 0x40);
  }
  puVar2 = (undefined8 *)cpArrayPop(piVar3);
  *puVar2 = param_1;
  puVar2[1] = 1;
  return;
}

