
void FUN_00f75684(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x10),(basic_string *)(param_2 + 0x10));
  plVar1 = *(long **)(param_2 + 0x50);
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  else if ((long *)(param_2 + 0x30) == plVar1) {
    *(long *)(param_1 + 0x50) = param_1 + 0x30;
    (**(code **)(**(long **)(param_2 + 0x50) + 0x18))(*(long **)(param_2 + 0x50),param_1 + 0x30);
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x10))();
    *(undefined8 *)(param_1 + 0x50) = uVar2;
  }
  cocos2d::Data::Data((Data *)(param_1 + 0x60),(Data *)(param_2 + 0x60));
  return;
}

