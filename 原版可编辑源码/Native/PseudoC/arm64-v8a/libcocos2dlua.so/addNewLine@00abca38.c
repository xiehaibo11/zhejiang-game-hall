
/* fairygui::HtmlParser::addNewLine(bool) */

void __thiscall fairygui::HtmlParser::addNewLine(HtmlParser *this,bool param_1)

{
  undefined8 *puVar1;
  long lVar2;
  HtmlElement *pHVar3;
  vector<fairygui::HtmlElement*,std::__ndk1::allocator<fairygui::HtmlElement*>> *this_00;
  long lVar4;
  long lVar5;
  ulong uVar6;
  HtmlElement *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00abca5c to 00bbca8f has its CatchHandler @ 00abcb5c */
  lVar4 = (*(long **)(this + 8))[1];
  if (((**(long **)(this + 8) == lVar4) || (lVar4 = *(long *)(lVar4 + -8), lVar4 == 0)) ||
     (*(int *)(lVar4 + 8) != 0)) {
    pHVar3 = operator_new(0xc0);
    HtmlElement::HtmlElement(pHVar3,0);
                    /* try { // try from 00abca90 to 00bbcaa3 has its CatchHandler @ 00abcb28 */
    local_40 = pHVar3;
    TextFormat::operator=((TextFormat *)(pHVar3 + 0x28),(TextFormat *)(this + 0x48));
                    /* try { // try from 00abcaa8 to 00bbcadb has its CatchHandler @ 00abcb2c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pHVar3 + 0x10),"\n",1);
    this_00 = *(vector<fairygui::HtmlElement*,std::__ndk1::allocator<fairygui::HtmlElement*>> **)
               (this + 8);
    puVar1 = *(undefined8 **)(this_00 + 8);
    if (puVar1 == *(undefined8 **)(this_00 + 0x10)) {
      std::__ndk1::vector<fairygui::HtmlElement*,std::__ndk1::allocator<fairygui::HtmlElement*>>::
      __push_back_slow_path<fairygui::HtmlElement*const&>(this_00,&local_40);
    }
    else {
      *puVar1 = pHVar3;
      *(undefined8 **)(this_00 + 8) = puVar1 + 1;
    }
                    /* try { // try from 00abcadc to 00bbcb77 has its CatchHandler @ 00abc914 */
    if (*(long *)(this + 0x28) != *(long *)(this + 0x30)) {
      *(undefined8 *)(local_40 + 0x80) = *(undefined8 *)(*(long *)(this + 0x30) + -8);
    }
  }
  else {
    if (param_1) {
      if ((*(byte *)(lVar4 + 0x10) & 1) == 0) {
        lVar5 = lVar4 + 0x11;
                    /* catch() { ... } // from try @ 00abca90 with catch @ 00abcb28 */
        uVar6 = (ulong)(*(byte *)(lVar4 + 0x10) >> 1);
                    /* catch() { ... } // from try @ 00abcaa8 with catch @ 00abcb2c */
      }
      else {
        uVar6 = *(ulong *)(lVar4 + 0x18);
        lVar5 = *(long *)(lVar4 + 0x20);
      }
      if (*(char *)(lVar5 + uVar6 + -1) == '\n') goto LAB_00abcaf0;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar4 + 0x10),"\n",1);
  }
LAB_00abcaf0:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00abca5c with catch @ 00abcb5c */
  __stack_chk_fail();
}

