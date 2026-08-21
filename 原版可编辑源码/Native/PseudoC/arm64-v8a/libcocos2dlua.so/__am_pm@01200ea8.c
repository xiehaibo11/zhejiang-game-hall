
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::__time_get_c_storage<char>::__am_pm() const */

undefined1 * std::__ndk1::__time_get_c_storage<char>::__am_pm(void)

{
  int iVar1;
  
  if (((DAT_017943e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_017943e0), iVar1 != 0)) {
    if (((DAT_01794c68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01794c68), iVar1 != 0)) {
      _DAT_01794c50 = 0;
      DAT_01794c48 = 0;
      DAT_01794c60 = 0;
      _DAT_01794c58 = 0;
      uRam0000000001794c40 = 0;
      _DAT_01794c38 = 0;
      __cxa_atexit(FUN_007c1580,0,&PTR_LOOP_016979c0);
      __cxa_guard_release(&DAT_01794c68);
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_01794c38,"AM");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_01794c50,"PM");
    DAT_017943d8 = &DAT_01794c38;
    __cxa_guard_release(&DAT_017943e0);
  }
  return DAT_017943d8;
}

