
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::sync() */

undefined4 __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sync
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  ios_base *this_00;
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)this + -0x18);
  this_00 = (ios_base *)(this + lVar3);
  if (*(uint *)(this_00 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this_00 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
                (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this_00 + 0x88));
      lVar3 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar3 + 0x20) != 0) goto LAB_017f4be8;
    }
    if (*(long **)(this + lVar3 + 0x28) != (long *)0x0) {
      iVar1 = (**(code **)(**(long **)(this + lVar3 + 0x28) + 0x30))();
      if (iVar1 != -1) goto LAB_017f4be8;
      ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                      *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 1);
    }
    uVar2 = 0xffffffff;
  }
  else {
    ios_base::clear(this_00,*(uint *)(this_00 + 0x20) | 4);
LAB_017f4be8:
    uVar2 = 0;
  }
  return uVar2;
}

