
int FUN_00a5c290(undefined8 param_1,char *param_2,undefined8 param_3,long param_4,undefined8 param_5
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
  
                    /* try { // try from 00a5c298 to 00b5c2af has its CatchHandler @ 00a5c590 */
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 00a5c2c8 to 00b5c2e7 has its CatchHandler @ 00a5c5b8 */
  local_8cc = 0x18;
  local_8d8 = (undefined1 *)0x0;
  uVar1 = *(uint *)(param_4 + 4);
  memset(local_89c,0,0x401);
  pcVar8 = strchr(param_2,0x5c);
                    /* try { // try from 00a5c304 to 00b5c36f has its CatchHandler @ 00a5c620 */
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
  iVar6 = FUN_00a55f88(local_89c,0x401);
  if (iVar6 == 0) {
    __n_00 = strlen(local_89c);
                    /* try { // try from 00a5c418 to 00b5c42b has its CatchHandler @ 00a5c5d4 */
    if (*(int *)(param_4 + 0x18) != 0) goto LAB_00a5c378;
LAB_00a5c424:
    if ((*(byte *)(param_4 + 6) >> 3 & 1) == 0) {
                    /* try { // try from 00a5c43c to 00b5c44f has its CatchHandler @ 00a5c5e4 */
      iVar6 = FUN_00a69e28(param_1,param_3,acStack_468);
      if (iVar6 != 0) goto LAB_00a5ca80;
      FUN_00a69a38(acStack_468,param_4 + 8,auStack_498);
                    /* try { // try from 00a5c460 to 00b5c473 has its CatchHandler @ 00a5c620 */
      iVar6 = FUN_00a69c54(param_1,param_3,&local_8b8);
      if (iVar6 != 0) goto LAB_00a5ca80;
      local_910 = auStack_498;
      FUN_00a69a38(&local_8b8,param_4 + 8,&local_480);
    }
    else {
      iVar6 = FUN_00a6a458(param_1,&local_8e0,2);
      if (iVar6 != 0) goto LAB_00a5ca80;
      local_470 = 0;
      uStack_478 = 0;
      local_480 = local_8e0;
      local_8b8 = *(undefined8 *)(param_4 + 8);
      local_8b0 = local_8e0;
      iVar6 = FUN_00a2e804(&local_8b8,0x10,auStack_8c8,0x10);
      if (iVar6 != 0) goto LAB_00a5ca80;
      iVar6 = FUN_00a69e28(param_1,param_3,acStack_468);
      if (iVar6 != 0) goto LAB_00a5ca80;
      FUN_00a69a38(acStack_468,auStack_8c8,auStack_498);
      local_910 = auStack_498;
                    /* try { // try from 00a5c77c to 00b5c7cb has its CatchHandler @ 00a5c654 */
    }
  }
  else {
    FUN_00a38740(param_1,"gethostname() failed, continuing without!\n");
    __n_00 = 0;
    if (*(int *)(param_4 + 0x18) == 0) goto LAB_00a5c424;
LAB_00a5c378:
    iVar6 = FUN_00a6a458(param_1,&local_8b8,2);
                    /* try { // try from 00a5c388 to 00b5c3c7 has its CatchHandler @ 00a5c5c0 */
    if (iVar6 != 0) goto LAB_00a5ca80;
    iVar6 = FUN_00a69e28(param_1,param_3,acStack_468);
    if (iVar6 != 0) goto LAB_00a5ca80;
    iVar6 = FUN_00a6a020(__s,__n,pcVar10,__n_01,acStack_468,auStack_498);
                    /* try { // try from 00a5c3c8 to 00b5c3f3 has its CatchHandler @ 00a5c030 */
    if (iVar6 != 0) goto LAB_00a5ca80;
    iVar6 = FUN_00a6a3a0(auStack_498,&local_8b8,param_4 + 8,&local_480);
    if (iVar6 != 0) goto LAB_00a5ca80;
                    /* try { // try from 00a5c3f4 to 00b5c407 has its CatchHandler @ 00a5c5c4 */
    iVar6 = FUN_00a6a210(auStack_498,&local_8b8,param_4,&local_8d8,&local_8cc);
    local_910 = local_8d8;
    if (iVar6 != 0) goto LAB_00a5ca80;
  }
  if ((uVar1 & 1) != 0) {
    __n_01 = __n_01 << 1;
    __n = __n << 1;
    __n_00 = __n_00 << 1;
  }
  uVar2 = *(uint *)(param_4 + 4);
  uVar15 = __n >> 8 & 0xff;
  uVar7 = local_8cc + 0x58;
                    /* try { // try from 00a5c544 to 00b5c54b has its CatchHandler @ 00a5c5b8 */
  uVar18 = __n_01 + uVar7;
                    /* try { // try from 00a5c55c to 00b5c563 has its CatchHandler @ 00a5c5b4 */
  uVar12 = __n_01 >> 8 & 0xff;
  uVar4 = local_8cc >> 8 & 0xff;
                    /* try { // try from 00a5c574 to 00b5c57b has its CatchHandler @ 00a5c5c0 */
                    /* try { // try from 00a5c57c to 00b5c653 has its CatchHandler @ 00a5c030 */
  uVar17 = __n_00 >> 8 & 0xff;
                    /* catch() { ... } // from try @ 00a5c298 with catch @ 00a5c590 */
                    /* catch() { ... } // from try @ 00a5c280 with catch @ 00a5c594 */
                    /* catch() { ... } // from try @ 00a5c270 with catch @ 00a5c598 */
                    /* catch() { ... } // from try @ 00a5c1d4 with catch @ 00a5c59c */
                    /* catch() { ... } // from try @ 00a5c1bc with catch @ 00a5c5a0 */
                    /* catch() { ... } // from try @ 00a5c0f0 with catch @ 00a5c5a4 */
                    /* catch() { ... } // from try @ 00a5c0d8 with catch @ 00a5c5a8 */
                    /* catch() { ... } // from try @ 00a5c0c8 with catch @ 00a5c5ac */
                    /* catch() { ... } // from try @ 00a5c0b8 with catch @ 00a5c5b0 */
                    /* catch() { ... } // from try @ 00a5c204 with catch @ 00a5c5b4
                       catch() { ... } // from try @ 00a5c55c with catch @ 00a5c5b4 */
                    /* catch() { ... } // from try @ 00a5c2c8 with catch @ 00a5c5b8
                       catch() { ... } // from try @ 00a5c544 with catch @ 00a5c5b8 */
                    /* catch() { ... } // from try @ 00a5c128 with catch @ 00a5c5bc
                       catch() { ... } // from try @ 00a5c510 with catch @ 00a5c5bc */
                    /* catch() { ... } // from try @ 00a5c388 with catch @ 00a5c5c0
                       catch() { ... } // from try @ 00a5c574 with catch @ 00a5c5c0 */
                    /* catch() { ... } // from try @ 00a5c09c with catch @ 00a5c5c4
                       catch() { ... } // from try @ 00a5c3f4 with catch @ 00a5c5c4 */
                    /* catch() { ... } // from try @ 00a5c234 with catch @ 00a5c5d4
                       catch() { ... } // from try @ 00a5c418 with catch @ 00a5c5d4 */
                    /* catch() { ... } // from try @ 00a5c160 with catch @ 00a5c5e4
                       catch() { ... } // from try @ 00a5c43c with catch @ 00a5c5e4 */
                    /* catch() { ... } // from try @ 00a5c304 with catch @ 00a5c620
                       catch() { ... } // from try @ 00a5c460 with catch @ 00a5c620 */
                    /* try { // try from 00a5c654 to 00b5c6ff has its CatchHandler @ 00a5c654
                       catch() { ... } // from try @ 00a5c654 with catch @ 00a5c654
                       catch() { ... } // from try @ 00a5c710 with catch @ 00a5c654
                       catch() { ... } // from try @ 00a5c77c with catch @ 00a5c654
                       catch() { ... } // from try @ 00a5c864 with catch @ 00a5c654 */
  uVar7 = FUN_00a241ac(acStack_468,0x400,&DAT_013c980e,0,0,0,0,0x18,0,0x18,0,0x40,0,0,0,
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
    *(undefined8 *)((long)auStack_460 + uVar12) = uStack_478;
    *(undefined8 *)(acStack_468 + uVar12) = local_480;
  }
  uVar12 = (ulong)local_8cc;
  if (uVar18 < 0x400 - local_8cc) {
    memcpy(acStack_468 + uVar18,local_910,uVar12);
    uVar18 = uVar18 + uVar12;
  }
  (*(code *)PTR_free_01769a00)(local_8d8);
  if (0x3ff < __n + __n_00 + __n_01 + uVar18) {
    FUN_00a38a08(param_1,"user + domain + host name too big");
    iVar6 = 0x1b;
                    /* try { // try from 00a5c700 to 00b5c70f has its CatchHandler @ 00a5c878 */
    goto LAB_00a5ca80;
  }
  if ((uVar1 & 1) == 0) {
    memcpy(acStack_468 + uVar18,pcVar10,__n_01);
                    /* try { // try from 00a5c740 to 00b5c77b has its CatchHandler @ 00a5c87c */
    memcpy(acStack_468 + uVar18 + __n_01,__s,__n);
    lVar9 = uVar18 + __n_01 + __n;
    memcpy(acStack_468 + lVar9,local_89c,__n_00);
  }
  else {
    uVar12 = __n_01 >> 1;
                    /* try { // try from 00a5c710 to 00b5c73f has its CatchHandler @ 00a5c654 */
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
                    /* try { // try from 00a5c7cc to 00b5c863 has its CatchHandler @ 00a5c87c */
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
              puVar16 = puVar16 + 0x40;
            } while (uVar15 != 0);
            uVar15 = uVar17;
            if (uVar12 == uVar17) goto LAB_00a5c844;
          }
        }
      }
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
LAB_00a5c844:
    uVar12 = __n >> 1;
    lVar9 = uVar18 + __n_01;
    if (uVar12 != 0) {
      if (__n < 0x40) {
LAB_00a5c858:
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
                    /* try { // try from 00a5c864 to 00b5c897 has its CatchHandler @ 00a5c654 */
        uVar17 = uVar12 & 0x7fffffffffffffe0;
        if (uVar17 != 0) {
          uVar13 = uVar12 - 1;
                    /* catch() { ... } // from try @ 00a5c700 with catch @ 00a5c878 */
                    /* catch() { ... } // from try @ 00a5c740 with catch @ 00a5c87c
                       catch() { ... } // from try @ 00a5c7cc with catch @ 00a5c87c */
                    /* try { // try from 00a5c898 to 00b5c8eb has its CatchHandler @ 00a5c898
                       catch() { ... } // from try @ 00a5c898 with catch @ 00a5c898
                       catch() { ... } // from try @ 00a5c9f4 with catch @ 00a5c898
                       catch() { ... } // from try @ 00a5cac4 with catch @ 00a5c898 */
          if (((!CARRY8(uVar13 * 2,(ulong)(acStack_468 + lVar9))) && (!CARRY8(uVar13,uVar13))) &&
             (!CARRY8(uVar13 * 2,(ulong)(acStack_468 + __n_01 + uVar18 + 1)))) {
            if ((acStack_468 + lVar9 < __s + uVar12) &&
               (__s < acStack_468 + __n_01 + uVar18 + (__n & 0xfffffffffffffffe)))
            goto LAB_00a5c858;
            pcVar8 = __s + 0x10;
            puVar16 = auStack_448 + __n_01 + uVar18;
            uVar15 = uVar17;
            do {
                    /* try { // try from 00a5c8ec to 00b5c903 has its CatchHandler @ 00a5cae8 */
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
                    /* try { // try from 00a5c908 to 00b5c917 has its CatchHandler @ 00a5cadc */
              puVar16 = puVar16 + 0x40;
            } while (uVar15 != 0);
            uVar15 = uVar17;
            if (uVar12 == uVar17) goto LAB_00a5c950;
          }
        }
      }
                    /* try { // try from 00a5c920 to 00b5c92f has its CatchHandler @ 00a5cad8 */
      lVar11 = uVar12 - uVar15;
      pcVar8 = acStack_468 + __n_01 + uVar18 + uVar15 * 2 + 1;
      pcVar10 = __s + uVar15;
      do {
        cVar3 = *pcVar10;
        *pcVar8 = '\0';
        lVar11 = lVar11 + -1;
        pcVar8[-1] = cVar3;
                    /* try { // try from 00a5c948 to 00b5c967 has its CatchHandler @ 00a5cae0 */
        pcVar8 = pcVar8 + 2;
        pcVar10 = pcVar10 + 1;
      } while (lVar11 != 0);
    }
