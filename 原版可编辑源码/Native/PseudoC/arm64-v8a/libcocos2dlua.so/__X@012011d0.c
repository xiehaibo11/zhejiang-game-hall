
/* std::__ndk1::__time_get_c_storage<char>::__X() const */

undefined * std::__ndk1::__time_get_c_storage<char>::__X(void)

{
  int iVar1;
  
  if (((DAT_01794450 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01794450), iVar1 != 0)) {
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_01794438,"%H:%M:%S");
    __cxa_atexit(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_01794438,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_01794450);
  }
  return &DAT_01794438;
}

