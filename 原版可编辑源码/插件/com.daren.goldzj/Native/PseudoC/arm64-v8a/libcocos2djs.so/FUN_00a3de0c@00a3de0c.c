
undefined8 FUN_00a3de0c(long param_1,byte *param_2,ulong param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
                    /* try { // try from 00a3de40 to 00b3de57 has its CatchHandler @ 00a3e090 */
  if ((((3 < param_3) && (*param_2 - 0x30 < 10)) && (param_2[1] - 0x30 < 10)) &&
     (param_2[2] - 0x30 < 10)) {
                    /* try { // try from 00a3de60 to 00b3de6b has its CatchHandler @ 00a3e08c */
    if ((param_3 == 5) || (param_2[3] == 0x20)) {
                    /* try { // try from 00a3deac to 00b3dee7 has its CatchHandler @ 00a3e070 */
      strtol((char *)param_2,(char **)0x0,10);
      iVar2 = FUN_00a16cfc();
      iVar1 = 0;
      if (iVar2 != 1) {
        iVar1 = iVar2;
      }
      *param_4 = iVar1;
      return 1;
    }
                    /* try { // try from 00a3de6c to 00b3de77 has its CatchHandler @ 00a3e088 */
                    /* try { // try from 00a3de78 to 00b3de8f has its CatchHandler @ 00a3e0a0 */
    if ((param_2[3] == 0x2d) &&
       ((*(int *)(param_1 + 0x688) == 7 || (*(int *)(param_1 + 0x688) == 2)))) {
      *param_4 = 1;
      return 1;
    }
  }
  return 0;
}

