
/* fairygui::HtmlParser::pushTextFormat() */

void __thiscall fairygui::HtmlParser::pushTextFormat(HtmlParser *this)

{
  TextFormat *pTVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  TextFormat *this_00;
  
  lVar2 = *(long *)(this + 0x10);
  this_00 = *(TextFormat **)(this + 0x18);
  uVar3 = *(ulong *)(this + 0xa0);
  pTVar1 = (TextFormat *)(this + 0x48);
  uVar4 = ((long)this_00 - lVar2 >> 3) * 0x2e8ba2e8ba2e8ba3;
  if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
    if (*(TextFormat **)(this + 0x20) == this_00) {
      std::__ndk1::vector<fairygui::TextFormat,std::__ndk1::allocator<fairygui::TextFormat>>::
      __push_back_slow_path<fairygui::TextFormat_const&>
                ((vector<fairygui::TextFormat,std::__ndk1::allocator<fairygui::TextFormat>> *)
                 (this + 0x10),pTVar1);
    }
    else {
      TextFormat::TextFormat(this_00,pTVar1);
      *(TextFormat **)(this + 0x18) = this_00 + 0x58;
    }
  }
  else {
    TextFormat::operator=((TextFormat *)(lVar2 + uVar3 * 0x58),pTVar1);
  }
  *(long *)(this + 0xa0) = *(long *)(this + 0xa0) + 1;
  return;
}

