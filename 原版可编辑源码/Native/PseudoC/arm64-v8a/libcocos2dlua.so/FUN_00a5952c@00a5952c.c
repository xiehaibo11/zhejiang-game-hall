
/* WARNING: Removing unreachable block (ram,0x00a599cc) */

int FUN_00a5952c(long *param_1,undefined1 *param_2)

{
  char *pcVar1;
  undefined2 uVar2;
  long lVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  __pid_t _Var7;
  uint uVar8;
  size_t sVar9;
  size_t sVar10;
  undefined4 uVar11;
  int iVar12;
  char *pcVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long local_4b0;
  char *local_4a8;
  undefined2 local_4a0;
  undefined4 uStack_49e;
  undefined1 uStack_49a;
  undefined1 uStack_499;
  undefined1 uStack_498;
  undefined2 local_497;
  undefined2 local_495;
  char local_493 [3];
  undefined4 local_490;
  char acStack_48b [11];
  char local_480 [4];
  undefined4 local_47c;
  short local_46f;
  char acStack_46d [17];
  char acStack_45c [1012];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  piVar15 = *(int **)(*param_1 + 0x218);
  local_4b0 = 0;
  if (*piVar15 == 0) {
    pcVar13 = (char *)param_1[0x18];
    sVar9 = strlen(pcVar13);
    sVar10 = strlen(*(char **)(piVar15 + 2));
    if (sVar9 + sVar10 + 10 < 0x401) {
      memset(&local_4a0,0,0x40b);
      local_4a0 = 0xff04;
      uStack_499 = 0;
      uStack_498 = 0;
      local_493[0] = '\0';
      local_495 = 0x5c5c;
      strcpy(local_493,pcVar13);
      sVar9 = strlen((char *)param_1[0x18]);
      pcVar1 = local_493 + sVar9;
      pcVar13 = local_493 + sVar9 + 1;
      pcVar1[0] = '\\';
      pcVar1[1] = '\0';
      strcpy(pcVar13,*(char **)(piVar15 + 2));
      sVar10 = strlen(*(char **)(piVar15 + 2));
      builtin_strncpy(local_493 + sVar10 + sVar9 + 2,"?????",6);
      pcVar13 = pcVar13 + ((sVar10 + 7) - (long)&local_495);
      local_497 = SUB82(pcVar13,0);
      lVar18 = *param_1;
      uVar8 = (int)pcVar13 + 0x2b;
      *(undefined8 *)(lVar18 + 0x4b11) = 0;
      *(undefined8 *)(lVar18 + 0x4b09) = 0;
      *(undefined4 *)(lVar18 + 0x4b29) = 0;
      *(undefined8 *)(lVar18 + 0x4b21) = 0;
      *(undefined8 *)(lVar18 + 0x4b19) = 0;
      *(ushort *)(lVar18 + 0x4b0b) = (ushort)(uVar8 >> 8) & 0xff | (ushort)((uVar8 & 0xff00ff) << 8)
      ;
      *(undefined4 *)(lVar18 + 0x4b0d) = 0x424d53ff;
      *(undefined1 *)(lVar18 + 0x4b11) = 0x75;
      *(undefined1 *)(lVar18 + 0x4b16) = 0x18;
      *(undefined2 *)(lVar18 + 0x4b17) = 0x41;
      *(undefined2 *)(lVar18 + 0x4b29) = *(undefined2 *)((long)param_1 + 0x63c);
      *(undefined2 *)(lVar18 + 0x4b25) = *(undefined2 *)(*(long *)(lVar18 + 0x218) + 0x18);
      _Var7 = getpid();
      *(short *)(lVar18 + 0x4b19) = (short)((uint)_Var7 >> 0x10);
      *(short *)(lVar18 + 0x4b27) = (short)_Var7;
      memcpy((void *)(*param_1 + 0x4b2d),&local_4a0,(size_t)(pcVar13 + 0xb));
      pcVar13 = pcVar13 + 0x2f;
      iVar6 = FUN_00a38cd0(param_1,0,*param_1 + 0x4b09,pcVar13,&local_4a8);
      if (iVar6 == 0) {
        if (local_4a8 != pcVar13) {
          param_1[0xca] = (long)pcVar13;
          param_1[0xcb] = (long)local_4a8;
        }
        param_1[0xc9] = 0;
        **(undefined4 **)(*param_1 + 0x218) = 1;
        goto LAB_00a5957c;
      }
    }
    else {
      iVar6 = 0x3f;
    }
    goto LAB_00a59f74;
  }
LAB_00a5957c:
  iVar6 = FUN_00a5a070(param_1,&local_4b0);
  lVar18 = local_4b0;
  if ((iVar6 != 0) && (iVar6 != 0x51)) goto LAB_00a59f74;
  if (local_4b0 == 0) {
    iVar6 = 0;
    goto LAB_00a59f80;
  }
  uVar11 = 6;
  switch(*piVar15) {
  case 1:
    if (*(int *)(local_4b0 + 9) == 0) {
      uVar11 = 2;
      *(undefined2 *)(piVar15 + 6) = *(undefined2 *)(local_4b0 + 0x1c);
    }
    else {
      iVar12 = 9;
      if (*(int *)(local_4b0 + 9) != 0x50001) {
        iVar12 = 0x4e;
      }
      piVar15[7] = iVar12;
      uVar11 = 7;
    }
    break;
  case 2:
    if ((*(int *)(local_4b0 + 9) == 0) && (99 < (ulong)param_1[0xcc])) {
      *(undefined2 *)((long)piVar15 + 0x1a) = *(undefined2 *)(local_4b0 + 0x2a);
      lVar18 = *param_1;
      *(undefined8 *)(lVar18 + 0x120) = 0;
      if (*(char *)(lVar18 + 0x621) == '\0') {
        *(undefined8 *)(lVar18 + 0x78) = *(undefined8 *)(local_4b0 + 0x5c);
                    /* try { // try from 00a59910 to 00b59947 has its CatchHandler @ 00a59ad8 */
        FUN_00a30eac();
        uVar11 = 3;
      }
      else {
        *(undefined8 *)(lVar18 + 0x78) = *(undefined8 *)(lVar18 + 0x8cf8);
        FUN_00a30ed8();
        uVar11 = 4;
                    /* try { // try from 00a59868 to 00b5987f has its CatchHandler @ 00a59ae0 */
      }
    }
    else {
      piVar15[7] = 0x4e;
      uVar11 = 6;
    }
    break;
  case 3:
    if ((*(int *)(local_4b0 + 9) == 0) && (0x31 < (ulong)param_1[0xcc])) {
      uVar5 = FUN_00a5a230(local_4b0 + 0x2f);
      uVar8 = FUN_00a5a230(lVar18 + 0x31);
                    /* try { // try from 00a59884 to 00b598bf has its CatchHandler @ 00a59adc */
      if (uVar5 == 0) {
        uVar14 = 0;
LAB_00a59950:
        lVar18 = *param_1;
                    /* try { // try from 00a59954 to 00b599a3 has its CatchHandler @ 00a59ae8 */
        *(ulong *)(lVar18 + 0x98) = *(long *)(lVar18 + 0x98) + uVar14;
        *(ulong *)(lVar18 + 0x120) = *(long *)(lVar18 + 0x120) + uVar14;
        FUN_00a31094();
        uVar11 = 5;
        if ((short)uVar5 < 0) {
          uVar11 = 3;
        }
      }
      else {
        uVar14 = (ulong)uVar5;
        if ((ulong)param_1[0xcc] < uVar14 + (uVar8 & 0xffff) + 4) {
          FUN_00a38a08(*param_1,"Invalid input packet");
          iVar6 = 0x38;
        }
        else {
          iVar6 = FUN_00a391f0(param_1,1,lVar18 + (ulong)(uVar8 & 0xffff) + 4,uVar14);
          if (iVar6 == 0) goto LAB_00a59950;
        }
        piVar15[7] = iVar6;
        uVar11 = 5;
      }
    }
    else {
      iVar12 = 0x38;
LAB_00a59818:
      piVar15[7] = iVar12;
      uVar11 = 5;
    }
    break;
  case 4:
                    /* try { // try from 00a59808 to 00b59867 has its CatchHandler @ 00a59808
                       catch() { ... } // from try @ 00a59808 with catch @ 00a59808
                       catch() { ... } // from try @ 00a599f0 with catch @ 00a59808
                       catch() { ... } // from try @ 00a59ac0 with catch @ 00a59808 */
    if ((*(int *)(local_4b0 + 9) != 0) || ((ulong)param_1[0xcc] < 0x2a)) {
      iVar12 = 0x19;
      goto LAB_00a59818;
    }
    uVar8 = FUN_00a5a230(local_4b0 + 0x29);
    lVar18 = *param_1;
                    /* try { // try from 00a598cc to 00b598ff has its CatchHandler @ 00a59ae4 */
    *(ulong *)(lVar18 + 0x98) = *(long *)(lVar18 + 0x98) + (ulong)(uVar8 & 0xffff);
    *(ulong *)(lVar18 + 0x120) = *(long *)(lVar18 + 0x120) + (ulong)(uVar8 & 0xffff);
    FUN_00a3112c(lVar18);
    uVar11 = 4;
    if (*(long *)(*param_1 + 0x78) <= *(long *)(*param_1 + 0x98)) {
      uVar11 = 5;
    }
    break;
  case 5:
    break;
  case 6:
    uVar11 = 7;
    break;
  default:
    iVar6 = 0;
    param_1[0xcc] = 0;
    goto LAB_00a59f80;
  }
  param_1[0xcc] = 0;
  switch(uVar11) {
  case 2:
    lVar16 = *param_1;
    lVar18 = *(long *)(lVar16 + 0x218);
    sVar9 = strlen(*(char **)(lVar18 + 0x10));
                    /* try { // try from 00a599bc to 00b599ef has its CatchHandler @ 00a59ad4 */
    if (sVar9 + 1 < 0x401) {
      memset(&local_4a0,0,0x433);
      local_4a0 = 0xff18;
      pcVar13 = *(char **)(lVar18 + 0x10);
      sVar9 = strlen(pcVar13);
                    /* try { // try from 00a59e40 to 00b59e73 has its CatchHandler @ 00a59f30 */
      uStack_49a = (undefined1)sVar9;
      uStack_499 = (undefined1)(sVar9 >> 8);
      local_480[0] = '\a';
      local_480[1] = '\0';
      local_480[2] = '\0';
      local_480[3] = '\0';
      bVar4 = *(char *)(lVar16 + 0x621) == '\0';
      local_490 = 0xc0000000;
      if (bVar4) {
        local_490 = 0x80000000;
      }
      local_46f = (short)sVar9 + 1;
      local_47c = 5;
                    /* try { // try from 00a59e74 to 00b59e9f has its CatchHandler @ 00a59d48 */
      if (bVar4) {
        local_47c = 1;
      }
      strcpy(acStack_46d,pcVar13);
      lVar18 = *param_1;
      uVar8 = (int)sVar9 + 0x54;
                    /* try { // try from 00a59ea0 to 00b59eb3 has its CatchHandler @ 00a59f38 */
      *(undefined8 *)(lVar18 + 0x4b11) = 0;
      *(undefined8 *)(lVar18 + 0x4b09) = 0;
      *(undefined4 *)(lVar18 + 0x4b29) = 0;
                    /* try { // try from 00a59eb8 to 00b59ecb has its CatchHandler @ 00a59f3c */
      *(undefined8 *)(lVar18 + 0x4b21) = 0;
      *(undefined8 *)(lVar18 + 0x4b19) = 0;
      *(ushort *)(lVar18 + 0x4b0b) = (ushort)(uVar8 >> 8) & 0xff | (ushort)((uVar8 & 0xff00ff) << 8)
      ;
      *(undefined4 *)(lVar18 + 0x4b0d) = 0x424d53ff;
      *(undefined1 *)(lVar18 + 0x4b11) = 0xa2;
      *(undefined1 *)(lVar18 + 0x4b16) = 0x18;
      *(undefined2 *)(lVar18 + 0x4b17) = 0x41;
      *(undefined2 *)(lVar18 + 0x4b29) = *(undefined2 *)((long)param_1 + 0x63c);
      *(undefined2 *)(lVar18 + 0x4b25) = *(undefined2 *)(*(long *)(lVar18 + 0x218) + 0x18);
      _Var7 = getpid();
                    /* try { // try from 00a59f08 to 00b59f0f has its CatchHandler @ 00a59f34 */
      *(short *)(lVar18 + 0x4b19) = (short)((uint)_Var7 >> 0x10);
      *(short *)(lVar18 + 0x4b27) = (short)_Var7;
                    /* try { // try from 00a59f14 to 00b59f1b has its CatchHandler @ 00a59f30 */
                    /* try { // try from 00a59f1c to 00b59f57 has its CatchHandler @ 00a59d48 */
      memcpy((void *)(*param_1 + 0x4b2d),&local_4a0,sVar9 + 0x34);
                    /* catch() { ... } // from try @ 00a59e40 with catch @ 00a59f30
                       catch() { ... } // from try @ 00a59f14 with catch @ 00a59f30 */
      pcVar13 = (char *)(sVar9 + 0x58);
                    /* catch() { ... } // from try @ 00a59db8 with catch @ 00a59f34
                       catch() { ... } // from try @ 00a59f08 with catch @ 00a59f34 */
                    /* catch() { ... } // from try @ 00a59d9c with catch @ 00a59f38
                       catch() { ... } // from try @ 00a59ea0 with catch @ 00a59f38 */
                    /* catch() { ... } // from try @ 00a59dfc with catch @ 00a59f3c
                       catch() { ... } // from try @ 00a59eb8 with catch @ 00a59f3c */
      iVar6 = FUN_00a38cd0(param_1,0,*param_1 + 0x4b09,pcVar13,&local_4a8);
      if (iVar6 == 0) {
                    /* try { // try from 00a59f58 to 00b59fab has its CatchHandler @ 00a59f58
                       catch() { ... } // from try @ 00a59f58 with catch @ 00a59f58
                       catch() { ... } // from try @ 00a5a084 with catch @ 00a59f58
                       catch() { ... } // from try @ 00a5a12c with catch @ 00a59f58 */
        if (local_4a8 != pcVar13) {
          param_1[0xca] = (long)pcVar13;
          goto LAB_00a59f64;
        }
        goto LAB_00a59f68;
      }
      break;
    }
    iVar6 = 0x3f;
    goto LAB_00a59f74;
  case 3:
    lVar18 = *param_1;
                    /* try { // try from 00a599f0 to 00b59a1b has its CatchHandler @ 00a59808 */
    uVar19 = *(undefined8 *)(lVar18 + 0x120);
    uVar2 = *(undefined2 *)(*(long *)(lVar18 + 0x218) + 0x1a);
    *(undefined8 *)(lVar18 + 0x4b11) = 0;
    *(undefined8 *)(lVar18 + 0x4b09) = 0;
    *(undefined4 *)(lVar18 + 0x4b29) = 0;
    *(undefined8 *)(lVar18 + 0x4b21) = 0;
    *(undefined8 *)(lVar18 + 0x4b19) = 0;
    *(undefined2 *)(lVar18 + 0x4b0b) = 0x3b00;
    *(undefined4 *)(lVar18 + 0x4b0d) = 0x424d53ff;
                    /* try { // try from 00a59a1c to 00b59a2f has its CatchHandler @ 00a59ae0 */
    *(undefined1 *)(lVar18 + 0x4b11) = 0x2e;
    *(undefined1 *)(lVar18 + 0x4b16) = 0x18;
    *(undefined2 *)(lVar18 + 0x4b17) = 0x41;
                    /* try { // try from 00a59a34 to 00b59a47 has its CatchHandler @ 00a59ae4 */
    *(undefined2 *)(lVar18 + 0x4b29) = *(undefined2 *)((long)param_1 + 0x63c);
    *(undefined2 *)(lVar18 + 0x4b25) = *(undefined2 *)(*(long *)(lVar18 + 0x218) + 0x18);
                    /* try { // try from 00a59a4c to 00b59a5f has its CatchHandler @ 00a59ae8 */
    _Var7 = getpid();
    *(short *)(lVar18 + 0x4b19) = (short)((uint)_Var7 >> 0x10);
    *(short *)(lVar18 + 0x4b27) = (short)_Var7;
    lVar18 = *param_1;
    *(undefined4 *)(lVar18 + 0x4b2d) = 0xff0c;
    *(undefined1 *)(lVar18 + 0x4b31) = 0;
    *(undefined2 *)(lVar18 + 0x4b32) = uVar2;
    *(int *)(lVar18 + 0x4b34) = (int)uVar19;
    *(undefined8 *)(lVar18 + 0x4b38) = 0x80008000;
    *(undefined2 *)(lVar18 + 0x4b40) = 0;
                    /* try { // try from 00a59aa0 to 00b59aa7 has its CatchHandler @ 00a59adc */
    *(int *)(lVar18 + 0x4b42) = (int)((ulong)uVar19 >> 0x20);
    *(undefined2 *)(lVar18 + 0x4b46) = 0;
                    /* try { // try from 00a59aac to 00b59ab3 has its CatchHandler @ 00a59ad8 */
                    /* try { // try from 00a59ab8 to 00b59abf has its CatchHandler @ 00a59ad4 */
                    /* try { // try from 00a59ac0 to 00b59b03 has its CatchHandler @ 00a59808 */
    iVar6 = FUN_00a38cd0(param_1,0,*param_1 + 0x4b09,0x3f,&local_4a0);
    if (iVar6 == 0) {
      local_4a8 = (char *)CONCAT17(uStack_499,CONCAT16(uStack_49a,CONCAT42(uStack_49e,local_4a0)));
                    /* catch() { ... } // from try @ 00a599bc with catch @ 00a59ad4
                       catch() { ... } // from try @ 00a59ab8 with catch @ 00a59ad4 */
      if (local_4a8 != (char *)0x3f) {
                    /* catch() { ... } // from try @ 00a59910 with catch @ 00a59ad8
                       catch() { ... } // from try @ 00a59aac with catch @ 00a59ad8 */
                    /* catch() { ... } // from try @ 00a59884 with catch @ 00a59adc
                       catch() { ... } // from try @ 00a59aa0 with catch @ 00a59adc */
        param_1[0xca] = 0x3f;
                    /* catch() { ... } // from try @ 00a59868 with catch @ 00a59ae0
                       catch() { ... } // from try @ 00a59a1c with catch @ 00a59ae0 */
LAB_00a59f64:
        param_1[0xcb] = (long)local_4a8;
      }
LAB_00a59f68:
      iVar6 = 0;
      param_1[0xc9] = 0;
    }
    break;
  case 4:
                    /* catch() { ... } // from try @ 00a598cc with catch @ 00a59ae4
                       catch() { ... } // from try @ 00a59a34 with catch @ 00a59ae4 */
    lVar16 = *param_1;
                    /* catch() { ... } // from try @ 00a59954 with catch @ 00a59ae8
                       catch() { ... } // from try @ 00a59a4c with catch @ 00a59ae8 */
    lVar17 = *(long *)(lVar16 + 0x218);
    uVar19 = *(undefined8 *)(lVar16 + 0x120);
    lVar18 = *(long *)(lVar16 + 0x78) - *(long *)(lVar16 + 0x98);
    if (0x7ffe < lVar18) {
      lVar18 = 0x7fff;
    }
    memset((undefined8 *)(lVar16 + 0x4b09),0,0x44);
    *(undefined2 *)(lVar16 + 0x4b2d) = 0xff0e;
    *(undefined2 *)(lVar16 + 0x4b32) = *(undefined2 *)(lVar17 + 0x1a);
    *(int *)(lVar16 + 0x4b34) = (int)uVar19;
    *(int *)(lVar16 + 0x4b46) = (int)((ulong)uVar19 >> 0x20);
    *(short *)(lVar16 + 0x4b42) = (short)lVar18;
    *(undefined2 *)(lVar16 + 0x4b44) = 0x40;
    *(short *)(lVar16 + 0x4b4a) = (short)lVar18 + 1;
    uVar8 = (int)lVar18 + 0x40;
    lVar17 = *(long *)(*param_1 + 0x218);
    *(undefined4 *)(lVar16 + 0x4b29) = 0;
    *(undefined8 *)(lVar16 + 0x4b21) = 0;
    *(undefined8 *)(lVar16 + 0x4b19) = 0;
    *(undefined8 *)(lVar16 + 0x4b11) = 0;
    *(undefined8 *)(lVar16 + 0x4b09) = 0;
    *(ushort *)(lVar16 + 0x4b0b) = (ushort)(uVar8 >> 8) & 0xff | (ushort)((uVar8 & 0xff00ff) << 8);
    *(undefined4 *)(lVar16 + 0x4b0d) = 0x424d53ff;
    *(undefined1 *)(lVar16 + 0x4b11) = 0x2f;
    *(undefined1 *)(lVar16 + 0x4b16) = 0x18;
    *(undefined2 *)(lVar16 + 0x4b17) = 0x41;
    *(undefined2 *)(lVar16 + 0x4b29) = *(undefined2 *)((long)param_1 + 0x63c);
    *(undefined2 *)(lVar16 + 0x4b25) = *(undefined2 *)(lVar17 + 0x18);
    _Var7 = getpid();
    *(short *)(lVar16 + 0x4b19) = (short)((uint)_Var7 >> 0x10);
    *(short *)(lVar16 + 0x4b27) = (short)_Var7;
    iVar6 = FUN_00a38cd0(param_1,0,*param_1 + 0x4b09,0x44,&local_4a0);
    if (iVar6 != 0) break;
    lVar16 = CONCAT17(uStack_499,CONCAT16(uStack_49a,CONCAT42(uStack_49e,local_4a0)));
                    /* try { // try from 00a59c1c to 00b59c6b has its CatchHandler @ 00a59c1c
                       catch() { ... } // from try @ 00a59c1c with catch @ 00a59c1c
                       catch() { ... } // from try @ 00a59ca0 with catch @ 00a59c1c
                       catch() { ... } // from try @ 00a59ce8 with catch @ 00a59c1c */
    if (lVar16 != 0x44) {
      param_1[0xca] = 0x44;
      param_1[0xcb] = lVar16;
    }
    iVar6 = 0;
    param_1[0xc9] = lVar18;
    goto LAB_00a59fb4;
  case 5:
    lVar18 = *param_1;
    uVar2 = *(undefined2 *)(*(long *)(lVar18 + 0x218) + 0x1a);
    *(undefined8 *)(lVar18 + 0x4b11) = 0;
    *(undefined8 *)(lVar18 + 0x4b09) = 0;
    *(undefined4 *)(lVar18 + 0x4b29) = 0;
                    /* try { // try from 00a59c6c to 00b59c83 has its CatchHandler @ 00a59d2c */
    *(undefined8 *)(lVar18 + 0x4b21) = 0;
    *(undefined8 *)(lVar18 + 0x4b19) = 0;
    *(undefined2 *)(lVar18 + 0x4b0b) = 0x2900;
    *(undefined4 *)(lVar18 + 0x4b0d) = 0x424d53ff;
                    /* try { // try from 00a59c88 to 00b59c9f has its CatchHandler @ 00a59d28 */
    *(undefined1 *)(lVar18 + 0x4b11) = 4;
    *(undefined1 *)(lVar18 + 0x4b16) = 0x18;
    *(undefined2 *)(lVar18 + 0x4b17) = 0x41;
                    /* try { // try from 00a59ca0 to 00b59cd3 has its CatchHandler @ 00a59c1c */
    *(undefined2 *)(lVar18 + 0x4b29) = *(undefined2 *)((long)param_1 + 0x63c);
    *(undefined2 *)(lVar18 + 0x4b25) = *(undefined2 *)(*(long *)(lVar18 + 0x218) + 0x18);
    _Var7 = getpid();
    *(short *)(lVar18 + 0x4b19) = (short)((uint)_Var7 >> 0x10);
    *(short *)(lVar18 + 0x4b27) = (short)_Var7;
    lVar18 = *param_1;
                    /* try { // try from 00a59cd4 to 00b59ce7 has its CatchHandler @ 00a59d2c */
    *(undefined1 *)(lVar18 + 0x4b2d) = 3;
    *(undefined2 *)(lVar18 + 0x4b2e) = uVar2;
                    /* try { // try from 00a59ce8 to 00b59d47 has its CatchHandler @ 00a59c1c */
    *(undefined2 *)(lVar18 + 0x4b34) = 0;
    *(undefined4 *)(lVar18 + 0x4b30) = 0;
    iVar6 = FUN_00a38cd0(param_1,0,*param_1 + 0x4b09,0x2d,&local_4a0);
    if (iVar6 == 0) {
      local_4a8 = (char *)CONCAT17(uStack_499,CONCAT16(uStack_49a,CONCAT42(uStack_49e,local_4a0)));
      if (local_4a8 != (char *)0x2d) {
        param_1[0xca] = 0x2d;
                    /* catch() { ... } // from try @ 00a59c88 with catch @ 00a59d28 */
        goto LAB_00a59f64;
      }
      goto LAB_00a59f68;
    }
    break;
  case 6:
                    /* catch() { ... } // from try @ 00a59c6c with catch @ 00a59d2c
                       catch() { ... } // from try @ 00a59cd4 with catch @ 00a59d2c */
    lVar18 = *param_1;
                    /* try { // try from 00a59d48 to 00b59d9b has its CatchHandler @ 00a59d48
                       catch() { ... } // from try @ 00a59d48 with catch @ 00a59d48
                       catch() { ... } // from try @ 00a59e74 with catch @ 00a59d48
                       catch() { ... } // from try @ 00a59f1c with catch @ 00a59d48 */
    *(undefined8 *)(lVar18 + 0x4b11) = 0;
    *(undefined8 *)(lVar18 + 0x4b09) = 0;
    *(undefined4 *)(lVar18 + 0x4b29) = 0;
    *(undefined8 *)(lVar18 + 0x4b21) = 0;
    *(undefined8 *)(lVar18 + 0x4b19) = 0;
    *(undefined2 *)(lVar18 + 0x4b0b) = 0x2300;
    *(undefined4 *)(lVar18 + 0x4b0d) = 0x424d53ff;
    *(undefined1 *)(lVar18 + 0x4b11) = 0x71;
    *(undefined1 *)(lVar18 + 0x4b16) = 0x18;
    *(undefined2 *)(lVar18 + 0x4b17) = 0x41;
    *(undefined2 *)(lVar18 + 0x4b29) = *(undefined2 *)((long)param_1 + 0x63c);
    *(undefined2 *)(lVar18 + 0x4b25) = *(undefined2 *)(*(long *)(lVar18 + 0x218) + 0x18);
                    /* try { // try from 00a59d9c to 00b59db3 has its CatchHandler @ 00a59f38 */
    _Var7 = getpid();
    *(short *)(lVar18 + 0x4b19) = (short)((uint)_Var7 >> 0x10);
    *(short *)(lVar18 + 0x4b27) = (short)_Var7;
    lVar18 = *param_1;
                    /* try { // try from 00a59db8 to 00b59def has its CatchHandler @ 00a59f34 */
    *(undefined1 *)(lVar18 + 0x4b2f) = 0;
    *(undefined2 *)(lVar18 + 0x4b2d) = 0;
    iVar6 = FUN_00a38cd0(param_1,0,*param_1 + 0x4b09,0x27,&local_4a0);
    if (iVar6 == 0) {
      local_4a8 = (char *)CONCAT17(uStack_499,CONCAT16(uStack_49a,CONCAT42(uStack_49e,local_4a0)));
      if (local_4a8 != (char *)0x27) {
        param_1[0xca] = 0x27;
                    /* try { // try from 00a59dfc to 00b59e2f has its CatchHandler @ 00a59f3c */
        goto LAB_00a59f64;
      }
      goto LAB_00a59f68;
    }
    break;
  case 7:
    iVar6 = piVar15[7];
    *param_2 = 1;
    if (iVar6 == 0) goto LAB_00a59fb4;
    goto LAB_00a59f74;
  }
  if (iVar6 == 0) {
LAB_00a59fb4:
    **(undefined4 **)(*param_1 + 0x218) = uVar11;
  }
  else {
LAB_00a59f74:
    FUN_00a26ce8(param_1,1);
  }
LAB_00a59f80:
  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 00a59fac to 00b59fc3 has its CatchHandler @ 00a5a148 */
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

