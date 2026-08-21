
undefined8 FUN_00a34074(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
                    /* try { // try from 00a3408c to 00b340a3 has its CatchHandler @ 00a3422c */
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
      if ((undefined8 *)param_2[2] != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)param_2[2];
      }
                    /* try { // try from 00a340c0 to 00b34163 has its CatchHandler @ 00a34260 */
      puVar2[1] = lVar3;
    }
    (*(code *)param_1[2])(param_3,*param_2);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    (*(code *)PTR_free_01d1b748)(param_2);
    param_1[3] = param_1[3] + -1;
  }
  return 1;
}

