
void FUN_00f789b4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_01721128;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 4),(basic_string *)(param_1 + 0x20));
  plVar1 = *(long **)(param_1 + 0x60);
  if (plVar1 == (long *)0x0) {
    param_2[0xc] = 0;
  }
  else if ((long *)(param_1 + 0x40) == plVar1) {
    param_2[0xc] = param_2 + 8;
    (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),param_2 + 8);
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x10))();
    param_2[0xc] = uVar2;
  }
  return;
}

