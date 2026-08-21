
void FUN_01163fc0(undefined8 *param_1,long param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  
  piVar3 = *(int **)(param_2 + 0x90);
  if (*piVar3 == 0) {
    pvVar1 = calloc(1,0x8000);
    cpArrayPush(*(undefined8 *)(param_2 + 0x98),pvVar1);
    lVar4 = 0xd7;
    do {
      cpArrayPush(*(undefined8 *)(param_2 + 0x90),pvVar1);
      lVar4 = lVar4 + -1;
      pvVar1 = (void *)((long)pvVar1 + 0x98);
    } while (lVar4 != 0);
    piVar3 = *(int **)(param_2 + 0x90);
  }
  uVar2 = cpArrayPop(piVar3);
  cpArbiterInit(uVar2,*param_1,param_1[1]);
  return;
}

