
int FUN_00a59060(long *param_1,undefined1 *param_2)

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
  
                    /* try { // try from 00a5907c to 00b5908b has its CatchHandler @ 00a59270 */
  lVar3 = tpidr_el0;
  lVar8 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00a5908c to 00b590d3 has its CatchHandler @ 00a59018 */
  local_4f8 = 0;
  if ((int)param_1[0xc3] == 1) {
    if ((*(byte *)(param_1[0x80] + 0x7c) & 1) != 0) {
      iVar4 = FUN_00a2d674(param_1,0,&local_488);
                    /* try { // try from 00a590d4 to 00b590eb has its CatchHandler @ 00a5927c */
      if ((iVar4 != 0) && (iVar4 != 0x51)) goto LAB_00a594f4;
      if (local_488 != '\0') goto LAB_00a590e0;
LAB_00a59230:
                    /* try { // try from 00a59230 to 00b5929b has its CatchHandler @ 00a59018 */
      iVar4 = 0;
      goto LAB_00a594f4;
    }
LAB_00a590e0:
    lVar9 = *param_1;
                    /* try { // try from 00a590f0 to 00b59127 has its CatchHandler @ 00a59278 */
    *(undefined8 *)(lVar9 + 0x4b11) = 0;
    *(undefined8 *)(lVar9 + 0x4b09) = 0;
    *(undefined4 *)(lVar9 + 0x4b29) = 0;
    *(undefined8 *)(lVar9 + 0x4b21) = 0;
    *(undefined8 *)(lVar9 + 0x4b19) = 0;
    *(undefined2 *)(lVar9 + 0x4b0b) = 0x2f00;
    *(undefined4 *)(lVar9 + 0x4b0d) = 0x424d53ff;
    *(undefined1 *)(lVar9 + 0x4b11) = 0x72;
    *(undefined1 *)(lVar9 + 0x4b16) = 0x18;
                    /* try { // try from 00a59134 to 00b59167 has its CatchHandler @ 00a59280 */
    *(undefined2 *)(lVar9 + 0x4b17) = 0x41;
    *(undefined2 *)(lVar9 + 0x4b29) = *(undefined2 *)((long)param_1 + 0x63c);
    *(undefined2 *)(lVar9 + 0x4b25) = *(undefined2 *)(*(long *)(lVar9 + 0x218) + 0x18);
    _Var5 = getpid();
    *(short *)(lVar9 + 0x4b19) = (short)((uint)_Var5 >> 0x10);
    *(short *)(lVar9 + 0x4b27) = (short)_Var5;
    lVar9 = *param_1;
                    /* try { // try from 00a59174 to 00b591a7 has its CatchHandler @ 00a59274 */
    *(char (*) [8])(lVar9 + 0x4b34) = (char  [8])0x32312e30204d4c;
    *(undefined8 *)(lVar9 + 0x4b2d) = 0x4c20544e02000c00;
    iVar4 = FUN_00a38cd0(param_1,0,*param_1 + 0x4b09,0x33,&local_488);
                    /* try { // try from 00a591a8 to 00b591cf has its CatchHandler @ 00a59018 */
    if (iVar4 == 0) {
      lVar9 = CONCAT17(uStack_481,CONCAT25(uStack_483,CONCAT41(uStack_487,local_488)));
      if (lVar9 != 0x33) {
        param_1[0xca] = 0x33;
        param_1[0xcb] = lVar9;
      }
      param_1[0xc9] = 0;
      *(undefined4 *)(param_1 + 0xc3) = 2;
      goto LAB_00a591d0;
    }
  }
  else {
LAB_00a591d0:
                    /* try { // try from 00a591d0 to 00b591e3 has its CatchHandler @ 00a5927c */
    iVar4 = FUN_00a5a070(param_1,&local_4f8);
                    /* try { // try from 00a591e8 to 00b591fb has its CatchHandler @ 00a59280 */
    if ((iVar4 == 0) || (iVar4 == 0x51)) {
      if (local_4f8 == 0) goto LAB_00a59230;
                    /* try { // try from 00a591fc to 00b5921b has its CatchHandler @ 00a59018 */
      if ((int)param_1[0xc3] == 3) {
        if (*(int *)(local_4f8 + 9) != 0) {
          FUN_00a26ce8(param_1,1);
          iVar4 = 0x43;
          goto LAB_00a594f4;
        }
        uVar2 = *(undefined2 *)(local_4f8 + 0x20);
        *(undefined4 *)(param_1 + 0xc3) = 4;
                    /* catch() { ... } // from try @ 00a5907c with catch @ 00a59270 */
        *(undefined2 *)((long)param_1 + 0x63c) = uVar2;
                    /* catch() { ... } // from try @ 00a59174 with catch @ 00a59274
                       catch() { ... } // from try @ 00a59228 with catch @ 00a59274 */
        *param_2 = 1;
                    /* catch() { ... } // from try @ 00a590f0 with catch @ 00a59278
                       catch() { ... } // from try @ 00a5921c with catch @ 00a59278 */
LAB_00a5927c:
                    /* catch() { ... } // from try @ 00a590d4 with catch @ 00a5927c
                       catch() { ... } // from try @ 00a591d0 with catch @ 00a5927c */
        iVar4 = 0;
                    /* catch() { ... } // from try @ 00a59134 with catch @ 00a59280
                       catch() { ... } // from try @ 00a591e8 with catch @ 00a59280 */
        param_1[0xcc] = 0;
        goto LAB_00a594f4;
      }
      if ((int)param_1[0xc3] != 2) {
        iVar4 = 0;
        param_1[0xcc] = 0;
        goto LAB_00a594f4;
      }
      if ((*(int *)(local_4f8 + 9) != 0) || ((ulong)param_1[0xcc] < 0x51)) {
                    /* try { // try from 00a5921c to 00b59223 has its CatchHandler @ 00a59278 */
        FUN_00a26ce8(param_1,1);
                    /* try { // try from 00a59228 to 00b5922f has its CatchHandler @ 00a59274 */
        iVar4 = 7;
        goto LAB_00a594f4;
      }
      param_1[0xc6] = *(long *)(local_4f8 + 0x49);
      *(undefined4 *)(param_1 + 199) = *(undefined4 *)(local_4f8 + 0x34);
                    /* try { // try from 00a5929c to 00b592eb has its CatchHandler @ 00a5929c
                       catch() { ... } // from try @ 00a5929c with catch @ 00a5929c
                       catch() { ... } // from try @ 00a5933c with catch @ 00a5929c
                       catch() { ... } // from try @ 00a593bc with catch @ 00a5929c */
      sVar6 = strlen((char *)param_1[0xc4]);
      sVar7 = strlen((char *)param_1[0xc5]);
      if (sVar6 + sVar7 + 0x55 < 0x401) {
                    /* try { // try from 00a592ec to 00b59303 has its CatchHandler @ 00a593d4 */
        FUN_00a69c54(*param_1,param_1[0x44],auStack_4a0);
        FUN_00a69a38(auStack_4a0,param_1 + 0xc6,&local_4b8);
                    /* try { // try from 00a59308 to 00b5933b has its CatchHandler @ 00a593d0 */
        FUN_00a69e28(*param_1,param_1[0x44],auStack_4d0);
        FUN_00a69a38(auStack_4d0,param_1 + 0xc6,&local_4e8);
        memset(&local_488,0,0x41d);
                    /* try { // try from 00a5933c to 00b59363 has its CatchHandler @ 00a5929c */
        local_488 = '\r';
        uStack_487 = CONCAT31(uStack_487._1_3_,0xff);
        uStack_483 = 0x9000;
        uStack_481 = 1;
        uStack_480 = 0;
        local_47f = 1;
        local_47d = (undefined4)param_1[199];
                    /* try { // try from 00a59364 to 00b59377 has its CatchHandler @ 00a593d4 */
        local_471 = 8;
        local_479 = 0x180018;
        uStack_463 = uStack_4b0;
        local_46b = local_4b8;
        local_45b = local_4a8;
        uStack_44b = uStack_4e0;
        local_453 = local_4e8;
        local_443 = local_4d8;
        strcpy(&cStack_43b,(char *)param_1[0xc4]);
        sVar6 = strlen((char *)param_1[0xc4]);
        pcVar10 = acStack_43a + sVar6;
                    /* try { // try from 00a593b4 to 00b593bb has its CatchHandler @ 00a593d0 */
        strcpy(pcVar10,(char *)param_1[0xc5]);
                    /* try { // try from 00a593bc to 00b593ef has its CatchHandler @ 00a5929c */
        sVar7 = strlen((char *)param_1[0xc5]);
                    /* catch() { ... } // from try @ 00a59308 with catch @ 00a593d0
                       catch() { ... } // from try @ 00a593b4 with catch @ 00a593d0 */
                    /* catch() { ... } // from try @ 00a592ec with catch @ 00a593d4
                       catch() { ... } // from try @ 00a59364 with catch @ 00a593d4 */
        builtin_strncpy(acStack_43a + sVar7 + sVar6 + 1,"aarch64-unknown-linux-android",0x1e);
        builtin_strncpy(acStack_43a + sVar7 + sVar6 + 0x1f,"curl",5);
                    /* try { // try from 00a593f0 to 00b5943f has its CatchHandler @ 00a593f0
                       catch() { ... } // from try @ 00a593f0 with catch @ 00a593f0
                       catch() { ... } // from try @ 00a59478 with catch @ 00a593f0
                       catch() { ... } // from try @ 00a594bc with catch @ 00a593f0 */
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
        *(undefined4 *)(lVar9 + 0x4b0d) = 0x424d53ff;
                    /* try { // try from 00a59440 to 00b59477 has its CatchHandler @ 00a594fc */
        *(undefined1 *)(lVar9 + 0x4b11) = 0x73;
        *(undefined1 *)(lVar9 + 0x4b16) = 0x18;
        *(undefined2 *)(lVar9 + 0x4b17) = 0x41;
        *(undefined2 *)(lVar9 + 0x4b29) = *(undefined2 *)((long)param_1 + 0x63c);
        *(undefined2 *)(lVar9 + 0x4b25) = *(undefined2 *)(*(long *)(lVar9 + 0x218) + 0x18);
        _Var5 = getpid();
                    /* try { // try from 00a59478 to 00b594a7 has its CatchHandler @ 00a593f0 */
        *(short *)(lVar9 + 0x4b19) = (short)((uint)_Var5 >> 0x10);
        *(short *)(lVar9 + 0x4b27) = (short)_Var5;
        memcpy((void *)(*param_1 + 0x4b2d),&local_488,(size_t)(pcVar10 + 0x1d));
        pcVar10 = pcVar10 + 0x41;
                    /* try { // try from 00a594a8 to 00b594bb has its CatchHandler @ 00a594fc */
                    /* try { // try from 00a594bc to 00b59517 has its CatchHandler @ 00a593f0 */
        iVar4 = FUN_00a38cd0(param_1,0,*param_1 + 0x4b09,pcVar10,&local_4f0);
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
          goto LAB_00a5927c;
        }
      }
      else {
        iVar4 = 0x3f;
      }
    }
  }
  FUN_00a26ce8(param_1,1);
LAB_00a594f4:
                    /* catch() { ... } // from try @ 00a59440 with catch @ 00a594fc
                       catch() { ... } // from try @ 00a594a8 with catch @ 00a594fc */
  if (*(long *)(lVar3 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}

