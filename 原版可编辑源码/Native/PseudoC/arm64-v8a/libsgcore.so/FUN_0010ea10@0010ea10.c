
undefined8 * FUN_0010ea10(long param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  puVar2 = (undefined8 *)(*(code *)PTR_malloc_00113048)(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 3) = 5;
    if (0 < param_2) {
      lVar4 = 0;
      puVar5 = (undefined8 *)0x0;
      do {
        iVar1 = *(int *)(param_1 + lVar4 * 4);
        puVar3 = (undefined8 *)(*(code *)PTR_malloc_00113048)(0x40);
        if (puVar3 != (undefined8 *)0x0) {
          puVar3[1] = 0;
          *puVar3 = 0;
          puVar3[3] = 0;
          puVar3[2] = 0;
          puVar3[5] = 0;
          puVar3[4] = 0;
          puVar3[7] = 0;
          puVar3[6] = 0;
          *(undefined4 *)(puVar3 + 3) = 3;
          puVar3[6] = (double)iVar1;
          *(int *)(puVar3 + 5) = iVar1;
        }
        if (lVar4 == 0) {
          puVar2[2] = puVar3;
        }
        else {
          *puVar5 = puVar3;
          puVar3[1] = puVar5;
        }
        lVar4 = lVar4 + 1;
        puVar5 = puVar3;
      } while (lVar4 < param_2);
    }
  }
  return puVar2;
}

