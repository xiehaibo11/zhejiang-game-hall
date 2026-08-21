
undefined4
BIO_ADDR_rawmake(undefined2 *param_1,int param_2,char *param_3,long param_4,undefined2 param_5)

{
  undefined8 uVar1;
  
                    /* try { // try from 00af1ee4 to 00bf1eeb has its CatchHandler @ 00af1f20 */
                    /* try { // try from 00af1eec to 00bf1f3f has its CatchHandler @ 00af1e50 */
  if (param_2 == 10) {
    if (param_4 == 0x10) {
      *(undefined8 *)(param_1 + 10) = 0;
      *(undefined8 *)(param_1 + 6) = 0;
      *(undefined8 *)(param_1 + 2) = 0;
      param_1[1] = param_5;
      *param_1 = 10;
      uVar1 = *(undefined8 *)param_3;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)(param_1 + 4) = uVar1;
      return 1;
    }
  }
  else if (param_2 == 2) {
                    /* try { // try from 00af1f68 to 00bf1f6b has its CatchHandler @ 00af1f90 */
    if (param_4 == 4) {
      *(undefined4 *)(param_1 + 6) = 0;
      *(undefined8 *)(param_1 + 2) = 0;
      param_1[1] = param_5;
      *param_1 = 2;
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)param_3;
      return 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00af1f68 with catch @ 00af1f90
                        */
    }
  }
  else if ((param_2 == 1) && (param_4 + 1U < 0x6d)) {
    memset(param_1,0,0x6e);
                    /* catch() { ... } // from try @ 00af1ee4 with catch @ 00af1f20 */
                    /* catch() { ... } // from try @ 00af1e8c with catch @ 00af1f24 */
    *param_1 = 1;
    strncpy((char *)(param_1 + 1),param_3,0x6b);
    return 1;
  }
  return 0;
}

