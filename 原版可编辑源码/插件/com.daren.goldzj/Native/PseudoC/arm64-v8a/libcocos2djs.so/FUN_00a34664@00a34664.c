
undefined8 FUN_00a34664(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_1 != (long *)0x0) {
    lVar2 = *param_1;
    lVar1 = (*(code *)param_1[1])(param_2,param_3,(long)(int)param_1[4]);
    for (puVar3 = (undefined8 *)**(long **)(lVar2 + lVar1 * 8); puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)puVar3[2]) {
      puVar4 = (undefined8 *)*puVar3;
      lVar2 = (*(code *)param_1[2])(puVar4[1],puVar4[2],param_2,param_3);
      if (lVar2 != 0) {
        return *puVar4;
      }
    }
  }
                    /* catch() { ... } // from try @ 00a345cc with catch @ 00a346e4 */
  return 0;
}

