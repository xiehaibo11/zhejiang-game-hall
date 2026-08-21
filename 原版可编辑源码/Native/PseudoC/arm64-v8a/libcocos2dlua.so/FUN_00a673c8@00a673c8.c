
int FUN_00a673c8(long *param_1,int param_2)

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
  lVar15 = *param_1;
  local_9f0 = -1;
  memset(local_168,0,0x100);
  pcVar16 = *(char **)(lVar15 + 0x6d0);
  local_a00 = (long *)0x0;
  if ((pcVar16 == (char *)0x0) || (sVar8 = strlen(pcVar16), sVar8 < 2)) {
    uVar19 = 0;
    uVar20 = 0;
    pcVar9 = (char *)0x0;
LAB_00a674a4:
    local_9f4 = 0x80;
    iVar7 = getsockname((int)param_1[0x4c],local_1e8,&local_9f4);
    if (iVar7 == 0) {
      if (local_1e8[0].sa_family == 10) {
        pcVar16 = local_1e8[0].sa_data + 6;
      }
      else {
        pcVar16 = (char *)((ulong)local_1e8 | 4);
      }
      inet_ntop((uint)local_1e8[0].sa_family,pcVar16,acStack_5ec,0x401);
      bVar2 = false;
      pcVar16 = acStack_5ec;
LAB_00a67514:
      FUN_00a2fe40(param_1,pcVar16,0,&local_a00);
      if (local_a00 != (long *)0x0) {
        lVar18 = *local_a00;
        FUN_00a301e8(lVar15);
        if (lVar18 != 0) {
          (*(code *)PTR_free_01769a00)(pcVar9);
          local_9f0 = -1;
          do {
            iVar7 = FUN_00a26bcc(param_1,lVar18,0,&local_9f0);
            if (iVar7 == 0) {
              memcpy(local_1e8,*(void **)(lVar18 + 0x20),(ulong)*(uint *)(lVar18 + 0x10));
              local_9f4 = *(socklen_t *)(lVar18 + 0x10);
              uVar5 = uVar19 & 0xffff;
              if ((uVar20 & 0xffff) < uVar5) goto LAB_00a67634;
              if (!bVar2) goto LAB_00a6782c;
              local_1e8[0].sa_data._0_2_ =
                   (ushort)(uVar19 >> 8) & 0xff | (ushort)((uVar19 & 0xff00ff) << 8);
              iVar7 = bind(local_9f0,local_1e8,local_9f4);
              if (iVar7 == 0) goto LAB_00a67874;
              piVar13 = (int *)__errno();
              uVar19 = uVar5;
              goto LAB_00a676b8;
            }
            lVar18 = *(long *)(lVar18 + 0x28);
          } while (lVar18 != 0);
          puVar11 = (undefined4 *)__errno();
          uVar12 = FUN_00a2afbc(param_1,*puVar11);
          FUN_00a38a08(lVar15,"socket failure: %s",uVar12);
          goto LAB_00a675d0;
        }
      }
      pcVar10 = "failed to resolve the address provided to PORT: %s";
    }
    else {
      puVar11 = (undefined4 *)__errno();
      pcVar16 = (char *)FUN_00a2afbc(param_1,*puVar11);
      pcVar10 = "getsockname() failed: %s";
    }
    FUN_00a38a08(lVar15,pcVar10,pcVar16);
    (*(code *)PTR_free_01769a00)(pcVar9);
  }
  else {
    if (sVar8 < 0x2f) {
      sVar8 = 0x2e;
    }
    pcVar9 = (char *)(*(code *)PTR_calloc_01769a18)(sVar8 + 1,1);
    if (pcVar9 == (char *)0x0) {
      iVar7 = 0x1b;
      goto LAB_00a675d4;
    }
    pcVar10 = pcVar16;
    if (*pcVar16 == ':') {
LAB_00a67710:
      pcVar16 = strchr(pcVar10,0x3a);
      if (pcVar16 == (char *)0x0) {
LAB_00a67764:
        uVar4 = 0;
        uVar5 = 0;
      }
      else {
        strtoul(pcVar16 + 1,(char **)0x0,10);
        uVar4 = FUN_00a2c6bc();
        pcVar16 = strchr(pcVar16,0x2d);
        uVar5 = uVar4;
        if (pcVar16 != (char *)0x0) {
          strtoul(pcVar16 + 1,(char **)0x0,10);
          uVar5 = FUN_00a2c6bc();
        }
      }
    }
    else {
      if (*pcVar16 == '[') {
        pcVar10 = strchr(pcVar16,0x5d);
        if (pcVar10 != (char *)0x0) {
          pcVar16 = pcVar16 + 1;
          sVar8 = (long)pcVar10 - (long)pcVar16;
          goto LAB_00a67708;
        }
        goto LAB_00a67764;
      }
      pcVar10 = strchr(pcVar16,0x3a);
      if ((pcVar10 != (char *)0x0) && (iVar7 = inet_pton(10,pcVar16,local_1e8), iVar7 != 1)) {
        sVar8 = (long)pcVar10 - (long)pcVar16;
LAB_00a67708:
        strncpy(pcVar9,pcVar16,sVar8);
        goto LAB_00a67710;
      }
      strcpy(pcVar9,pcVar16);
      uVar4 = 0;
      uVar5 = 0;
    }
    uVar19 = 0;
    if ((uVar4 & 0xffff) <= (uVar5 & 0xffff)) {
      uVar19 = uVar4;
    }
    uVar20 = 0;
    if ((uVar4 & 0xffff) <= (uVar5 & 0xffff)) {
      uVar20 = uVar5;
    }
    if (*pcVar9 == '\0') goto LAB_00a674a4;
    uVar17 = *(undefined4 *)(param_1[0xc] + 4);
    uVar6 = FUN_00a44e58(*(undefined8 *)(param_1[0xc] + 0x20));
    iVar7 = FUN_00a44fa4(uVar17,uVar6,(int)param_1[0x15],pcVar9,acStack_5ec,0x401);
    if (iVar7 == 0) {
      bVar2 = true;
      pcVar16 = pcVar9;
      goto LAB_00a67514;
    }
    if (iVar7 != 1) {
      if (iVar7 != 2) goto LAB_00a674a4;
      bVar2 = true;
      pcVar16 = acStack_5ec;
      goto LAB_00a67514;
    }
  }
  goto LAB_00a675d0;
  while( true ) {
    uVar4 = uVar19 + 1;
    uVar19 = uVar4 & 0xffff;
    if ((uVar20 & 0xffff) < uVar19) goto LAB_00a67634;
    local_1e8[0].sa_data._0_2_ = (ushort)(uVar4 >> 8) & 0xff | (ushort)((uVar4 & 0xff00ff) << 8);
    iVar7 = bind(local_9f0,local_1e8,local_9f4);
    if (iVar7 == 0) break;
LAB_00a676b8:
    iVar7 = *piVar13;
    if ((iVar7 != 0xd) && (iVar7 != 0x62)) {
      if (iVar7 != 99) goto LAB_00a67914;
      uVar12 = FUN_00a2afbc(param_1);
      FUN_00a38740(lVar15,"bind(port=%hu) on non-local address failed: %s\n",uVar19,uVar12);
      local_9f4 = 0x80;
      iVar7 = getsockname((int)param_1[0x4c],local_1e8,&local_9f4);
      if (iVar7 == 0) goto LAB_00a6782c;
      iVar7 = *piVar13;
      goto LAB_00a67898;
    }
  }
