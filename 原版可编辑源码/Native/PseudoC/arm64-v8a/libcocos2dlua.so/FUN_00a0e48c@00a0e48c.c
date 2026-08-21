
undefined8
FUN_00a0e48c(long param_1,undefined8 *param_2,ulong *param_3,undefined8 *param_4,ulong *param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
                    /* try { // try from 00a0e49c to 00b0e507 has its CatchHandler @ 00a0e678 */
  uVar2 = *param_3 >> 2;
  uVar3 = *param_5 >> 2;
  if (uVar2 <= *param_5 >> 2) {
    uVar3 = uVar2;
  }
  if (uVar3 != 0) {
    puVar4 = (undefined4 *)*param_4;
    puVar6 = (undefined4 *)*param_2;
    *param_3 = *param_3 + uVar3 * -4;
    *param_5 = *param_5 + uVar3 * -4;
    do {
      puVar7 = puVar6 + 1;
      uVar1 = *puVar6;
      puVar5 = puVar4 + 1;
      *puVar4 = uVar1;
      if (*(code **)(param_1 + 0x80) != (code *)0x0) {
        (**(code **)(param_1 + 0x80))(uVar1,*(undefined8 *)(param_1 + 0x88));
      }
      uVar3 = uVar3 - 1;
      puVar4 = puVar5;
      puVar6 = puVar7;
    } while (uVar3 != 0);
                    /* try { // try from 00a0e510 to 00b0e51f has its CatchHandler @ 00a0e63c */
    *param_2 = puVar7;
    *param_4 = puVar5;
  }
                    /* try { // try from 00a0e520 to 00b0e547 has its CatchHandler @ 00a0e648 */
  return 0;
}

