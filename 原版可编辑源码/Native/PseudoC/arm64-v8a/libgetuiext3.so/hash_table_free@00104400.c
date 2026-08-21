
void hash_table_free(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  iVar2 = (int)param_1[1];
  lVar1 = *param_1;
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar1 + lVar4 * 8);
      if (puVar3 != (undefined8 *)0x0) {
        do {
          puVar5 = (undefined8 *)puVar3[2];
          if ((code *)param_1[4] != (code *)0x0) {
            (*(code *)param_1[4])(*puVar3);
          }
          if ((code *)param_1[5] != (code *)0x0) {
            (*(code *)param_1[5])(puVar3[1]);
          }
          thunk_EXT_FUN_00002bb0(puVar3);
          puVar3 = puVar5;
        } while (puVar5 != (undefined8 *)0x0);
        iVar2 = (int)param_1[1];
        lVar1 = *param_1;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  thunk_EXT_FUN_00002bb0();
  thunk_EXT_FUN_00002bb0(param_1);
  return;
}

