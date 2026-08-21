
undefined8 hash_table_remove(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  uVar4 = (*(code *)param_1[2])(param_2);
  iVar3 = (int)param_1[1];
  iVar1 = 0;
  if ((long)iVar3 != 0) {
    iVar1 = (int)(uVar4 / (ulong)(long)iVar3);
  }
  puVar2 = (undefined8 *)
           (*param_1 + ((long)((ulong)(uint)((int)uVar4 - iVar1 * iVar3) << 0x20) >> 0x1d));
  do {
    puVar5 = puVar2;
    if ((undefined8 *)*puVar5 == (undefined8 *)0x0) {
      return 0;
    }
    iVar3 = (*(code *)param_1[3])(param_2,*(undefined8 *)*puVar5);
    puVar6 = (undefined8 *)*puVar5;
    puVar2 = puVar6 + 2;
  } while (iVar3 == 0);
  *puVar5 = puVar6[2];
  if ((code *)param_1[4] != (code *)0x0) {
    (*(code *)param_1[4])(*puVar6);
  }
  if ((code *)param_1[5] != (code *)0x0) {
    (*(code *)param_1[5])(puVar6[1]);
  }
  thunk_EXT_FUN_00002bb0(puVar6);
  *(int *)(param_1 + 6) = (int)param_1[6] + -1;
  return 1;
}

