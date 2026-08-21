
/* universe::TanGaoXiong::getAbsolutePath(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

void universe::TanGaoXiong::getAbsolutePath(basic_string *param_1)

{
  ulong uVar1;
  basic_string *in_x1;
  basic_string *in_x2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x40))();
  if ((uVar1 & 1) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(in_x8,in_x1);
    return;
  }
  std::__ndk1::operator+((__ndk1 *)(param_1 + 8),in_x1,in_x2);
  return;
}

