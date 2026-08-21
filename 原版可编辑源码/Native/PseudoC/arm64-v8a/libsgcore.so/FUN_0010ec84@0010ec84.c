
undefined8 * FUN_0010ec84(long param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = (undefined8 *)(*(code *)PTR_malloc_00113048)(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 3) = 5;
    if (0 < param_2) {
      lVar3 = 0;
      plVar4 = (long *)0x0;
      do {
        plVar2 = (long *)FUN_0010e924(*(undefined8 *)(param_1 + lVar3 * 8));
        if (lVar3 == 0) {
          puVar1[2] = plVar2;
        }
        else {
          *plVar4 = (long)plVar2;
          plVar2[1] = (long)plVar4;
        }
        lVar3 = lVar3 + 1;
        plVar4 = plVar2;
      } while (lVar3 < param_2);
    }
  }
  return puVar1;
}

