
/* std::__ndk1::__basic_string_common<true>::__throw_length_error() const */

void std::__ndk1::__basic_string_common<true>::__throw_length_error(void)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = (~((x_70 + -1) * x_70) | 0xfffffffeU) == 0xffffffff;
  do {
    iVar1 = -0x665da0b2;
    if ((!bVar2 || y_71 >= 10) && bVar2 == y_71 < 10) {
      iVar1 = 0x7bc45b65;
    }
    while (iVar1 != -0x56dd80c6) {
      if ((iVar1 == -0x665da0b2) || (iVar1 == 0x7bc45b65)) {
        FUN_00114cfc(&DAT_0013a040);
        FUN_0011409c();
        return;
      }
    }
  } while( true );
}

