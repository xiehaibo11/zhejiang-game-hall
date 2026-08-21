
/* std::__ndk1::__time_get_c_storage<char>::__c() const */

undefined * std::__ndk1::__time_get_c_storage<char>::__c(void)

{
  int iVar1;
  
  if (((DAT_01794490 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01794490), iVar1 != 0)) {
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_01794478,"%a %b %d %H:%M:%S %Y");
    __cxa_atexit(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_01794478,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_01794490);
  }
  return &DAT_01794478;
}

