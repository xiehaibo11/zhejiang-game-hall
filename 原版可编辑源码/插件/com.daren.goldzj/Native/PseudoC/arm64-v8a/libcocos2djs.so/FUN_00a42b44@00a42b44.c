
/* WARNING: Removing unreachable block (ram,0x00a42fe4) */

int FUN_00a42b44(long *param_1,undefined1 *param_2)

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
                    /* catch() { ... } // from try @ 00a42a80 with catch @ 00a42c2c */
                    /* catch() { ... } // from try @ 00a42a74 with catch @ 00a42c30 */
                    /* catch() { ... } // from try @ 00a42a54 with catch @ 00a42c34 */
    if (sVar9 + sVar10 + 10 < 0x401) {
                    /* catch() { ... } // from try @ 00a42a8c with catch @ 00a42c44 */
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
                    /* try { // try from 00a42c9c to 00b42cef has its CatchHandler @ 00a42c9c
                       catch() { ... } // from try @ 00a42c9c with catch @ 00a42c9c
                       catch() { ... } // from try @ 00a42e60 with catch @ 00a42c9c */
      strcpy(pcVar13,*(char **)(piVar15 + 2));
      sVar10 = strlen(*(char **)(piVar15 + 2));
      builtin_strncpy(local_493 + sVar10 + sVar9 + 2,"?????",6);
      pcVar13 = pcVar13 + ((sVar10 + 7) - (long)&local_495);
      local_497 = SUB82(pcVar13,0);
      lVar18 = *param_1;
      uVar8 = (int)pcVar13 + 0x2b;
                    /* try { // try from 00a42cf0 to 00b42d07 has its CatchHandler @ 00a42edc */
      *(undefined8 *)(lVar18 + 0x4b11) = 0;
      *(undefined8 *)(lVar18 + 0x4b09) = 0;
      *(undefined4 *)(lVar18 + 0x4b29) = 0;
      *(undefined8 *)(lVar18 + 0x4b21) = 0;
      *(undefined8 *)(lVar18 + 0x4b19) = 0;
      *(ushort *)(lVar18 + 0x4b0b) = (ushort)(uVar8 >> 8) & 0xff | (ushort)((uVar8 & 0xff00ff) << 8)
      ;
      *(undefined4 *)(lVar18 + 0x4b0d) = 0x424d53ff;
                    /* try { // try from 00a42d10 to 00b42d1b has its CatchHandler @ 00a42ed8 */
      *(undefined1 *)(lVar18 + 0x4b11) = 0x75;
                    /* try { // try from 00a42d1c to 00b42d27 has its CatchHandler @ 00a42ed4 */
      *(undefined1 *)(lVar18 + 0x4b16) = 0x18;
                    /* try { // try from 00a42d28 to 00b42e5f has its CatchHandler @ 00a42eec */
      *(undefined2 *)(lVar18 + 0x4b17) = 0x41;
      *(undefined2 *)(lVar18 + 0x4b29) = *(undefined2 *)((long)param_1 + 0x63c);
      *(undefined2 *)(lVar18 + 0x4b25) = *(undefined2 *)(*(long *)(lVar18 + 0x218) + 0x18);
      _Var7 = getpid();
      *(short *)(lVar18 + 0x4b19) = (short)((uint)_Var7 >> 0x10);
      *(short *)(lVar18 + 0x4b27) = (short)_Var7;
      memcpy((void *)(*param_1 + 0x4b2d),&local_4a0,(size_t)(pcVar13 + 0xb));
      pcVar13 = pcVar13 + 0x2f;
      iVar6 = FUN_00a232e8(param_1,0,*param_1 + 0x4b09,pcVar13,&local_4a8);
      if (iVar6 == 0) {
        if (local_4a8 != pcVar13) {
          param_1[0xca] = (long)pcVar13;
          param_1[0xcb] = (long)local_4a8;
        }
        param_1[0xc9] = 0;
        **(undefined4 **)(*param_1 + 0x218) = 1;
        goto LAB_00a42b94;
      }
    }
    else {
      iVar6 = 0x3f;
    }
    goto LAB_00a4358c;
  }
