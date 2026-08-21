
/* fairygui::GController::hasPage(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

bool __thiscall fairygui::GController::hasPage(GController *this,basic_string *param_1)

{
  int iVar1;
  
  iVar1 = ToolSet::findInStringArray((vector *)(this + 0x90),param_1);
  return iVar1 != -1;
}

