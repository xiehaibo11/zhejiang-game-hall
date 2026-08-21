
/* std::__ndk1::__time_get_c_storage<wchar_t>::__X() const */

undefined * std::__ndk1::__time_get_c_storage<wchar_t>::__X(void)

{
  int iVar1;
  
  if (((DAT_01794470 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01794470), iVar1 != 0)) {
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
    basic_string<decltype(nullptr)>
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_01794458,L"%H:%M:%S");
    __cxa_atexit(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 ::~basic_string,&DAT_01794458,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_01794470);
  }
  return &DAT_01794458;
}

