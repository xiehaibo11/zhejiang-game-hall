
/* cocos2d::FontFNT::getHorizontalKerningForTextUTF32(std::__ndk1::basic_string<char32_t,
   std::__ndk1::char_traits<char32_t>, std::__ndk1::allocator<char32_t> > const&, int&) const */

void * __thiscall
cocos2d::FontFNT::getHorizontalKerningForTextUTF32(FontFNT *this,basic_string *param_1,int *param_2)

{
  ulong uVar1;
  ulong uVar2;
  basic_string *pbVar3;
  basic_string *pbVar4;
  basic_string bVar5;
  ulong uVar6;
  void *pvVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  basic_string *pbVar12;
  long lVar13;
  ulong uVar14;
  undefined4 uVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  undefined2 uVar19;
  undefined8 uVar20;
  
  uVar2 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
  }
  iVar18 = (int)uVar2;
  *param_2 = iVar18;
  if (iVar18 == 0) {
    pvVar7 = (void *)0x0;
  }
  else {
    uVar11 = (long)iVar18 << 2;
    if ((ulong)(long)iVar18 >> 0x3e != 0) {
      uVar11 = 0xffffffffffffffff;
    }
    pvVar7 = operator_new__(uVar11,(nothrow_t *)&std::nothrow);
    if ((pvVar7 != (void *)0x0) && (0 < iVar18)) {
      bVar5 = *param_1;
      pbVar12 = *(basic_string **)(param_1 + 0x10);
                    /* try { // try from 00f031d0 to 010032ff has its CatchHandler @ 00f031d0
                       catch() { ... } // from try @ 00f031d0 with catch @ 00f031d0
                       catch() { ... } // from try @ 00f035f4 with catch @ 00f031d0 */
      uVar11 = 0;
      lVar13 = (long)((uVar2 << 0x20) + -0x100000000) >> 0x20;
      pbVar3 = param_1 + 4;
      if (((byte)bVar5 & 1) != 0) {
        pbVar3 = pbVar12;
      }
      if (0 < lVar13) goto LAB_00f03204;
LAB_00f031e8:
      uVar14 = uVar11 + 1;
LAB_00f031ec:
      *(undefined4 *)((long)pvVar7 + uVar11 * 4) = 0;
      uVar11 = uVar14;
LAB_00f031f0:
      if (uVar11 == (uVar2 & 0xffffffff)) {
        return pvVar7;
      }
      if (lVar13 <= (long)uVar11) goto LAB_00f031e8;
LAB_00f03204:
      uVar16 = *(ulong *)(*(long *)(this + 0x28) + 0x88);
      pbVar4 = param_1 + uVar11 * 4 + 4;
      if (((byte)bVar5 & 1) != 0) {
        pbVar4 = pbVar12 + uVar11 * 4;
      }
      uVar14 = uVar11 + 1;
      uVar15 = 0;
      if (uVar16 == 0) goto LAB_00f032e8;
      uVar20 = CONCAT17(POPCOUNT((char)(uVar16 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(uVar16 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(uVar16 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(uVar16 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(uVar16 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(uVar16 >> 0x10)
                                                                             ),
                                                                     CONCAT11(POPCOUNT((char)(uVar16
                                                                                             >> 8)),
                                                                              POPCOUNT((char)uVar16)
                                                                             )))))));
      uVar19 = NEON_uaddlv(uVar20,1);
      uVar17 = CONCAT62((int6)((ulong)uVar20 >> 0x10),uVar19) & 0xffffffff;
      uVar1 = CONCAT44(*(undefined4 *)pbVar4,*(undefined4 *)(pbVar3 + uVar14 * 4));
      if (uVar17 < 2) {
        uVar8 = uVar16 - 1 & uVar1;
      }
      else {
        uVar8 = uVar1;
        if (uVar16 <= uVar1) {
          uVar8 = 0;
          if (uVar16 != 0) {
            uVar8 = uVar1 / uVar16;
          }
          uVar8 = uVar1 - uVar8 * uVar16;
        }
      }
      plVar9 = *(long **)(*(long *)(*(long *)(this + 0x28) + 0x80) + uVar8 * 8);
      if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
        do {
          uVar10 = plVar9[1];
          if (uVar10 == uVar1) {
            if (plVar9[2] == uVar1) goto LAB_00f032e4;
          }
          else {
            if (uVar17 < 2) {
              uVar10 = uVar10 & uVar16 - 1;
            }
            else if (uVar16 <= uVar10) {
              uVar6 = 0;
              if (uVar16 != 0) {
                uVar6 = uVar10 / uVar16;
              }
              uVar10 = uVar10 - uVar6 * uVar16;
            }
            if (uVar10 != uVar8) break;
          }
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) break;
        } while( true );
      }
      goto LAB_00f031ec;
    }
  }
                    /* try { // try from 00f03300 to 0100331b has its CatchHandler @ 00f03650 */
  return pvVar7;
LAB_00f032e4:
  uVar15 = (undefined4)plVar9[3];
LAB_00f032e8:
  *(undefined4 *)((long)pvVar7 + uVar11 * 4) = uVar15;
  uVar11 = uVar14;
  goto LAB_00f031f0;
}

