
undefined8 FUN_00a349e4(undefined8 *param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
                    /* try { // try from 00a349f8 to 00b34a0f has its CatchHandler @ 00a34d60 */
  if (*(int *)(param_2 + 0xd4) == 0) {
                    /* try { // try from 00a34a30 to 00b34aeb has its CatchHandler @ 00a34d70 */
    memset((void *)(param_2 + 0xd8),0,0x70);
    *(code **)(param_2 + 0x118) = FUN_00a34ab4;
    *(code **)(param_2 + 0x120) = FUN_00a34acc;
    iVar1 = inflateInit_((void *)(param_2 + 0xd8),"1.2.8",0x70);
    if (iVar1 != 0) {
      if (*(long *)(param_2 + 0x108) == 0) {
        FUN_00a23020(*param_1,
                     "Error while processing content unencoding: Unknown failure within decompression software."
                    );
      }
      else {
        FUN_00a23020(*param_1,"Error while processing content unencoding: %s");
      }
      return 0x3d;
    }
    *(undefined4 *)(param_2 + 0xd4) = 1;
  }
  *(undefined4 *)(param_2 + 0xe0) = param_3;
                    /* try { // try from 00a34a18 to 00b34a23 has its CatchHandler @ 00a34d5c */
  *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(param_2 + 0x80);
                    /* try { // try from 00a34a24 to 00b34a2f has its CatchHandler @ 00a34d58 */
  uVar2 = FUN_00a34ae0(param_1,param_2);
  return uVar2;
}

