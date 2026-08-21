
ulong FUN_00a48534(long *param_1)

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
                    /* try { // try from 00a48564 to 00b485b7 has its CatchHandler @ 00a48564
                       catch() { ... } // from try @ 00a48564 with catch @ 00a48564
                       catch() { ... } // from try @ 00a485fc with catch @ 00a48564
                       catch() { ... } // from try @ 00a48638 with catch @ 00a48564 */
  if (*(int *)(lVar3 + 0x430) == 3) {
LAB_00a48570:
    uVar2 = 0;
  }
  else {
    if (*(code **)(lVar3 + 0x298) == (code *)0x0) {
      if (*(code **)(lVar3 + 0x2f0) == (code *)0x0) {
                    /* try { // try from 00a485fc to 00b48623 has its CatchHandler @ 00a48564 */
                    /* try { // try from 00a48624 to 00b48637 has its CatchHandler @ 00a486a8 */
        if ((*(code **)(lVar3 + 0x8d10) == fread) &&
           (iVar1 = fseek(*(FILE **)(lVar3 + 0x8d18),0,0), iVar1 != -1)) {
          return 0;
        }
                    /* try { // try from 00a48638 to 00b48703 has its CatchHandler @ 00a48564 */
        FUN_00a38a08(lVar3,"necessary data rewind wasn\'t possible");
      }
      else {
                    /* try { // try from 00a485b8 to 00b485fb has its CatchHandler @ 00a486a8 */
        iVar1 = (**(code **)(lVar3 + 0x2f0))(lVar3,1,*(undefined8 *)(lVar3 + 0x350));
        FUN_00a38740(lVar3,"the ioctl callback returned %d\n",iVar1);
        if (iVar1 == 0) goto LAB_00a48570;
        FUN_00a38a08(lVar3,"ioctl callback returned error %d",iVar1);
      }
    }
    else {
      uVar2 = (**(code **)(lVar3 + 0x298))(*(undefined8 *)(lVar3 + 0x328),0,0);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      FUN_00a38a08(lVar3,"seek callback returned error %d",uVar2 & 0xffffffff);
    }
    uVar2 = 0x41;
  }
  return uVar2;
}

