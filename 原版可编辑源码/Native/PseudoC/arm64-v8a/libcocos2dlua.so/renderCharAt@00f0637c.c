
/* cocos2d::FontFreeType::renderCharAt(unsigned char*, int, int, unsigned char*, long, long) */

void __thiscall
cocos2d::FontFreeType::renderCharAt
          (FontFreeType *this,uchar *param_1,int param_2,int param_3,uchar *param_4,long param_5,
          long param_6)

{
  size_t __n;
  uchar *puVar1;
  void *__src;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *__ptr;
  long lVar5;
  uchar *puVar6;
  uchar *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uchar *puVar13;
  uchar *puVar14;
  uchar *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  if (this[0x58] != (FontFreeType)0x0) {
    __ptr = (void *)makeDistanceMap(param_4,param_5,param_6);
    lVar10 = param_6 + 6;
    if (0 < lVar10) {
      __n = param_5 + 6;
      iVar4 = param_3 * 0x200;
      __src = __ptr;
      do {
        if (0 < (long)__n) {
          memcpy(param_1 + (long)iVar4 + (long)param_2,__src,__n);
        }
        iVar4 = iVar4 + 0x200;
        lVar10 = lVar10 + -1;
                    /* try { // try from 00f063fc to 01006403 has its CatchHandler @ 00f06714 */
        __src = (void *)((long)__src + __n);
      } while (lVar10 != 0);
    }
    free(__ptr);
    return;
  }
  if (*(float *)(this + 0x5c) <= 0.0) {
    if (0 < param_6) {
      lVar11 = (long)param_2;
      uVar12 = param_5 & 0xffffffffffffffe0;
      lVar10 = 0;
      puVar1 = param_4 + 0x10;
      lVar16 = (long)param_3 * 0x200;
      puVar13 = param_1 + lVar16 + lVar11 + 0x10;
      puVar14 = param_1 + lVar16;
      puVar15 = param_4;
      do {
        if (0 < param_5) {
                    /* try { // try from 00f06548 to 0100654f has its CatchHandler @ 00f066b0 */
          if ((ulong)param_5 < 0x20) {
LAB_00f06584:
            lVar5 = lVar11;
            uVar8 = 0;
          }
          else {
                    /* try { // try from 00f06550 to 01006597 has its CatchHandler @ 00f06270 */
            puVar6 = puVar13;
            puVar7 = puVar1;
            uVar8 = uVar12;
            if ((param_1 + lVar16 + lVar11 + lVar10 * 0x200 < param_4 + lVar10 * param_5 + param_5)
               && (param_4 + lVar10 * param_5 < param_1 + lVar16 + param_5 + lVar11 + lVar10 * 0x200
                  )) goto LAB_00f06584;
            do {
              uVar17 = *(undefined8 *)(puVar7 + -0x10);
              uVar19 = *(undefined8 *)(puVar7 + 8);
              uVar18 = *(undefined8 *)puVar7;
              uVar8 = uVar8 - 0x20;
              *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar7 + -8);
              *(undefined8 *)(puVar6 + -0x10) = uVar17;
              *(undefined8 *)(puVar6 + 8) = uVar19;
              *(undefined8 *)puVar6 = uVar18;
              puVar6 = puVar6 + 0x20;
              puVar7 = puVar7 + 0x20;
            } while (uVar8 != 0);
            lVar5 = uVar12 + lVar11;
            uVar8 = uVar12;
            if (uVar12 == param_5) goto LAB_00f06524;
          }
          lVar9 = param_5 - uVar8;
          puVar6 = puVar14 + lVar5;
          puVar7 = puVar15 + uVar8;
          do {
                    /* try { // try from 00f06598 to 010065a3 has its CatchHandler @ 00f066d4 */
            lVar9 = lVar9 + -1;
            *puVar6 = *puVar7;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
                    /* try { // try from 00f065a4 to 0100666f has its CatchHandler @ 00f06270 */
          } while (lVar9 != 0);
        }
LAB_00f06524:
        lVar10 = lVar10 + 1;
        puVar1 = puVar1 + param_5;
        puVar13 = puVar13 + 0x200;
        puVar14 = puVar14 + 0x200;
        puVar15 = puVar15 + param_5;
      } while (lVar10 != param_6);
    }
  }
  else {
    if (0 < param_6) {
      lVar10 = 0;
      puVar1 = param_4 + 1;
      iVar3 = param_2 + param_3 * 0x200;
      iVar4 = iVar3 * 2;
      uVar2 = iVar3 * 2 | 1;
      do {
        if (0 < param_5) {
          puVar13 = param_1 + (int)uVar2;
          puVar14 = param_1 + iVar4;
          lVar11 = param_5;
          puVar15 = puVar1;
          do {
                    /* try { // try from 00f064b8 to 010064bf has its CatchHandler @ 00f066c0 */
            lVar11 = lVar11 + -1;
            *puVar14 = puVar15[-1];
                    /* try { // try from 00f064c0 to 01006547 has its CatchHandler @ 00f06270 */
            *puVar13 = *puVar15;
            puVar13 = puVar13 + 2;
            puVar14 = puVar14 + 2;
            puVar15 = puVar15 + 2;
          } while (lVar11 != 0);
        }
        lVar10 = lVar10 + 1;
        puVar1 = puVar1 + param_5 * 2;
        uVar2 = uVar2 + 0x400;
        iVar4 = iVar4 + 0x400;
      } while (lVar10 != param_6);
    }
    if (param_4 != (uchar *)0x0) {
      operator_delete__(param_4);
      return;
    }
  }
  return;
}

