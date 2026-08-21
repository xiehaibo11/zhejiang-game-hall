
undefined8 * FUN_0010eae0(long param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  float fVar5;
  
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
      puVar4 = (undefined8 *)0x0;
      do {
        fVar5 = *(float *)(param_1 + lVar3 * 4);
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
          *(undefined4 *)(puVar2 + 3) = 3;
          puVar2[6] = (double)fVar5;
          *(int *)(puVar2 + 5) = (int)fVar5;
        }
        if (lVar3 == 0) {
          puVar1[2] = puVar2;
        }
        else {
          *puVar4 = puVar2;
          puVar2[1] = puVar4;
        }
        lVar3 = lVar3 + 1;
        puVar4 = puVar2;
      } while (lVar3 < param_2);
    }
  }
  return puVar1;
}

