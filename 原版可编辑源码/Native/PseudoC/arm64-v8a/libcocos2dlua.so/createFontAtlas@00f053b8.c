
/* cocos2d::FontFreeType::createFontAtlas() */

FontAtlas * __thiscall cocos2d::FontFreeType::createFontAtlas(FontFreeType *this)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  FontFreeType *pFVar4;
  FontAtlas *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [16];
  void *local_58;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this_00 = *(FontAtlas **)(this + 0x68);
  if (this_00 == (FontAtlas *)0x0) {
    this_00 = operator_new(0xd0,(nothrow_t *)&std::nothrow);
    if (this_00 == (FontAtlas *)0x0) {
      *(undefined8 *)(this + 0x68) = 0;
    }
    else {
      FontAtlas::FontAtlas(this_00,(Font *)this);
      iVar1 = *(int *)(this + 0x70);
      *(FontAtlas **)(this + 0x68) = this_00;
      if (iVar1 != 0) {
        local_50[1] = 0;
        local_40 = (void *)0x0;
        local_50[0] = 0;
        if (iVar1 == 3) {
                    /* try { // try from 00f0547c to 01005487 has its CatchHandler @ 00f055a8 */
          if (((byte)this[0x78] & 1) == 0) {
            pFVar4 = this + 0x79;
                    /* try { // try from 00f05488 to 010054a3 has its CatchHandler @ 00f05578 */
          }
          else {
            pFVar4 = *(FontFreeType **)(this + 0x88);
          }
        }
        else {
          pFVar4 = (FontFreeType *)_glyphASCII;
          if ((iVar1 != 2) && (pFVar4 = (FontFreeType *)0x0, iVar1 == 1)) {
            pFVar4 = (FontFreeType *)_glyphNEHE;
          }
        }
                    /* try { // try from 00f054a4 to 010055c3 has its CatchHandler @ 00f0538c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_68,(char *)pFVar4);
        uVar3 = StringUtils::UTF8ToUTF32((basic_string *)local_68,(basic_string *)local_50);
        if (((byte)local_68[0] & 1) != 0) {
          operator_delete(local_58);
        }
        if ((uVar3 & 1) != 0) {
          FontAtlas::prepareLetterDefinitions(*(FontAtlas **)(this + 0x68),(basic_string *)local_50)
          ;
        }
        if ((local_50[0] & 1) != 0) {
          operator_delete(local_40);
        }
        this_00 = *(FontAtlas **)(this + 0x68);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_00;
}

