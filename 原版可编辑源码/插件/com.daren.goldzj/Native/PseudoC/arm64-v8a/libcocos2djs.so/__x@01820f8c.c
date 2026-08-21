
/* std::__ndk1::__time_get_c_storage<char>::__x() const */

undefined1 * std::__ndk1::__time_get_c_storage<char>::__x(void)

{
  int iVar1;
  
  if (((DAT_01d52f00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d52f00), iVar1 != 0)) {
    uRam0000000001d52ef2 = 0;
    DAT_01d52ef8 = 0;
    DAT_01d52ee8 = 0x10;
    DAT_01d52ee9._0_7_ = 0x252f64252f6d25;
    DAT_01d52ee9._7_1_ = 0x79;
    DAT_01d52ef1 = 0;
    __cxa_atexit(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_01d52ee8,&PTR_LOOP_01d1b000);
    __cxa_guard_release(&DAT_01d52f00);
  }
  return &DAT_01d52ee8;
}

