
int FUN_00a407ac(undefined8 param_1,long *param_2,char *param_3,undefined1 *param_4)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 00a407c0 to 00b407f3 has its CatchHandler @ 00a408c0 */
  *param_3 = '\0';
  iVar1 = FUN_00a4085c();
  if (iVar1 == 0) {
    lVar2 = *param_2;
                    /* try { // try from 00a4080c to 00b4083f has its CatchHandler @ 00a40890 */
    if ((*(long *)(*(long *)(lVar2 + 0x478) + 0x18) != 0) ||
       (*(long *)(*(long *)(lVar2 + 0x480) + 0x18) != 0)) {
      *param_4 = 1;
      return 0;
    }
    if (*param_3 != '\0') {
      return 0;
    }
    iVar1 = FUN_00a40644(lVar2,param_4);
  }
  if (iVar1 != 0) {
    if (iVar1 != 0x59) {
      if (*param_2 == 0) {
        return iVar1;
      }
      FUN_00a3fd90(*param_2,0);
    }
                    /* try { // try from 00a407f4 to 00b40807 has its CatchHandler @ 00a4088c */
    *param_2 = 0;
  }
  return iVar1;
}

