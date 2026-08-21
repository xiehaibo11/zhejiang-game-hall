
void FUN_00a34128(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if (param_1[3] != 0) {
    plVar1 = param_1 + 1;
    do {
      puVar5 = (undefined8 *)*plVar1;
      if (puVar5 == (undefined8 *)0x0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      lVar3 = puVar5[2];
      if ((undefined8 *)*param_1 == puVar5) {
        *param_1 = lVar3;
        plVar2 = plVar1;
        if (lVar3 != 0) {
          plVar2 = (long *)(lVar3 + 8);
        }
        *plVar2 = 0;
      }
      else {
        lVar4 = puVar5[1];
        *(long *)(lVar4 + 0x10) = lVar3;
        plVar2 = plVar1;
        if (puVar5[2] != 0) {
          plVar2 = (long *)(puVar5[2] + 8);
        }
        *plVar2 = lVar4;
      }
      (*(code *)param_1[2])(param_2,*puVar5);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      (*(code *)PTR_free_01d1b748)(puVar5);
      lVar3 = param_1[3];
                    /* try { // try from 00a341d4 to 00b34217 has its CatchHandler @ 00a3422c */
      param_1[3] = lVar3 + -1;
    } while (lVar3 + -1 != 0);
  }
  (*(code *)PTR_free_01d1b748)(param_1);
  return;
}

