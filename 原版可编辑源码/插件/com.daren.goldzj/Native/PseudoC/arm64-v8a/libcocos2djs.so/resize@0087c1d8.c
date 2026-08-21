
/* cocos2d::ResizableBufferAdapter<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >::resize(unsigned long) */

void __thiscall
cocos2d::
ResizableBufferAdapter<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
::resize(ResizableBufferAdapter<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
         *this,ulong param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  ulong uVar2;
  
  this_00 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (this + 8);
  bVar1 = *this_00;
  if (((byte)bVar1 & 1) == 0) {
    uVar2 = (ulong)((byte)bVar1 >> 1);
  }
  else {
    uVar2 = *(ulong *)(this_00 + 8);
  }
  if (param_1 <= uVar2) {
    if (((byte)bVar1 & 1) != 0) {
      *(undefined1 *)(*(long *)(this_00 + 0x10) + param_1) = 0;
      *(ulong *)(this_00 + 8) = param_1;
      return;
    }
    this_00[param_1 + 1] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    *this_00 = SUB41((int)param_1 << 1,0);
    return;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(this_00,param_1 - uVar2,'\0');
  return;
}

