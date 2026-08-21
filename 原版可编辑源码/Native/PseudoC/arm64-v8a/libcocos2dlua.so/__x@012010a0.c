
/* std::__ndk1::__time_get_c_storage<char>::__x() const */

undefined * std::__ndk1::__time_get_c_storage<char>::__x(void)

{
  int iVar1;
  
  if (((DAT_01794410 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01794410), iVar1 != 0)) {
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_017943f8,"%m/%d/%y");
    __cxa_atexit(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_017943f8,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_01794410);
  }
  return &DAT_017943f8;
}

