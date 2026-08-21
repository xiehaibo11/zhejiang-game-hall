
undefined8 * FUN_00fca368(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  puVar1 = operator_new(0x60);
  *puVar1 = &PTR_FUN_01723ac0;
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == (long *)0x0) {
    puVar1[6] = 0;
  }
  else if ((long *)(param_1 + 0x10) == plVar2) {
    puVar1[6] = puVar1 + 2;
    (**(code **)(*plVar2 + 0x18))(plVar2,puVar1 + 2);
  }
  else {
    uVar3 = (**(code **)(*plVar2 + 0x10))();
    puVar1[6] = uVar3;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar1 + 8),(basic_string *)(param_1 + 0x40));
  return puVar1;
}

