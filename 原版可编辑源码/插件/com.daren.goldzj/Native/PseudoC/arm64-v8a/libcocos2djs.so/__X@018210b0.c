
/* std::__ndk1::__time_get_c_storage<char>::__X() const */

undefined1 * std::__ndk1::__time_get_c_storage<char>::__X(void)

{
  int iVar1;
  
  if (((DAT_01d52f40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d52f40), iVar1 != 0)) {
    uRam0000000001d52f32 = 0;
    DAT_01d52f38 = 0;
    DAT_01d52f28 = 0x10;
    DAT_01d52f29._0_7_ = 0x253a4d253a4825;
    DAT_01d52f29._7_1_ = 0x53;
    DAT_01d52f31 = 0;
    __cxa_atexit(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_01d52f28,&PTR_LOOP_01d1b000);
    __cxa_guard_release(&DAT_01d52f40);
  }
  return &DAT_01d52f28;
}

