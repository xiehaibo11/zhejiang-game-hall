
/* cocos2d::FontFreeType::getGlyphBitmap(unsigned long, long&, long&, cocos2d::Rect&, int&) */

void * __thiscall
cocos2d::FontFreeType::getGlyphBitmap
          (FontFreeType *this,ulong param_1,long *param_2,long *param_3,Rect *param_4,int *param_5)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  uint uVar5;
  undefined1 uVar6;
  long lVar7;
  int iVar8;
  void *__dest;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  void *pvVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined1 *puVar23;
  long lVar24;
  undefined1 *puVar25;
  ulong uVar26;
  void *__src;
  long lVar27;
  long lVar28;
  size_t sVar29;
  long lVar30;
  undefined1 auVar31 [16];
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  if (*(long *)(this + 0x28) != 0) {
    if (this[0x58] == (FontFreeType)0x0) {
      uVar11 = 0x8004;
    }
    else {
      uVar11 = 0x8006;
    }
                    /* catch() { ... } // from try @ 00f0578c with catch @ 00f05858 */
    iVar8 = FT_Load_Char(*(long *)(this + 0x28),param_1,uVar11);
    if (iVar8 == 0) {
      lVar17 = *(long *)(*(long *)(this + 0x28) + 0x98);
                    /* try { // try from 00f058b4 to 01005967 has its CatchHandler @ 00f058b4
                       catch() { ... } // from try @ 00f058b4 with catch @ 00f058b4
                       catch() { ... } // from try @ 00f059d4 with catch @ 00f058b4
                       catch() { ... } // from try @ 00f05a20 with catch @ 00f058b4 */
      *(float *)param_4 = (float)(*(long *)(lVar17 + 0x40) >> 6);
      *(float *)(param_4 + 4) = (float)-(*(long *)(lVar17 + 0x48) >> 6);
      auVar31._0_8_ = *(long *)(lVar17 + 0x30) >> 6;
      auVar31._8_8_ = *(long *)(lVar17 + 0x38) >> 6;
      auVar31 = NEON_scvtf(auVar31,8);
      *(ulong *)(param_4 + 8) = CONCAT44((float)auVar31._8_8_,(float)auVar31._0_8_);
      *param_5 = (int)(*(ulong *)(lVar17 + 0x50) >> 6);
      *param_2 = (ulong)*(uint *)(lVar17 + 0x9c);
      uVar5 = *(uint *)(lVar17 + 0x98);
      *param_3 = (ulong)uVar5;
      __src = *(void **)(lVar17 + 0xa8);
      if (((*(float *)(this + 0x5c) <= 0.0) || (uVar5 == 0)) || (*param_2 < 1)) goto LAB_00f05870;
      sVar29 = *param_2 * (ulong)uVar5;
      uVar20 = sVar29;
      if ((long)sVar29 < 0) {
        uVar20 = 0xffffffffffffffff;
      }
      __dest = operator_new__(uVar20,(nothrow_t *)&std::nothrow);
      memcpy(__dest,__src,sVar29);
      puVar9 = (undefined1 *)getGlyphBitmapWithOutline(this,param_1,(FT_BBox_ *)&local_88);
      if (puVar9 != (undefined1 *)0x0) {
                    /* try { // try from 00f05968 to 0100597f has its CatchHandler @ 00f05af0 */
        lVar22 = (long)*(float *)param_4;
        lVar28 = local_88 >> 6;
        lVar30 = lStack_80 >> 6;
        lVar19 = (long)(*(float *)param_4 + (float)*param_2);
                    /* try { // try from 00f0598c to 01005997 has its CatchHandler @ 00f05aec */
        lVar17 = lVar28;
        if (lVar22 <= lVar28) {
          lVar17 = lVar22;
        }
                    /* try { // try from 00f059a0 to 010059ab has its CatchHandler @ 00f05abc */
        lVar18 = (long)((float)-*param_3 - *(float *)(param_4 + 4));
        lVar24 = (long)-*(float *)(param_4 + 4);
        lVar27 = lStack_70 >> 6;
        *(float *)param_4 = (float)lVar17;
        local_78 = local_78 >> 6;
        lVar21 = lVar27;
        if (lVar27 <= lVar24) {
          lVar21 = lVar24;
        }
                    /* try { // try from 00f059c8 to 010059d3 has its CatchHandler @ 00f05af0 */
        lVar4 = local_78;
        if (local_78 <= lVar19) {
          lVar4 = lVar19;
        }
                    /* try { // try from 00f059d4 to 01005a13 has its CatchHandler @ 00f058b4 */
        lVar10 = lVar4 - lVar17;
        lVar19 = lVar30;
        if (lVar18 <= lVar30) {
          lVar19 = lVar18;
        }
        __src = (void *)0x0;
        lVar19 = lVar21 - lVar19;
        *(float *)(param_4 + 4) = *(float *)(this + 0x5c) + (float)-lVar21;
        if ((0 < lVar10) && (0 < lVar19)) {
                    /* try { // try from 00f05a14 to 01005a1f has its CatchHandler @ 00f05ab8 */
          lVar18 = local_78 - lVar28;
                    /* try { // try from 00f05a20 to 01005b0b has its CatchHandler @ 00f058b4 */
          sVar29 = lVar19 * lVar10 * 2;
          uVar20 = sVar29;
          if (lVar19 * lVar10 < 0) {
            uVar20 = 0xffffffffffffffff;
          }
          __src = operator_new__(uVar20,(nothrow_t *)&std::nothrow);
          memset(__src,0,sVar29);
          if (0 < lVar18) {
            lVar16 = 0;
            puVar15 = (undefined1 *)
                      ((long)__src + ((lVar28 + (lVar21 - lVar27) * lVar10) - lVar17) * 2);
            puVar13 = puVar9;
            do {
              lVar28 = lVar27 - lVar30;
              puVar23 = puVar15;
              puVar25 = puVar13;
              if (0 < lVar27 - lVar30) {
                do {
                  uVar6 = *puVar25;
                  puVar25 = puVar25 + lVar18;
                    /* catch() { ... } // from try @ 00f05a14 with catch @ 00f05ab8 */
                  lVar28 = lVar28 + -1;
                    /* catch() { ... } // from try @ 00f059a0 with catch @ 00f05abc */
                  *puVar23 = uVar6;
                  puVar23 = puVar23 + lVar4 * 2 + lVar17 * -2;
                } while (lVar28 != 0);
              }
              lVar16 = lVar16 + 1;
              puVar13 = puVar13 + 1;
              puVar15 = puVar15 + 2;
            } while (lVar16 != lVar18);
          }
          lVar28 = *param_2;
          if (0 < lVar28) {
                    /* catch() { ... } // from try @ 00f0598c with catch @ 00f05aec */
            uVar20 = *param_3;
                    /* catch() { ... } // from try @ 00f05968 with catch @ 00f05af0
                       catch() { ... } // from try @ 00f059c8 with catch @ 00f05af0 */
            lVar21 = lVar21 - lVar24;
                    /* try { // try from 00f05b0c to 01005bcb has its CatchHandler @ 00f05b0c
                       catch() { ... } // from try @ 00f05b0c with catch @ 00f05b0c
                       catch() { ... } // from try @ 00f05bf4 with catch @ 00f05b0c
                       catch() { ... } // from try @ 00f05c40 with catch @ 00f05b0c */
            lVar30 = (long)__src + lVar22 * 2 + lVar17 * -2 + 1;
            pvVar2 = (void *)((long)__src + ((lVar22 + (lVar21 + 1) * lVar10) - lVar17) * 2);
            lVar18 = 0;
            pvVar3 = (void *)((long)__src + ((lVar22 + lVar21 * lVar10) - lVar17) * 2);
            uVar26 = uVar20 & 0xfffffffffffffffe;
            lVar22 = lVar28;
            pvVar1 = __dest;
            do {
              if (0 < (long)uVar20) {
                if (uVar20 == 1 || lVar28 != 1) {
                  uVar12 = 0;
                }
                else {
                  lVar24 = 1;
                  uVar12 = uVar26;
                  pvVar14 = __dest;
                  do {
                    puVar13 = (undefined1 *)((long)pvVar14 + lVar18);
                    uVar6 = *(undefined1 *)((long)pvVar14 + lVar22);
                    uVar12 = uVar12 - 2;
                    pvVar14 = (void *)((long)pvVar14 + lVar28 * 2);
                    *(undefined1 *)((long)pvVar3 + lVar24) = *puVar13;
                    *(undefined1 *)((long)pvVar2 + lVar24) = uVar6;
                    lVar24 = lVar24 + lVar4 * 4 + lVar17 * -4;
                  } while (uVar12 != 0);
                  uVar12 = uVar26;
                    /* try { // try from 00f05bcc to 01005bd7 has its CatchHandler @ 00f05ca8 */
                  if (uVar20 == uVar26) goto LAB_00f05b6c;
                }
                    /* try { // try from 00f05bd8 to 01005bf3 has its CatchHandler @ 00f05c90 */
                puVar13 = (undefined1 *)((long)pvVar1 + lVar28 * uVar12);
                puVar15 = (undefined1 *)(lVar30 + lVar10 * 2 * (lVar21 + uVar12));
                lVar24 = uVar20 - uVar12;
                do {
                  uVar6 = *puVar13;
                  puVar13 = puVar13 + lVar28;
                  lVar24 = lVar24 + -1;
                    /* try { // try from 00f05bf4 to 01005c23 has its CatchHandler @ 00f05b0c */
                  *puVar15 = uVar6;
                  puVar15 = puVar15 + lVar4 * 2 + lVar17 * -2;
                } while (lVar24 != 0);
              }
LAB_00f05b6c:
              lVar18 = lVar18 + 1;
              pvVar2 = (void *)((long)pvVar2 + 2);
              lVar22 = lVar22 + 1;
              pvVar3 = (void *)((long)pvVar3 + 2);
              pvVar1 = (void *)((long)pvVar1 + 1);
              lVar30 = lVar30 + 2;
            } while (lVar18 < lVar28);
          }
        }
        *(float *)(param_4 + 8) = (float)lVar10;
        *(float *)(param_4 + 0xc) = (float)lVar19;
        *param_2 = lVar10;
        *param_3 = lVar19;
                    /* try { // try from 00f05c24 to 01005c3f has its CatchHandler @ 00f05cc4 */
        operator_delete__(puVar9);
        if (__dest != (void *)0x0) {
          operator_delete__(__dest);
        }
        goto LAB_00f05870;
      }
      if (__dest != (void *)0x0) {
        operator_delete__(__dest);
      }
    }
  }
  __src = (void *)0x0;
  *(undefined8 *)(param_4 + 8) = 0;
  *param_5 = 0;
LAB_00f05870:
                    /* catch() { ... } // from try @ 00f05778 with catch @ 00f05878 */
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00f0576c with catch @ 00f05898 */
  return __src;
}

