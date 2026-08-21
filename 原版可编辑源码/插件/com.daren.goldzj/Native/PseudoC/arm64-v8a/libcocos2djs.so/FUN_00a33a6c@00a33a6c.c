
void FUN_00a33a6c(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if (*(code **)(param_1 + 10) != (code *)0x0) {
      (**(code **)(param_1 + 10))(*(undefined8 *)(param_1 + 8));
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 10) = 0;
    }
    if (*(long *)(param_1 + 6) != 0) {
      FUN_00a34128(*(long *)(param_1 + 6),0);
      *(undefined8 *)(param_1 + 6) = 0;
    }
                    /* try { // try from 00a33aa8 to 00b33aaf has its CatchHandler @ 00a33c50 */
                    /* try { // try from 00a33ab8 to 00b33adf has its CatchHandler @ 00a33c4c */
    (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 2));
    *(undefined8 *)(param_1 + 2) = 0;
    (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 4));
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *param_1 = 0;
  }
  return;
}

