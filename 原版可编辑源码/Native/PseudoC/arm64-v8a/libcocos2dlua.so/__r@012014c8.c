
/* std::__ndk1::__time_get_c_storage<wchar_t>::__r() const */

undefined * std::__ndk1::__time_get_c_storage<wchar_t>::__r(void)

{
  int iVar1;
  
  if (((DAT_017944f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_017944f0), iVar1 != 0)) {
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
    basic_string<decltype(nullptr)>
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_017944d8,L"%I:%M:%S %p");
    __cxa_atexit(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 ::~basic_string,&DAT_017944d8,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_017944f0);
  }
  return &DAT_017944d8;
}

