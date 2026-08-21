
void FUN_00a10718(long *param_1,long param_2,int *param_3)

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
  
                    /* try { // try from 00a10734 to 00b10737 has its CatchHandler @ 00a10738 */
                    /* catch() { ... } // from try @ 00a106d8 with catch @ 00a10738
                       catch() { ... } // from try @ 00a10734 with catch @ 00a10738
                       try { // try from 00a10738 to 00b1074f has its CatchHandler @ 00a10640 */
  lVar2 = tpidr_el0;
  lVar16 = *(long *)(lVar2 + 0x28);
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
    iVar5 = (**(code **)(lVar18 + 0x308))(*(undefined8 *)(lVar18 + 0x310),0,&local_278);
  }
  if (iVar5 == -1) {
    iVar5 = 0;
    goto LAB_00a11078;
  }
  if (((int)param_1[0x15] != 0) && (local_278 == 10)) {
    local_250 = (int)param_1[0x15];
  }
  if (local_268.sa_family != 1) {
    if (local_268.sa_family == 10) {
      pcVar9 = local_268.sa_data + 6;
LAB_00a1084c:
      pcVar9 = inet_ntop((uint)local_268.sa_family,pcVar9,local_2a8,0x2e);
      if (pcVar9 != (char *)0x0) goto LAB_00a1085c;
    }
    else if (local_268.sa_family == 2) {
      pcVar9 = local_268.sa_data + 2;
      goto LAB_00a1084c;
    }
    local_2a8[0] = '\0';
    puVar12 = (undefined4 *)__errno();
    uVar7 = *puVar12;
    uVar14 = FUN_00a155d4(param_1,uVar7);
    FUN_00a23020(lVar18,"sa_addr inet_ntop() failed with errno %d: %s",uVar7,uVar14);
    if (param_1[7] != 0) {
      if ((*(int *)((long)param_1 + 0x264) != iVar5) || (*(char *)((long)param_1 + 0x271) == '\0'))
      {
        FUN_00a14704(param_1,iVar5);
        (*(code *)param_1[7])(param_1[8],iVar5);
        iVar5 = 0;
        goto LAB_00a11078;
      }
      *(undefined1 *)((long)param_1 + 0x271) = 0;
    }
    FUN_00a14704(param_1,iVar5);
    close(iVar5);
    iVar5 = 0;
    goto LAB_00a11078;
  }
  FUN_00a0e7c4(local_2a8,0x2e,"%s",local_268.sa_data);
LAB_00a1085c:
  FUN_00a22d58(lVar18,"  Trying %s...\n",local_2a8);
  if (((local_278 | 8) == 10) && (local_274 == 1)) {
    if (*(char *)(lVar18 + 0x63e) == '\0') {
LAB_00a108cc:
      uVar15 = (uint)*(byte *)(lVar18 + 0x8b8);
      if (*(byte *)(lVar18 + 0x8b8) == 0) goto LAB_00a10a34;
    }
    else {
      lVar20 = *param_1;
      local_1e8[0].sa_family = 1;
      local_1e8[0].sa_data[0] = '\0';
      local_1e8[0].sa_data[1] = '\0';
      iVar6 = setsockopt(iVar5,6,1,local_1e8,4);
      if (-1 < iVar6) {
        FUN_00a22d58(lVar20,"TCP_NODELAY set\n");
        goto LAB_00a108cc;
      }
      puVar12 = (undefined4 *)__errno();
      uVar14 = FUN_00a155d4(param_1,*puVar12);
      FUN_00a22d58(lVar20,"Could not set TCP_NODELAY: %s\n",uVar14);
      uVar15 = (uint)*(byte *)(lVar18 + 0x8b8);
      if (uVar15 == 0) goto LAB_00a10a34;
    }
    local_1e8[0]._0_4_ = uVar15;
    iVar6 = setsockopt(iVar5,1,9,local_1e8,4);
    if (iVar6 < 0) {
      pcVar9 = "Failed to set SO_KEEPALIVE on fd %d\n";
    }
    else {
      local_1e8[0]._0_4_ = FUN_00a16cfc(*(undefined8 *)(lVar18 + 0x8c0));
      iVar6 = setsockopt(iVar5,6,4,local_1e8,4);
      if (iVar6 < 0) {
        FUN_00a22d58(lVar18,"Failed to set TCP_KEEPIDLE on fd %d\n",iVar5);
      }
      local_1e8[0]._0_4_ = FUN_00a16cfc(*(undefined8 *)(lVar18 + 0x8c8));
      iVar6 = setsockopt(iVar5,6,5,local_1e8,4);
      if (-1 < iVar6) goto LAB_00a10a34;
      pcVar9 = "Failed to set TCP_KEEPINTVL on fd %d\n";
    }
    FUN_00a22d58(lVar18,pcVar9,iVar5);
  }
