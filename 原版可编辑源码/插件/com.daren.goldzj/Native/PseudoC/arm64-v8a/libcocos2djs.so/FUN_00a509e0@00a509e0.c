
int FUN_00a509e0(long *param_1,int param_2)

{
  long lVar1;
  bool bVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  size_t sVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  int *piVar13;
  char cVar14;
  long lVar15;
  char *pcVar16;
  undefined4 uVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  long *local_a00;
  socklen_t local_9f4;
  int local_9f0;
  char local_9ec [1024];
  char acStack_5ec [1028];
  sockaddr local_1e8 [8];
  char local_168 [256];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00a50a08 to 00b50a1f has its CatchHandler @ 00a50b90 */
  lVar15 = *param_1;
                    /* try { // try from 00a50a28 to 00b50a33 has its CatchHandler @ 00a50b8c */
  local_9f0 = -1;
  memset(local_168,0,0x100);
  pcVar16 = *(char **)(lVar15 + 0x6d0);
                    /* try { // try from 00a50a34 to 00b50a3f has its CatchHandler @ 00a50b88 */
  local_a00 = (long *)0x0;
                    /* try { // try from 00a50a40 to 00b50b13 has its CatchHandler @ 00a50ba0 */
  if ((pcVar16 == (char *)0x0) || (sVar8 = strlen(pcVar16), sVar8 < 2)) {
    uVar19 = 0;
    uVar20 = 0;
    pcVar9 = (char *)0x0;
LAB_00a50abc:
    local_9f4 = 0x80;
    iVar7 = getsockname((int)param_1[0x4c],local_1e8,&local_9f4);
    if (iVar7 == 0) {
      if (local_1e8[0].sa_family == 10) {
        pcVar16 = local_1e8[0].sa_data + 6;
                    /* try { // try from 00a50b14 to 00b50bf7 has its CatchHandler @ 00a509b4 */
      }
      else {
        pcVar16 = (char *)((ulong)local_1e8 | 4);
      }
      inet_ntop((uint)local_1e8[0].sa_family,pcVar16,acStack_5ec,0x401);
      bVar2 = false;
      pcVar16 = acStack_5ec;
LAB_00a50b2c:
      FUN_00a1a458(param_1,pcVar16,0,&local_a00);
      if (local_a00 != (long *)0x0) {
        lVar18 = *local_a00;
        FUN_00a1a800(lVar15);
        if (lVar18 != 0) {
          (*(code *)PTR_free_01d1b748)(pcVar9);
          local_9f0 = -1;
          do {
                    /* catch() { ... } // from try @ 00a50a34 with catch @ 00a50b88 */
            iVar7 = FUN_00a111e4(param_1,lVar18,0,&local_9f0);
                    /* catch() { ... } // from try @ 00a50a28 with catch @ 00a50b8c */
            if (iVar7 == 0) {
              memcpy(local_1e8,*(void **)(lVar18 + 0x20),(ulong)*(uint *)(lVar18 + 0x10));
              local_9f4 = *(socklen_t *)(lVar18 + 0x10);
              uVar5 = uVar19 & 0xffff;
                    /* try { // try from 00a50c48 to 00b50c5f has its CatchHandler @ 00a50de0 */
              if ((uVar20 & 0xffff) < uVar5) goto LAB_00a50c4c;
              if (!bVar2) goto LAB_00a50e44;
              local_1e8[0].sa_data._0_2_ =
                   (ushort)(uVar19 >> 8) & 0xff | (ushort)((uVar19 & 0xff00ff) << 8);
                    /* try { // try from 00a50cb0 to 00b50cb7 has its CatchHandler @ 00a50d94 */
              iVar7 = bind(local_9f0,local_1e8,local_9f4);
              if (iVar7 == 0) goto LAB_00a50e8c;
              piVar13 = (int *)__errno();
              uVar19 = uVar5;
              goto LAB_00a50cd0;
            }
                    /* catch() { ... } // from try @ 00a50a08 with catch @ 00a50b90 */
            lVar18 = *(long *)(lVar18 + 0x28);
          } while (lVar18 != 0);
          puVar11 = (undefined4 *)__errno();
                    /* catch() { ... } // from try @ 00a50a40 with catch @ 00a50ba0 */
          uVar12 = FUN_00a155d4(param_1,*puVar11);
          FUN_00a23020(lVar15,"socket failure: %s",uVar12);
          goto LAB_00a50be8;
        }
      }
      pcVar10 = "failed to resolve the address provided to PORT: %s";
    }
    else {
      puVar11 = (undefined4 *)__errno();
      pcVar16 = (char *)FUN_00a155d4(param_1,*puVar11);
      pcVar10 = "getsockname() failed: %s";
    }
    FUN_00a23020(lVar15,pcVar10,pcVar16);
    (*(code *)PTR_free_01d1b748)(pcVar9);
  }
  else {
    if (sVar8 < 0x2f) {
      sVar8 = 0x2e;
    }
    pcVar9 = (char *)(*(code *)PTR_calloc_01d1b760)(sVar8 + 1,1);
    if (pcVar9 == (char *)0x0) {
      iVar7 = 0x1b;
      goto LAB_00a50bec;
    }
    pcVar10 = pcVar16;
    if (*pcVar16 == ':') {
LAB_00a50d28:
      pcVar16 = strchr(pcVar10,0x3a);
      if (pcVar16 == (char *)0x0) {
LAB_00a50d7c:
        uVar4 = 0;
        uVar5 = 0;
      }
      else {
        strtoul(pcVar16 + 1,(char **)0x0,10);
        uVar4 = FUN_00a16cd4();
        pcVar16 = strchr(pcVar16,0x2d);
        uVar5 = uVar4;
        if (pcVar16 != (char *)0x0) {
          strtoul(pcVar16 + 1,(char **)0x0,10);
          uVar5 = FUN_00a16cd4();
        }
      }
    }
    else {
      if (*pcVar16 == '[') {
        pcVar10 = strchr(pcVar16,0x5d);
        if (pcVar10 != (char *)0x0) {
          pcVar16 = pcVar16 + 1;
          sVar8 = (long)pcVar10 - (long)pcVar16;
          goto LAB_00a50d20;
        }
        goto LAB_00a50d7c;
      }
      pcVar10 = strchr(pcVar16,0x3a);
                    /* try { // try from 00a50c74 to 00b50c87 has its CatchHandler @ 00a50ddc */
                    /* try { // try from 00a50c88 to 00b50c97 has its CatchHandler @ 00a50db0 */
      if ((pcVar10 != (char *)0x0) && (iVar7 = inet_pton(10,pcVar16,local_1e8), iVar7 != 1)) {
        sVar8 = (long)pcVar10 - (long)pcVar16;
                    /* try { // try from 00a50d18 to 00b50e2f has its CatchHandler @ 00a50bf8 */
LAB_00a50d20:
        strncpy(pcVar9,pcVar16,sVar8);
        goto LAB_00a50d28;
      }
      strcpy(pcVar9,pcVar16);
      uVar4 = 0;
      uVar5 = 0;
    }
                    /* catch() { ... } // from try @ 00a50cb0 with catch @ 00a50d94 */
    uVar19 = 0;
    if ((uVar4 & 0xffff) <= (uVar5 & 0xffff)) {
      uVar19 = uVar4;
    }
    uVar20 = 0;
    if ((uVar4 & 0xffff) <= (uVar5 & 0xffff)) {
      uVar20 = uVar5;
    }
    if (*pcVar9 == '\0') goto LAB_00a50abc;
    uVar17 = *(undefined4 *)(param_1[0xc] + 4);
                    /* catch() { ... } // from try @ 00a50ce0 with catch @ 00a50dac */
    uVar6 = FUN_00a2e470(*(undefined8 *)(param_1[0xc] + 0x20));
                    /* catch() { ... } // from try @ 00a50c88 with catch @ 00a50db0 */
                    /* catch() { ... } // from try @ 00a50ce8 with catch @ 00a50db4 */
                    /* catch() { ... } // from try @ 00a50cd0 with catch @ 00a50dc4 */
    iVar7 = FUN_00a2e5bc(uVar17,uVar6,(int)param_1[0x15],pcVar9,acStack_5ec,0x401);
    if (iVar7 == 0) {
      bVar2 = true;
      pcVar16 = pcVar9;
      goto LAB_00a50b2c;
    }
    if (iVar7 != 1) {
                    /* catch() { ... } // from try @ 00a50c74 with catch @ 00a50ddc */
      if (iVar7 != 2) goto LAB_00a50abc;
                    /* catch() { ... } // from try @ 00a50c48 with catch @ 00a50de0 */
      bVar2 = true;
      pcVar16 = acStack_5ec;
      goto LAB_00a50b2c;
    }
  }
  goto LAB_00a50be8;
  while( true ) {
    uVar4 = uVar19 + 1;
                    /* try { // try from 00a50ce8 to 00b50d17 has its CatchHandler @ 00a50db4 */
    uVar19 = uVar4 & 0xffff;
    if ((uVar20 & 0xffff) < uVar19) goto LAB_00a50c4c;
    local_1e8[0].sa_data._0_2_ = (ushort)(uVar4 >> 8) & 0xff | (ushort)((uVar4 & 0xff00ff) << 8);
    iVar7 = bind(local_9f0,local_1e8,local_9f4);
    if (iVar7 == 0) break;
LAB_00a50cd0:
                    /* try { // try from 00a50cd0 to 00b50cdf has its CatchHandler @ 00a50dc4 */
    iVar7 = *piVar13;
                    /* try { // try from 00a50ce0 to 00b50ce7 has its CatchHandler @ 00a50dac */
    if ((iVar7 != 0xd) && (iVar7 != 0x62)) {
      if (iVar7 != 99) goto LAB_00a50f2c;
      uVar12 = FUN_00a155d4(param_1);
      FUN_00a22d58(lVar15,"bind(port=%hu) on non-local address failed: %s\n",uVar19,uVar12);
      local_9f4 = 0x80;
                    /* try { // try from 00a50e30 to 00b50e73 has its CatchHandler @ 00a50e30
                       catch() { ... } // from try @ 00a50e30 with catch @ 00a50e30
                       catch() { ... } // from try @ 00a50e8c with catch @ 00a50e30 */
      iVar7 = getsockname((int)param_1[0x4c],local_1e8,&local_9f4);
      if (iVar7 == 0) goto LAB_00a50e44;
      iVar7 = *piVar13;
      goto LAB_00a50eb0;
    }
  }
LAB_00a50e8c:
                    /* try { // try from 00a50e8c to 00b50ecf has its CatchHandler @ 00a50e30 */
  local_9f4 = 0x80;
  iVar7 = getsockname(local_9f0,local_1e8,&local_9f4);
  if (iVar7 == 0) {
                    /* catch() { ... } // from try @ 00a50f2c with catch @ 00a50ed0 */
    iVar7 = listen(local_9f0,1);
    if (iVar7 == 0) {
      FUN_00a1a0b4(lVar18,local_168,0x100);
      uVar3 = local_1e8[0].sa_data._0_2_;
      if (*(char *)((long)param_1 + 0x3cd) == '\0') {
        if (*(char *)((long)param_1 + 0x3c3) == '\0') {
          bVar2 = false;
        }
        else {
          bVar2 = true;
          *(undefined1 *)((long)param_1 + 0x3cd) = 1;
        }
      }
      else {
                    /* try { // try from 00a50f18 to 00b50f2b has its CatchHandler @ 00a51000 */
        bVar2 = true;
      }
      if (param_2 != 2) {
        if (bVar2) {
          if (local_1e8[0].sa_family != 2) {
            if (local_1e8[0].sa_family == 10) {
              do {
                if (param_2 == 0) goto LAB_00a51128;
              } while ((param_2 != 1) &&
                      (param_2 = param_2 + 1, param_2 != 2
                    /* catch() { ... } // from try @ 00a50f18 with catch @ 00a51000 */));
            }
            else {
              do {
                if (param_2 == 1) break;
                    /* try { // try from 00a5101c to 00b5106f has its CatchHandler @ 00a5101c
                       catch() { ... } // from try @ 00a5101c with catch @ 00a5101c
                       catch() { ... } // from try @ 00a51204 with catch @ 00a5101c */
                if (((local_1e8[0].sa_family | 8) == 10) && (param_2 == 0)) goto LAB_00a51128;
                param_2 = param_2 + 1;
              } while (param_2 != 2);
            }
          }
          else {
            do {
              if (param_2 == 0) goto LAB_00a51128;
              if (param_2 == 1) goto LAB_00a5107c;
              param_2 = param_2 + 1;
            } while (param_2 != 2);
          }
        }
        else if (local_1e8[0].sa_family != 2) {
          do {
            do {
              iVar7 = param_2;
              param_2 = 1;
            } while (iVar7 == 0);
          } while ((iVar7 != 1) && (param_2 = iVar7 + 1, iVar7 + 1 != 2));
        }
        else {
          param_2 = 2 - param_2;
          do {
            param_2 = param_2 + -1;
            if (param_2 == 0) goto LAB_00a5107c;
          } while (param_2 != 0);
        }
      }
      uVar17 = 2;
      goto LAB_00a51038;
    }
    puVar11 = (undefined4 *)__errno();
    uVar12 = FUN_00a155d4(param_1,*puVar11);
    pcVar16 = "socket failure: %s";
  }
  else {
    piVar13 = (int *)__errno();
    iVar7 = *piVar13;
LAB_00a50eb0:
    uVar12 = FUN_00a155d4(param_1,iVar7);
                    /* catch() { ... } // from try @ 00a50e74 with catch @ 00a50ebc */
    pcVar16 = "getsockname() failed: %s";
  }
  FUN_00a23020(lVar15,pcVar16,uVar12);
  goto LAB_00a50f4c;
LAB_00a50f2c:
                    /* try { // try from 00a50f2c to 00b5101b has its CatchHandler @ 00a50ed0 */
  uVar12 = FUN_00a155d4(param_1);
  FUN_00a23020(lVar15,"bind(port=%hu) failed: %s",uVar19,uVar12);
  goto LAB_00a50f4c;
LAB_00a51128:
  uVar17 = 1;
  if (local_1e8[0].sa_family != 2) {
    uVar17 = 2;
  }
  iVar7 = FUN_00a3e3a4(param_1 + 0xc3,"%s |%d|%s|%hu|",&DAT_018994bc,uVar17,local_168,
                       (ushort)local_1e8[0].sa_data._0_2_ >> 8 | local_1e8[0].sa_data._0_2_ << 8);
  if (iVar7 != 0) {
    uVar12 = FUN_00a15564(iVar7);
    FUN_00a23020(lVar15,"Failure sending EPRT command: %s",uVar12);
    FUN_00a104c4(param_1,local_9f0);
    *(undefined4 *)((long)param_1 + 0x6bc) = 1;
    *(undefined4 *)(param_1 + 0xd9) = 0;
    goto LAB_00a50bec;
  }
  uVar17 = 0;
LAB_00a51038:
  *(undefined4 *)((long)param_1 + 0x6bc) = uVar17;
  if (*(int *)((long)param_1 + 0x264) != -1) {
    FUN_00a104c4(param_1);
    *(undefined4 *)((long)param_1 + 0x264) = 0xffffffff;
  }
  *(undefined4 *)((long)param_1 + 0x714) = 0;
  iVar7 = 0;
  *(undefined1 *)((long)param_1 + 0x3c6) = 1;
                    /* try { // try from 00a51070 to 00b51087 has its CatchHandler @ 00a51280 */
  *(int *)((long)param_1 + 0x264) = local_9f0;
  *(undefined4 *)(param_1 + 0xd9) = 0x1c;
  goto LAB_00a50bec;
LAB_00a5107c:
  pcVar16 = local_168;
  pcVar9 = local_9ec;
  do {
    cVar14 = *pcVar16;
                    /* try { // try from 00a5109c to 00b510a7 has its CatchHandler @ 00a51278 */
    if (cVar14 == '.') {
                    /* try { // try from 00a510a8 to 00b51203 has its CatchHandler @ 00a51290 */
      cVar14 = ',';
    }
    else if (cVar14 == '\0') break;
    *pcVar9 = cVar14;
                    /* try { // try from 00a51090 to 00b5109b has its CatchHandler @ 00a5127c */
    pcVar16 = pcVar16 + 1;
    pcVar9 = pcVar9 + 1;
  } while( true );
  *pcVar9 = '\0';
  FUN_00a0e7c4(pcVar9,0x14,",%d,%d",uVar3 & 0xff,(ushort)uVar3 >> 8);
  iVar7 = FUN_00a3e3a4(param_1 + 0xc3,"%s %s",&DAT_018994c1,local_9ec);
  if (iVar7 != 0) {
    uVar12 = FUN_00a15564(iVar7);
    FUN_00a23020(lVar15,"Failure sending PORT command: %s",uVar12);
    FUN_00a104c4(param_1,local_9f0);
    *(undefined4 *)(param_1 + 0xd9) = 0;
    goto LAB_00a50bec;
  }
  uVar17 = 1;
  goto LAB_00a51038;
  while( true ) {
    piVar13 = (int *)__errno();
                    /* try { // try from 00a50e74 to 00b50e8b has its CatchHandler @ 00a50ebc */
    if ((*piVar13 != 0xd) && (uVar19 = uVar5, *piVar13 != 0x62)) goto LAB_00a50f2c;
    uVar5 = uVar5 + 1 & 0xffff;
    if ((uVar20 & 0xffff) < uVar5) break;
LAB_00a50e44:
    local_1e8[0].sa_data._0_2_ = (ushort)(uVar5 >> 8) | (ushort)((uVar5 & 0xff00ff) << 8);
    iVar7 = bind(local_9f0,local_1e8,local_9f4);
    if (iVar7 == 0) goto LAB_00a50e8c;
  }
LAB_00a50c4c:
  FUN_00a23020(lVar15,"bind() failed, we ran out of ports!");
LAB_00a50f4c:
  FUN_00a104c4(param_1,local_9f0);
LAB_00a50be8:
  iVar7 = 0x1e;
LAB_00a50bec:
                    /* try { // try from 00a50bf8 to 00b50c47 has its CatchHandler @ 00a50bf8
                       catch() { ... } // from try @ 00a50bf8 with catch @ 00a50bf8
                       catch() { ... } // from try @ 00a50d18 with catch @ 00a50bf8 */
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