LAB_00a67874:
  local_9f4 = 0x80;
  iVar7 = getsockname(local_9f0,local_1e8,&local_9f4);
  if (iVar7 == 0) {
    iVar7 = listen(local_9f0,1);
    if (iVar7 == 0) {
      FUN_00a2fa9c(lVar18,local_168,0x100);
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
        bVar2 = true;
      }
      if (param_2 != 2) {
        if (bVar2) {
          if (local_1e8[0].sa_family != 2) {
            if (local_1e8[0].sa_family == 10) {
              do {
                if (param_2 == 0) goto LAB_00a67b10;
              } while ((param_2 != 1) && (param_2 = param_2 + 1, param_2 != 2));
            }
            else {
              do {
                if (param_2 == 1) break;
                if (((local_1e8[0].sa_family | 8) == 10) && (param_2 == 0)) goto LAB_00a67b10;
                param_2 = param_2 + 1;
              } while (param_2 != 2);
            }
          }
          else {
            do {
              if (param_2 == 0) goto LAB_00a67b10;
              if (param_2 == 1) goto LAB_00a67a64;
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
            if (param_2 == 0) goto LAB_00a67a64;
          } while (param_2 != 0);
        }
      }
      uVar17 = 2;
      goto LAB_00a67a20;
    }
    puVar11 = (undefined4 *)__errno();
    uVar12 = FUN_00a2afbc(param_1,*puVar11);
    pcVar16 = "socket failure: %s";
  }
  else {
    piVar13 = (int *)__errno();
    iVar7 = *piVar13;
LAB_00a67898:
    uVar12 = FUN_00a2afbc(param_1,iVar7);
    pcVar16 = "getsockname() failed: %s";
  }
  FUN_00a38a08(lVar15,pcVar16,uVar12);
  goto LAB_00a67934;
