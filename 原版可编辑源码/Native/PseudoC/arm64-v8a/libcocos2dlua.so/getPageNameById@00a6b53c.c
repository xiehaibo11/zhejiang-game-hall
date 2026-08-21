
/* fairygui::GController::getPageNameById(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

undefined1 * __thiscall
fairygui::GController::getPageNameById(GController *this,basic_string *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = ToolSet::findInStringArray((vector *)(this + 0x78),param_1);
  if (iVar1 == -1) {
    puVar2 = &cocos2d::STD_STRING_EMPTY;
  }
  else {
    puVar2 = (undefined1 *)(*(long *)(this + 0x90) + (long)iVar1 * 0x18);
  }
  return puVar2;
}

