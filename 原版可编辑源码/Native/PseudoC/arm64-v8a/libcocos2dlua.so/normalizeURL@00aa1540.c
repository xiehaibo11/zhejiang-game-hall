
/* fairygui::UIPackage::normalizeURL(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall fairygui::UIPackage::normalizeURL(UIPackage *this,basic_string *param_1)

{
  size_t __n;
  UIPackage UVar1;
  long lVar2;
  void *pvVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  UIPackage *pUVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  size_t sVar10;
  ulong local_98;
  ulong local_90;
  void *local_88;
  ulong local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
                    /* try { // try from 00aa1558 to 00ba15a7 has its CatchHandler @ 00aa1558
                       catch() { ... } // from try @ 00aa1558 with catch @ 00aa1558
                       catch() { ... } // from try @ 00aa160c with catch @ 00aa1558
                       catch() { ... } // from try @ 00aa1650 with catch @ 00aa1558 */
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  UVar1 = *this;
  sVar10 = *(size_t *)(this + 8);
  __n = (ulong)((byte)UVar1 >> 1);
  if (((byte)UVar1 & 1) != 0) {
    __n = sVar10;
  }
  if (__n != 0) {
    pUVar4 = *(UIPackage **)(this + 0x10);
    if (((byte)UVar1 & 1) == 0) {
      pUVar4 = this + 1;
    }
    pvVar3 = memchr(pUVar4,0x2f,__n);
                    /* try { // try from 00aa15a8 to 00ba160b has its CatchHandler @ 00aa1690 */
    if ((pvVar3 != (void *)0x0) && (lVar9 = (long)pvVar3 - (long)pUVar4, lVar9 != -1)) {
      uVar6 = lVar9 + 2;
      uVar8 = __n - uVar6;
      if ((uVar6 <= __n && uVar8 != 0) && (uVar8 != 0)) {
        pvVar3 = memchr(pUVar4 + uVar6,0x2f,uVar8);
        if ((pvVar3 != (void *)0x0) &&
           (uVar7 = (long)pvVar3 - (long)pUVar4, uVar7 != 0xffffffffffffffff)) {
          uVar5 = (uVar7 - lVar9) - 2;
          if (uVar5 <= uVar8) {
            uVar8 = uVar5;
          }
          local_78 = 0;
          local_70 = (void *)0x0;
          local_80 = 0;
          if (0xffffffffffffffef < uVar8) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
                    /* try { // try from 00aa160c to 00ba163b has its CatchHandler @ 00aa1558 */
          if (uVar8 < 0x17) {
            pvVar3 = (void *)((ulong)&local_80 | 1);
            local_80 = (ulong)(byte)((int)uVar8 << 1);
            if (uVar8 != 0) goto LAB_00aa1688;
          }
          else {
            uVar5 = uVar8 + 0x10 & 0xfffffffffffffff0;
            pvVar3 = operator_new(uVar5);
            local_80 = uVar5 | 1;
            local_78 = uVar8;
            local_70 = pvVar3;
LAB_00aa1688:
                    /* catch() { ... } // from try @ 00aa15a8 with catch @ 00aa1690
                       catch() { ... } // from try @ 00aa163c with catch @ 00aa1690 */
            memcpy(pvVar3,pUVar4 + uVar6,uVar8);
          }
          uVar6 = (ulong)((byte)UVar1 >> 1);
          if (((byte)UVar1 & 1) != 0) {
            uVar6 = sVar10;
          }
          *(undefined1 *)((long)pvVar3 + uVar8) = 0;
          local_90 = 0;
          local_88 = (void *)0x0;
          local_98 = 0;
          if (uVar6 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          uVar6 = uVar6 - (uVar7 + 1);
          pUVar4 = this + 1;
          if (((byte)UVar1 & 1) != 0) {
            pUVar4 = *(UIPackage **)(this + 0x10);
          }
          if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uVar6 < 0x17) {
            pvVar3 = (void *)((ulong)&local_98 | 1);
            local_98 = (ulong)(byte)((int)uVar6 << 1);
            if (uVar6 != 0) goto LAB_00aa1714;
          }
          else {
            uVar8 = uVar6 + 0x10 & 0xfffffffffffffff0;
            pvVar3 = operator_new(uVar8);
            local_98 = uVar8 | 1;
            local_90 = uVar6;
            local_88 = pvVar3;
LAB_00aa1714:
            memcpy(pvVar3,pUVar4 + uVar7 + 1,uVar6);
          }
          *(undefined1 *)((long)pvVar3 + uVar6) = 0;
          getItemURL((basic_string *)&local_80,(basic_string *)&local_98);
          if ((local_98 & 1) != 0) {
            operator_delete(local_88);
          }
          if ((local_80 & 1) != 0) {
            operator_delete(local_70);
          }
          goto LAB_00aa1638;
        }
      }
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(in_x8,(basic_string *)this);
LAB_00aa1638:
                    /* try { // try from 00aa163c to 00ba164f has its CatchHandler @ 00aa1690 */
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00aa1650 to 00ba16ab has its CatchHandler @ 00aa1558 */
  return;
}

