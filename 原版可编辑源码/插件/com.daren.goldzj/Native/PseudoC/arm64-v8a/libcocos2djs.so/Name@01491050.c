
/* v8::internal::wasm::AsmOverloadedFunctionType::Name() */

void v8::internal::wasm::AsmOverloadedFunctionType::Name(void)

{
  long in_x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  ulong uVar1;
  byte local_48;
  void *local_38;
  
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  if (*(long *)(in_x0 + 0x10) != *(long *)(in_x0 + 8)) {
    AsmType::Name();
    FUN_011f9614();
    if ((local_48 & 1) != 0) {
      operator_delete(local_38);
    }
    if (1 < (ulong)(*(long *)(in_x0 + 0x10) - *(long *)(in_x0 + 8) >> 3)) {
      uVar1 = 1;
      do {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(in_x8," /\\ ");
        AsmType::Name();
        FUN_011f9614();
        if ((local_48 & 1) != 0) {
          operator_delete(local_38);
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < (ulong)(*(long *)(in_x0 + 0x10) - *(long *)(in_x0 + 8) >> 3));
    }
  }
  return;
}

