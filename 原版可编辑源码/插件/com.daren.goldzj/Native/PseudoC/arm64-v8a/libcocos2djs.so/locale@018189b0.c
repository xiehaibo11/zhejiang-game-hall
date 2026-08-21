
/* std::__ndk1::locale::locale(std::__ndk1::locale const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int) */

void __thiscall
std::__ndk1::locale::locale(locale *this,locale *param_1,basic_string *param_2,int param_3)

{
  __shared_count *this_00;
  
  this_00 = operator_new(0x140);
  FUN_01813db8(this_00,*(undefined8 *)param_1,param_2,param_3);
  *(__shared_count **)this = this_00;
  __shared_count::__add_shared(this_00);
  return;
}

