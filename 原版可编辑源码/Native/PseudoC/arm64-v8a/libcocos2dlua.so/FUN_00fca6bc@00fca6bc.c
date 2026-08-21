
undefined8 * FUN_00fca6bc(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x28);
  *puVar1 = &PTR_FUN_01723b40;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar1 + 2),(basic_string *)(param_1 + 0x10));
  return puVar1;
}

