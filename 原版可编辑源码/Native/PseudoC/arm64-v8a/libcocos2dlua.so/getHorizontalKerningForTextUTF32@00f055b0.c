
/* cocos2d::FontFreeType::getHorizontalKerningForTextUTF32(std::__ndk1::basic_string<char32_t,
   std::__ndk1::char_traits<char32_t>, std::__ndk1::allocator<char32_t> > const&, int&) const */

void * __thiscall
cocos2d::FontFreeType::getHorizontalKerningForTextUTF32
          (FontFreeType *this,basic_string *param_1,int *param_2)

{
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  basic_string *pbVar4;
  int iVar5;
  int iVar6;
  void *__s;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong local_78 [2];
  long local_68;
  
                    /* try { // try from 00f055c4 to 01005617 has its CatchHandler @ 00f055c4
                       catch() { ... } // from try @ 00f055c4 with catch @ 00f055c4
                       catch() { ... } // from try @ 00f05640 with catch @ 00f055c4 */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar9 = *(long *)(this + 0x28);
  if (lVar9 != 0) {
    uVar1 = (ulong)((byte)*param_1 >> 1);
    if (((byte)*param_1 & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 8);
    }
    iVar5 = (int)uVar1;
    *param_2 = iVar5;
    if (iVar5 != 0) {
      uVar8 = (long)iVar5 << 2;
                    /* try { // try from 00f05618 to 01005623 has its CatchHandler @ 00f056d0 */
      if ((ulong)(long)iVar5 >> 0x3e != 0) {
        uVar8 = 0xffffffffffffffff;
      }
                    /* try { // try from 00f05624 to 0100563f has its CatchHandler @ 00f056a0 */
      __s = operator_new__(uVar8,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00f05640 to 010056eb has its CatchHandler @ 00f055c4 */
      if (((__s != (void *)0x0) &&
          (memset(__s,0,(long)(uVar1 << 0x20) >> 0x1e), (*(byte *)(lVar9 + 0x10) >> 6 & 1) != 0)) &&
         (1 < iVar5)) {
        lVar10 = 4;
        lVar11 = 2;
        do {
          pbVar2 = param_1 + 4;
          pbVar4 = param_1 + lVar10;
          if (((byte)*param_1 & 1) != 0) {
            pbVar2 = *(basic_string **)(param_1 + 0x10);
            pbVar4 = *(basic_string **)(param_1 + 0x10) + lVar10 + -4;
          }
          uVar7 = *(undefined4 *)(pbVar2 + lVar10);
          iVar5 = FT_Get_Char_Index(lVar9,*(undefined4 *)pbVar4);
          if (iVar5 == 0) {
LAB_00f056d4:
            uVar7 = 0;
          }
          else {
                    /* catch() { ... } // from try @ 00f05624 with catch @ 00f056a0 */
            iVar6 = FT_Get_Char_Index(*(undefined8 *)(this + 0x28),uVar7);
            if (iVar6 == 0) goto LAB_00f056d4;
            iVar5 = FT_Get_Kerning(*(undefined8 *)(this + 0x28),iVar5,iVar6,0,local_78);
            uVar7 = (undefined4)(local_78[0] >> 6);
            if (iVar5 != 0) {
              uVar7 = 0;
            }
          }
          *(undefined4 *)((long)__s + lVar10) = uVar7;
          if (*param_2 <= lVar11) break;
          lVar9 = *(long *)(this + 0x28);
          lVar10 = lVar10 + 4;
          lVar11 = lVar11 + 1;
        } while( true );
      }
      goto LAB_00f056fc;
    }
  }
  __s = (void *)0x0;
LAB_00f056fc:
                    /* try { // try from 00f056fc to 0100576b has its CatchHandler @ 00f056fc
                       catch() { ... } // from try @ 00f056fc with catch @ 00f056fc
                       catch() { ... } // from try @ 00f0579c with catch @ 00f056fc */
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return __s;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

