
int FUN_01079ebc(long param_1,undefined8 *param_2)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  char *__s1;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  uint *puVar20;
  uint *puVar21;
  ulong uVar22;
  long local_f0 [4];
  int local_cc;
  uint local_c8;
  uint uStack_c4;
  long local_b0 [10];
  
                    /* try { // try from 01079ecc to 01179eff has its CatchHandler @ 01079ecc
                       catch() { ... } // from try @ 01079ecc with catch @ 01079ecc
                       catch() { ... } // from try @ 01079f60 with catch @ 01079ecc */
  puVar20 = *(uint **)(param_1 + 0x348);
  if (puVar20 == (uint *)0x0) {
    return 6;
  }
  uVar3 = *puVar20;
  uVar4 = puVar20[1];
  uVar22 = (ulong)uVar4;
  uVar7 = *(undefined8 *)(param_1 + 0xb8);
  if (uVar4 == 0) {
    uVar22 = 0;
  }
  else {
                    /* try { // try from 01079f00 to 01179f07 has its CatchHandler @ 01079fb4 */
    puVar8 = puVar20 + 0x2c;
    uVar15 = uVar22;
    puVar9 = puVar20;
    puVar21 = &local_c8;
    do {
      puVar9 = puVar9 + 2;
                    /* try { // try from 01079f10 to 01179f17 has its CatchHandler @ 01079f94 */
      uVar15 = uVar15 - 1;
      *(undefined8 *)(puVar21 + 2) = *(undefined8 *)puVar9;
      puVar16 = *(undefined8 **)puVar8;
      *(undefined8 *)(puVar21 + 4) = *puVar16;
      puVar1 = puVar8 + -2;
      puVar8 = puVar8 + 6;
                    /* try { // try from 01079f34 to 01179f5f has its CatchHandler @ 01079f74 */
      *(undefined8 *)(puVar21 + 6) = puVar16[(ulong)(byte)*puVar1 - 1];
      puVar21 = puVar21 + 6;
    } while (uVar15 != 0);
  }
                    /* try { // try from 01079f60 to 01179fcf has its CatchHandler @ 01079ecc */
  local_cc = 0;
  local_c8 = uVar4;
  uStack_c4 = uVar3;
  puVar8 = (uint *)ft_mem_alloc(uVar7,uVar22 * 0x30 + 0x20,&local_cc);
  if (local_cc != 0) {
    return local_cc;
  }
                    /* catch() { ... } // from try @ 01079f34 with catch @ 01079f74 */
  *puVar8 = uVar4;
  puVar8[1] = uVar3;
  puVar9 = puVar8 + 8;
  puVar8[2] = 0xffffffff;
  *(uint **)(puVar8 + 4) = puVar9;
                    /* catch() { ... } // from try @ 01079f10 with catch @ 01079f94 */
  puVar8[6] = 0;
  puVar8[7] = 0;
  if (uVar4 != 0) {
    uVar15 = 0;
    puVar21 = puVar8 + 10;
                    /* catch() { ... } // from try @ 01079f00 with catch @ 01079fb4 */
    plVar13 = local_b0;
    do {
      __s1 = (char *)plVar13[-2];
      lVar10 = plVar13[-1];
      *(char **)(puVar21 + -2) = __s1;
      *(long *)puVar21 = lVar10 * 0x10000;
      lVar11 = *plVar13;
      puVar21[8] = 0xffffffff;
      puVar21[6] = 0xffffffff;
      puVar21[7] = 0;
      uVar14 = lVar11 * 0x10000 + lVar10 * 0x10000;
      uVar2 = uVar14 | 1;
      if (-1 < (long)uVar14) {
        uVar2 = uVar14;
      }
      *(long *)(puVar21 + 2) = (long)uVar2 >> 1;
      *(long *)(puVar21 + 4) = lVar11 * 0x10000;
      iVar6 = strcmp(__s1,"Weight");
      if (iVar6 == 0) {
        uVar7 = 0x77676874;
LAB_0107a048:
        *(undefined8 *)(puVar21 + 6) = uVar7;
      }
      else {
        iVar6 = strcmp(__s1,"Width");
        if (iVar6 == 0) {
          uVar7 = 0x77647468;
          goto LAB_0107a048;
        }
        iVar6 = strcmp(__s1,"OpticalSize");
        if (iVar6 == 0) {
          uVar7 = 0x6f70737a;
          goto LAB_0107a048;
        }
      }
      uVar15 = uVar15 + 1;
      puVar21 = puVar21 + 0xc;
      plVar13 = plVar13 + 3;
    } while (uVar15 < uVar22);
  }
  uVar3 = puVar20[1];
  if (*puVar20 != 1 << (ulong)(uVar3 & 0x1f)) goto LAB_0107a28c;
  lVar10 = *(long *)(puVar20 + 0x44);
  if (uVar3 == 3) {
    lVar11 = *(long *)(lVar10 + 0x38);
    lVar12 = *(long *)(lVar10 + 0x30);
    lVar17 = *(long *)(lVar10 + 0x28);
    lVar19 = 2;
    local_f0[1] = lVar12 + lVar11 + *(long *)(lVar10 + 0x18) + *(long *)(lVar10 + 0x10);
    local_f0[0] = lVar17 + lVar11 + *(long *)(lVar10 + 0x18) + *(long *)(lVar10 + 8);
    lVar18 = 4;
LAB_0107a198:
    local_f0[lVar19] = lVar12 + lVar11 + lVar17 + *(long *)(lVar10 + lVar18 * 8);
  }
  else if (uVar3 == 2) {
    local_f0[1] = *(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 0x18);
    local_f0[0] = *(long *)(lVar10 + 8) + *(long *)(lVar10 + 0x18);
  }
  else {
    if (uVar3 != 1) {
      lVar11 = *(long *)(lVar10 + 0x58);
      lVar17 = *(long *)(lVar10 + 0x48);
      lVar5 = *(long *)(lVar10 + 0x38);
                    /* try { // try from 0107a130 to 0117a15b has its CatchHandler @ 0107a130
                       catch() { ... } // from try @ 0107a130 with catch @ 0107a130
                       catch() { ... } // from try @ 0107a160 with catch @ 0107a130 */
      local_f0[0] = *(long *)(lVar10 + 0x68) + *(long *)(lVar10 + 0x78) + lVar11 + lVar17 + lVar5 +
                    *(long *)(lVar10 + 0x28) + *(long *)(lVar10 + 0x18) + *(long *)(lVar10 + 8);
      lVar12 = *(long *)(lVar10 + 0x50);
      lVar18 = *(long *)(lVar10 + 0x70) + *(long *)(lVar10 + 0x78);
                    /* try { // try from 0107a15c to 0117a15f has its CatchHandler @ 0107a170 */
                    /* try { // try from 0107a160 to 0117a183 has its CatchHandler @ 0107a130 */
      local_f0[1] = lVar18 + lVar11 + lVar12 + lVar5 + *(long *)(lVar10 + 0x30) +
                    *(long *)(lVar10 + 0x18) + *(long *)(lVar10 + 0x10);
                    /* catch() { ... } // from try @ 0107a15c with catch @ 0107a170 */
      lVar19 = 3;
      lVar18 = lVar18 + *(long *)(lVar10 + 0x68) + *(long *)(lVar10 + 0x60);
      lVar11 = lVar18 + lVar11;
      local_f0[2] = lVar18 + lVar5 + *(long *)(lVar10 + 0x30) + *(long *)(lVar10 + 0x28) +
                    *(long *)(lVar10 + 0x20);
      lVar18 = 8;
      goto LAB_0107a198;
    }
    local_f0[0] = *(long *)(lVar10 + 8);
  }
  if (uVar4 != 0) {
    uVar15 = (ulong)local_c8;
    uVar22 = 0;
    do {
      plVar13 = *(long **)(puVar20 + uVar22 * 6 + 0x2e);
      lVar10 = local_f0[uVar22];
      if (*plVar13 < lVar10) {
        uVar14 = (ulong)(byte)puVar20[uVar22 * 6 + 0x2a];
        if (1 < uVar14) {
          lVar17 = 0;
          lVar11 = 1;
          do {
            if (lVar10 <= plVar13[lVar11]) {
              lVar12 = *(long *)((long)plVar13 + (lVar17 >> 0x1d));
              lVar19 = *(long *)(*(long *)(puVar20 + uVar22 * 6 + 0x2c) + (lVar17 >> 0x1d));
              lVar17 = *(long *)(*(long *)(puVar20 + uVar22 * 6 + 0x2c) + lVar11 * 8);
              lVar10 = FT_DivFix(lVar10 - lVar12,plVar13[lVar11] - lVar12);
              puVar9 = *(uint **)(puVar8 + 4);
              lVar10 = lVar10 * (lVar17 - lVar19) + lVar19 * 0x10000;
              goto LAB_0107a278;
            }
            lVar11 = lVar11 + 1;
            lVar17 = lVar17 + 0x100000000;
          } while (lVar11 < (long)uVar14);
        }
        lVar10 = *(long *)(*(long *)(puVar20 + uVar22 * 6 + 0x2c) + uVar14 * 8 + -8);
      }
      else {
        lVar10 = **(long **)(puVar20 + uVar22 * 6 + 0x2c);
      }
      lVar10 = lVar10 << 0x10;
LAB_0107a278:
                    /* try { // try from 0107a27c to 0117a31b has its CatchHandler @ 0107a27c
                       catch(type#1 @ 00000000) { ... } // from try @ 0107a27c with catch @ 0107a27c
                       catch(type#1 @ 00000000) { ... } // from try @ 0107a394 with catch @ 0107a27c
                        */
      uVar14 = uVar22 + 1;
      *(long *)(puVar9 + uVar22 * 0xc + 4) = lVar10;
      uVar22 = uVar14;
    } while (uVar14 < uVar15);
  }
LAB_0107a28c:
  *param_2 = puVar8;
  return local_cc;
}

