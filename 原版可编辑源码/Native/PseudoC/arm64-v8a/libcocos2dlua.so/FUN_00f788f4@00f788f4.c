
undefined8 * FUN_00f788f4(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  puVar1 = operator_new(0x70);
  *puVar1 = &PTR_FUN_01721128;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar1 + 4),(basic_string *)(param_1 + 0x20));
  plVar2 = *(long **)(param_1 + 0x60);
  if (plVar2 == (long *)0x0) {
    puVar1[0xc] = 0;
  }
  else if ((long *)(param_1 + 0x40) == plVar2) {
    puVar1[0xc] = puVar1 + 8;
    (**(code **)(*plVar2 + 0x18))();
  }
  else {
    uVar3 = (**(code **)(*plVar2 + 0x10))();
    puVar1[0xc] = uVar3;
  }
  return puVar1;
}

