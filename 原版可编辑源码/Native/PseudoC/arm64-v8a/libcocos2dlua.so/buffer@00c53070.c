
/* cocos2d::ResizableBufferAdapter<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >::buffer() const */

byte * __thiscall
cocos2d::
ResizableBufferAdapter<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
::buffer(ResizableBufferAdapter<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
         *this)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(this + 8);
  bVar1 = *pbVar2;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) {
      return (byte *)0x0;
    }
  }
  else if (*(long *)(pbVar2 + 8) == 0) {
    return (byte *)0x0;
  }
  if ((bVar1 & 1) != 0) {
    return *(byte **)(pbVar2 + 0x10);
  }
  return pbVar2 + 1;
}

