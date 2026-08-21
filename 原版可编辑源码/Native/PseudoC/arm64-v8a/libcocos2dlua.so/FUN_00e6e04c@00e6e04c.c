
void FUN_00e6e04c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_016f3bd8;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 == (long *)0x0) {
    param_2[8] = 0;
  }
  else if ((long *)(param_1 + 0x20) == plVar1) {
    param_2[8] = param_2 + 4;
    (**(code **)(**(long **)(param_1 + 0x40) + 0x18))();
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x10))();
    param_2[8] = uVar2;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 10),(basic_string *)(param_1 + 0x50));
  return;
}