LAB_00a5c950:
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
                    /* try { // try from 00a5c978 to 00b5c9ab has its CatchHandler @ 00a5caf8 */
          uVar13 = uVar12 - 1;
          if (((!CARRY8(uVar13 * 2,(ulong)(acStack_468 + lVar9))) && (!CARRY8(uVar13,uVar13))) &&
             (!CARRY8(uVar13 * 2,(ulong)(acStack_468 + __n_01 + __n + uVar18 + 1)))) {
                    /* try { // try from 00a5c9bc to 00b5c9f3 has its CatchHandler @ 00a5cae4 */
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
                    /* try { // try from 00a5c9f4 to 00b5ca1f has its CatchHandler @ 00a5c898 */
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
            if (uVar12 == uVar17) goto LAB_00a5ca4c;
          }
        }
      }
      lVar11 = uVar12 - uVar15;
                    /* try { // try from 00a5ca20 to 00b5ca33 has its CatchHandler @ 00a5cae8 */
      pcVar8 = acStack_468 + __n_01 + __n + uVar18 + uVar15 * 2 + 1;
      pcVar10 = local_89c + uVar15;
      do {
        cVar3 = *pcVar10;
        *pcVar8 = '\0';
        lVar11 = lVar11 + -1;
        pcVar8[-1] = cVar3;
                    /* try { // try from 00a5ca44 to 00b5ca57 has its CatchHandler @ 00a5caf8 */
        pcVar8 = pcVar8 + 2;
        pcVar10 = pcVar10 + 1;
      } while (lVar11 != 0);
    }
  }
LAB_00a5ca4c:
  iVar6 = FUN_00a2f7a0(0,acStack_468,lVar9 + __n_00,param_5,param_6);
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_4 + 0x10));
  *(undefined8 *)(param_4 + 0x10) = 0;
  *(undefined4 *)(param_4 + 0x18) = 0;
LAB_00a5ca80:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00a5caa4 to 00b5caab has its CatchHandler @ 00a5cae0 */
  return iVar6;
}

