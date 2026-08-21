
undefined8 * FUN_009f0398(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x30);
  *puVar1 = &PTR_FUN_016a0f78;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar1 + 2),(basic_string *)(param_1 + 0x10));
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return puVar1;
}

