
undefined8 FUN_00a66708(undefined8 param_1,byte *param_2,ulong param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
                    /* try { // try from 00a66730 to 00b6677f has its CatchHandler @ 00a66730
                       catch() { ... } // from try @ 00a66730 with catch @ 00a66730
                       catch() { ... } // from try @ 00a667dc with catch @ 00a66730
                       catch() { ... } // from try @ 00a66820 with catch @ 00a66730 */
  if ((((param_3 < 4) || (9 < *param_2 - 0x30)) || (9 < param_2[1] - 0x30)) ||
     ((9 < param_2[2] - 0x30 || (param_2[3] != 0x20)))) {
    uVar2 = 0;
  }
  else {
    strtol((char *)param_2,(char **)0x0,10);
    uVar1 = FUN_00a2c6e4();
    *param_4 = uVar1;
    uVar2 = 1;
  }
                    /* try { // try from 00a66780 to 00b667db has its CatchHandler @ 00a66860 */
  return uVar2;
}