LAB_00a42b94:
  iVar6 = FUN_00a43688(param_1,&local_4b0);
  lVar18 = local_4b0;
  if ((iVar6 != 0) && (iVar6 != 0x51)) goto LAB_00a4358c;
  if (local_4b0 == 0) {
    iVar6 = 0;
    goto LAB_00a43598;
  }
                    /* try { // try from 00a42bb8 to 00b42c9b has its CatchHandler @ 00a42a00 */
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
                    /* try { // try from 00a42e60 to 00b42f43 has its CatchHandler @ 00a42c9c */
      *(undefined8 *)(lVar18 + 0x120) = 0;
      if (*(char *)(lVar18 + 0x621) == '\0') {
        *(undefined8 *)(lVar18 + 0x78) = *(undefined8 *)(local_4b0 + 0x5c);
        FUN_00a1b4c4();
        uVar11 = 3;
      }
      else {
        *(undefined8 *)(lVar18 + 0x78) = *(undefined8 *)(lVar18 + 0x8cf8);
        FUN_00a1b4f0();
        uVar11 = 4;
      }
    }
    else {
      piVar15[7] = 0x4e;
      uVar11 = 6;
    }
    break;
  case 3:
    if ((*(int *)(local_4b0 + 9) == 0) && (0x31 < (ulong)param_1[0xcc])) {
      uVar5 = FUN_00a43848(local_4b0 + 0x2f);
      uVar8 = FUN_00a43848(lVar18 + 0x31);
      if (uVar5 == 0) {
        uVar14 = 0;
LAB_00a42f68:
        lVar18 = *param_1;
        *(ulong *)(lVar18 + 0x98) = *(long *)(lVar18 + 0x98) + uVar14;
        *(ulong *)(lVar18 + 0x120) = *(long *)(lVar18 + 0x120) + uVar14;
        FUN_00a1b6ac();
        uVar11 = 5;
        if ((short)uVar5 < 0) {
          uVar11 = 3;
        }
      }
      else {
        uVar14 = (ulong)uVar5;
        if ((ulong)param_1[0xcc] < uVar14 + (uVar8 & 0xffff) + 4) {
          FUN_00a23020(*param_1,"Invalid input packet");
          iVar6 = 0x38;
        }
        else {
                    /* try { // try from 00a42f44 to 00b42f9b has its CatchHandler @ 00a42f44
                       catch() { ... } // from try @ 00a42f44 with catch @ 00a42f44
                       catch() { ... } // from try @ 00a43170 with catch @ 00a42f44 */
          iVar6 = FUN_00a23808(param_1,1,lVar18 + (ulong)(uVar8 & 0xffff) + 4,uVar14);
          if (iVar6 == 0) goto LAB_00a42f68;
        }
        piVar15[7] = iVar6;
        uVar11 = 5;
      }
    }
    else {
      iVar12 = 0x38;
LAB_00a42e30:
      piVar15[7] = iVar12;
      uVar11 = 5;
    }
    break;
  case 4:
    if ((*(int *)(local_4b0 + 9) != 0) || ((ulong)param_1[0xcc] < 0x2a)) {
      iVar12 = 0x19;
      goto LAB_00a42e30;
    }
                    /* catch() { ... } // from try @ 00a42d1c with catch @ 00a42ed4 */
                    /* catch() { ... } // from try @ 00a42d10 with catch @ 00a42ed8 */
    uVar8 = FUN_00a43848(local_4b0 + 0x29);
                    /* catch() { ... } // from try @ 00a42cf0 with catch @ 00a42edc */
    lVar18 = *param_1;
                    /* catch() { ... } // from try @ 00a42d28 with catch @ 00a42eec */
    *(ulong *)(lVar18 + 0x98) = *(long *)(lVar18 + 0x98) + (ulong)(uVar8 & 0xffff);
    *(ulong *)(lVar18 + 0x120) = *(long *)(lVar18 + 0x120) + (ulong)(uVar8 & 0xffff);
    FUN_00a1b744(lVar18);
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
    goto LAB_00a43598;
  }
                    /* try { // try from 00a42f9c to 00b42fb3 has its CatchHandler @ 00a43240 */
  param_1[0xcc] = 0;
                    /* try { // try from 00a42fbc to 00b42fc7 has its CatchHandler @ 00a4323c */
  switch(uVar11) {
  case 2:
    lVar16 = *param_1;
    lVar18 = *(long *)(lVar16 + 0x218);
                    /* try { // try from 00a42fc8 to 00b42fd3 has its CatchHandler @ 00a43238 */
    sVar9 = strlen(*(char **)(lVar18 + 0x10));
                    /* try { // try from 00a42fd4 to 00b42feb has its CatchHandler @ 00a43250 */
    if (sVar9 + 1 < 0x401) {
      memset(&local_4a0,0,0x433);
      local_4a0 = 0xff18;
      pcVar13 = *(char **)(lVar18 + 0x10);
      sVar9 = strlen(pcVar13);
      uStack_49a = (undefined1)sVar9;
      uStack_499 = (undefined1)(sVar9 >> 8);
      local_480[0] = '\a';
      local_480[1] = '\0';
      local_480[2] = '\0';
      local_480[3] = '\0';
                    /* try { // try from 00a4346c to 00b4354f has its CatchHandler @ 00a432a8 */
      bVar4 = *(char *)(lVar16 + 0x621) == '\0';
      local_490 = 0xc0000000;
      if (bVar4) {
        local_490 = 0x80000000;
      }
      local_46f = (short)sVar9 + 1;
      local_47c = 5;
      if (bVar4) {
        local_47c = 1;
      }
      strcpy(acStack_46d,pcVar13);
      lVar18 = *param_1;
      uVar8 = (int)sVar9 + 0x54;
      *(undefined8 *)(lVar18 + 0x4b11) = 0;
      *(undefined8 *)(lVar18 + 0x4b09) = 0;
      *(undefined4 *)(lVar18 + 0x4b29) = 0;
      *(undefined8 *)(lVar18 + 0x4b21) = 0;
      *(undefined8 *)(lVar18 + 0x4b19) = 0;
      *(ushort *)(lVar18 + 0x4b0b) = (ushort)(uVar8 >> 8) & 0xff | (ushort)((uVar8 & 0xff00ff) << 8)
      ;
                    /* catch() { ... } // from try @ 00a43328 with catch @ 00a434e0 */
      *(undefined4 *)(lVar18 + 0x4b0d) = 0x424d53ff;
                    /* catch() { ... } // from try @ 00a4331c with catch @ 00a434e4 */
                    /* catch() { ... } // from try @ 00a432fc with catch @ 00a434e8 */
      *(undefined1 *)(lVar18 + 0x4b11) = 0xa2;
                    /* catch() { ... } // from try @ 00a43334 with catch @ 00a434f8 */
      *(undefined1 *)(lVar18 + 0x4b16) = 0x18;
      *(undefined2 *)(lVar18 + 0x4b17) = 0x41;
      *(undefined2 *)(lVar18 + 0x4b29) = *(undefined2 *)((long)param_1 + 0x63c);
      *(undefined2 *)(lVar18 + 0x4b25) = *(undefined2 *)(*(long *)(lVar18 + 0x218) + 0x18);
      _Var7 = getpid();
      *(short *)(lVar18 + 0x4b19) = (short)((uint)_Var7 >> 0x10);
      *(short *)(lVar18 + 0x4b27) = (short)_Var7;
      memcpy((void *)(*param_1 + 0x4b2d),&local_4a0,sVar9 + 0x34);
      pcVar13 = (char *)(sVar9 + 0x58);
                    /* try { // try from 00a43550 to 00b435a3 has its CatchHandler @ 00a43550
                       catch() { ... } // from try @ 00a43550 with catch @ 00a43550
                       catch() { ... } // from try @ 00a43718 with catch @ 00a43550 */
      iVar6 = FUN_00a232e8(param_1,0,*param_1 + 0x4b09,pcVar13,&local_4a8);
      if (iVar6 == 0) {
        if (local_4a8 != pcVar13) {
          param_1[0xca] = (long)pcVar13;
          goto LAB_00a4357c;
        }
        goto LAB_00a43580;
      }
      break;
    }
    iVar6 = 0x3f;
    goto LAB_00a4358c;
  case 3:
    lVar18 = *param_1;
                    /* try { // try from 00a43008 to 00b4301f has its CatchHandler @ 00a431e8 */
    uVar19 = *(undefined8 *)(lVar18 + 0x120);
    uVar2 = *(undefined2 *)(*(long *)(lVar18 + 0x218) + 0x1a);
    *(undefined8 *)(lVar18 + 0x4b11) = 0;
    *(undefined8 *)(lVar18 + 0x4b09) = 0;
    *(undefined4 *)(lVar18 + 0x4b29) = 0;
    *(undefined8 *)(lVar18 + 0x4b21) = 0;
    *(undefined8 *)(lVar18 + 0x4b19) = 0;
    *(undefined2 *)(lVar18 + 0x4b0b) = 0x3b00;
    *(undefined4 *)(lVar18 + 0x4b0d) = 0x424d53ff;
                    /* try { // try from 00a43034 to 00b4309b has its CatchHandler @ 00a43250 */
    *(undefined1 *)(lVar18 + 0x4b11) = 0x2e;
    *(undefined1 *)(lVar18 + 0x4b16) = 0x18;
    *(undefined2 *)(lVar18 + 0x4b17) = 0x41;
    *(undefined2 *)(lVar18 + 0x4b29) = *(undefined2 *)((long)param_1 + 0x63c);
    *(undefined2 *)(lVar18 + 0x4b25) = *(undefined2 *)(*(long *)(lVar18 + 0x218) + 0x18);
    _Var7 = getpid();
    *(short *)(lVar18 + 0x4b19) = (short)((uint)_Var7 >> 0x10);
    *(short *)(lVar18 + 0x4b27) = (short)_Var7;
    lVar18 = *param_1;
    *(undefined4 *)(lVar18 + 0x4b2d) = 0xff0c;
    *(undefined1 *)(lVar18 + 0x4b31) = 0;
    *(undefined2 *)(lVar18 + 0x4b32) = uVar2;
                    /* try { // try from 00a430a0 to 00b430e3 has its CatchHandler @ 00a431e8 */
    *(int *)(lVar18 + 0x4b34) = (int)uVar19;
    *(undefined8 *)(lVar18 + 0x4b38) = 0x80008000;
    *(undefined2 *)(lVar18 + 0x4b40) = 0;
    *(int *)(lVar18 + 0x4b42) = (int)((ulong)uVar19 >> 0x20);
    *(undefined2 *)(lVar18 + 0x4b46) = 0;
    iVar6 = FUN_00a232e8(param_1,0,*param_1 + 0x4b09,0x3f,&local_4a0);
    if (iVar6 == 0) {
      local_4a8 = (char *)CONCAT17(uStack_499,CONCAT16(uStack_49a,CONCAT42(uStack_49e,local_4a0)));
      if (local_4a8 != (char *)0x3f) {
        param_1[0xca] = 0x3f;
LAB_00a4357c:
        param_1[0xcb] = (long)local_4a8;
      }
LAB_00a43580:
      iVar6 = 0;
      param_1[0xc9] = 0;
    }
    break;
  case 4:
    lVar16 = *param_1;
    lVar17 = *(long *)(lVar16 + 0x218);
    uVar19 = *(undefined8 *)(lVar16 + 0x120);
    lVar18 = *(long *)(lVar16 + 0x78) - *(long *)(lVar16 + 0x98);
    if (0x7ffe < lVar18) {
      lVar18 = 0x7fff;
    }
                    /* try { // try from 00a43134 to 00b4316f has its CatchHandler @ 00a43250 */
    memset((undefined8 *)(lVar16 + 0x4b09),0,0x44);
    *(undefined2 *)(lVar16 + 0x4b2d) = 0xff0e;
    *(undefined2 *)(lVar16 + 0x4b32) = *(undefined2 *)(lVar17 + 0x1a);
    *(int *)(lVar16 + 0x4b34) = (int)uVar19;
    *(int *)(lVar16 + 0x4b46) = (int)((ulong)uVar19 >> 0x20);
                    /* try { // try from 00a43170 to 00b432a7 has its CatchHandler @ 00a42f44 */
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
                    /* catch() { ... } // from try @ 00a43008 with catch @ 00a431e8
                       catch() { ... } // from try @ 00a430a0 with catch @ 00a431e8 */
    *(undefined2 *)(lVar16 + 0x4b29) = *(undefined2 *)((long)param_1 + 0x63c);
    *(undefined2 *)(lVar16 + 0x4b25) = *(undefined2 *)(lVar17 + 0x18);
    _Var7 = getpid();
    *(short *)(lVar16 + 0x4b19) = (short)((uint)_Var7 >> 0x10);
    *(short *)(lVar16 + 0x4b27) = (short)_Var7;
    iVar6 = FUN_00a232e8(param_1,0,*param_1 + 0x4b09,0x44,&local_4a0);
    if (iVar6 != 0) break;
    lVar16 = CONCAT17(uStack_499,CONCAT16(uStack_49a,CONCAT42(uStack_49e,local_4a0)));
                    /* catch() { ... } // from try @ 00a42fc8 with catch @ 00a43238 */
    if (lVar16 != 0x44) {
                    /* catch() { ... } // from try @ 00a42fbc with catch @ 00a4323c */
                    /* catch() { ... } // from try @ 00a42f9c with catch @ 00a43240 */
      param_1[0xca] = 0x44;
      param_1[0xcb] = lVar16;
    }
    iVar6 = 0;
    param_1[0xc9] = lVar18;
                    /* catch() { ... } // from try @ 00a42fd4 with catch @ 00a43250
                       catch() { ... } // from try @ 00a43034 with catch @ 00a43250
                       catch() { ... } // from try @ 00a43134 with catch @ 00a43250 */
    goto LAB_00a435cc;
  case 5:
    lVar18 = *param_1;
    uVar2 = *(undefined2 *)(*(long *)(lVar18 + 0x218) + 0x1a);
    *(undefined8 *)(lVar18 + 0x4b11) = 0;
    *(undefined8 *)(lVar18 + 0x4b09) = 0;
    *(undefined4 *)(lVar18 + 0x4b29) = 0;
    *(undefined8 *)(lVar18 + 0x4b21) = 0;
    *(undefined8 *)(lVar18 + 0x4b19) = 0;
    *(undefined2 *)(lVar18 + 0x4b0b) = 0x2900;
    *(undefined4 *)(lVar18 + 0x4b0d) = 0x424d53ff;
    *(undefined1 *)(lVar18 + 0x4b11) = 4;
                    /* try { // try from 00a432a8 to 00b432fb has its CatchHandler @ 00a432a8
                       catch() { ... } // from try @ 00a432a8 with catch @ 00a432a8
                       catch() { ... } // from try @ 00a4346c with catch @ 00a432a8 */
    *(undefined1 *)(lVar18 + 0x4b16) = 0x18;
    *(undefined2 *)(lVar18 + 0x4b17) = 0x41;
    *(undefined2 *)(lVar18 + 0x4b29) = *(undefined2 *)((long)param_1 + 0x63c);
    *(undefined2 *)(lVar18 + 0x4b25) = *(undefined2 *)(*(long *)(lVar18 + 0x218) + 0x18);
    _Var7 = getpid();
    *(short *)(lVar18 + 0x4b19) = (short)((uint)_Var7 >> 0x10);
    *(short *)(lVar18 + 0x4b27) = (short)_Var7;
    lVar18 = *param_1;
    *(undefined1 *)(lVar18 + 0x4b2d) = 3;
                    /* try { // try from 00a432fc to 00b43313 has its CatchHandler @ 00a434e8 */
    *(undefined2 *)(lVar18 + 0x4b2e) = uVar2;
    *(undefined2 *)(lVar18 + 0x4b34) = 0;
    *(undefined4 *)(lVar18 + 0x4b30) = 0;
                    /* try { // try from 00a4331c to 00b43327 has its CatchHandler @ 00a434e4 */
    iVar6 = FUN_00a232e8(param_1,0,*param_1 + 0x4b09,0x2d,&local_4a0);
                    /* try { // try from 00a43328 to 00b43333 has its CatchHandler @ 00a434e0 */
    if (iVar6 == 0) {
      local_4a8 = (char *)CONCAT17(uStack_499,CONCAT16(uStack_49a,CONCAT42(uStack_49e,local_4a0)));
                    /* try { // try from 00a43334 to 00b4346b has its CatchHandler @ 00a434f8 */
      if (local_4a8 != (char *)0x2d) {
        param_1[0xca] = 0x2d;
        goto LAB_00a4357c;
      }
      goto LAB_00a43580;
    }
    break;
  case 6:
    lVar18 = *param_1;
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
    _Var7 = getpid();
    *(short *)(lVar18 + 0x4b19) = (short)((uint)_Var7 >> 0x10);
    *(short *)(lVar18 + 0x4b27) = (short)_Var7;
    lVar18 = *param_1;
    *(undefined1 *)(lVar18 + 0x4b2f) = 0;
    *(undefined2 *)(lVar18 + 0x4b2d) = 0;
    iVar6 = FUN_00a232e8(param_1,0,*param_1 + 0x4b09,0x27,&local_4a0);
    if (iVar6 == 0) {
      local_4a8 = (char *)CONCAT17(uStack_499,CONCAT16(uStack_49a,CONCAT42(uStack_49e,local_4a0)));
      if (local_4a8 != (char *)0x27) {
        param_1[0xca] = 0x27;
        goto LAB_00a4357c;
      }
      goto LAB_00a43580;
    }
    break;
  case 7:
    iVar6 = piVar15[7];
    *param_2 = 1;
    if (iVar6 == 0) goto LAB_00a435cc;
    goto LAB_00a4358c;
  }
  if (iVar6 == 0) {
LAB_00a435cc:
                    /* try { // try from 00a435d0 to 00b435db has its CatchHandler @ 00a4378c */
    **(undefined4 **)(*param_1 + 0x218) = uVar11;
  }
  else {
LAB_00a4358c:
    FUN_00a11300(param_1,1);
  }
LAB_00a43598:
                    /* try { // try from 00a435a4 to 00b435bb has its CatchHandler @ 00a43794 */
  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 00a435c4 to 00b435cf has its CatchHandler @ 00a43790 */
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a435dc to 00b43717 has its CatchHandler @ 00a437a4 */
  __stack_chk_fail();
}

