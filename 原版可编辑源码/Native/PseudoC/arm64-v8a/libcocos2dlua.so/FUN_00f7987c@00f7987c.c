
void FUN_00f7987c(long param_1,long param_2)

{
  long lVar1;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x10),(basic_string *)(param_2 + 0x10));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x28),(basic_string *)(param_2 + 0x28));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x40),(basic_string *)(param_2 + 0x40));
  lVar1 = *(long *)(param_2 + 0x80);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  else if (param_2 + 0x60 == lVar1) {
    *(long *)(param_1 + 0x80) = param_1 + 0x60;
    (**(code **)(**(long **)(param_2 + 0x80) + 0x18))();
  }
  else {
    *(long *)(param_1 + 0x80) = lVar1;
    *(undefined8 *)(param_2 + 0x80) = 0;
  }
  return;
}

