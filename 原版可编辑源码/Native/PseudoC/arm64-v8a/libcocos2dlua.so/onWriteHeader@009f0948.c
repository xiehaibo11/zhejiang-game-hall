
/* universe::HttpTask::onWriteHeader(unsigned char*, unsigned long, unsigned long) */

ulong __thiscall
universe::HttpTask::onWriteHeader(HttpTask *this,uchar *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = (ulong)((int)param_2 * (int)param_3);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x80),(char *)param_1,uVar1);
  return uVar1;
}

