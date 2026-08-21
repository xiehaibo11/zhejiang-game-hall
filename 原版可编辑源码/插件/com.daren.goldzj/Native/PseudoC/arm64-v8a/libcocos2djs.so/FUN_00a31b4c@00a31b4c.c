
ulong FUN_00a31b4c(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  *(undefined1 *)((long)param_1 + 0x3cb) = 0;
  *(uint *)(lVar3 + 0x1e4) = *(uint *)(lVar3 + 0x1e4) & 0xfffffffd;
  if (*(long *)(lVar3 + 0x290) != 0) {
    return 0;
  }
  if (*(int *)(lVar3 + 0x430) == 3) {
LAB_00a31b88:
    uVar2 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 00a31ae0 with catch @ 00a31b90 */
    if (*(code **)(lVar3 + 0x298) == (code *)0x0) {
      if (*(code **)(lVar3 + 0x2f0) == (code *)0x0) {
                    /* try { // try from 00a31c2c to 00b31c37 has its CatchHandler @ 00a31ee8 */
                    /* try { // try from 00a31c38 to 00b31c43 has its CatchHandler @ 00a31ee4 */
                    /* try { // try from 00a31c44 to 00b31e63 has its CatchHandler @ 00a31efc */
        if ((*(code **)(lVar3 + 0x8d10) == fread) &&
           (iVar1 = fseek(*(FILE **)(lVar3 + 0x8d18),0,0), iVar1 != -1)) {
          return 0;
        }
        FUN_00a23020(lVar3,"necessary data rewind wasn\'t possible");
      }
      else {
        iVar1 = (**(code **)(lVar3 + 0x2f0))(lVar3,1,*(undefined8 *)(lVar3 + 0x350));
        FUN_00a22d58(lVar3,"the ioctl callback returned %d\n",iVar1);
        if (iVar1 == 0) goto LAB_00a31b88;
                    /* try { // try from 00a31c0c to 00b31c23 has its CatchHandler @ 00a31eec */
        FUN_00a23020(lVar3,"ioctl callback returned error %d",iVar1);
      }
    }
    else {
      uVar2 = (**(code **)(lVar3 + 0x298))(*(undefined8 *)(lVar3 + 0x328),0,0);
                    /* try { // try from 00a31bac to 00b31c0b has its CatchHandler @ 00a31bac
                       catch() { ... } // from try @ 00a31bac with catch @ 00a31bac
                       catch() { ... } // from try @ 00a31e64 with catch @ 00a31bac */
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      FUN_00a23020(lVar3,"seek callback returned error %d",uVar2 & 0xffffffff);
    }
    uVar2 = 0x41;
  }
  return uVar2;
}

