
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::__time_get_c_storage<wchar_t>::__am_pm() const */

undefined1 * std::__ndk1::__time_get_c_storage<wchar_t>::__am_pm(void)

{
  int iVar1;
  
  if (((DAT_01d52ee0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d52ee0), iVar1 != 0)) {
    if (((DAT_01d53790 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d53790), iVar1 != 0)) {
      _DAT_01d53778 = 0;
      DAT_01d53770 = 0;
      DAT_01d53788 = 0;
      _DAT_01d53780 = 0;
      uRam0000000001d53768 = 0;
      _DAT_01d53760 = 0;
      __cxa_atexit(FUN_008567a4,0,&PTR_LOOP_01d1b000);
      __cxa_guard_release(&DAT_01d53790);
    }
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_01d53760,L"AM");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_01d53778,L"PM");
    DAT_01d52ed8 = &DAT_01d53760;
    __cxa_guard_release(&DAT_01d52ee0);
  }
  return DAT_01d52ed8;
}

