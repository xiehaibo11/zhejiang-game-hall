
ulong FUN_00a5137c(long *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 local_60 [16];
  int local_44;
  
  lVar7 = *param_1;
  lVar2 = param_1[0x4c];
  uVar1 = *(undefined4 *)((long)param_1 + 0x264);
  *param_2 = 0;
  lVar6 = *(long *)(lVar7 + 0x368);
  if (lVar6 < 1) {
    lVar6 = 60000;
  }
  local_60 = FUN_00a18e40();
  lVar4 = FUN_00a0f850(lVar7,local_60,0);
  if ((lVar4 == 0) || (lVar6 <= lVar4)) {
    lVar4 = FUN_00a18ea0(local_60._0_8_,local_60._8_8_,*(undefined8 *)(lVar7 + 0x9f8),
                         *(undefined8 *)(lVar7 + 0xa00));
    lVar4 = lVar6 - lVar4;
    if (lVar4 == 0) {
      lVar4 = -1;
    }
  }
  FUN_00a22d58(lVar7,"Checking for server connect\n");
  if (lVar4 < 0) {
    FUN_00a23020(lVar7,"Accept timeout occurred while waiting server connect");
                    /* try { // try from 00a514a4 to 00b51587 has its CatchHandler @ 00a512e8 */
    uVar5 = 0xc;
  }
  else if (((param_1[0xc4] == 0) || ((byte *)param_1[0xc3] == (byte *)0x0)) ||
          (*(byte *)param_1[0xc3] < 0x34)) {
    uVar5 = FUN_00a159e8((int)lVar2,uVar1,0xffffffff,0);
    uVar3 = (uint)uVar5;
    if (uVar3 != 0) {
      if (uVar3 == 0xffffffff) {
        FUN_00a23020(lVar7,"Error while waiting for server connect");
        uVar5 = 10;
      }
      else if ((uVar3 >> 3 & 1) == 0) {
        if ((uVar5 & 1) == 0) {
          uVar5 = 0;
        }
        else {
          FUN_00a22d58(lVar7,"Ctrl conn has data while waiting for data conn\n");
          FUN_00a4e500(local_60,param_1,&local_44);
                    /* catch() { ... } // from try @ 00a51368 with catch @ 00a51518 */
                    /* catch() { ... } // from try @ 00a5135c with catch @ 00a5151c */
                    /* catch() { ... } // from try @ 00a5133c with catch @ 00a51520 */
          uVar3 = 10;
          if (local_44 < 400) {
            uVar3 = 8;
          }
          uVar5 = (ulong)uVar3;
        }
      }
      else {
        FUN_00a22d58(lVar7,"Ready to accept data connection from server\n");
        uVar5 = 0;
        *param_2 = 1;
      }
    }
  }
  else {
    FUN_00a22d58(lVar7,"There is negative response in cache while serv connect\n");
    FUN_00a4e500(local_60,param_1,&local_44);
    uVar5 = 10;
  }
  return uVar5;
}

