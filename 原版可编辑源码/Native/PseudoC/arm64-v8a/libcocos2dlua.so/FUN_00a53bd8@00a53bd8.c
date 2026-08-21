
undefined8 FUN_00a53bd8(long *param_1,char *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  char *pcVar3;
  
                    /* try { // try from 00a53be4 to 00b53c33 has its CatchHandler @ 00a53be4
                       catch() { ... } // from try @ 00a53be4 with catch @ 00a53be4
                       catch() { ... } // from try @ 00a53c84 with catch @ 00a53be4
                       catch() { ... } // from try @ 00a53d04 with catch @ 00a53be4 */
  if (((*(byte *)(param_1[0x80] + 0x7c) & 1) != 0) &&
     (pcVar3 = (char *)((long)param_1 + 0x68c), *pcVar3 == '\0')) {
    uVar2 = FUN_00a2d674(param_1,0,pcVar3);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*pcVar3 == '\0') {
      if (*param_2 == '\0') {
        return 0;
      }
      goto LAB_00a53c30;
    }
  }
  uVar2 = FUN_00a54a20(param_1 + 0xc3,0);
  bVar1 = (int)param_1[0xd1] == 0;
  *param_2 = bVar1;
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (!bVar1) {
    return 0;
  }
LAB_00a53c30:
                    /* try { // try from 00a53c34 to 00b53c4b has its CatchHandler @ 00a53d1c */
  if (**(int **)(*param_1 + 0x218) != 0) {
                    /* try { // try from 00a53c50 to 00b53c83 has its CatchHandler @ 00a53d18 */
    FUN_00a49fc0(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
  }
                    /* try { // try from 00a53c84 to 00b53cab has its CatchHandler @ 00a53be4 */
  return 0;
}

