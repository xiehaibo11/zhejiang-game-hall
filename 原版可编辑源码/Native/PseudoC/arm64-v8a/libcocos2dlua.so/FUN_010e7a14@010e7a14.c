
undefined8 FUN_010e7a14(long *param_1)

{
  void *__dest;
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  
                    /* catch() { ... } // from try @ 010e79f8 with catch @ 010e7a18 */
  plVar4 = (long *)param_1[5];
  lVar1 = plVar4[9];
  __dest = malloc(lVar1 << 1);
  if (__dest == (void *)0x0) {
    puVar2 = (undefined8 *)*param_1;
    puVar2[5] = 0xa00000038;
    (*(code *)*puVar2)(param_1);
  }
                    /* try { // try from 010e7a68 to 011e7a6b has its CatchHandler @ 010e7ab4 */
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

