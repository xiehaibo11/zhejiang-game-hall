
int FUN_00a42678(long *param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined2 uVar2;
  long lVar3;
  int iVar4;
  __pid_t _Var5;
  size_t sVar6;
  size_t sVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  long local_4f8;
  char *local_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined1 auStack_4d0 [24];
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined1 auStack_4a0 [24];
  char local_488;
  undefined4 uStack_487;
  undefined2 uStack_483;
  undefined1 uStack_481;
  undefined1 uStack_480;
  undefined2 local_47f;
  undefined4 local_47d;
  undefined4 local_479;
  undefined4 local_471;
  undefined2 local_46d;
  undefined8 local_46b;
  undefined8 uStack_463;
  undefined8 local_45b;
  undefined8 local_453;
  undefined8 uStack_44b;
  undefined8 local_443;
  char cStack_43b;
  char acStack_43a [9];
  char acStack_431 [6];
  char acStack_42b [8];
  char acStack_423 [8];
  char acStack_41b [4];
  char acStack_417 [30];
  char acStack_3f9 [36];
  char acStack_3d5 [885];
  
                    /* try { // try from 00a4267c to 00b42763 has its CatchHandler @ 00a424c4 */
  lVar3 = tpidr_el0;
  lVar8 = *(long *)(lVar3 + 0x28);
  local_4f8 = 0;
  if ((int)param_1[0xc3] == 1) {
    if ((*(byte *)(param_1[0x80] + 0x7c) & 1) != 0) {
      iVar4 = FUN_00a17c8c(param_1,0,&local_488);
      if ((iVar4 != 0) && (iVar4 != 0x51)) goto LAB_00a42b0c;
                    /* catch() { ... } // from try @ 00a42548 with catch @ 00a426f4 */
      if (local_488 != '\0') goto LAB_00a426f8;
LAB_00a42848:
      iVar4 = 0;
      goto LAB_00a42b0c;
    }
LAB_00a426f8:
                    /* catch() { ... } // from try @ 00a4253c with catch @ 00a426f8 */
    lVar9 = *param_1;
                    /* catch() { ... } // from try @ 00a4251c with catch @ 00a426fc */
                    /* catch() { ... } // from try @ 00a42554 with catch @ 00a4270c */
    *(undefined8 *)(lVar9 + 0x4b11) = 0;
    *(undefined8 *)(lVar9 + 0x4b09) = 0;
    *(undefined4 *)(lVar9 + 0x4b29) = 0;
    *(undefined8 *)(lVar9 + 0x4b21) = 0;
    *(undefined8 *)(lVar9 + 0x4b19) = 0;
    *(undefined2 *)(lVar9 + 0x4b0b) = 0x2f00;
    *(undefined4 *)(lVar9 + 0x4b0d) = 0x424d53ff;
    *(undefined1 *)(lVar9 + 0x4b11) = 0x72;
    *(undefined1 *)(lVar9 + 0x4b16) = 0x18;
    *(undefined2 *)(lVar9 + 0x4b17) = 0x41;
    *(undefined2 *)(lVar9 + 0x4b29) = *(undefined2 *)((long)param_1 + 0x63c);
                    /* try { // try from 00a42764 to 00b427b7 has its CatchHandler @ 00a42764
                       catch() { ... } // from try @ 00a42764 with catch @ 00a42764
                       catch() { ... } // from try @ 00a4291c with catch @ 00a42764 */
    *(undefined2 *)(lVar9 + 0x4b25) = *(undefined2 *)(*(long *)(lVar9 + 0x218) + 0x18);
    _Var5 = getpid();
    *(short *)(lVar9 + 0x4b19) = (short)((uint)_Var5 >> 0x10);
    *(short *)(lVar9 + 0x4b27) = (short)_Var5;
    lVar9 = *param_1;
    *(char (*) [8])(lVar9 + 0x4b34) = (char  [8])0x32312e30204d4c;
    *(undefined8 *)(lVar9 + 0x4b2d) = 0x4c20544e02000c00;
                    /* try { // try from 00a427b8 to 00b427cf has its CatchHandler @ 00a42998 */
    iVar4 = FUN_00a232e8(param_1,0,*param_1 + 0x4b09,0x33,&local_488);
    if (iVar4 == 0) {
      lVar9 = CONCAT17(uStack_481,CONCAT25(uStack_483,CONCAT41(uStack_487,local_488)));
      if (lVar9 != 0x33) {
        param_1[0xca] = 0x33;
                    /* try { // try from 00a427d8 to 00b427e3 has its CatchHandler @ 00a42994 */
        param_1[0xcb] = lVar9;
      }
      param_1[0xc9] = 0;
                    /* try { // try from 00a427e4 to 00b427ef has its CatchHandler @ 00a42990 */
      *(undefined4 *)(param_1 + 0xc3) = 2;
      goto LAB_00a427e8;
    }
  }
  else {
LAB_00a427e8:
                    /* try { // try from 00a427f0 to 00b4291b has its CatchHandler @ 00a429a8 */
    iVar4 = FUN_00a43688(param_1,&local_4f8);
    if ((iVar4 == 0) || (iVar4 == 0x51)) {
      if (local_4f8 == 0) goto LAB_00a42848;
      if ((int)param_1[0xc3] == 3) {
        if (*(int *)(local_4f8 + 9) != 0) {
          FUN_00a11300(param_1,1);
          iVar4 = 0x43;
          goto LAB_00a42b0c;
        }
        uVar2 = *(undefined2 *)(local_4f8 + 0x20);
        *(undefined4 *)(param_1 + 0xc3) = 4;
        *(undefined2 *)((long)param_1 + 0x63c) = uVar2;
        *param_2 = 1;
LAB_00a42894:
        iVar4 = 0;
        param_1[0xcc] = 0;
        goto LAB_00a42b0c;
      }
      if ((int)param_1[0xc3] != 2) {
        iVar4 = 0;
        param_1[0xcc] = 0;
        goto LAB_00a42b0c;
      }
      if ((*(int *)(local_4f8 + 9) != 0) || ((ulong)param_1[0xcc] < 0x51)) {
        FUN_00a11300(param_1,1);
        iVar4 = 7;
        goto LAB_00a42b0c;
      }
      param_1[0xc6] = *(long *)(local_4f8 + 0x49);
      *(undefined4 *)(param_1 + 199) = *(undefined4 *)(local_4f8 + 0x34);
      sVar6 = strlen((char *)param_1[0xc4]);
      sVar7 = strlen((char *)param_1[0xc5]);
      if (sVar6 + sVar7 + 0x55 < 0x401) {
        FUN_00a5326c(*param_1,param_1[0x44],auStack_4a0);
                    /* try { // try from 00a4291c to 00b429ff has its CatchHandler @ 00a42764 */
        FUN_00a53050(auStack_4a0,param_1 + 0xc6,&local_4b8);
        FUN_00a53440(*param_1,param_1[0x44],auStack_4d0);
        FUN_00a53050(auStack_4d0,param_1 + 0xc6,&local_4e8);
        memset(&local_488,0,0x41d);
        local_488 = '\r';
        uStack_487 = CONCAT31(uStack_487._1_3_,0xff);
        uStack_483 = 0x9000;
        uStack_481 = 1;
        uStack_480 = 0;
        local_47f = 1;
        local_47d = (undefined4)param_1[199];
        local_471 = 8;
        local_479 = 0x180018;
                    /* catch() { ... } // from try @ 00a427e4 with catch @ 00a42990 */
                    /* catch() { ... } // from try @ 00a427d8 with catch @ 00a42994 */
        uStack_463 = uStack_4b0;
        local_46b = local_4b8;
                    /* catch() { ... } // from try @ 00a427b8 with catch @ 00a42998 */
        local_45b = local_4a8;
        uStack_44b = uStack_4e0;
        local_453 = local_4e8;
        local_443 = local_4d8;
                    /* catch() { ... } // from try @ 00a427f0 with catch @ 00a429a8 */
        strcpy(&cStack_43b,(char *)param_1[0xc4]);
        sVar6 = strlen((char *)param_1[0xc4]);
        pcVar10 = acStack_43a + sVar6;
        strcpy(pcVar10,(char *)param_1[0xc5]);
        sVar7 = strlen((char *)param_1[0xc5]);
        builtin_strncpy(acStack_43a + sVar7 + sVar6 + 1,"aarch64-unknown-linux-android",0x1e);
        builtin_strncpy(acStack_43a + sVar7 + sVar6 + 0x1f,"curl",5);
                    /* try { // try from 00a42a00 to 00b42a53 has its CatchHandler @ 00a42a00
                       catch() { ... } // from try @ 00a42a00 with catch @ 00a42a00
                       catch() { ... } // from try @ 00a42bb8 with catch @ 00a42a00 */
        pcVar10 = pcVar10 + ((sVar7 + 0x24) - (long)&local_46b);
        local_46d = SUB82(pcVar10,0);
        lVar9 = *param_1;
        uVar1 = (int)pcVar10 + 0x3d;
        *(undefined8 *)(lVar9 + 0x4b11) = 0;
        *(undefined8 *)(lVar9 + 0x4b09) = 0;
        *(undefined4 *)(lVar9 + 0x4b29) = 0;
        *(undefined8 *)(lVar9 + 0x4b21) = 0;
        *(undefined8 *)(lVar9 + 0x4b19) = 0;
        *(ushort *)(lVar9 + 0x4b0b) =
             (ushort)(uVar1 >> 8) & 0xff | (ushort)((uVar1 & 0xff00ff) << 8);
                    /* try { // try from 00a42a54 to 00b42a6b has its CatchHandler @ 00a42c34 */
        *(undefined4 *)(lVar9 + 0x4b0d) = 0x424d53ff;
        *(undefined1 *)(lVar9 + 0x4b11) = 0x73;
        *(undefined1 *)(lVar9 + 0x4b16) = 0x18;
        *(undefined2 *)(lVar9 + 0x4b17) = 0x41;
                    /* try { // try from 00a42a74 to 00b42a7f has its CatchHandler @ 00a42c30 */
        *(undefined2 *)(lVar9 + 0x4b29) = *(undefined2 *)((long)param_1 + 0x63c);
                    /* try { // try from 00a42a80 to 00b42a8b has its CatchHandler @ 00a42c2c */
        *(undefined2 *)(lVar9 + 0x4b25) = *(undefined2 *)(*(long *)(lVar9 + 0x218) + 0x18);
                    /* try { // try from 00a42a8c to 00b42bb7 has its CatchHandler @ 00a42c44 */
        _Var5 = getpid();
        *(short *)(lVar9 + 0x4b19) = (short)((uint)_Var5 >> 0x10);
        *(short *)(lVar9 + 0x4b27) = (short)_Var5;
        memcpy((void *)(*param_1 + 0x4b2d),&local_488,(size_t)(pcVar10 + 0x1d));
        pcVar10 = pcVar10 + 0x41;
        iVar4 = FUN_00a232e8(param_1,0,*param_1 + 0x4b09,pcVar10,&local_4f0);
        if (iVar4 == 0) {
          if (local_4f0 != pcVar10) {
            param_1[0xca] = (long)pcVar10;
            param_1[0xcb] = (long)local_4f0;
          }
          iVar4 = 0;
          param_1[0xc9] = 0;
        }
        if (iVar4 == 0) {
          *(undefined4 *)(param_1 + 0xc3) = 3;
          goto LAB_00a42894;
        }
      }
      else {
        iVar4 = 0x3f;
      }
    }
  }
  FUN_00a11300(param_1,1);
LAB_00a42b0c:
  if (*(long *)(lVar3 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}

