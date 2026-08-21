
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::peek() */

ulong __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::peek
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  ios_base *this_00;
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  *(undefined8 *)(this + 8) = 0;
  lVar4 = *(long *)(*(long *)this + -0x18);
  this_00 = (ios_base *)(this + lVar4);
  if (*(uint *)(this_00 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this_00 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
                (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this_00 + 0x88));
      lVar4 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar4 + 0x20) != 0) {
        return 0xffffffff;
      }
    }
    plVar2 = *(long **)(this + lVar4 + 0x28);
    if ((uint *)plVar2[3] == (uint *)plVar2[4]) {
      uVar3 = (**(code **)(*plVar2 + 0x48))();
      uVar1 = (uint)uVar3;
    }
    else {
      uVar1 = *(uint *)plVar2[3];
      uVar3 = (ulong)uVar1;
    }
    if (uVar1 != 0xffffffff) {
      return uVar3;
    }
    ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                    *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 2);
  }
  else {
    ios_base::clear(this_00,*(uint *)(this_00 + 0x20) | 4);
  }
  return 0xffffffff;
}

