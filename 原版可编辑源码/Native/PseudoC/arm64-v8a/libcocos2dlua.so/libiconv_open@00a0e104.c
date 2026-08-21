
void libiconv_open(byte *param_1,byte *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  size_t __size;
  code *pcVar3;
  code *pcVar4;
  undefined4 uVar5;
  long lVar6;
  code *pcVar7;
  code *pcVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  long *__s1;
  undefined1 *__s1_00;
  long *plVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined *puVar20;
  undefined1 auStack_aa [6];
  int local_a4;
  long local_a0 [7];
  long local_68;
  
                    /* try { // try from 00a0e110 to 00b0e11b has its CatchHandler @ 00a0e1e0 */
                    /* try { // try from 00a0e11c to 00b0e143 has its CatchHandler @ 00a0e07c */
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar12 = (uint)(char)*param_1;
  if (-1 < (char)*param_1) {
                    /* try { // try from 00a0e144 to 00b0e14b has its CatchHandler @ 00a0e1dc */
                    /* try { // try from 00a0e14c to 00b0e16b has its CatchHandler @ 00a0e07c */
    uVar19 = 0;
    uVar18 = 0;
    iVar17 = 0;
LAB_00a0e164:
    do {
      lVar14 = 0;
      while( true ) {
                    /* try { // try from 00a0e16c to 00b0e173 has its CatchHandler @ 00a0e1dc */
                    /* try { // try from 00a0e174 to 00b0e193 has its CatchHandler @ 00a0e07c */
        uVar13 = uVar12 - 0x20;
        if (0x19 < (uVar12 - 0x61 & 0xff)) {
          uVar13 = uVar12;
        }
        *(char *)((long)local_a0 + lVar14) = (char)uVar13;
        if ((uVar13 & 0xff) == 0) break;
        if ((int)lVar14 == 0x37) goto LAB_00a0e368;
                    /* try { // try from 00a0e194 to 00b0e19f has its CatchHandler @ 00a0e1dc */
        uVar12 = (uint)(char)param_1[lVar14 + 1];
        lVar14 = lVar14 + 1;
        if ((int)uVar12 < 0) goto LAB_00a0e368;
      }
      __s1_00 = auStack_aa + lVar14;
      while( true ) {
        for (; puVar1 = __s1_00 + (10 - (long)local_a0), 9 < (long)puVar1; __s1_00 = __s1_00 + -10)
        {
          iVar9 = memcmp(__s1_00,(void *)0x12fc39d,10);
          if (iVar9 != 0) goto LAB_00a0e1e4;
          *__s1_00 = 0;
          uVar18 = 1;
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a0e144 with catch @ 00a0e1dc
                       catch(type#1 @ 00000000) { ... } // from try @ 00a0e16c with catch @ 00a0e1dc
                       catch(type#1 @ 00000000) { ... } // from try @ 00a0e194 with catch @ 00a0e1dc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a0e0e4 with catch @ 00a0e1e0
                       catch(type#1 @ 00000000) { ... } // from try @ 00a0e110 with catch @ 00a0e1e0
                        */
        if ((long)puVar1 < 8) break;
LAB_00a0e1e4:
        if (*(long *)(__s1_00 + 2) != 0x45524f4e47492f2f) break;
        __s1_00[2] = 0;
        __s1_00 = __s1_00 + -8;
        uVar19 = 1;
      }
      if ((char)local_a0[0] != '\0') {
        lVar14 = aliases_lookup(local_a0,(ulong)puVar1 & 0xffffffff);
        if (lVar14 == 0) break;
        uVar12 = *(uint *)(lVar14 + 4);
        if (uVar12 != 0x6f) {
          if (uVar12 != 0x70) {
            uVar13 = (uint)(char)*param_2;
            if (-1 < (char)*param_2) {
              local_a4 = 0;
              goto LAB_00a0e278;
            }
            break;
          }
          param_1 = (byte *)locale_charset();
          uVar12 = (uint)(char)*param_1;
          iVar17 = 1;
          if ((int)uVar12 < 0) break;
          goto LAB_00a0e164;
        }
      }
      param_1 = (byte *)locale_charset();
      uVar12 = (uint)*param_1;
      if ((uVar12 == 0) || ((char)*param_1 < '\0')) break;
    } while( true );
  }
LAB_00a0e368:
  puVar10 = (undefined4 *)__errno();
  uVar18 = 0x16;
LAB_00a0e370:
  *puVar10 = uVar18;
  puVar11 = (undefined8 *)0xffffffffffffffff;
LAB_00a0e378:
                    /* try { // try from 00a0e378 to 00b0e3c3 has its CatchHandler @ 00a0e378
                       catch() { ... } // from try @ 00a0e378 with catch @ 00a0e378
                       catch() { ... } // from try @ 00a0e40c with catch @ 00a0e378
                       catch() { ... } // from try @ 00a0e624 with catch @ 00a0e378 */
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar11);
LAB_00a0e278:
  iVar9 = 0x38;
  plVar16 = local_a0;
LAB_00a0e280:
  do {
    uVar2 = uVar13 - 0x20;
    if (0x19 < (uVar13 - 0x61 & 0xff)) {
      uVar2 = uVar13;
    }
    *(char *)plVar16 = (char)uVar2;
    if ((uVar2 & 0xff) == 0) {
      do {
        uVar15 = (long)plVar16 - (long)local_a0;
        if ((long)uVar15 < 10) {
          if ((long)uVar15 < 8) goto LAB_00a0e300;
LAB_00a0e2c0:
          __s1 = plVar16 + -1;
          if (*__s1 != 0x45524f4e47492f2f) goto LAB_00a0e300;
        }
        else {
          __s1 = (long *)((long)plVar16 + -10);
          iVar9 = memcmp(__s1,(void *)0x12fc39d,10);
          if (iVar9 != 0) goto LAB_00a0e2c0;
        }
        *(undefined1 *)__s1 = 0;
        plVar16 = __s1;
      } while( true );
    }
    iVar9 = iVar9 + -1;
    if (iVar9 == 0) break;
    param_2 = param_2 + 1;
    uVar13 = (uint)(char)*param_2;
    plVar16 = (long *)((long)plVar16 + 1);
  } while (-1 < (int)uVar13);
  goto LAB_00a0e368;
LAB_00a0e300:
  if ((char)local_a0[0] != '\0') {
    lVar14 = aliases_lookup(local_a0,uVar15 & 0xffffffff);
    iVar9 = local_a4;
    if (lVar14 == 0) goto LAB_00a0e368;
    uVar13 = *(uint *)(lVar14 + 4);
    if (uVar13 != 0x6f) goto LAB_00a0e348;
  }
  param_2 = (byte *)locale_charset();
  uVar13 = (uint)*param_2;
  if (uVar13 == 0) goto LAB_00a0e368;
  plVar16 = local_a0;
  iVar9 = 0x38;
  if ((char)*param_2 < '\0') goto LAB_00a0e368;
  goto LAB_00a0e280;
LAB_00a0e348:
  if (uVar13 != 0x70) {
    __size = 0x98;
    if (local_a4 == iVar17) {
      __size = 0x90;
    }
    puVar11 = malloc(__size);
    if (puVar11 == (undefined8 *)0x0) {
      puVar10 = (undefined4 *)__errno();
      uVar18 = 0xc;
      goto LAB_00a0e370;
    }
                    /* try { // try from 00a0e3c4 to 00b0e40b has its CatchHandler @ 00a0e678 */
    puVar20 = (&PTR_FUN_016a24b8)[(ulong)uVar13 * 5];
    lVar14 = (ulong)uVar12 * 0x28;
    puVar11[4] = *(undefined8 *)(&UNK_016a24c0 + (ulong)uVar13 * 0x28);
    puVar11[3] = puVar20;
    puVar20 = (&PTR_FUN_016a24c8)[(ulong)uVar12 * 5];
    pcVar3 = FUN_00a0e530;
    pcVar7 = FUN_00a0e48c;
                    /* try { // try from 00a0e40c to 00b0e49b has its CatchHandler @ 00a0e378 */
    if (iVar9 == 0) {
      pcVar3 = FUN_00a0e798;
      pcVar7 = FUN_00a0e538;
    }
    uVar5 = *(undefined4 *)(&DAT_016a24d8 + lVar14);
    pcVar4 = FUN_00a0ea70;
    pcVar8 = FUN_00a0e7c8;
    if (iVar9 == 0) {
      pcVar4 = FUN_00a0ee04;
      pcVar8 = FUN_00a0ea94;
    }
    puVar11[7] = *(undefined8 *)(&UNK_016a24d0 + lVar14);
    puVar11[6] = puVar20;
    if (iVar17 != 0) {
      pcVar4 = pcVar3;
      pcVar8 = pcVar7;
    }
    *(uint *)(puVar11 + 2) = uVar13;
    *(undefined4 *)(puVar11 + 5) = 0;
    *(uint *)((long)puVar11 + 0x2c) = uVar12;
    *(undefined4 *)(puVar11 + 9) = uVar18;
    *(undefined4 *)((long)puVar11 + 0x4c) = uVar19;
    puVar11[0xb] = 0;
    puVar11[10] = 0;
    puVar11[0xd] = 0;
    puVar11[0xc] = 0;
    *puVar11 = pcVar8;
    puVar11[1] = pcVar4;
    *(undefined4 *)(puVar11 + 8) = uVar5;
    *(undefined4 *)((long)puVar11 + 0x44) = 0;
    puVar11[0xf] = 0;
    puVar11[0xe] = 0;
    puVar11[0x11] = 0;
    puVar11[0x10] = 0;
    if (iVar9 != iVar17) {
      puVar11[0x12] = 0;
    }
    goto LAB_00a0e378;
  }
  param_2 = (byte *)locale_charset();
  uVar13 = (uint)(char)*param_2;
  local_a4 = 1;
  if ((int)uVar13 < 0) goto LAB_00a0e368;
  goto LAB_00a0e278;
}

