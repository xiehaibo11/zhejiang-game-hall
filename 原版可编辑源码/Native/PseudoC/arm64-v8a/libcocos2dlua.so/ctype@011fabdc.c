
/* std::__ndk1::ctype<char>::ctype(unsigned long const*, bool, unsigned long) */

void __thiscall
std::__ndk1::ctype<char>::ctype(ctype<char> *this,ulong *param_1,bool param_2,ulong param_3)

{
  *(ulong *)(this + 8) = param_3 - 1;
  *(ulong **)(this + 0x10) = param_1;
  *(undefined ***)this = &PTR__ctype_0172e448;
  this[0x18] = (ctype<char>)param_2;
  if (param_1 != (ulong *)0x0) {
    return;
  }
  *(undefined **)(this + 0x10) = &DAT_014a2658;
  return;
}

