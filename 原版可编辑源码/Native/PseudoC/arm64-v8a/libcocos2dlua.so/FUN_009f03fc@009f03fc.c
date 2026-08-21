
void FUN_009f03fc(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_016a0f78;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 2),(basic_string *)(param_1 + 0x10));
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}

