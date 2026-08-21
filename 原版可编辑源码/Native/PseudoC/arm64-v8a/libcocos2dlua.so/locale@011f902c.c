
/* std::__ndk1::locale::locale(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall std::__ndk1::locale::locale(locale *this,basic_string *param_1)

{
  __shared_count *this_00;
  
  this_00 = operator_new(0x140);
  FUN_011f43c4(this_00,param_1,0);
  *(__shared_count **)this = this_00;
  __shared_count::__add_shared(this_00);
  return;
}

