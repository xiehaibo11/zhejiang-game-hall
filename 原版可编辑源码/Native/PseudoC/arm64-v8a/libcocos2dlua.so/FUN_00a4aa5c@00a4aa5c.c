
undefined8 FUN_00a4aa5c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if ((param_2 != (undefined8 *)0x0) && (param_1[3] != 0)) {
    puVar2 = (undefined8 *)param_2[2];
    if ((undefined8 *)*param_1 == param_2) {
      *param_1 = puVar2;
      puVar1 = param_1;
      if (puVar2 != (undefined8 *)0x0) {
        puVar1 = puVar2;
      }
      puVar1[1] = 0;
    }
    else {
      lVar3 = param_2[1];
      *(undefined8 **)(lVar3 + 0x10) = puVar2;
      puVar2 = param_1;
                    /* catch() { ... } // from try @ 00a4a948 with catch @ 00a4aaa4 */
      if ((undefined8 *)param_2[2] != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)param_2[2];
      }
                    /* catch() { ... } // from try @ 00a4a92c with catch @ 00a4aaa8 */
      puVar2[1] = lVar3;
    }
    (*(code *)param_1[2])(param_3,*param_2);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    (*(code *)PTR_free_01769a00)(param_2);
    param_1[3] = param_1[3] + -1;
  }
  return 1;
}

