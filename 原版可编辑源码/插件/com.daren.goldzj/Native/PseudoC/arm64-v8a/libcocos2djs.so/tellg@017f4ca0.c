
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::tellg() */

undefined8 __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::tellg
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  ios_base *this_00;
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)this + -0x18);
  this_00 = (ios_base *)(this + lVar2);
  if (*(uint *)(this_00 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this_00 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
                (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this_00 + 0x88));
      lVar2 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar2 + 0x20) != 0) goto LAB_017f4ccc;
    }
    uVar1 = (**(code **)(**(long **)(this + lVar2 + 0x28) + 0x20))
                      (*(long **)(this + lVar2 + 0x28),0,1,8);
  }
  else {
    ios_base::clear(this_00,*(uint *)(this_00 + 0x20) | 4);
LAB_017f4ccc:
    uVar1 = 0;
  }
  return uVar1;
}

