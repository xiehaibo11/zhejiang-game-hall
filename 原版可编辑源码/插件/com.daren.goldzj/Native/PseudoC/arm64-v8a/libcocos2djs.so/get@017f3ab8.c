
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::get() */

ulong __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::get
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  ios_base *this_00;
  uint *puVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  *(undefined8 *)(this + 8) = 0;
  lVar5 = *(long *)(*(long *)this + -0x18);
  this_00 = (ios_base *)(this + lVar5);
  if (*(uint *)(this_00 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this_00 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
                (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this_00 + 0x88));
      lVar5 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar5 + 0x20) != 0) {
        return 0xffffffff;
      }
    }
    plVar3 = *(long **)(this + lVar5 + 0x28);
    puVar1 = (uint *)plVar3[3];
    if (puVar1 == (uint *)plVar3[4]) {
      uVar4 = (**(code **)(*plVar3 + 0x50))();
      uVar2 = (uint)uVar4;
    }
    else {
      plVar3[3] = (long)(puVar1 + 1);
      uVar2 = *puVar1;
      uVar4 = (ulong)uVar2;
    }
    if (uVar2 != 0xffffffff) {
      *(undefined8 *)(this + 8) = 1;
      return uVar4;
    }
    ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                    *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 6);
  }
  else {
    ios_base::clear(this_00,*(uint *)(this_00 + 0x20) | 4);
  }
  return 0xffffffff;
}

