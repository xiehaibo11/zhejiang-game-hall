
void FUN_00a26100(long *param_1,long param_2,int *param_3)

{
  ushort uVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  size_t sVar10;
  char *pcVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  socklen_t __len;
  uint uVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  socklen_t local_2b4;
  long *local_2b0;
  char local_2a8 [48];
  uint local_278;
  int local_274;
  int local_270;
  uint local_26c;
  sockaddr local_268;
  int local_250;
  sockaddr local_1e8 [16];
  sockaddr local_e8;
  int local_d0;
  
                    /* try { // try from 00a26110 to 00b26117 has its CatchHandler @ 00a261e4 */
                    /* try { // try from 00a26118 to 00b26127 has its CatchHandler @ 00a25fac */
  lVar2 = tpidr_el0;
  lVar16 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00a26128 to 00b2619b has its CatchHandler @ 00a26200 */
  lVar18 = *param_1;
  *param_3 = -1;
  iVar5 = *(int *)((long)param_1 + 0xac);
  uVar15 = *(uint *)(param_2 + 4);
  if (iVar5 == 2) {
    iVar6 = 0x11;
  }
  else {
    iVar6 = *(int *)(param_2 + 0xc);
  }
  local_26c = *(uint *)(param_2 + 0x10);
  if (0x7f < local_26c) {
    local_26c = 0x80;
  }
  local_278 = uVar15;
  local_274 = iVar5;
  local_270 = iVar6;
  memcpy(&local_268,*(void **)(param_2 + 0x20),(ulong)local_26c);
  if (*(code **)(lVar18 + 0x308) == (code *)0x0) {
    iVar5 = socket(uVar15,iVar5,iVar6);
  }
  else {
                    /* try { // try from 00a2619c to 00b2621b has its CatchHandler @ 00a25fac */
    iVar5 = (**(code **)(lVar18 + 0x308))(*(undefined8 *)(lVar18 + 0x310),0,&local_278);
                    /* catch() { ... } // from try @ 00a26040 with catch @ 00a261a4 */
  }
  if (iVar5 == -1) {
    iVar5 = 0;
    goto LAB_00a26a60;
  }
  if (((int)param_1[0x15] != 0) && (local_278 == 10)) {
    local_250 = (int)param_1[0x15];
  }
                    /* catch() { ... } // from try @ 00a26010 with catch @ 00a261e0 */
                    /* catch() { ... } // from try @ 00a26090 with catch @ 00a261e4
                       catch() { ... } // from try @ 00a26110 with catch @ 00a261e4 */
  if (local_268.sa_family != 1) {
                    /* catch() { ... } // from try @ 00a26074 with catch @ 00a261e8 */
    if (local_268.sa_family == 10) {
      pcVar9 = local_268.sa_data + 6;
LAB_00a26234:
      pcVar9 = inet_ntop((uint)local_268.sa_family,pcVar9,local_2a8,0x2e);
      if (pcVar9 != (char *)0x0) goto LAB_00a26244;
    }
    else if (local_268.sa_family == 2) {
                    /* catch() { ... } // from try @ 00a25ff4 with catch @ 00a261fc */
      pcVar9 = local_268.sa_data + 2;
                    /* catch() { ... } // from try @ 00a26128 with catch @ 00a26200 */
      goto LAB_00a26234;
    }
    local_2a8[0] = '\0';
    puVar12 = (undefined4 *)__errno();
    uVar7 = *puVar12;
    uVar14 = FUN_00a2afbc(param_1,uVar7);
    FUN_00a38a08(lVar18,"sa_addr inet_ntop() failed with errno %d: %s",uVar7,uVar14);
    if (param_1[7] != 0) {
                    /* try { // try from 00a2638c to 00b263db has its CatchHandler @ 00a2638c
                       catch() { ... } // from try @ 00a2638c with catch @ 00a2638c
                       catch() { ... } // from try @ 00a26424 with catch @ 00a2638c
                       catch() { ... } // from try @ 00a264a4 with catch @ 00a2638c */
      if ((*(int *)((long)param_1 + 0x264) != iVar5) || (*(char *)((long)param_1 + 0x271) == '\0'))
      {
        FUN_00a2a0ec(param_1,iVar5);
        (*(code *)param_1[7])(param_1[8],iVar5);
        iVar5 = 0;
        goto LAB_00a26a60;
      }
      *(undefined1 *)((long)param_1 + 0x271) = 0;
    }
    FUN_00a2a0ec(param_1,iVar5);
    close(iVar5);
    iVar5 = 0;
    goto LAB_00a26a60;
  }
  FUN_00a241ac(local_2a8,0x2e,"%s",local_268.sa_data);
LAB_00a26244:
  FUN_00a38740(lVar18,"  Trying %s...\n",local_2a8);
  if (((local_278 | 8) == 10) && (local_274 == 1)) {
    if (*(char *)(lVar18 + 0x63e) == '\0') {
LAB_00a262b4:
      uVar15 = (uint)*(byte *)(lVar18 + 0x8b8);
      if (*(byte *)(lVar18 + 0x8b8) == 0) goto LAB_00a2641c;
    }
    else {
      lVar20 = *param_1;
      local_1e8[0].sa_family = 1;
      local_1e8[0].sa_data[0] = '\0';
      local_1e8[0].sa_data[1] = '\0';
      iVar6 = setsockopt(iVar5,6,1,local_1e8,4);
      if (-1 < iVar6) {
        FUN_00a38740(lVar20,"TCP_NODELAY set\n");
        goto LAB_00a262b4;
      }
      puVar12 = (undefined4 *)__errno();
                    /* try { // try from 00a263dc to 00b263f3 has its CatchHandler @ 00a264bc */
      uVar14 = FUN_00a2afbc(param_1,*puVar12);
                    /* try { // try from 00a263f8 to 00b26423 has its CatchHandler @ 00a264b8 */
      FUN_00a38740(lVar20,"Could not set TCP_NODELAY: %s\n",uVar14);
      uVar15 = (uint)*(byte *)(lVar18 + 0x8b8);
      if (uVar15 == 0) goto LAB_00a2641c;
    }
    local_1e8[0]._0_4_ = uVar15;
    iVar6 = setsockopt(iVar5,1,9,local_1e8,4);
    if (iVar6 < 0) {
      pcVar9 = "Failed to set SO_KEEPALIVE on fd %d\n";
    }
    else {
      local_1e8[0]._0_4_ = FUN_00a2c6e4(*(undefined8 *)(lVar18 + 0x8c0));
      iVar6 = setsockopt(iVar5,6,4,local_1e8,4);
      if (iVar6 < 0) {
        FUN_00a38740(lVar18,"Failed to set TCP_KEEPIDLE on fd %d\n",iVar5);
      }
      local_1e8[0]._0_4_ = FUN_00a2c6e4(*(undefined8 *)(lVar18 + 0x8c8));
      iVar6 = setsockopt(iVar5,6,5,local_1e8,4);
      if (-1 < iVar6) goto LAB_00a2641c;
      pcVar9 = "Failed to set TCP_KEEPINTVL on fd %d\n";
    }
    FUN_00a38740(lVar18,pcVar9,iVar5);
  }
LAB_00a2641c:
                    /* try { // try from 00a26424 to 00b2644b has its CatchHandler @ 00a2638c */
  if ((*(code **)(lVar18 + 0x2f8) == (code *)0x0) ||
     (iVar6 = (**(code **)(lVar18 + 0x2f8))(*(undefined8 *)(lVar18 + 0x300),iVar5,0), iVar6 == 0)) {
    bVar4 = false;
  }
  else {
    if (iVar6 != 2) {
      if (param_1[7] != 0) {
        if ((*(int *)((long)param_1 + 0x264) != iVar5) || (*(char *)((long)param_1 + 0x271) == '\0')
           ) {
                    /* try { // try from 00a26570 to 00b26597 has its CatchHandler @ 00a264d8 */
          FUN_00a2a0ec(param_1,iVar5);
          (*(code *)param_1[7])(param_1[8],iVar5);
          iVar5 = 0x2a;
          goto LAB_00a26a60;
        }
        *(undefined1 *)((long)param_1 + 0x271) = 0;
      }
                    /* try { // try from 00a26528 to 00b2653f has its CatchHandler @ 00a26608 */
      FUN_00a2a0ec(param_1,iVar5);
      close(iVar5);
      iVar5 = 0x2a;
      goto LAB_00a26a60;
    }
    bVar4 = true;
  }
                    /* try { // try from 00a2644c to 00b2645f has its CatchHandler @ 00a264bc */
  uVar15 = local_278;
  if ((local_278 | 8) == 10) {
    uVar7 = FUN_00a44e58(&local_268);
    lVar20 = *param_1;
    local_2b0 = (long *)0x0;
    uVar1 = *(ushort *)(lVar20 + 0x2a8);
    uVar21 = (uint)uVar1;
    iVar6 = *(int *)(lVar20 + 0x2ac);
    pcVar9 = *(char **)(lVar20 + 0x6b0);
    if ((uVar1 != 0) || (pcVar9 != (char *)0x0)) {
                    /* try { // try from 00a2649c to 00b264a3 has its CatchHandler @ 00a264b8 */
      memset(&local_e8,0,0x80);
                    /* try { // try from 00a264a4 to 00b264d7 has its CatchHandler @ 00a2638c */
      uVar22 = (uint)uVar1;
                    /* catch() { ... } // from try @ 00a263f8 with catch @ 00a264b8
                       catch() { ... } // from try @ 00a2649c with catch @ 00a264b8 */
      if ((pcVar9 == (char *)0x0) || (sVar10 = strlen(pcVar9), 0xfe < sVar10)) {
                    /* try { // try from 00a26544 to 00b2656f has its CatchHandler @ 00a26604 */
        if (uVar15 == 2) {
          local_e8.sa_data._0_2_ = uVar1 >> 8 | (ushort)((uVar22 & 0xff00ff) << 8);
LAB_00a26598:
          local_e8.sa_family = 2;
                    /* try { // try from 00a26598 to 00b265ab has its CatchHandler @ 00a26608 */
          __len = 0x10;
        }
        else {
          if (uVar15 != 10) goto LAB_00a26798;
          local_e8.sa_data._0_2_ = uVar1 >> 8 | (ushort)((uVar22 & 0xff00ff) << 8);
          local_e8.sa_family = 10;
          __len = 0x1c;
        }
LAB_00a2679c:
        iVar8 = bind(iVar5,&local_e8,__len);
        if (iVar8 < 0) {
          iVar6 = iVar6 + 1;
          do {
            iVar6 = iVar6 + -1;
            if (iVar6 < 2) {
              puVar12 = (undefined4 *)__errno();
              uVar7 = *puVar12;
              *(undefined4 *)(lVar20 + 0x8b64) = uVar7;
              uVar14 = FUN_00a2afbc(param_1,uVar7);
              FUN_00a38a08(lVar20,"bind failed with errno %d: %s",uVar7,uVar14);
              goto LAB_00a269f8;
            }
                    /* try { // try from 00a267cc to 00b26843 has its CatchHandler @ 00a26964 */
            FUN_00a38740(lVar20,"Bind to local port %hu failed, trying next\n",uVar21 & 0xffff);
            uVar21 = uVar21 + 1;
            local_e8.sa_data._0_2_ =
                 (ushort)(uVar21 >> 8) & 0xff | (ushort)((uVar21 & 0xff00ff) << 8);
            iVar8 = bind(iVar5,&local_e8,__len);
          } while (iVar8 < 0);
        }
        local_2b4 = 0x80;
        memset(local_1e8,0,0x80);
        iVar6 = getsockname(iVar5,local_1e8,&local_2b4);
        if (iVar6 < 0) {
          puVar12 = (undefined4 *)__errno();
          uVar7 = *puVar12;
          *(undefined4 *)(lVar20 + 0x8b64) = uVar7;
          uVar14 = FUN_00a2afbc(param_1,uVar7);
                    /* try { // try from 00a26878 to 00b268b3 has its CatchHandler @ 00a26964 */
          FUN_00a38a08(lVar20,"getsockname() failed with errno %d: %s",uVar7,uVar14);
          iVar6 = 0x2d;
        }
        else {
          FUN_00a38740(lVar20,"Local port: %hu\n",uVar21 & 0xffff);
          iVar6 = 0;
                    /* try { // try from 00a26844 to 00b26877 has its CatchHandler @ 00a26770 */
          *(undefined1 *)((long)param_1 + 0x3d3) = 1;
        }
        if (iVar6 == 0) goto LAB_00a26898;
      }
      else {
                    /* catch() { ... } // from try @ 00a263dc with catch @ 00a264bc
                       catch() { ... } // from try @ 00a2644c with catch @ 00a264bc */
        memset(local_1e8,0,0x100);
                    /* try { // try from 00a264d8 to 00b26527 has its CatchHandler @ 00a264d8
                       catch() { ... } // from try @ 00a264d8 with catch @ 00a264d8
                       catch() { ... } // from try @ 00a26570 with catch @ 00a264d8
                       catch() { ... } // from try @ 00a265f0 with catch @ 00a264d8 */
        iVar8 = strncmp("if!",pcVar9,3);
        if (iVar8 != 0) {
          iVar8 = strncmp("host!",pcVar9,5);
          if (iVar8 != 0) {
            bVar3 = false;
            goto LAB_00a265a8;
          }
                    /* try { // try from 00a265e8 to 00b265ef has its CatchHandler @ 00a26604 */
          pcVar9 = pcVar9 + 5;
          goto LAB_00a266a4;
        }
        pcVar9 = pcVar9 + 3;
        bVar3 = true;
LAB_00a265a8:
        iVar8 = FUN_00a44fa4(uVar15,uVar7,(int)param_1[0x15],pcVar9,local_1e8,0x100);
        if (iVar8 == 2) {
                    /* try { // try from 00a265f0 to 00b26623 has its CatchHandler @ 00a264d8 */
                    /* catch() { ... } // from try @ 00a26544 with catch @ 00a26604
                       catch() { ... } // from try @ 00a265e8 with catch @ 00a26604 */
                    /* catch() { ... } // from try @ 00a26528 with catch @ 00a26608
                       catch() { ... } // from try @ 00a26598 with catch @ 00a26608 */
          FUN_00a38740(lVar20,"Local Interface %s is ip %s using address family %i\n",pcVar9,
                       local_1e8,uVar15);
          sVar10 = strlen(pcVar9);
                    /* try { // try from 00a26624 to 00b26673 has its CatchHandler @ 00a26624
                       catch() { ... } // from try @ 00a26624 with catch @ 00a26624
                       catch() { ... } // from try @ 00a266bc with catch @ 00a26624
                       catch() { ... } // from try @ 00a2673c with catch @ 00a26624 */
          iVar8 = setsockopt(iVar5,1,0x19,pcVar9,(int)sVar10 + 1);
          if (iVar8 != 0) {
            puVar12 = (undefined4 *)__errno();
            uVar7 = *puVar12;
            uVar14 = FUN_00a2afbc(param_1,uVar7);
            FUN_00a38740(lVar20,
                         "SO_BINDTODEVICE %s failed with errno %d: %s; will do regular bind\n",
                         pcVar9,uVar7,uVar14);
          }
joined_r0x00a26664:
          if (uVar15 == 2) {
                    /* try { // try from 00a26674 to 00b2668b has its CatchHandler @ 00a26754 */
            iVar8 = inet_pton(2,(char *)local_1e8,(void *)((ulong)&local_e8 | 4));
            if (0 < iVar8) {
              local_e8.sa_data._0_2_ = uVar1 >> 8 | uVar1 << 8;
                    /* try { // try from 00a26690 to 00b266bb has its CatchHandler @ 00a26750 */
              goto LAB_00a26598;
            }
          }
          else {
                    /* try { // try from 00a26734 to 00b2673b has its CatchHandler @ 00a26750 */
            if (uVar15 == 10) {
                    /* try { // try from 00a2673c to 00b2676f has its CatchHandler @ 00a26624 */
              pcVar11 = strchr((char *)local_1e8,0x25);
              pcVar9 = pcVar11;
              if (pcVar11 != (char *)0x0) {
                    /* catch() { ... } // from try @ 00a26690 with catch @ 00a26750
                       catch() { ... } // from try @ 00a26734 with catch @ 00a26750 */
                pcVar9 = pcVar11 + 1;
                *pcVar11 = '\0';
              }
                    /* catch() { ... } // from try @ 00a26674 with catch @ 00a26754
                       catch() { ... } // from try @ 00a266e4 with catch @ 00a26754 */
              iVar8 = inet_pton(10,(char *)local_1e8,local_e8.sa_data + 6);
                    /* try { // try from 00a26770 to 00b267cb has its CatchHandler @ 00a26770
                       catch() { ... } // from try @ 00a26770 with catch @ 00a26770
                       catch() { ... } // from try @ 00a26844 with catch @ 00a26770
                       catch() { ... } // from try @ 00a26908 with catch @ 00a26770 */
              if (0 < iVar8) {
                local_e8.sa_data._0_2_ = uVar1 >> 8 | (ushort)((uVar22 & 0xff00ff) << 8);
                local_e8.sa_family = 10;
                if (pcVar9 != (char *)0x0) {
                  local_d0 = atoi(pcVar9);
                  __len = 0x1c;
                  goto LAB_00a2679c;
                }
              }
              __len = 0x1c;
              goto LAB_00a2679c;
            }
          }
LAB_00a26798:
          __len = 0;
          goto LAB_00a2679c;
        }
        if (iVar8 == 1) {
          iVar6 = 1;
          goto LAB_00a26a00;
        }
        if (iVar8 == 0) {
          if (!bVar3) {
LAB_00a266a4:
            lVar19 = param_1[0x82];
            if (uVar15 == 2) {
              lVar17 = 1;
LAB_00a266c4:
              param_1[0x82] = lVar17;
            }
            else if (uVar15 == 10) {
              lVar17 = 2;
                    /* try { // try from 00a266bc to 00b266e3 has its CatchHandler @ 00a26624 */
              goto LAB_00a266c4;
            }
            FUN_00a2fe40(param_1,pcVar9,0,&local_2b0);
            param_1[0x82] = lVar19;
                    /* try { // try from 00a266e4 to 00b266f7 has its CatchHandler @ 00a26754 */
            if (local_2b0 != (long *)0x0) {
              FUN_00a2fa9c(*local_2b0,local_1e8,0x100);
              FUN_00a38740(lVar20,"Name \'%s\' family %i resolved to \'%s\' family %i\n",pcVar9,
                           uVar15,local_1e8,*(undefined4 *)(*local_2b0 + 4));
              FUN_00a301e8(lVar20,local_2b0);
              goto joined_r0x00a26664;
            }
            goto LAB_00a269e4;
          }
          pcVar11 = "Couldn\'t bind to interface \'%s\'";
        }
        else {
          if (!bVar3) goto LAB_00a266a4;
LAB_00a269e4:
          pcVar11 = "Couldn\'t bind to \'%s\'";
        }
        FUN_00a38a08(lVar20,pcVar11,pcVar9);
LAB_00a269f8:
                    /* try { // try from 00a269f8 to 00b26a0f has its CatchHandler @ 00a26bb0 */
        iVar6 = 0x2d;
      }
LAB_00a26a00:
      if (param_1 == (long *)0x0) {
LAB_00a26a30:
        close(iVar5);
      }
      else {
        if (param_1[7] == 0) {
LAB_00a26a24:
          FUN_00a2a0ec(param_1,iVar5);
          goto LAB_00a26a30;
        }
                    /* try { // try from 00a26a10 to 00b26a5b has its CatchHandler @ 00a269a0 */
        if ((*(int *)((long)param_1 + 0x264) == iVar5) && (*(char *)((long)param_1 + 0x271) != '\0')
           ) {
          *(undefined1 *)((long)param_1 + 0x271) = 0;
          goto LAB_00a26a24;
        }
        FUN_00a2a0ec(param_1,iVar5);
        (*(code *)param_1[7])(param_1[8],iVar5);
      }
      iVar5 = 7;
                    /* try { // try from 00a26a5c to 00b26abf has its CatchHandler @ 00a26bb0 */
      if (iVar6 != 1) {
        iVar5 = iVar6;
      }
      goto LAB_00a26a60;
    }
  }
LAB_00a26898:
  FUN_00a2c678(iVar5,1);
  auVar23 = FUN_00a2e828();
  *(undefined1 (*) [16])(param_1 + 0x7c) = auVar23;
  if (1 < (int)param_1[0x7e]) {
                    /* try { // try from 00a268c4 to 00b268e3 has its CatchHandler @ 00a26960 */
    FUN_00a2ade0(lVar18,param_1[0x7f]);
  }
  if ((!bVar4) && (*(int *)((long)param_1 + 0xac) == 1)) {
                    /* try { // try from 00a268f4 to 00b26907 has its CatchHandler @ 00a26964 */
    if (((*(char *)((long)param_1 + 0x3d6) == '\0') || ((*(byte *)(param_1[0x81] + 0x7c) & 1) != 0))
       && (iVar6 = connect(iVar5,&local_268,local_26c), iVar6 == -1)) {
      piVar13 = (int *)__errno();
                    /* catch() { ... } // from try @ 00a268c4 with catch @ 00a26960 */
      iVar6 = *piVar13;
                    /* catch() { ... } // from try @ 00a267cc with catch @ 00a26964
                       catch() { ... } // from try @ 00a26878 with catch @ 00a26964
                       catch() { ... } // from try @ 00a268f4 with catch @ 00a26964 */
      *(bool *)((long)param_1 + 0x3c3) = local_278 == 10;
      if ((iVar6 != 0xb) && (iVar6 != 0x73)) {
        uVar14 = FUN_00a2afbc(param_1,iVar6);
                    /* try { // try from 00a269a0 to 00b269f7 has its CatchHandler @ 00a269a0
                       catch() { ... } // from try @ 00a269a0 with catch @ 00a269a0
                       catch() { ... } // from try @ 00a26a10 with catch @ 00a269a0
                       catch() { ... } // from try @ 00a26ac0 with catch @ 00a269a0
                       catch() { ... } // from try @ 00a26b34 with catch @ 00a269a0
                       catch() { ... } // from try @ 00a26b80 with catch @ 00a269a0 */
        FUN_00a38740(lVar18,"Immediate connect fail for %s: %s\n",local_2a8,uVar14);
        *(int *)(lVar18 + 0x8b64) = iVar6;
        if (param_1[7] == 0) {
LAB_00a269cc:
          FUN_00a2a0ec(param_1,iVar5);
          close(iVar5);
        }
        else {
          if ((*(int *)((long)param_1 + 0x264) == iVar5) &&
             (*(char *)((long)param_1 + 0x271) != '\0')) {
            *(undefined1 *)((long)param_1 + 0x271) = 0;
            goto LAB_00a269cc;
          }
          FUN_00a2a0ec(param_1,iVar5);
          (*(code *)param_1[7])(param_1[8],iVar5);
        }
        iVar5 = 7;
        goto LAB_00a26a60;
      }
    }
    else {
                    /* try { // try from 00a26908 to 00b2699f has its CatchHandler @ 00a26770 */
      *(bool *)((long)param_1 + 0x3c3) = local_278 == 10;
    }
  }
  *param_3 = iVar5;
  iVar5 = 0;
LAB_00a26a60:
  if (*(long *)(lVar2 + 0x28) == lVar16) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar5);
}

