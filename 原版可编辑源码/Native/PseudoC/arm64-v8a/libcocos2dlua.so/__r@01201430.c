
/* std::__ndk1::__time_get_c_storage<char>::__r() const */

undefined * std::__ndk1::__time_get_c_storage<char>::__r(void)

{
  int iVar1;
  
  if (((DAT_017944d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_017944d0), iVar1 != 0)) {
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_017944b8,"%I:%M:%S %p");
    __cxa_atexit(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_017944b8,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_017944d0);
  }
  return &DAT_017944b8;
}

