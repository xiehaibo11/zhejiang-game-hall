
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::__time_get_c_storage<char>::__am_pm() const */

undefined1 * std::__ndk1::__time_get_c_storage<char>::__am_pm(void)

{
  int iVar1;
  
  if (((DAT_01d52ed0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d52ed0), iVar1 != 0)) {
    if (((DAT_01d53758 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d53758), iVar1 != 0)) {
      _DAT_01d53740 = 0;
      DAT_01d53738 = 0;
      DAT_01d53750 = 0;
      _DAT_01d53748 = 0;
      uRam0000000001d53730 = 0;
      _DAT_01d53728 = 0;
      __cxa_atexit(FUN_00856764,0,&PTR_LOOP_01d1b000);
      __cxa_guard_release(&DAT_01d53758);
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_01d53728,"AM");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_01d53740,"PM");
    DAT_01d52ec8 = &DAT_01d53728;
    __cxa_guard_release(&DAT_01d52ed0);
  }
  return DAT_01d52ec8;
}

