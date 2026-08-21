
undefined8 FUN_00a52fc8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (param_2 == 0) {
    param_2 = param_1[2] + (ulong)*(uint *)(lVar1 + 0x18);
  }
  (**(code **)(lVar1 + 0x10))(param_2,param_1[1]);
                    /* try { // try from 00a53010 to 00b53027 has its CatchHandler @ 00a531a0 */
  (**(code **)(lVar1 + 8))(param_1[2],param_2,*(undefined4 *)(lVar1 + 0x20));
  (**(code **)(lVar1 + 0x10))(param_2,param_1[2]);
                    /* try { // try from 00a53030 to 00b5303b has its CatchHandler @ 00a5319c */
  (*(code *)PTR_free_01d1b748)(param_1);
                    /* try { // try from 00a5303c to 00b53047 has its CatchHandler @ 00a53198 */
                    /* try { // try from 00a53048 to 00b53123 has its CatchHandler @ 00a531b0 */
  return 0;
}

