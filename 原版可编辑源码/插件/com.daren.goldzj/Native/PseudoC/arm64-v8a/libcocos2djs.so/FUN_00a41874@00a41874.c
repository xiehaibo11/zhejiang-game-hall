
int FUN_00a41874(long *param_1,long *param_2,byte param_3,undefined4 *param_4)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  size_t sVar7;
  long lVar8;
  long lVar9;
  char *__s;
  long lVar10;
  undefined4 uVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  long lVar15;
  long local_60;
  long local_58;
  
  lVar9 = *param_2;
  local_60 = 0;
  local_58 = 0;
  if ((int)param_2[0x30] == 2) {
                    /* try { // try from 00a418c4 to 00b419a7 has its CatchHandler @ 00a4170c */
    bVar4 = *(int *)((long)param_2 + (ulong)(*(int *)((long)param_2 + 0x264) != -1) * 0x28 + 0x2ec)
            == 2;
    plVar1 = param_2 + 0x16;
    if (!bVar4) {
      plVar1 = param_2 + 0x2b;
    }
    lVar12 = plVar1[2];
    if (bVar4) goto LAB_00a418f4;
    lVar15 = param_2[0x33];
  }
  else {
    lVar12 = param_2[0x18];
LAB_00a418f4:
    lVar15 = (long)(int)param_2[0x34];
  }
  uVar2 = *(uint *)((long)param_1 + 0xc);
  uVar3 = *(uint *)(param_1 + 2);
  *(byte *)((long)param_1 + 0x1a) = param_3 & 1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *param_4 = 0;
  uVar3 = uVar3 & uVar2;
  if (((uVar3 >> 5 & 1) == 0) || (*(char *)param_2[0x44] != '\0')) {
    if ((char)param_2[0x78] == '\0') {
LAB_00a41b4c:
      iVar5 = 0;
      goto LAB_00a41b50;
    }
    if (((uVar3 >> 3 & 1) == 0) || (uVar6 = FUN_00a43eb0(), (uVar6 & 1) == 0)) {
      if ((uVar3 >> 2 & 1) != 0) {
        uVar11 = 5;
        *(undefined4 *)((long)param_1 + 0x14) = 4;
        __s = "CRAM-MD5";
        goto joined_r0x00a419c8;
      }
      if (((uVar3 >> 6 & 1) == 0) || (uVar6 = FUN_00a45580(), (uVar6 & 1) == 0)) {
        lVar10 = local_58;
        if (((uVar3 >> 8 & 1) == 0) || (lVar8 = param_2[0x46], lVar8 == 0)) {
          if (((uVar3 >> 7 & 1) != 0) && (lVar12 = param_2[0x46], lVar12 != 0)) {
            *(undefined4 *)((long)param_1 + 0x14) = 0x80;
            if (((param_3 & 1) == 0) && (*(char *)(lVar9 + 0x878) == '\0')) {
              uVar14 = 0x10;
              uVar13 = 0x10;
              __s = "XOAUTH2";
              goto joined_r0x00a41c94;
            }
            iVar5 = FUN_00a460d0(lVar9,param_2[0x43],0,0,lVar12,&local_58,&local_60);
            __s = "XOAUTH2";
            uVar11 = 0xd;
joined_r0x00a41c24:
            uVar13 = 0x10;
            goto joined_r0x00a41ae4;
          }
          if ((uVar3 & 1) == 0) {
            if ((uVar3 >> 1 & 1) == 0) goto LAB_00a41b4c;
                    /* catch() { ... } // from try @ 00a41a1c with catch @ 00a41be4 */
                    /* catch() { ... } // from try @ 00a419fc with catch @ 00a41be8 */
            *(undefined4 *)((long)param_1 + 0x14) = 2;
            if (((param_3 & 1) != 0) || (*(char *)(lVar9 + 0x878) != '\0')) {
                    /* catch() { ... } // from try @ 00a41a34 with catch @ 00a41bf8 */
              iVar5 = FUN_00a43904(lVar9,param_2[0x43],param_2[0x44],&local_58,&local_60);
              __s = "PLAIN";
              uVar11 = 1;
              goto joined_r0x00a41c24;
            }
            uVar11 = 1;
                    /* try { // try from 00a41ca4 to 00b41cbb has its CatchHandler @ 00a41eac */
            uVar13 = 0x10;
            __s = "PLAIN";
            uVar14 = 0x10;
          }
          else {
            *(undefined4 *)((long)param_1 + 0x14) = 1;
            if (((param_3 & 1) != 0) || (*(char *)(lVar9 + 0x878) != '\0')) {
              iVar5 = FUN_00a43a28(lVar9,param_2[0x43],&local_58,&local_60);
              __s = "LOGIN";
              uVar13 = 3;
              uVar11 = 2;
              goto joined_r0x00a41ae4;
            }
            uVar11 = 2;
            uVar13 = 3;
            __s = "LOGIN";
            uVar14 = uVar13;
          }
        }
        else {
          *(undefined4 *)((long)param_1 + 0x14) = 0x100;
          if (((param_3 & 1) != 0) || (*(char *)(lVar9 + 0x878) != '\0')) {
            iVar5 = FUN_00a460d0(lVar9,param_2[0x43],lVar12,lVar15,lVar8,&local_58,&local_60);
            __s = "OAUTHBEARER";
            uVar13 = 0xe;
            uVar11 = 0xd;
            goto joined_r0x00a41ae4;
          }
          uVar14 = 0xe;
                    /* try { // try from 00a41c50 to 00b41ca3 has its CatchHandler @ 00a41c50
                       catch() { ... } // from try @ 00a41c50 with catch @ 00a41c50
                       catch() { ... } // from try @ 00a41e30 with catch @ 00a41c50 */
          uVar13 = 0xe;
          __s = "OAUTHBEARER";
joined_r0x00a41c94:
          uVar11 = 0xd;
        }
      }
      else {
        *(undefined4 *)((long)param_1 + 0x14) = 0x40;
        if (((param_3 & 1) == 0) && (*(char *)(lVar9 + 0x878) == '\0')) {
          uVar11 = 8;
          uVar13 = 9;
          __s = "NTLM";
          lVar10 = local_58;
          uVar14 = 9;
          goto joined_r0x00a41c94;
        }
        iVar5 = FUN_00a4576c(param_2[0x43],param_2[0x44],param_2 + 0x96,&local_58,&local_60);
        __s = "NTLM";
        uVar13 = 9;
        uVar11 = 8;
joined_r0x00a41ae4:
        lVar10 = local_58;
        uVar14 = uVar13;
        if (iVar5 != 0) goto LAB_00a41b50;
      }
    }
    else {
                    /* catch() { ... } // from try @ 00a4178c with catch @ 00a41938 */
      uVar11 = 6;
                    /* catch() { ... } // from try @ 00a41780 with catch @ 00a4193c */
                    /* catch() { ... } // from try @ 00a41760 with catch @ 00a41940 */
      *(undefined4 *)((long)param_1 + 0x14) = 8;
      __s = "DIGEST-MD5";
joined_r0x00a419c8:
      uVar13 = 0x10;
      lVar10 = local_58;
      uVar14 = uVar13;
    }
joined_r0x00a41c94:
    local_58 = lVar10;
                    /* try { // try from 00a41a1c to 00b41a27 has its CatchHandler @ 00a41be4 */
                    /* try { // try from 00a41a28 to 00b41a33 has its CatchHandler @ 00a41be0 */
                    /* try { // try from 00a41a34 to 00b41b6b has its CatchHandler @ 00a41bf8 */
    if (((lVar10 != 0) && (uVar6 = *(ulong *)(*param_1 + 0x10), uVar13 = uVar14, uVar6 != 0)) &&
       (sVar7 = strlen(__s), uVar6 < local_60 + sVar7)) {
      (*(code *)PTR_free_01d1b748)(lVar10);
      lVar10 = 0;
      local_58 = 0;
    }
  }
  else {
    *(undefined4 *)((long)param_1 + 0x14) = 0x20;
    if (((param_3 & 1) != 0) || (*(char *)(lVar9 + 0x878) != '\0')) {
      iVar5 = FUN_00a43ac4(lVar9,param_2[0x43],&local_58,&local_60);
                    /* try { // try from 00a419fc to 00b41a13 has its CatchHandler @ 00a41be8 */
      __s = "EXTERNAL";
      uVar13 = 0x10;
      uVar11 = 4;
      goto joined_r0x00a41ae4;
    }
    uVar11 = 4;
    uVar13 = 0x10;
    __s = "EXTERNAL";
    lVar10 = 0;
  }
  iVar5 = (**(code **)(*param_1 + 0x18))(param_2,__s,lVar10);
  if (iVar5 == 0) {
    *param_4 = 1;
    if (local_58 == 0) {
      uVar13 = uVar11;
    }
    *(undefined4 *)(param_1 + 1) = uVar13;
  }
LAB_00a41b50:
  (*(code *)PTR_free_01d1b748)(local_58);
                    /* try { // try from 00a41b6c to 00b41c4f has its CatchHandler @ 00a419a8 */
  return iVar5;
}

