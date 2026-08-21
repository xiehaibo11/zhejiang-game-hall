
undefined8 FUN_00a52dc0(long *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_1[1]);
                    /* try { // try from 00a52de4 to 00b52df3 has its CatchHandler @ 00a52fa0 */
                    /* try { // try from 00a52df4 to 00b52fbb has its CatchHandler @ 00a52d90 */
  (*(code *)PTR_free_01d1b748)(param_1[1]);
  (*(code *)PTR_free_01d1b748)(param_1);
  return 0;
}

