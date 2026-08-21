
/* cocos2d::ResizableBufferAdapter<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >::_set(void*, unsigned long) */

void __thiscall
cocos2d::
ResizableBufferAdapter<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
::_set(ResizableBufferAdapter<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
       *this,void *param_1,ulong param_2)

{
  (**(code **)(*(long *)this + 0x10))(this,param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(*(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
          (this + 8),param_1,param_2);
  free(param_1);
  return;
}