LAB_00a10a34:
  if ((*(code **)(lVar18 + 0x2f8) == (code *)0x0) ||
     (iVar6 = (**(code **)(lVar18 + 0x2f8))(*(undefined8 *)(lVar18 + 0x300),iVar5,0), iVar6 == 0)) {
    bVar4 = false;
  }
  else {
    if (iVar6 != 2) {
      if (param_1[7] != 0) {
        if ((*(int *)((long)param_1 + 0x264) != iVar5) || (*(char *)((long)param_1 + 0x271) == '\0')
           ) {
          FUN_00a14704(param_1,iVar5);
          (*(code *)param_1[7])(param_1[8],iVar5);
          iVar5 = 0x2a;
          goto LAB_00a11078;
        }
        *(undefined1 *)((long)param_1 + 0x271) = 0;
      }
      FUN_00a14704(param_1,iVar5);
      close(iVar5);
      iVar5 = 0x2a;
      goto LAB_00a11078;
    }
    bVar4 = true;
  }
  uVar15 = local_278;
  if ((local_278 | 8) == 10) {
    uVar7 = FUN_00a2e470(&local_268);
    lVar20 = *param_1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a10ae4 with catch @ 00a10a84
                       catch(type#1 @ 00000000) { ... } // from try @ 00a10cac with catch @ 00a10a84
                        */
    local_2b0 = (long *)0x0;
    uVar1 = *(ushort *)(lVar20 + 0x2a8);
    uVar21 = (uint)uVar1;
    iVar6 = *(int *)(lVar20 + 0x2ac);
    pcVar9 = *(char **)(lVar20 + 0x6b0);
    if ((uVar1 != 0) || (pcVar9 != (char *)0x0)) {
      memset(&local_e8,0,0x80);
      uVar22 = (uint)uVar1;
      if ((pcVar9 == (char *)0x0) || (sVar10 = strlen(pcVar9), 0xfe < sVar10)) {
        if (uVar15 == 2) {
          local_e8.sa_data._0_2_ = uVar1 >> 8 | (ushort)((uVar22 & 0xff00ff) << 8);
LAB_00a10bb0:
          local_e8.sa_family = 2;
          __len = 0x10;
        }
        else {
          if (uVar15 != 10) goto LAB_00a10db0;
          local_e8.sa_data._0_2_ = uVar1 >> 8 | (ushort)((uVar22 & 0xff00ff) << 8);
          local_e8.sa_family = 10;
          __len = 0x1c;
        }
LAB_00a10db4:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a10ca4 with catch @ 00a10db4
                        */
        iVar8 = bind(iVar5,&local_e8,__len);
        if (iVar8 < 0) {
          iVar6 = iVar6 + 1;
          do {
            iVar6 = iVar6 + -1;
            if (iVar6 < 2) {
              puVar12 = (undefined4 *)__errno();
              uVar7 = *puVar12;
              *(undefined4 *)(lVar20 + 0x8b64) = uVar7;
              uVar14 = FUN_00a155d4(param_1,uVar7);
              FUN_00a23020(lVar20,"bind failed with errno %d: %s",uVar7,uVar14);
              goto LAB_00a11010;
            }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a10adc with catch @ 00a10dec
                        */
                    /* try { // try from 00a10df0 to 00b10e87 has its CatchHandler @ 00a10df0
                       catch() { ... } // from try @ 00a10df0 with catch @ 00a10df0
                       catch() { ... } // from try @ 00a10e90 with catch @ 00a10df0
                       catch() { ... } // from try @ 00a10ee4 with catch @ 00a10df0 */
            FUN_00a22d58(lVar20,"Bind to local port %hu failed, trying next\n",uVar21 & 0xffff);
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
          uVar14 = FUN_00a155d4(param_1,uVar7);
                    /* try { // try from 00a10e88 to 00b10e8f has its CatchHandler @ 00a10ee4 */
                    /* try { // try from 00a10e90 to 00b10edf has its CatchHandler @ 00a10df0 */
          FUN_00a23020(lVar20,"getsockname() failed with errno %d: %s",uVar7,uVar14);
          iVar6 = 0x2d;
        }
        else {
          FUN_00a22d58(lVar20,"Local port: %hu\n",uVar21 & 0xffff);
          iVar6 = 0;
          *(undefined1 *)((long)param_1 + 0x3d3) = 1;
        }
        if (iVar6 == 0) goto LAB_00a10eb0;
      }
      else {
                    /* try { // try from 00a10adc to 00b10ae3 has its CatchHandler @ 00a10dec */
        memset(local_1e8,0,0x100);
                    /* try { // try from 00a10ae4 to 00b10ca3 has its CatchHandler @ 00a10a84 */
        iVar8 = strncmp("if!",pcVar9,3);
        if (iVar8 != 0) {
          iVar8 = strncmp("host!",pcVar9,5);
          if (iVar8 != 0) {
            bVar3 = false;
            goto LAB_00a10bc0;
          }
          pcVar9 = pcVar9 + 5;
          goto LAB_00a10cbc;
        }
        pcVar9 = pcVar9 + 3;
        bVar3 = true;
LAB_00a10bc0:
        iVar8 = FUN_00a2e5bc(uVar15,uVar7,(int)param_1[0x15],pcVar9,local_1e8,0x100);
        if (iVar8 == 2) {
          FUN_00a22d58(lVar20,"Local Interface %s is ip %s using address family %i\n",pcVar9,
                       local_1e8,uVar15);
          sVar10 = strlen(pcVar9);
          iVar8 = setsockopt(iVar5,1,0x19,pcVar9,(int)sVar10 + 1);
          if (iVar8 != 0) {
            puVar12 = (undefined4 *)__errno();
            uVar7 = *puVar12;
            uVar14 = FUN_00a155d4(param_1,uVar7);
            FUN_00a22d58(lVar20,
                         "SO_BINDTODEVICE %s failed with errno %d: %s; will do regular bind\n",
                         pcVar9,uVar7,uVar14);
          }
joined_r0x00a10c7c:
          if (uVar15 == 2) {
            iVar8 = inet_pton(2,(char *)local_1e8,(void *)((ulong)&local_e8 | 4));
            if (0 < iVar8) {
              local_e8.sa_data._0_2_ = uVar1 >> 8 | uVar1 << 8;
                    /* try { // try from 00a10ca4 to 00b10cab has its CatchHandler @ 00a10db4 */
                    /* try { // try from 00a10cac to 00b10def has its CatchHandler @ 00a10a84 */
              goto LAB_00a10bb0;
            }
          }
          else if (uVar15 == 10) {
            pcVar11 = strchr((char *)local_1e8,0x25);
            pcVar9 = pcVar11;
            if (pcVar11 != (char *)0x0) {
              pcVar9 = pcVar11 + 1;
              *pcVar11 = '\0';
            }
            iVar8 = inet_pton(10,(char *)local_1e8,local_e8.sa_data + 6);
            if (0 < iVar8) {
              local_e8.sa_data._0_2_ = uVar1 >> 8 | (ushort)((uVar22 & 0xff00ff) << 8);
              local_e8.sa_family = 10;
              if (pcVar9 != (char *)0x0) {
                local_d0 = atoi(pcVar9);
                __len = 0x1c;
                goto LAB_00a10db4;
              }
            }
            __len = 0x1c;
            goto LAB_00a10db4;
          }
LAB_00a10db0:
          __len = 0;
          goto LAB_00a10db4;
        }
        if (iVar8 == 1) {
          iVar6 = 1;
          goto LAB_00a11018;
        }
        if (iVar8 == 0) {
          if (!bVar3) {
LAB_00a10cbc:
            lVar19 = param_1[0x82];
            if (uVar15 == 2) {
              lVar17 = 1;
LAB_00a10cdc:
              param_1[0x82] = lVar17;
            }
            else if (uVar15 == 10) {
              lVar17 = 2;
              goto LAB_00a10cdc;
            }
            FUN_00a1a458(param_1,pcVar9,0,&local_2b0);
            param_1[0x82] = lVar19;
            if (local_2b0 != (long *)0x0) {
              FUN_00a1a0b4(*local_2b0,local_1e8,0x100);
              FUN_00a22d58(lVar20,"Name \'%s\' family %i resolved to \'%s\' family %i\n",pcVar9,
                           uVar15,local_1e8,*(undefined4 *)(*local_2b0 + 4));
              FUN_00a1a800(lVar20,local_2b0);
              goto joined_r0x00a10c7c;
            }
            goto LAB_00a10ffc;
          }
          pcVar11 = "Couldn\'t bind to interface \'%s\'";
        }
        else {
          if (!bVar3) goto LAB_00a10cbc;
LAB_00a10ffc:
          pcVar11 = "Couldn\'t bind to \'%s\'";
        }
        FUN_00a23020(lVar20,pcVar11,pcVar9);
LAB_00a11010:
        iVar6 = 0x2d;
      }
LAB_00a11018:
      if (param_1 == (long *)0x0) {
LAB_00a11048:
        close(iVar5);
      }
      else {
        if (param_1[7] == 0) {
LAB_00a1103c:
          FUN_00a14704(param_1,iVar5);
          goto LAB_00a11048;
        }
        if ((*(int *)((long)param_1 + 0x264) == iVar5) && (*(char *)((long)param_1 + 0x271) != '\0')
           ) {
          *(undefined1 *)((long)param_1 + 0x271) = 0;
          goto LAB_00a1103c;
        }
        FUN_00a14704(param_1,iVar5);
        (*(code *)param_1[7])(param_1[8],iVar5);
      }
      iVar5 = 7;
      if (iVar6 != 1) {
        iVar5 = iVar6;
      }
      goto LAB_00a11078;
    }
  }
LAB_00a10eb0:
  FUN_00a16c90(iVar5,1);
  auVar23 = FUN_00a18e40();
  *(undefined1 (*) [16])(param_1 + 0x7c) = auVar23;
  if (1 < (int)param_1[0x7e]) {
    FUN_00a153f8(lVar18,param_1[0x7f]);
  }
                    /* try { // try from 00a10ee0 to 00b10ee3 has its CatchHandler @ 00a10ee4 */
                    /* catch() { ... } // from try @ 00a10e88 with catch @ 00a10ee4
                       catch() { ... } // from try @ 00a10ee0 with catch @ 00a10ee4
                       try { // try from 00a10ee4 to 00b10efb has its CatchHandler @ 00a10df0 */
  if ((!bVar4) && (*(int *)((long)param_1 + 0xac) == 1)) {
    if (((*(char *)((long)param_1 + 0x3d6) == '\0') || ((*(byte *)(param_1[0x81] + 0x7c) & 1) != 0))
       && (iVar6 = connect(iVar5,&local_268,local_26c), iVar6 == -1)) {
      piVar13 = (int *)__errno();
      iVar6 = *piVar13;
      *(bool *)((long)param_1 + 0x3c3) = local_278 == 10;
      if ((iVar6 != 0xb) && (iVar6 != 0x73)) {
        uVar14 = FUN_00a155d4(param_1,iVar6);
        FUN_00a22d58(lVar18,"Immediate connect fail for %s: %s\n",local_2a8,uVar14);
        *(int *)(lVar18 + 0x8b64) = iVar6;
        if (param_1[7] == 0) {
LAB_00a10fe4:
          FUN_00a14704(param_1,iVar5);
          close(iVar5);
        }
        else {
          if ((*(int *)((long)param_1 + 0x264) == iVar5) &&
             (*(char *)((long)param_1 + 0x271) != '\0')) {
            *(undefined1 *)((long)param_1 + 0x271) = 0;
            goto LAB_00a10fe4;
          }
          FUN_00a14704(param_1,iVar5);
          (*(code *)param_1[7])(param_1[8],iVar5);
        }
        iVar5 = 7;
        goto LAB_00a11078;
      }
    }
    else {
      *(bool *)((long)param_1 + 0x3c3) = local_278 == 10;
    }
  }
  *param_3 = iVar5;
  iVar5 = 0;
LAB_00a11078:
  if (*(long *)(lVar2 + 0x28) == lVar16) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar5);
}

