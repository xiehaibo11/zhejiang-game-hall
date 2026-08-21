
undefined8 FUN_00a33fc4(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
                    /* try { // try from 00a33fe4 to 00b33ffb has its CatchHandler @ 00a34250 */
  puVar2 = (undefined8 *)(*(code *)PTR_malloc_01d1b740)(0x18);
  uVar3 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = param_3;
    lVar4 = param_1[3];
    if (lVar4 == 0) {
      plVar5 = param_1 + 1;
      *param_1 = (long)puVar2;
      puVar2[1] = 0;
      puVar2[2] = 0;
    }
    else {
                    /* try { // try from 00a34004 to 00b3400f has its CatchHandler @ 00a3424c */
      plVar5 = (long *)(param_2 + 0x10);
      plVar1 = plVar5;
      if (param_2 == 0) {
        plVar1 = param_1;
      }
                    /* try { // try from 00a34010 to 00b3401b has its CatchHandler @ 00a34248 */
      lVar6 = *plVar1;
      puVar2[1] = param_2;
      puVar2[2] = lVar6;
      if (param_2 == 0) {
        *(undefined8 **)(*param_1 + 8) = puVar2;
        plVar5 = param_1;
      }
      else {
                    /* try { // try from 00a3401c to 00b34033 has its CatchHandler @ 00a34260 */
        plVar1 = param_1;
        if ((long *)*plVar5 != (long *)0x0) {
          plVar1 = (long *)*plVar5;
        }
        plVar1[1] = (long)puVar2;
      }
    }
    *plVar5 = (long)puVar2;
    uVar3 = 1;
    param_1[3] = lVar4 + 1;
  }
  return uVar3;
}

