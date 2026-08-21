
void FUN_00f79ecc(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x10),(basic_string *)(param_2 + 0x10));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x28),(basic_string *)(param_2 + 0x28));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x40),(basic_string *)(param_2 + 0x40));
  plVar1 = *(long **)(param_2 + 0x80);
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  else if ((long *)(param_2 + 0x60) == plVar1) {
    *(long *)(param_1 + 0x80) = param_1 + 0x60;
    (**(code **)(**(long **)(param_2 + 0x80) + 0x18))();
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x10))();
    *(undefined8 *)(param_1 + 0x80) = uVar2;
  }
  return;
}

