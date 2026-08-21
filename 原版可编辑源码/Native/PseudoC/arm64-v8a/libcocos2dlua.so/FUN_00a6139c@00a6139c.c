
int FUN_00a6139c(long *param_1,undefined1 *param_2)

{
  bool bVar1;
  void *pvVar2;
  long *plVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  size_t sVar9;
  long lVar10;
  long lVar11;
  __off_t _Var12;
  ssize_t sVar13;
  ulong uVar14;
  void *__buf;
  undefined8 uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  size_t sVar21;
  undefined1 auVar22 [16];
  undefined8 local_120;
  undefined4 uStack_118;
  undefined4 local_114;
  int iStack_110;
  int local_10c;
  int iStack_108;
  long local_b8;
  __time_t local_90;
  byte *local_68;
  
  lVar18 = *param_1;
  auVar22 = FUN_00a2e828();
  *param_2 = 1;
  FUN_00a47c70(lVar18);
  FUN_00a30fe4(lVar18);
  lVar19 = *param_1;
  puVar20 = *(undefined8 **)(lVar19 + 0x218);
  if (*(char *)(lVar18 + 0x621) != '\0') {
    pcVar8 = strchr((char *)*puVar20,0x2f);
    pvVar2 = (void *)(lVar19 + 0xb08);
    auVar22 = FUN_00a2e828();
    lVar18 = *param_1;
    *(void **)(lVar18 + 0x208) = pvVar2;
    if ((pcVar8 == (char *)0x0) || (pcVar8[1] == '\0')) {
      return 0x25;
    }
    plVar3 = (long *)(lVar19 + 0x8cd8);
    iVar5 = 0x241;
    if (*plVar3 != 0) {
      iVar5 = 0x441;
    }
    iVar5 = open((char *)*puVar20,iVar5,*(undefined8 *)(lVar18 + 0x658));
    if (-1 < iVar5) {
      if (*(long *)(lVar19 + 0x8cf8) != -1) {
        FUN_00a30ed8(lVar19);
      }
      if (*plVar3 < 0) {
                    /* try { // try from 00a618b8 to 00b6192f has its CatchHandler @ 00a618b8
                       catch() { ... } // from try @ 00a618b8 with catch @ 00a618b8
                       catch() { ... } // from try @ 00a6193c with catch @ 00a618b8 */
        iVar6 = fstat(iVar5,(stat *)&stack0xffffffffffffff18);
        if (iVar6 != 0) {
          close(iVar5);
          uVar15 = *puVar20;
          pcVar8 = "Can\'t get the size of %s";
          goto LAB_00a618d8;
        }
        *plVar3 = local_b8;
      }
      lVar18 = 0;
      while (iVar6 = FUN_00a48330(param_1,0x4000,&local_120), iVar6 == 0) {
        sVar21 = (size_t)(int)local_120;
        if ((int)local_120 < 1) {
          iVar7 = FUN_00a306d0(param_1);
                    /* catch() { ... } // from try @ 00a61930 with catch @ 00a619b8 */
          iVar6 = 0;
          if (iVar7 != 0) {
            iVar6 = 0x2a;
          }
          break;
        }
        lVar17 = *plVar3;
        __buf = pvVar2;
        if (lVar17 != 0) {
          lVar10 = lVar17 - sVar21;
          bVar1 = (long)sVar21 <= lVar17;
          __buf = (void *)(lVar19 + lVar17 + 0xb08);
          sVar21 = sVar21 - lVar17;
          lVar17 = 0;
          if (bVar1) {
            sVar21 = 0;
            __buf = pvVar2;
            lVar17 = lVar10;
          }
          *plVar3 = lVar17;
        }
        sVar9 = write(iVar5,__buf,sVar21);
        if (sVar9 != sVar21) {
          iVar6 = 0x37;
          break;
        }
        lVar18 = sVar21 + lVar18;
        FUN_00a3112c(lVar19,lVar18);
        iVar6 = FUN_00a306d0(param_1);
        if (iVar6 != 0) {
          iVar6 = 0x2a;
          break;
        }
        iVar6 = FUN_00a450e0(lVar19,auVar22._0_8_,auVar22._8_8_);
        if (iVar6 != 0) break;
      }
      close(iVar5);
      return iVar6;
    }
    uVar15 = *puVar20;
    pcVar8 = "Can\'t open %s for writing";
LAB_00a618d8:
    FUN_00a38a08(lVar19,pcVar8,uVar15);
    return 0x17;
  }
  iVar5 = *(int *)(puVar20 + 2);
  iVar6 = fstat(iVar5,(stat *)&stack0xffffffffffffff18);
  lVar19 = local_b8;
  if (iVar6 == -1) {
    lVar19 = 0;
    bVar1 = false;
  }
  else {
    *(__time_t *)(lVar18 + 0x8d78) = local_90;
    if ((*(long *)(lVar18 + 0x8cd0) == 0) && (*(int *)(lVar18 + 0x420) != 0)) {
      uVar14 = FUN_00a48654(lVar18);
      bVar1 = true;
      if ((uVar14 & 1) == 0) {
        *param_2 = 1;
        return 0;
      }
    }
    else {
      bVar1 = true;
    }
  }
  pvVar2 = (void *)(lVar18 + 0xb08);
  if (((*(char *)(lVar18 + 0x620) != '\0') && (*(char *)(lVar18 + 0x61d) != '\0')) && (bVar1)) {
    FUN_00a241ac(pvVar2,0x4001,"Content-Length: %ld\r\n",lVar19);
    iVar5 = FUN_00a391f0(param_1,3,pvVar2,0);
    if (iVar5 != 0) {
      return iVar5;
    }
    iVar5 = FUN_00a391f0(param_1,3,"Accept-ranges: bytes\r\n",0);
    if (iVar5 != 0) {
      return iVar5;
    }
    iVar5 = FUN_00a4ca74(local_90,&local_120);
    if (iVar5 != 0) {
      return iVar5;
    }
    lVar17 = 6;
    if (iStack_108 != 0) {
      lVar17 = (long)iStack_108 + -1;
    }
    FUN_00a241ac(pvVar2,0x3fff,"Last-Modified: %s, %02d %s %4d %02d:%02d:%02d GMT\r\n",
                 (&PTR_DAT_016a3f40)[lVar17],local_114,(&PTR_DAT_016a3f78)[iStack_110],
                 local_10c + 0x76c,uStack_118,local_120._4_4_,(int)local_120);
    iVar5 = FUN_00a391f0(param_1,3,pvVar2,0);
    if (iVar5 != 0) {
      return iVar5;
    }
    FUN_00a30eac(lVar18,lVar19);
    return 0;
  }
  lVar17 = *param_1;
  if ((*(char *)(lVar17 + 0x8cc9) == '\0') || (*(char **)(lVar17 + 0x8cd0) == (char *)0x0)) {
    *(undefined8 *)(lVar17 + 0x88) = 0xffffffffffffffff;
  }
  else {
    lVar10 = strtol(*(char **)(lVar17 + 0x8cd0),(char **)&local_120,0);
    uVar16 = (uint)*local_120;
    if (*local_120 != 0) {
      do {
        iVar6 = isspace(uVar16);
        if ((uVar16 != 0x2d) && (iVar6 == 0)) break;
        local_120 = local_120 + 1;
        uVar16 = (uint)*local_120;
      } while (uVar16 != 0);
    }
    pbVar4 = local_120;
    lVar11 = strtol((char *)local_120,(char **)&local_68,0);
    if (pbVar4 == local_68) {
      lVar11 = -1;
    }
    if ((lVar10 < 0) || (lVar11 != -1)) {
      if (lVar10 < 0) {
                    /* try { // try from 00a619f0 to 00b61a67 has its CatchHandler @ 00a619f0
                       catch() { ... } // from try @ 00a619f0 with catch @ 00a619f0
                       catch() { ... } // from try @ 00a61a74 with catch @ 00a619f0 */
        *(long *)(lVar17 + 0x88) = -lVar10;
        *(long *)(lVar17 + 0x8cd8) = lVar10;
      }
      else {
        *(long *)(lVar17 + 0x88) = (1 - lVar10) + lVar11;
        *(long *)(lVar17 + 0x8cd8) = lVar10;
      }
    }
    else {
      *(long *)(lVar17 + 0x8cd8) = lVar10;
    }
  }
  plVar3 = (long *)(lVar18 + 0x8cd8);
  lVar17 = *plVar3;
  if (lVar17 < 0) {
    if (!bVar1) {
      FUN_00a38a08(lVar18,"Can\'t get the size of file.");
      return 0x1a;
    }
    lVar17 = local_b8 + lVar17;
    *plVar3 = lVar17;
  }
  if (lVar19 < lVar17) {
    FUN_00a38a08(lVar18,"failed to resume file:// transfer");
    return 0x24;
  }
  lVar10 = *(long *)(lVar18 + 0x88);
  if (*(long *)(lVar18 + 0x88) < 1) {
    lVar10 = lVar19 - lVar17;
  }
  if (bVar1) {
    FUN_00a30eac(lVar18,lVar10);
    lVar17 = *plVar3;
  }
  if ((lVar17 != 0) && (_Var12 = lseek(iVar5,lVar17,0), lVar17 != _Var12)) {
    return 0x24;
  }
  FUN_00a30f04(lVar18,7);
  if ((bool)(bVar1 & lVar10 != 0)) {
    lVar19 = 0;
    do {
      if (lVar10 < 0x3fff) {
        sVar21 = FUN_00a2c6fc(lVar10);
      }
      else {
        sVar21 = 0x3fff;
      }
      sVar13 = read(iVar5,pvVar2,sVar21);
      if ((sVar13 < 1) || (*(undefined1 *)(lVar18 + sVar13 + 0xb08) = 0, lVar10 == 0))
      goto LAB_00a619dc;
      iVar6 = FUN_00a391f0(param_1,1,pvVar2,sVar13);
      if (iVar6 != 0) {
        return iVar6;
      }
      lVar19 = sVar13 + lVar19;
      FUN_00a31094(lVar18,lVar19);
      iVar6 = FUN_00a306d0(param_1);
      if (iVar6 != 0) goto LAB_00a61a08;
      lVar10 = lVar10 - sVar13;
      iVar6 = FUN_00a450e0(lVar18,auVar22._0_8_,auVar22._8_8_);
    } while (iVar6 == 0);
  }
  else {
    lVar19 = 0;
    do {
                    /* try { // try from 00a61930 to 00b6193b has its CatchHandler @ 00a619b8 */
      sVar13 = read(iVar5,pvVar2,0x3fff);
                    /* try { // try from 00a6193c to 00b619ef has its CatchHandler @ 00a618b8 */
      if (sVar13 < 1) goto LAB_00a619dc;
      *(undefined1 *)(lVar18 + sVar13 + 0xb08) = 0;
      iVar6 = FUN_00a391f0(param_1,1,pvVar2,sVar13);
      if (iVar6 != 0) {
        return iVar6;
      }
      lVar19 = sVar13 + lVar19;
      FUN_00a31094(lVar18,lVar19);
      iVar6 = FUN_00a306d0(param_1);
      if (iVar6 != 0) goto LAB_00a61a08;
      iVar6 = FUN_00a450e0(lVar18,auVar22._0_8_,auVar22._8_8_);
    } while (iVar6 == 0);
  }
  goto LAB_00a61a0c;
LAB_00a619dc:
  iVar6 = 0;
  goto LAB_00a61a0c;
LAB_00a61a08:
  iVar6 = 0x2a;
LAB_00a61a0c:
  iVar5 = FUN_00a306d0(param_1);
  if (iVar5 != 0) {
    iVar6 = 0x2a;
  }
  return iVar6;
}

