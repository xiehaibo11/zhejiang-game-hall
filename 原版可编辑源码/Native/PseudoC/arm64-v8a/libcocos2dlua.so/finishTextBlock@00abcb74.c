
/* fairygui::HtmlParser::finishTextBlock() */

void __thiscall fairygui::HtmlParser::finishTextBlock(HtmlParser *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  HtmlParser *pHVar3;
  long lVar4;
  HtmlElement *pHVar5;
  vector<fairygui::HtmlElement*,std::__ndk1::allocator<fairygui::HtmlElement*>> *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  HtmlElement *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  pbVar6 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0xb0);
  if (((byte)*pbVar6 & 1) == 0) {
    if ((byte)*pbVar6 >> 1 == 0) goto LAB_00abcc60;
  }
  else if (*(long *)(this + 0xb8) == 0) goto LAB_00abcc60;
  pHVar5 = operator_new(0xc0);
  HtmlElement::HtmlElement(pHVar5,0);
  local_40 = pHVar5;
  TextFormat::operator=((TextFormat *)(pHVar5 + 0x28),(TextFormat *)(this + 0x48));
  if (pbVar6 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (pHVar5 + 0x10)) {
    uVar1 = *(ulong *)(this + 0xb8);
    pHVar3 = *(HtmlParser **)(this + 0xc0);
    if (((byte)this[0xb0] & 1) == 0) {
      pHVar3 = this + 0xb1;
      uVar1 = (ulong)((byte)this[0xb0] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pHVar5 + 0x10),(char *)pHVar3,uVar1);
  }
  if (((byte)*pbVar6 & 1) == 0) {
    *(undefined2 *)pbVar6 = 0;
  }
  else {
    **(undefined1 **)(this + 0xc0) = 0;
    *(undefined8 *)(this + 0xb8) = 0;
  }
  this_00 = *(vector<fairygui::HtmlElement*,std::__ndk1::allocator<fairygui::HtmlElement*>> **)
             (this + 8);
  puVar2 = *(undefined8 **)(this_00 + 8);
  if (puVar2 == *(undefined8 **)(this_00 + 0x10)) {
    std::__ndk1::vector<fairygui::HtmlElement*,std::__ndk1::allocator<fairygui::HtmlElement*>>::
    __push_back_slow_path<fairygui::HtmlElement*const&>(this_00,&local_40);
  }
  else {
    *puVar2 = local_40;
    *(undefined8 **)(this_00 + 8) = puVar2 + 1;
  }
  if (*(long *)(this + 0x28) != *(long *)(this + 0x30)) {
    *(undefined8 *)(local_40 + 0x80) = *(undefined8 *)(*(long *)(this + 0x30) + -8);
  }
LAB_00abcc60:
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

