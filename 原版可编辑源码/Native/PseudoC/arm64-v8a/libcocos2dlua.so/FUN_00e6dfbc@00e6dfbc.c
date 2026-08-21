
undefined8 * FUN_00e6dfbc(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  puVar1 = operator_new(0x70);
  *puVar1 = &PTR_FUN_016f3bd8;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  plVar2 = *(long **)(param_1 + 0x40);
  if (plVar2 == (long *)0x0) {
    puVar1[8] = 0;
  }
  else if ((long *)(param_1 + 0x20) == plVar2) {
    puVar1[8] = puVar1 + 4;
    (**(code **)(*plVar2 + 0x18))();
  }
  else {
    uVar3 = (**(code **)(*plVar2 + 0x10))();
    puVar1[8] = uVar3;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar1 + 10),(basic_string *)(param_1 + 0x50));
  return puVar1;
}

