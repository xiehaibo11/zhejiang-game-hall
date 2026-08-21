
undefined8 FUN_00d8b56c(long *param_1)

{
  void *__dest;
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)param_1[5];
  lVar1 = plVar4[9];
  __dest = malloc(lVar1 << 1);
  if (__dest == (void *)0x0) {
    puVar2 = (undefined8 *)*param_1;
    puVar2[5] = 0xa00000038;
    (*(code *)*puVar2)(param_1);
  }
  memcpy(__dest,(void *)plVar4[8],plVar4[9]);
  if ((void *)plVar4[7] != (void *)0x0) {
    free((void *)plVar4[7]);
  }
  lVar3 = plVar4[9];
  plVar4[7] = (long)__dest;
  plVar4[8] = (long)__dest;
  plVar4[9] = lVar1 << 1;
  *plVar4 = (long)__dest + lVar3;
  plVar4[1] = lVar3;
  return 1;
}

