
int FUN_00a5825c(long *param_1,long *param_2,byte param_3,undefined4 *param_4)

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
  
                    /* try { // try from 00a58270 to 00b582a3 has its CatchHandler @ 00a582f4 */
  lVar9 = *param_2;
  local_60 = 0;
  local_58 = 0;
  if ((int)param_2[0x30] == 2) {
                    /* try { // try from 00a582a4 to 00b5833f has its CatchHandler @ 00a58154 */
    bVar4 = *(int *)((long)param_2 + (ulong)(*(int *)((long)param_2 + 0x264) != -1) * 0x28 + 0x2ec)
            == 2;
    plVar1 = param_2 + 0x16;
    if (!bVar4) {
      plVar1 = param_2 + 0x2b;
    }
    lVar12 = plVar1[2];
    if (bVar4) goto LAB_00a582dc;
    lVar15 = param_2[0x33];
  }
  else {
    lVar12 = param_2[0x18];
LAB_00a582dc:
    lVar15 = (long)(int)param_2[0x34];
  }
  uVar2 = *(uint *)((long)param_1 + 0xc);
  uVar3 = *(uint *)(param_1 + 2);
  *(byte *)((long)param_1 + 0x1a) = param_3 & 1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *param_4 = 0;
                    /* catch() { ... } // from try @ 00a58258 with catch @ 00a582f0 */
  uVar3 = uVar3 & uVar2;
                    /* catch() { ... } // from try @ 00a58270 with catch @ 00a582f4 */
  if (((uVar3 >> 5 & 1) == 0) || (*(char *)param_2[0x44] != '\0')) {
    if ((char)param_2[0x78] == '\0') {
LAB_00a58534:
      iVar5 = 0;
      goto LAB_00a58538;
    }
    if (((uVar3 >> 3 & 1) == 0) || (uVar6 = FUN_00a5a898(), (uVar6 & 1) == 0)) {
      if ((uVar3 >> 2 & 1) != 0) {
        uVar11 = 5;
        *(undefined4 *)((long)param_1 + 0x14) = 4;
        __s = "CRAM-MD5";
        goto joined_r0x00a583b0;
      }
      if (((uVar3 >> 6 & 1) == 0) || (uVar6 = FUN_00a5bf68(), (uVar6 & 1) == 0)) {
                    /* try { // try from 00a5847c to 00b58493 has its CatchHandler @ 00a586f4 */
        lVar10 = local_58;
        if (((uVar3 >> 8 & 1) == 0) || (lVar8 = param_2[0x46], lVar8 == 0)) {
          if (((uVar3 >> 7 & 1) != 0) && (lVar12 = param_2[0x46], lVar12 != 0)) {
                    /* try { // try from 00a584e0 to 00b58513 has its CatchHandler @ 00a586f8 */
            *(undefined4 *)((long)param_1 + 0x14) = 0x80;
            if (((param_3 & 1) == 0) && (*(char *)(lVar9 + 0x878) == '\0')) {
              uVar14 = 0x10;
              uVar13 = 0x10;
              __s = "XOAUTH2";
              goto joined_r0x00a5867c;
            }
            iVar5 = FUN_00a5cab8(lVar9,param_2[0x43],0,0,lVar12,&local_58,&local_60);
            __s = "XOAUTH2";
            uVar11 = 0xd;
                    /* try { // try from 00a58524 to 00b5855b has its CatchHandler @ 00a586ec */
joined_r0x00a5860c:
            uVar13 = 0x10;
            goto joined_r0x00a584cc;
          }
          if ((uVar3 & 1) == 0) {
            if ((uVar3 >> 1 & 1) == 0) goto LAB_00a58534;
                    /* try { // try from 00a585d0 to 00b58603 has its CatchHandler @ 00a586e8 */
            *(undefined4 *)((long)param_1 + 0x14) = 2;
            if (((param_3 & 1) != 0) || (*(char *)(lVar9 + 0x878) != '\0')) {
              iVar5 = FUN_00a5a2ec(lVar9,param_2[0x43],param_2[0x44],&local_58,&local_60);
              __s = "PLAIN";
                    /* try { // try from 00a58604 to 00b5862f has its CatchHandler @ 00a5841c */
              uVar11 = 1;
              goto joined_r0x00a5860c;
            }
            uVar11 = 1;
            uVar13 = 0x10;
            __s = "PLAIN";
            uVar14 = 0x10;
          }
          else {
            *(undefined4 *)((long)param_1 + 0x14) = 1;
            if (((param_3 & 1) != 0) || (*(char *)(lVar9 + 0x878) != '\0')) {
              iVar5 = FUN_00a5a410(lVar9,param_2[0x43],&local_58,&local_60);
              __s = "LOGIN";
              uVar13 = 3;
              uVar11 = 2;
              goto joined_r0x00a584cc;
            }
            uVar11 = 2;
            uVar13 = 3;
            __s = "LOGIN";
                    /* try { // try from 00a58660 to 00b58673 has its CatchHandler @ 00a586fc */
            uVar14 = uVar13;
          }
        }
        else {
          *(undefined4 *)((long)param_1 + 0x14) = 0x100;
                    /* try { // try from 00a58498 to 00b584d3 has its CatchHandler @ 00a586f0 */
          if (((param_3 & 1) != 0) || (*(char *)(lVar9 + 0x878) != '\0')) {
            iVar5 = FUN_00a5cab8(lVar9,param_2[0x43],lVar12,lVar15,lVar8,&local_58,&local_60);
            __s = "OAUTHBEARER";
            uVar13 = 0xe;
            uVar11 = 0xd;
            goto joined_r0x00a584cc;
          }
          uVar14 = 0xe;
                    /* try { // try from 00a58630 to 00b58643 has its CatchHandler @ 00a586f4 */
          uVar13 = 0xe;
          __s = "OAUTHBEARER";
joined_r0x00a5867c:
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
          goto joined_r0x00a5867c;
        }
        iVar5 = FUN_00a5c154(param_2[0x43],param_2[0x44],param_2 + 0x96,&local_58,&local_60);
        __s = "NTLM";
        uVar13 = 9;
        uVar11 = 8;
joined_r0x00a584cc:
        lVar10 = local_58;
        uVar14 = uVar13;
        if (iVar5 != 0) goto LAB_00a58538;
      }
    }
    else {
      uVar11 = 6;
                    /* catch() { ... } // from try @ 00a58224 with catch @ 00a58324 */
      *(undefined4 *)((long)param_1 + 0x14) = 8;
      __s = "DIGEST-MD5";
joined_r0x00a583b0:
      uVar13 = 0x10;
      lVar10 = local_58;
      uVar14 = uVar13;
    }
joined_r0x00a5867c:
    local_58 = lVar10;
                    /* try { // try from 00a5841c to 00b5847b has its CatchHandler @ 00a5841c
                       catch() { ... } // from try @ 00a5841c with catch @ 00a5841c
                       catch() { ... } // from try @ 00a58604 with catch @ 00a5841c
                       catch() { ... } // from try @ 00a586d4 with catch @ 00a5841c */
    if (((lVar10 != 0) && (uVar6 = *(ulong *)(*param_1 + 0x10), uVar13 = uVar14, uVar6 != 0)) &&
       (sVar7 = strlen(__s), uVar6 < local_60 + sVar7)) {
      (*(code *)PTR_free_01769a00)(lVar10);
      lVar10 = 0;
      local_58 = 0;
    }
  }
  else {
    *(undefined4 *)((long)param_1 + 0x14) = 0x20;
    if (((param_3 & 1) != 0) || (*(char *)(lVar9 + 0x878) != '\0')) {
      iVar5 = FUN_00a5a4ac(lVar9,param_2[0x43],&local_58,&local_60);
      __s = "EXTERNAL";
      uVar13 = 0x10;
      uVar11 = 4;
      goto joined_r0x00a584cc;
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
LAB_00a58538:
  (*(code *)PTR_free_01769a00)(local_58);
                    /* try { // try from 00a58568 to 00b585b7 has its CatchHandler @ 00a586fc */
  return iVar5;
}