LAB_00a67914:
  uVar12 = FUN_00a2afbc(param_1);
  FUN_00a38a08(lVar15,"bind(port=%hu) failed: %s",uVar19,uVar12);
  goto LAB_00a67934;
LAB_00a67b10:
  uVar17 = 1;
  if (local_1e8[0].sa_family != 2) {
    uVar17 = 2;
  }
  iVar7 = FUN_00a54d8c(param_1 + 0xc3,"%s |%d|%s|%hu|",&DAT_013cbe08,uVar17,local_168,
                       (ushort)local_1e8[0].sa_data._0_2_ >> 8 | local_1e8[0].sa_data._0_2_ << 8);
  if (iVar7 != 0) {
    uVar12 = FUN_00a2af4c(iVar7);
    FUN_00a38a08(lVar15,"Failure sending EPRT command: %s",uVar12);
    FUN_00a25eac(param_1,local_9f0);
    *(undefined4 *)((long)param_1 + 0x6bc) = 1;
    *(undefined4 *)(param_1 + 0xd9) = 0;
    goto LAB_00a675d4;
  }
  uVar17 = 0;
LAB_00a67a20:
  *(undefined4 *)((long)param_1 + 0x6bc) = uVar17;
  if (*(int *)((long)param_1 + 0x264) != -1) {
    FUN_00a25eac(param_1);
    *(undefined4 *)((long)param_1 + 0x264) = 0xffffffff;
  }
  *(undefined4 *)((long)param_1 + 0x714) = 0;
  iVar7 = 0;
  *(undefined1 *)((long)param_1 + 0x3c6) = 1;
  *(int *)((long)param_1 + 0x264) = local_9f0;
  *(undefined4 *)(param_1 + 0xd9) = 0x1c;
  goto LAB_00a675d4;
LAB_00a67a64:
  pcVar16 = local_168;
  pcVar9 = local_9ec;
  do {
    cVar14 = *pcVar16;
    if (cVar14 == '.') {
      cVar14 = ',';
    }
    else if (cVar14 == '\0') break;
    *pcVar9 = cVar14;
    pcVar16 = pcVar16 + 1;
    pcVar9 = pcVar9 + 1;
  } while( true );
  *pcVar9 = '\0';
  FUN_00a241ac(pcVar9,0x14,",%d,%d",uVar3 & 0xff,(ushort)uVar3 >> 8);
  iVar7 = FUN_00a54d8c(param_1 + 0xc3,"%s %s",&DAT_013cbe0d,local_9ec);
  if (iVar7 != 0) {
    uVar12 = FUN_00a2af4c(iVar7);
    FUN_00a38a08(lVar15,"Failure sending PORT command: %s",uVar12);
    FUN_00a25eac(param_1,local_9f0);
    *(undefined4 *)(param_1 + 0xd9) = 0;
    goto LAB_00a675d4;
  }
  uVar17 = 1;
  goto LAB_00a67a20;
  while( true ) {
    piVar13 = (int *)__errno();
    if ((*piVar13 != 0xd) && (uVar19 = uVar5, *piVar13 != 0x62)) goto LAB_00a67914;
    uVar5 = uVar5 + 1 & 0xffff;
    if ((uVar20 & 0xffff) < uVar5) break;
LAB_00a6782c:
    local_1e8[0].sa_data._0_2_ = (ushort)(uVar5 >> 8) | (ushort)((uVar5 & 0xff00ff) << 8);
    iVar7 = bind(local_9f0,local_1e8,local_9f4);
    if (iVar7 == 0) goto LAB_00a67874;
  }
LAB_00a67634:
  FUN_00a38a08(lVar15,"bind() failed, we ran out of ports!");
LAB_00a67934:
  FUN_00a25eac(param_1,local_9f0);
LAB_00a675d0:
  iVar7 = 0x1e;
LAB_00a675d4:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

