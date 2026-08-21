
/* v8::internal::wasm::AsmFunctionType::Name() */

void v8::internal::wasm::AsmFunctionType::Name(void)

{
  long in_x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  ulong uVar1;
  ulong uVar2;
  byte local_48;
  void *local_38;
  
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(in_x8,"(");
  if (*(long *)(in_x0 + 0x18) != *(long *)(in_x0 + 0x10)) {
    uVar2 = 0;
    do {
      AsmType::Name();
      FUN_011f9614();
      if ((local_48 & 1) != 0) {
        operator_delete(local_38);
      }
      uVar1 = *(long *)(in_x0 + 0x18) - *(long *)(in_x0 + 0x10) >> 3;
      if (uVar2 != uVar1 - 1) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(in_x8,", ");
        uVar1 = *(long *)(in_x0 + 0x18) - *(long *)(in_x0 + 0x10) >> 3;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(in_x8,") -> ");
  AsmType::Name();
  FUN_011f9614();
  if ((local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  return;
}

