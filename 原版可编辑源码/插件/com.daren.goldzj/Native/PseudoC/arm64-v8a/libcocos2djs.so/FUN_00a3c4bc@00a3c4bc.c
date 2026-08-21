
undefined8 FUN_00a3c4bc(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  int local_24;
  
  local_24 = 0;
  uVar2 = FUN_00a41854(param_1 + 0xd4,param_1);
  if ((uVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 00a3c370 with catch @ 00a3c538 */
    uVar3 = 0;
    *(undefined4 *)(param_1 + 0xd1) = 0;
  }
  else {
    if (((*(uint *)(param_1 + 0xd8) & *(uint *)((long)param_1 + 0x6c4)) >> 2 & 1) != 0) {
      uVar3 = FUN_00a41874(param_1 + 0xd4,param_1,0,&local_24);
      iVar4 = local_24;
      if (((int)uVar3 == 0) && (local_24 == 1)) {
                    /* catch() { ... } // from try @ 00a3c364 with catch @ 00a3c520 */
        uVar3 = 0;
                    /* catch() { ... } // from try @ 00a3c358 with catch @ 00a3c524 */
        *(undefined4 *)(param_1 + 0xd1) = 5;
                    /* catch() { ... } // from try @ 00a3c338 with catch @ 00a3c528 */
        iVar4 = 1;
      }
      if (iVar4 != 0 || (int)uVar3 != 0) {
        return uVar3;
      }
    }
    uVar5 = *(uint *)((long)param_1 + 0x6c4) & *(uint *)(param_1 + 0xd8);
    if ((uVar5 >> 1 & 1) == 0) {
      if ((uVar5 & 1) == 0) {
        FUN_00a22d58(*param_1,"No known authentication mechanisms supported!\n");
        uVar3 = 0x43;
      }
      else {
        uVar5 = (uint)*(byte *)(param_1 + 0x78);
        if (*(byte *)(param_1 + 0x78) != 0) {
          puVar1 = &DAT_0189703a;
          if ((undefined1 *)param_1[0x43] != (undefined1 *)0x0) {
            puVar1 = (undefined1 *)param_1[0x43];
          }
          uVar3 = FUN_00a3e3a4(param_1 + 0xc3,"USER %s",puVar1);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar5 = 7;
        }
        uVar3 = 0;
        *(uint *)(param_1 + 0xd1) = uVar5;
      }
    }
    else {
                    /* try { // try from 00a3c590 to 00b3c5e7 has its CatchHandler @ 00a3c590
                       catch() { ... } // from try @ 00a3c590 with catch @ 00a3c590
                       catch() { ... } // from try @ 00a3c784 with catch @ 00a3c590 */
      uVar3 = FUN_00a3c5d8(param_1);
    }
  }
  return uVar3;
}

