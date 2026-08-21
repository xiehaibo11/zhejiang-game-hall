
/* std::__ndk1::__time_get_c_storage<wchar_t>::__c() const */

undefined * std::__ndk1::__time_get_c_storage<wchar_t>::__c(void)

{
  int iVar1;
  
  if (((DAT_01d52fa0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d52fa0), iVar1 != 0)) {
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
    basic_string<decltype(nullptr)>
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_01d52f88,L"%a %b %d %H:%M:%S %Y");
    __cxa_atexit(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 ::~basic_string,&DAT_01d52f88,&PTR_LOOP_01d1b000);
    __cxa_guard_release(&DAT_01d52fa0);
  }
  return &DAT_01d52f88;
}

