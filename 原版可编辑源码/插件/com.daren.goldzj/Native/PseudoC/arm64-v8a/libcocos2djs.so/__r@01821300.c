
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::__time_get_c_storage<char>::__r() const */

undefined1 * std::__ndk1::__time_get_c_storage<char>::__r(void)

{
  int iVar1;
  
  if (((DAT_01d52fc0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d52fc0), iVar1 != 0)) {
    uRam0000000001d52fb5 = 0;
    DAT_01d52fa8 = 0x16;
    DAT_01d52fb8 = 0;
    _DAT_01d52fb1 = 0x702520;
    DAT_01d52fa9._0_7_ = 0x253a4d253a4925;
    DAT_01d52fa9._7_1_ = 0x53;
    __cxa_atexit(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_01d52fa8,&PTR_LOOP_01d1b000);
    __cxa_guard_release(&DAT_01d52fc0);
  }
  return &DAT_01d52fa8;
}

