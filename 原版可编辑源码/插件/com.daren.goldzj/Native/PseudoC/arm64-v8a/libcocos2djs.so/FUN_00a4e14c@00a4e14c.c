
void FUN_00a4e14c(long param_1,undefined1 *param_2)

{
  int iVar1;
  
  *param_2 = 0;
  FUN_00a11300(param_1,0);
  *(undefined8 *)(param_1 + 0x668) = 1800000;
                    /* try { // try from 00a4e190 to 00b4e1a7 has its CatchHandler @ 00a4e3e4 */
  *(code **)(param_1 + 0x678) = FUN_00a4e814;
  *(code **)(param_1 + 0x680) = FUN_00a4fd20;
  *(long *)(param_1 + 0x670) = param_1;
                    /* try { // try from 00a4e1b0 to 00b4e1bb has its CatchHandler @ 00a4e3e0 */
  if (((*(byte *)(*(long *)(param_1 + 0x400) + 0x7c) & 1) == 0) ||
     (iVar1 = FUN_00a17ba8(param_1,0), iVar1 == 0)) {
                    /* try { // try from 00a4e1bc to 00b4e1c7 has its CatchHandler @ 00a4e3dc */
    FUN_00a3e210(param_1 + 0x618);
                    /* try { // try from 00a4e1c8 to 00b4e367 has its CatchHandler @ 00a4e3f4 */
    *(undefined4 *)(param_1 + 0x6c8) = 1;
    FUN_00a3e038(param_1 + 0x618,0);
    *param_2 = *(int *)(param_1 + 0x6c8) == 0;
  }
  return;
}

