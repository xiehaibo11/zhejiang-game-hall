
int FUN_00a458a8(undefined8 param_1,char *param_2,undefined8 param_3,long param_4,undefined8 param_5
                ,undefined8 param_6)

{
  char *__s;
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  size_t __n;
  long lVar9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined1 *puVar16;
  ulong uVar17;
  ulong uVar18;
  size_t __n_00;
  ulong __n_01;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 *local_910;
  undefined8 local_8e0;
  undefined1 *local_8d8;
  uint local_8cc;
  undefined1 auStack_8c8 [16];
  undefined8 local_8b8;
  undefined8 local_8b0;
  char local_89c [8];
  undefined8 auStack_894 [127];
  undefined1 auStack_498 [24];
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  char acStack_468 [8];
  undefined8 auStack_460 [3];
  undefined1 auStack_448 [992];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  local_8cc = 0x18;
  local_8d8 = (undefined1 *)0x0;
  uVar1 = *(uint *)(param_4 + 4);
  memset(local_89c,0,0x401);
                    /* try { // try from 00a45918 to 00b459ff has its CatchHandler @ 00a4567c */
  pcVar8 = strchr(param_2,0x5c);
  if (pcVar8 == (char *)0x0) {
    pcVar8 = strchr(param_2,0x2f);
  }
  pcVar10 = "";
  __s = param_2;
  if (pcVar8 != (char *)0x0) {
    __s = pcVar8 + 1;
    pcVar10 = param_2;
  }
  __n_01 = 0;
  if (pcVar8 != (char *)0x0) {
    __n_01 = (long)pcVar8 - (long)param_2;
  }
  if (__s == (char *)0x0) {
    __n = 0;
  }
  else {
    __n = strlen(__s);
  }
  iVar6 = FUN_00a3f5a0(local_89c,0x401);
  if (iVar6 == 0) {
    __n_00 = strlen(local_89c);
    if (*(int *)(param_4 + 0x18) != 0) goto LAB_00a45990;
LAB_00a45a3c:
    if ((*(byte *)(param_4 + 6) >> 3 & 1) == 0) {
                    /* try { // try from 00a45a50 to 00b45a67 has its CatchHandler @ 00a45bd0 */
      iVar6 = FUN_00a53440(param_1,param_3,acStack_468);
      if (iVar6 != 0) goto LAB_00a46098;
      FUN_00a53050(acStack_468,param_4 + 8,auStack_498);
                    /* try { // try from 00a45a7c to 00b45a8f has its CatchHandler @ 00a45bcc */
      iVar6 = FUN_00a5326c(param_1,param_3,&local_8b8);
      if (iVar6 != 0) goto LAB_00a46098;
                    /* try { // try from 00a45a90 to 00b45a9f has its CatchHandler @ 00a45ba0 */
      local_910 = auStack_498;
      FUN_00a53050(&local_8b8,param_4 + 8,&local_480);
    }
    else {
                    /* try { // try from 00a45ab8 to 00b45abf has its CatchHandler @ 00a45b84 */
                    /* try { // try from 00a45ac0 to 00b45acf has its CatchHandler @ 00a45bb4 */
      iVar6 = FUN_00a53a70(param_1,&local_8e0,2);
      if (iVar6 != 0) goto LAB_00a46098;
                    /* try { // try from 00a45ad0 to 00b45ad7 has its CatchHandler @ 00a45b9c */
      local_470 = 0;
      uStack_478 = 0;
                    /* try { // try from 00a45ad8 to 00b45b07 has its CatchHandler @ 00a45ba4 */
      local_480 = local_8e0;
      local_8b8 = *(undefined8 *)(param_4 + 8);
      local_8b0 = local_8e0;
      iVar6 = FUN_00a18e1c(&local_8b8,0x10,auStack_8c8,0x10);
      if (iVar6 != 0) goto LAB_00a46098;
                    /* try { // try from 00a45b08 to 00b45c1f has its CatchHandler @ 00a45a00 */
      iVar6 = FUN_00a53440(param_1,param_3,acStack_468);
      if (iVar6 != 0) goto LAB_00a46098;
      FUN_00a53050(acStack_468,auStack_8c8,auStack_498);
      local_910 = auStack_498;
    }
  }
  else {
    FUN_00a22d58(param_1,"gethostname() failed, continuing without!\n");
    __n_00 = 0;
    if (*(int *)(param_4 + 0x18) == 0) goto LAB_00a45a3c;
LAB_00a45990:
                    /* catch() { ... } // from try @ 00a45700 with catch @ 00a45990 */
                    /* catch() { ... } // from try @ 00a456f4 with catch @ 00a45994 */
                    /* catch() { ... } // from try @ 00a456d4 with catch @ 00a45998 */
    iVar6 = FUN_00a53a70(param_1,&local_8b8,2);
    if (iVar6 != 0) goto LAB_00a46098;
                    /* catch() { ... } // from try @ 00a4570c with catch @ 00a459a8 */
    iVar6 = FUN_00a53440(param_1,param_3,acStack_468);
    if (iVar6 != 0) goto LAB_00a46098;
    iVar6 = FUN_00a53638(__s,__n,pcVar10,__n_01,acStack_468,auStack_498);
    if (iVar6 != 0) goto LAB_00a46098;
    iVar6 = FUN_00a539b8(auStack_498,&local_8b8,param_4 + 8,&local_480);
    if (iVar6 != 0) goto LAB_00a46098;
                    /* try { // try from 00a45a00 to 00b45a4f has its CatchHandler @ 00a45a00
                       catch() { ... } // from try @ 00a45a00 with catch @ 00a45a00
                       catch() { ... } // from try @ 00a45b08 with catch @ 00a45a00 */
    iVar6 = FUN_00a53828(auStack_498,&local_8b8,param_4,&local_8d8,&local_8cc);
    local_910 = local_8d8;
    if (iVar6 != 0) goto LAB_00a46098;
  }
  if ((uVar1 & 1) != 0) {
    __n_01 = __n_01 << 1;
    __n = __n << 1;
    __n_00 = __n_00 << 1;
  }
  uVar2 = *(uint *)(param_4 + 4);
  uVar15 = __n >> 8 & 0xff;
  uVar7 = local_8cc + 0x58;
  uVar18 = __n_01 + uVar7;
  uVar12 = __n_01 >> 8 & 0xff;
  uVar4 = local_8cc >> 8 & 0xff;
                    /* catch() { ... } // from try @ 00a45ab8 with catch @ 00a45b84 */
                    /* catch() { ... } // from try @ 00a45ad0 with catch @ 00a45b9c */
                    /* catch() { ... } // from try @ 00a45a90 with catch @ 00a45ba0 */
                    /* catch() { ... } // from try @ 00a45ad8 with catch @ 00a45ba4 */
  uVar17 = __n_00 >> 8 & 0xff;
                    /* catch() { ... } // from try @ 00a45ac0 with catch @ 00a45bb4 */
                    /* catch() { ... } // from try @ 00a45a7c with catch @ 00a45bcc */
                    /* catch() { ... } // from try @ 00a45a50 with catch @ 00a45bd0 */
                    /* try { // try from 00a45c20 to 00b45c63 has its CatchHandler @ 00a45c20
                       catch() { ... } // from try @ 00a45c20 with catch @ 00a45c20
                       catch() { ... } // from try @ 00a45c7c with catch @ 00a45c20 */
                    /* try { // try from 00a45c64 to 00b45c7b has its CatchHandler @ 00a45cac */
                    /* try { // try from 00a45c7c to 00b45cbf has its CatchHandler @ 00a45c20 */
  uVar7 = FUN_00a0e7c4(acStack_468,0x400,&DAT_01896eda,0,0,0,0,0x18,0,0x18,0,0x40,0,0,0,
                       local_8cc & 0xff,uVar4,local_8cc & 0xff,uVar4,0x58,0,0,0,__n_01 & 0xff,uVar12
                       ,__n_01 & 0xff,uVar12,(ulong)uVar7 & 0xff,uVar7 >> 8 & 0xff,0,0,__n & 0xff,
                       uVar15,__n & 0xff,uVar15,uVar18 & 0xff,uVar18 >> 8 & 0xff,0,0,__n_00 & 0xff,
                       uVar17,__n_00 & 0xff,uVar17,uVar18 + __n & 0xff,uVar18 + __n >> 8 & 0xff,0,0,
                       0,0,0,0,0,0,0,0,uVar2 & 0xff,uVar2 >> 8 & 0xff,uVar2 >> 0x10 & 0xff,
                       uVar2 >> 0x18);
  uVar12 = (ulong)(int)uVar7;
  uVar18 = uVar12;
  if (uVar7 < 1000) {
    uVar18 = uVar12 + 0x18;
    *(undefined8 *)((long)auStack_460 + uVar12 + 8) = local_470;
                    /* catch() { ... } // from try @ 00a45c64 with catch @ 00a45cac */
    *(undefined8 *)((long)auStack_460 + uVar12) = uStack_478;
    *(undefined8 *)(acStack_468 + uVar12) = local_480;
  }
  uVar12 = (ulong)local_8cc;
  if (uVar18 < 0x400 - local_8cc) {
                    /* catch() { ... } // from try @ 00a45d28 with catch @ 00a45cc0 */
    memcpy(acStack_468 + uVar18,local_910,uVar12);
    uVar18 = uVar18 + uVar12;
  }
  (*(code *)PTR_free_01d1b748)(local_8d8);
  if (0x3ff < __n + __n_00 + __n_01 + uVar18) {
    FUN_00a23020(param_1,"user + domain + host name too big");
    iVar6 = 0x1b;
                    /* try { // try from 00a45d18 to 00b45d27 has its CatchHandler @ 00a45e18 */
    goto LAB_00a46098;
  }
  if ((uVar1 & 1) == 0) {
    memcpy(acStack_468 + uVar18,pcVar10,__n_01);
    memcpy(acStack_468 + uVar18 + __n_01,__s,__n);
    lVar9 = uVar18 + __n_01 + __n;
    memcpy(acStack_468 + lVar9,local_89c,__n_00);
  }
  else {
    uVar12 = __n_01 >> 1;
                    /* try { // try from 00a45d28 to 00b45e33 has its CatchHandler @ 00a45cc0 */
    if (uVar12 != 0) {
      if (__n_01 < 0x40) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        uVar17 = uVar12 & 0x7fffffffffffffe0;
        if (uVar17 != 0) {
          uVar13 = uVar12 - 1;
          if (((!CARRY8(uVar13 * 2,(ulong)(acStack_468 + uVar18))) && (!CARRY8(uVar13,uVar13))) &&
             (!CARRY8(uVar13 * 2,(ulong)(acStack_468 + uVar18 + 1)))) {
            pcVar8 = pcVar10 + 0x10;
            puVar16 = auStack_448 + uVar18;
            uVar15 = uVar17;
            do {
              uVar20 = *(undefined8 *)(pcVar8 + -8);
              uVar19 = *(undefined8 *)(pcVar8 + -0x10);
              uVar22 = *(undefined8 *)(pcVar8 + 8);
              uVar21 = *(undefined8 *)pcVar8;
              uVar15 = uVar15 - 0x20;
              pcVar8 = pcVar8 + 0x20;
              puVar16[-0x20] = (char)uVar19;
              puVar16[-0x1f] = 0;
              puVar16[-0x1e] = (char)((ulong)uVar19 >> 8);
              puVar16[-0x1d] = 0;
              puVar16[-0x1c] = (char)((ulong)uVar19 >> 0x10);
              puVar16[-0x1b] = 0;
              puVar16[-0x1a] = (char)((ulong)uVar19 >> 0x18);
              puVar16[-0x19] = 0;
              puVar16[-0x18] = (char)((ulong)uVar19 >> 0x20);
              puVar16[-0x17] = 0;
              puVar16[-0x16] = (char)((ulong)uVar19 >> 0x28);
              puVar16[-0x15] = 0;
              puVar16[-0x14] = (char)((ulong)uVar19 >> 0x30);
              puVar16[-0x13] = 0;
              puVar16[-0x12] = (char)((ulong)uVar19 >> 0x38);
              puVar16[-0x11] = 0;
              puVar16[-0x10] = (char)uVar20;
              puVar16[-0xf] = 0;
              puVar16[-0xe] = (char)((ulong)uVar20 >> 8);
              puVar16[-0xd] = 0;
              puVar16[-0xc] = (char)((ulong)uVar20 >> 0x10);
              puVar16[-0xb] = 0;
              puVar16[-10] = (char)((ulong)uVar20 >> 0x18);
              puVar16[-9] = 0;
              puVar16[-8] = (char)((ulong)uVar20 >> 0x20);
              puVar16[-7] = 0;
              puVar16[-6] = (char)((ulong)uVar20 >> 0x28);
              puVar16[-5] = 0;
              puVar16[-4] = (char)((ulong)uVar20 >> 0x30);
              puVar16[-3] = 0;
              puVar16[-2] = (char)((ulong)uVar20 >> 0x38);
              puVar16[-1] = 0;
              *puVar16 = (char)uVar21;
              puVar16[1] = 0;
              puVar16[2] = (char)((ulong)uVar21 >> 8);
              puVar16[3] = 0;
              puVar16[4] = (char)((ulong)uVar21 >> 0x10);
              puVar16[5] = 0;
              puVar16[6] = (char)((ulong)uVar21 >> 0x18);
              puVar16[7] = 0;
              puVar16[8] = (char)((ulong)uVar21 >> 0x20);
              puVar16[9] = 0;
              puVar16[10] = (char)((ulong)uVar21 >> 0x28);
              puVar16[0xb] = 0;
              puVar16[0xc] = (char)((ulong)uVar21 >> 0x30);
              puVar16[0xd] = 0;
              puVar16[0xe] = (char)((ulong)uVar21 >> 0x38);
              puVar16[0xf] = 0;
              puVar16[0x10] = (char)uVar22;
              puVar16[0x11] = 0;
              puVar16[0x12] = (char)((ulong)uVar22 >> 8);
              puVar16[0x13] = 0;
              puVar16[0x14] = (char)((ulong)uVar22 >> 0x10);
              puVar16[0x15] = 0;
              puVar16[0x16] = (char)((ulong)uVar22 >> 0x18);
              puVar16[0x17] = 0;
              puVar16[0x18] = (char)((ulong)uVar22 >> 0x20);
              puVar16[0x19] = 0;
              puVar16[0x1a] = (char)((ulong)uVar22 >> 0x28);
              puVar16[0x1b] = 0;
              puVar16[0x1c] = (char)((ulong)uVar22 >> 0x30);
              puVar16[0x1d] = 0;
              puVar16[0x1e] = (char)((ulong)uVar22 >> 0x38);
              puVar16[0x1f] = 0;
                    /* catch() { ... } // from try @ 00a45d18 with catch @ 00a45e18 */
              puVar16 = puVar16 + 0x40;
            } while (uVar15 != 0);
            uVar15 = uVar17;
            if (uVar12 == uVar17) goto LAB_00a45e5c;
          }
        }
      }
                    /* try { // try from 00a45e34 to 00b45e8b has its CatchHandler @ 00a45e34
                       catch() { ... } // from try @ 00a45e34 with catch @ 00a45e34
                       catch() { ... } // from try @ 00a45fec with catch @ 00a45e34 */
      lVar9 = uVar12 - uVar15;
      pcVar8 = acStack_468 + uVar18 + uVar15 * 2 + 1;
      pcVar10 = pcVar10 + uVar15;
      do {
        cVar3 = *pcVar10;
        *pcVar8 = '\0';
        lVar9 = lVar9 + -1;
        pcVar8[-1] = cVar3;
        pcVar8 = pcVar8 + 2;
        pcVar10 = pcVar10 + 1;
      } while (lVar9 != 0);
    }
LAB_00a45e5c:
    uVar12 = __n >> 1;
    lVar9 = uVar18 + __n_01;
    if (uVar12 != 0) {
      if (__n < 0x40) {
LAB_00a45e70:
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        uVar17 = uVar12 & 0x7fffffffffffffe0;
        if (uVar17 != 0) {
          uVar13 = uVar12 - 1;
                    /* try { // try from 00a45e8c to 00b45ea3 has its CatchHandler @ 00a4606c */
                    /* try { // try from 00a45eac to 00b45eb7 has its CatchHandler @ 00a46068 */
                    /* try { // try from 00a45eb8 to 00b45ec3 has its CatchHandler @ 00a46064 */
          if (((!CARRY8(uVar13 * 2,(ulong)(acStack_468 + lVar9))) && (!CARRY8(uVar13,uVar13))) &&
             (!CARRY8(uVar13 * 2,(ulong)(acStack_468 + __n_01 + uVar18 + 1)))) {
                    /* try { // try from 00a45ec4 to 00b45feb has its CatchHandler @ 00a4607c */
            if ((acStack_468 + lVar9 < __s + uVar12) &&
               (__s < acStack_468 + __n_01 + uVar18 + (__n & 0xfffffffffffffffe)))
            goto LAB_00a45e70;
            pcVar8 = __s + 0x10;
            puVar16 = auStack_448 + __n_01 + uVar18;
            uVar15 = uVar17;
            do {
              uVar20 = *(undefined8 *)(pcVar8 + -8);
              uVar19 = *(undefined8 *)(pcVar8 + -0x10);
              uVar22 = *(undefined8 *)(pcVar8 + 8);
              uVar21 = *(undefined8 *)pcVar8;
              uVar15 = uVar15 - 0x20;
              pcVar8 = pcVar8 + 0x20;
              puVar16[-0x20] = (char)uVar19;
              puVar16[-0x1f] = 0;
              puVar16[-0x1e] = (char)((ulong)uVar19 >> 8);
              puVar16[-0x1d] = 0;
              puVar16[-0x1c] = (char)((ulong)uVar19 >> 0x10);
              puVar16[-0x1b] = 0;
              puVar16[-0x1a] = (char)((ulong)uVar19 >> 0x18);
              puVar16[-0x19] = 0;
              puVar16[-0x18] = (char)((ulong)uVar19 >> 0x20);
              puVar16[-0x17] = 0;
              puVar16[-0x16] = (char)((ulong)uVar19 >> 0x28);
              puVar16[-0x15] = 0;
              puVar16[-0x14] = (char)((ulong)uVar19 >> 0x30);
              puVar16[-0x13] = 0;
              puVar16[-0x12] = (char)((ulong)uVar19 >> 0x38);
              puVar16[-0x11] = 0;
              puVar16[-0x10] = (char)uVar20;
              puVar16[-0xf] = 0;
              puVar16[-0xe] = (char)((ulong)uVar20 >> 8);
              puVar16[-0xd] = 0;
              puVar16[-0xc] = (char)((ulong)uVar20 >> 0x10);
              puVar16[-0xb] = 0;
              puVar16[-10] = (char)((ulong)uVar20 >> 0x18);
              puVar16[-9] = 0;
              puVar16[-8] = (char)((ulong)uVar20 >> 0x20);
              puVar16[-7] = 0;
              puVar16[-6] = (char)((ulong)uVar20 >> 0x28);
              puVar16[-5] = 0;
              puVar16[-4] = (char)((ulong)uVar20 >> 0x30);
              puVar16[-3] = 0;
              puVar16[-2] = (char)((ulong)uVar20 >> 0x38);
              puVar16[-1] = 0;
              *puVar16 = (char)uVar21;
              puVar16[1] = 0;
              puVar16[2] = (char)((ulong)uVar21 >> 8);
              puVar16[3] = 0;
              puVar16[4] = (char)((ulong)uVar21 >> 0x10);
              puVar16[5] = 0;
              puVar16[6] = (char)((ulong)uVar21 >> 0x18);
              puVar16[7] = 0;
              puVar16[8] = (char)((ulong)uVar21 >> 0x20);
              puVar16[9] = 0;
              puVar16[10] = (char)((ulong)uVar21 >> 0x28);
              puVar16[0xb] = 0;
              puVar16[0xc] = (char)((ulong)uVar21 >> 0x30);
              puVar16[0xd] = 0;
              puVar16[0xe] = (char)((ulong)uVar21 >> 0x38);
              puVar16[0xf] = 0;
              puVar16[0x10] = (char)uVar22;
              puVar16[0x11] = 0;
              puVar16[0x12] = (char)((ulong)uVar22 >> 8);
              puVar16[0x13] = 0;
              puVar16[0x14] = (char)((ulong)uVar22 >> 0x10);
              puVar16[0x15] = 0;
              puVar16[0x16] = (char)((ulong)uVar22 >> 0x18);
              puVar16[0x17] = 0;
              puVar16[0x18] = (char)((ulong)uVar22 >> 0x20);
              puVar16[0x19] = 0;
              puVar16[0x1a] = (char)((ulong)uVar22 >> 0x28);
              puVar16[0x1b] = 0;
              puVar16[0x1c] = (char)((ulong)uVar22 >> 0x30);
              puVar16[0x1d] = 0;
              puVar16[0x1e] = (char)((ulong)uVar22 >> 0x38);
              puVar16[0x1f] = 0;
              puVar16 = puVar16 + 0x40;
            } while (uVar15 != 0);
            uVar15 = uVar17;
            if (uVar12 == uVar17) goto LAB_00a45f68;
          }
        }
      }
      lVar11 = uVar12 - uVar15;
      pcVar8 = acStack_468 + __n_01 + uVar18 + uVar15 * 2 + 1;
      pcVar10 = __s + uVar15;
      do {
        cVar3 = *pcVar10;
        *pcVar8 = '\0';
        lVar11 = lVar11 + -1;
        pcVar8[-1] = cVar3;
        pcVar8 = pcVar8 + 2;
        pcVar10 = pcVar10 + 1;
      } while (lVar11 != 0);
    }
LAB_00a45f68:
    uVar12 = __n_00 >> 1;
    lVar9 = lVar9 + __n;
    if (uVar12 != 0) {
      if (__n_00 < 0x40) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        uVar17 = uVar12 & 0x7fffffffffffffe0;
        if (uVar17 != 0) {
          uVar13 = uVar12 - 1;
          if (((!CARRY8(uVar13 * 2,(ulong)(acStack_468 + lVar9))) && (!CARRY8(uVar13,uVar13))) &&
             (!CARRY8(uVar13 * 2,(ulong)(acStack_468 + __n_01 + __n + uVar18 + 1)))) {
                    /* try { // try from 00a45fec to 00b460d3 has its CatchHandler @ 00a45e34 */
            puVar14 = auStack_894 + 1;
            puVar16 = auStack_448 + __n_01 + __n + uVar18;
            uVar15 = uVar17;
            do {
              uVar20 = puVar14[-1];
              uVar19 = puVar14[-2];
              uVar22 = puVar14[1];
              uVar21 = *puVar14;
              uVar15 = uVar15 - 0x20;
              puVar14 = puVar14 + 4;
              puVar16[-0x20] = (char)uVar19;
              puVar16[-0x1f] = 0;
              puVar16[-0x1e] = (char)((ulong)uVar19 >> 8);
              puVar16[-0x1d] = 0;
              puVar16[-0x1c] = (char)((ulong)uVar19 >> 0x10);
              puVar16[-0x1b] = 0;
              puVar16[-0x1a] = (char)((ulong)uVar19 >> 0x18);
              puVar16[-0x19] = 0;
              puVar16[-0x18] = (char)((ulong)uVar19 >> 0x20);
              puVar16[-0x17] = 0;
              puVar16[-0x16] = (char)((ulong)uVar19 >> 0x28);
              puVar16[-0x15] = 0;
              puVar16[-0x14] = (char)((ulong)uVar19 >> 0x30);
              puVar16[-0x13] = 0;
              puVar16[-0x12] = (char)((ulong)uVar19 >> 0x38);
              puVar16[-0x11] = 0;
              puVar16[-0x10] = (char)uVar20;
              puVar16[-0xf] = 0;
              puVar16[-0xe] = (char)((ulong)uVar20 >> 8);
              puVar16[-0xd] = 0;
              puVar16[-0xc] = (char)((ulong)uVar20 >> 0x10);
              puVar16[-0xb] = 0;
              puVar16[-10] = (char)((ulong)uVar20 >> 0x18);
              puVar16[-9] = 0;
              puVar16[-8] = (char)((ulong)uVar20 >> 0x20);
              puVar16[-7] = 0;
              puVar16[-6] = (char)((ulong)uVar20 >> 0x28);
              puVar16[-5] = 0;
              puVar16[-4] = (char)((ulong)uVar20 >> 0x30);
              puVar16[-3] = 0;
              puVar16[-2] = (char)((ulong)uVar20 >> 0x38);
              puVar16[-1] = 0;
              *puVar16 = (char)uVar21;
              puVar16[1] = 0;
              puVar16[2] = (char)((ulong)uVar21 >> 8);
              puVar16[3] = 0;
              puVar16[4] = (char)((ulong)uVar21 >> 0x10);
              puVar16[5] = 0;
              puVar16[6] = (char)((ulong)uVar21 >> 0x18);
              puVar16[7] = 0;
              puVar16[8] = (char)((ulong)uVar21 >> 0x20);
              puVar16[9] = 0;
              puVar16[10] = (char)((ulong)uVar21 >> 0x28);
              puVar16[0xb] = 0;
              puVar16[0xc] = (char)((ulong)uVar21 >> 0x30);
              puVar16[0xd] = 0;
              puVar16[0xe] = (char)((ulong)uVar21 >> 0x38);
              puVar16[0xf] = 0;
              puVar16[0x10] = (char)uVar22;
              puVar16[0x11] = 0;
              puVar16[0x12] = (char)((ulong)uVar22 >> 8);
              puVar16[0x13] = 0;
              puVar16[0x14] = (char)((ulong)uVar22 >> 0x10);
              puVar16[0x15] = 0;
              puVar16[0x16] = (char)((ulong)uVar22 >> 0x18);
              puVar16[0x17] = 0;
              puVar16[0x18] = (char)((ulong)uVar22 >> 0x20);
              puVar16[0x19] = 0;
              puVar16[0x1a] = (char)((ulong)uVar22 >> 0x28);
              puVar16[0x1b] = 0;
              puVar16[0x1c] = (char)((ulong)uVar22 >> 0x30);
              puVar16[0x1d] = 0;
              puVar16[0x1e] = (char)((ulong)uVar22 >> 0x38);
              puVar16[0x1f] = 0;
              puVar16 = puVar16 + 0x40;
            } while (uVar15 != 0);
            uVar15 = uVar17;
            if (uVar12 == uVar17) goto LAB_00a46064;
          }
        }
      }
      lVar11 = uVar12 - uVar15;
      pcVar8 = acStack_468 + __n_01 + __n + uVar18 + uVar15 * 2 + 1;
      pcVar10 = local_89c + uVar15;
      do {
        cVar3 = *pcVar10;
        *pcVar8 = '\0';
        lVar11 = lVar11 + -1;
        pcVar8[-1] = cVar3;
        pcVar8 = pcVar8 + 2;
        pcVar10 = pcVar10 + 1;
      } while (lVar11 != 0);
    }
  }
LAB_00a46064:
                    /* catch() { ... } // from try @ 00a45eb8 with catch @ 00a46064 */
                    /* catch() { ... } // from try @ 00a45eac with catch @ 00a46068 */
                    /* catch() { ... } // from try @ 00a45e8c with catch @ 00a4606c */
  iVar6 = FUN_00a19db8(0,acStack_468,lVar9 + __n_00,param_5,param_6);
                    /* catch() { ... } // from try @ 00a45ec4 with catch @ 00a4607c */
  (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_4 + 0x10));
  *(undefined8 *)(param_4 + 0x10) = 0;
  *(undefined4 *)(param_4 + 0x18) = 0;
LAB_00a46098:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6;
}

