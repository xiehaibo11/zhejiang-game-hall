
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::__time_get_c_storage<wchar_t>::__am_pm() const */

undefined1 * std::__ndk1::__time_get_c_storage<wchar_t>::__am_pm(void)

{
  int iVar1;
  
  if (((DAT_017943f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_017943f0), iVar1 != 0)) {
    if (((DAT_01794ca0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01794ca0), iVar1 != 0)) {
      _DAT_01794c88 = 0;
      DAT_01794c80 = 0;
      DAT_01794c98 = 0;
      _DAT_01794c90 = 0;
      uRam0000000001794c78 = 0;
      _DAT_01794c70 = 0;
      __cxa_atexit(FUN_007c15c4,0,&PTR_LOOP_016979c0);
      __cxa_guard_release(&DAT_01794ca0);
    }
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_01794c70,L"AM");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_01794c88,L"PM");
    DAT_017943e8 = &DAT_01794c70;
    __cxa_guard_release(&DAT_017943f0);
  }
  return DAT_017943e8;
}

