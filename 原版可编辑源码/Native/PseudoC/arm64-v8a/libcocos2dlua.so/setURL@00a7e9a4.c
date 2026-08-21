
/* fairygui::GLoader::setURL(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall fairygui::GLoader::setURL(GLoader *this,basic_string *param_1)

{
  size_t __n;
  ulong uVar1;
  basic_string *__s2;
  int iVar2;
  GLoader *__s1;
  ulong uVar3;
  
  uVar1 = *(ulong *)(param_1 + 8);
  __s2 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __s2 = param_1 + 1;
    uVar1 = (ulong)((byte)*param_1 >> 1);
  }
  if (((byte)this[0x1d8] & 1) == 0) {
    uVar3 = (ulong)((byte)this[0x1d8] >> 1);
    __s1 = this + 0x1d9;
  }
  else {
    uVar3 = *(ulong *)(this + 0x1e0);
    __s1 = *(GLoader **)(this + 0x1e8);
  }
  __n = uVar1;
  if (uVar3 <= uVar1) {
    __n = uVar3;
  }
  if (((__n == 0) || (iVar2 = memcmp(__s1,__s2,__n), iVar2 == 0)) && (uVar3 == uVar1)) {
    return;
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x1d8) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x1d8),(char *)__s2,uVar1);
  }
  loadContent(this);
  GObject::updateGear((GObject *)this,7);
  return;
}

