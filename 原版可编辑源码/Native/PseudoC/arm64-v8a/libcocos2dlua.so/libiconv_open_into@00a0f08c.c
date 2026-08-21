
void libiconv_open_into(byte *param_1,byte *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  long lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  long *__s1;
  undefined1 *__s1_00;
  long *plVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined *puVar19;
  undefined1 auStack_aa [2];
  int local_a8;
  int local_a4;
  long local_a0 [7];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar12 = (uint)(char)*param_1;
  if (-1 < (char)*param_1) {
    uVar18 = 0;
    uVar17 = 0;
                    /* try { // try from 00a0f0ec to 00b0f12b has its CatchHandler @ 00a0f234 */
    local_a4 = 0;
LAB_00a0f0f0:
    do {
      lVar14 = 0;
      while( true ) {
        uVar13 = uVar12 - 0x20;
        if (0x19 < (uVar12 - 0x61 & 0xff)) {
          uVar13 = uVar12;
        }
        *(char *)((long)local_a0 + lVar14) = (char)uVar13;
        if ((uVar13 & 0xff) == 0) break;
        if ((int)lVar14 == 0x37) goto LAB_00a0f2f8;
        uVar12 = (uint)(char)param_1[lVar14 + 1];
        lVar14 = lVar14 + 1;
        if ((int)uVar12 < 0) goto LAB_00a0f2f8;
      }
      __s1_00 = auStack_aa + lVar14;
      while( true ) {
        for (; puVar1 = __s1_00 + (10 - (long)local_a0), 9 < (long)puVar1; __s1_00 = __s1_00 + -10)
        {
          iVar9 = memcmp(__s1_00,(void *)0x12fc39d,10);
          if (iVar9 != 0) goto LAB_00a0f170;
          *__s1_00 = 0;
          uVar17 = 1;
        }
        if ((long)puVar1 < 8) break;
LAB_00a0f170:
                    /* try { // try from 00a0f174 to 00b0f17b has its CatchHandler @ 00a0f210 */
        if (*(long *)(__s1_00 + 2) != 0x45524f4e47492f2f) break;
        __s1_00[2] = 0;
        __s1_00 = __s1_00 + -8;
        uVar18 = 1;
      }
      if ((char)local_a0[0] != '\0') {
                    /* try { // try from 00a0f19c to 00b0f1d3 has its CatchHandler @ 00a0f230 */
        lVar14 = aliases_lookup(local_a0,(ulong)puVar1 & 0xffffffff);
        if (lVar14 == 0) break;
        uVar12 = *(uint *)(lVar14 + 4);
        if (uVar12 != 0x6f) {
          if (uVar12 != 0x70) {
                    /* try { // try from 00a0f1e8 to 00b0f1f7 has its CatchHandler @ 00a0f234 */
            uVar13 = (uint)(char)*param_2;
            if (-1 < (char)*param_2) {
                    /* try { // try from 00a0f1f8 to 00b0f2b3 has its CatchHandler @ 00a0ef04 */
              local_a8 = 0;
              goto LAB_00a0f208;
            }
            break;
          }
          param_1 = (byte *)locale_charset();
          uVar12 = (uint)(char)*param_1;
          local_a4 = 1;
          if ((int)uVar12 < 0) break;
          goto LAB_00a0f0f0;
        }
      }
      param_1 = (byte *)locale_charset();
      uVar12 = (uint)*param_1;
      if ((uVar12 == 0) || ((char)*param_1 < '\0')) break;
    } while( true );
  }
LAB_00a0f2f8:
  puVar10 = (undefined4 *)__errno();
  *puVar10 = 0x16;
  uVar11 = 0xffffffff;
LAB_00a0f308:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
LAB_00a0f208:
  iVar9 = 0x38;
  plVar16 = local_a0;
LAB_00a0f210:
  do {
                    /* catch() { ... } // from try @ 00a0f174 with catch @ 00a0f210 */
    uVar2 = uVar13 - 0x20;
    if (0x19 < (uVar13 - 0x61 & 0xff)) {
      uVar2 = uVar13;
    }
    *(char *)plVar16 = (char)uVar2;
    if ((uVar2 & 0xff) == 0) {
      do {
        uVar15 = (long)plVar16 - (long)local_a0;
        if ((long)uVar15 < 10) {
          if ((long)uVar15 < 8) goto LAB_00a0f290;
LAB_00a0f250:
          __s1 = plVar16 + -1;
          if (*__s1 != 0x45524f4e47492f2f) goto LAB_00a0f290;
        }
        else {
          __s1 = (long *)((long)plVar16 + -10);
          iVar9 = memcmp(__s1,(void *)0x12fc39d,10);
          if (iVar9 != 0) goto LAB_00a0f250;
        }
        *(undefined1 *)__s1 = 0;
        plVar16 = __s1;
      } while( true );
    }
                    /* catch() { ... } // from try @ 00a0f19c with catch @ 00a0f230 */
    iVar9 = iVar9 + -1;
                    /* catch() { ... } // from try @ 00a0ef50 with catch @ 00a0f234
                       catch() { ... } // from try @ 00a0f0ec with catch @ 00a0f234
                       catch() { ... } // from try @ 00a0f1e8 with catch @ 00a0f234 */
    if (iVar9 == 0) break;
    param_2 = param_2 + 1;
    uVar13 = (uint)(char)*param_2;
    plVar16 = (long *)((long)plVar16 + 1);
  } while (-1 < (int)uVar13);
  goto LAB_00a0f2f8;
LAB_00a0f290:
  if ((char)local_a0[0] != '\0') {
    lVar14 = aliases_lookup(local_a0,uVar15 & 0xffffffff);
    if (lVar14 == 0) goto LAB_00a0f2f8;
    uVar13 = *(uint *)(lVar14 + 4);
    if (uVar13 != 0x6f) goto LAB_00a0f2d8;
  }
                    /* try { // try from 00a0f2b4 to 00b0f36b has its CatchHandler @ 00a0f2b4
                       catch() { ... } // from try @ 00a0f2b4 with catch @ 00a0f2b4
                       catch() { ... } // from try @ 00a0f374 with catch @ 00a0f2b4
                       catch() { ... } // from try @ 00a0f4f0 with catch @ 00a0f2b4 */
  param_2 = (byte *)locale_charset();
  uVar13 = (uint)*param_2;
  if (uVar13 == 0) goto LAB_00a0f2f8;
  plVar16 = local_a0;
  iVar9 = 0x38;
  if ((char)*param_2 < '\0') goto LAB_00a0f2f8;
  goto LAB_00a0f210;
LAB_00a0f2d8:
  if (uVar13 != 0x70) {
    *(uint *)(param_3 + 2) = uVar13;
    *(undefined4 *)(param_3 + 5) = 0;
    *(uint *)((long)param_3 + 0x2c) = uVar12;
    uVar11 = *(undefined8 *)(&UNK_016a24c0 + (ulong)uVar13 * 0x28);
    puVar19 = (&PTR_FUN_016a24b8)[(ulong)uVar13 * 5];
    lVar14 = (ulong)uVar12 * 0x28;
                    /* try { // try from 00a0f36c to 00b0f373 has its CatchHandler @ 00a0f5bc */
    bVar8 = local_a8 == 0;
    *(undefined4 *)(param_3 + 9) = uVar17;
    *(undefined4 *)((long)param_3 + 0x4c) = uVar18;
                    /* try { // try from 00a0f374 to 00b0f3e3 has its CatchHandler @ 00a0f2b4 */
    param_3[4] = uVar11;
    param_3[3] = puVar19;
    pcVar3 = FUN_00a0e48c;
    if (bVar8) {
      pcVar3 = FUN_00a0e538;
    }
    puVar19 = (&PTR_FUN_016a24c8)[(ulong)uVar12 * 5];
    pcVar4 = FUN_00a0e7c8;
    pcVar7 = FUN_00a0e530;
    if (bVar8) {
      pcVar4 = FUN_00a0ea94;
      pcVar7 = FUN_00a0e798;
    }
    param_3[7] = *(undefined8 *)(&UNK_016a24d0 + lVar14);
    param_3[6] = puVar19;
    pcVar5 = FUN_00a0ea70;
    if (bVar8) {
      pcVar5 = FUN_00a0ee04;
    }
    param_3[0xb] = 0;
    param_3[10] = 0;
    param_3[0xd] = 0;
    param_3[0xc] = 0;
    uVar17 = *(undefined4 *)(&DAT_016a24d8 + lVar14);
    uVar11 = 0;
    if (local_a4 != 0) {
      pcVar5 = pcVar7;
      pcVar4 = pcVar3;
    }
                    /* try { // try from 00a0f3e4 to 00b0f3ef has its CatchHandler @ 00a0f550 */
    *param_3 = pcVar4;
    param_3[1] = pcVar5;
    *(undefined4 *)(param_3 + 8) = uVar17;
    *(undefined4 *)((long)param_3 + 0x44) = 0;
    param_3[0xf] = 0;
    param_3[0xe] = 0;
    param_3[0x11] = 0;
    param_3[0x10] = 0;
    if (local_a8 != local_a4) {
      uVar11 = 0;
      param_3[0x12] = 0;
    }
    goto LAB_00a0f308;
  }
  param_2 = (byte *)locale_charset();
  uVar13 = (uint)(char)*param_2;
  local_a8 = 1;
  if ((int)uVar13 < 0) goto LAB_00a0f2f8;
  goto LAB_00a0f208;
}

