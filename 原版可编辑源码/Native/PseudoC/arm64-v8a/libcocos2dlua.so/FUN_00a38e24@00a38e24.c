
undefined4
FUN_00a38e24(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined4 local_14;
  
  uVar1 = FUN_00a38d40(param_1,*(int *)(param_1 + 0x264) == param_2,param_3,param_4,&local_14);
                    /* try { // try from 00a38e48 to 00b38e4f has its CatchHandler @ 00a38fa8 */
  *param_5 = uVar1;
                    /* try { // try from 00a38e50 to 00b38f0b has its CatchHandler @ 00a38d70 */
  return local_14;
}

