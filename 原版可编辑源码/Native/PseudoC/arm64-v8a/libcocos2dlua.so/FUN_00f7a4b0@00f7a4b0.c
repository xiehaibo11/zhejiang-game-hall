
void FUN_00f7a4b0(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x10),(basic_string *)(param_2 + 0x10));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x28),(basic_string *)(param_2 + 0x28));
  plVar1 = *(long **)(param_2 + 0x60);
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  else if ((long *)(param_2 + 0x40) == plVar1) {
    *(long *)(param_1 + 0x60) = param_1 + 0x40;
    (**(code **)(**(long **)(param_2 + 0x60) + 0x18))();
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x10))();
    *(undefined8 *)(param_1 + 0x60) = uVar2;
  }
  return;
}

