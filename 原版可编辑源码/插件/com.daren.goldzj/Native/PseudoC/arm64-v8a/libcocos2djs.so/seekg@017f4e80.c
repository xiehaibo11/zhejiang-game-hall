
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::seekg(long long,
   std::__ndk1::ios_base::seekdir) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::seekg
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,undefined8 param_1,
          undefined4 param_3)

{
  ios_base *this_00;
  long extraout_x1;
  long lVar1;
  
  ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                  *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) &
                  0xfffffffd);
  lVar1 = *(long *)(*(long *)this + -0x18);
  this_00 = (ios_base *)(this + lVar1);
  if (*(uint *)(this_00 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this_00 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
                (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this_00 + 0x88));
      lVar1 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar1 + 0x20) != 0) {
        return this;
      }
    }
    (**(code **)(**(long **)(this + lVar1 + 0x28) + 0x20))
              (*(long **)(this + lVar1 + 0x28),param_1,param_3,8);
    if (extraout_x1 == -1) {
      ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                      *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 4);
    }
  }
  else {
    ios_base::clear(this_00,*(uint *)(this_00 + 0x20) | 4);
  }
  return this;
}

