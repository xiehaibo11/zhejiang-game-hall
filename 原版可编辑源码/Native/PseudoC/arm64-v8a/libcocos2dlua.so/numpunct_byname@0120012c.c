
/* std::__ndk1::numpunct_byname<wchar_t>::numpunct_byname(char const*, unsigned long) */

void __thiscall
std::__ndk1::numpunct_byname<wchar_t>::numpunct_byname
          (numpunct_byname<wchar_t> *this,char *param_1,ulong param_2)

{
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__numpunct_0172e6f0;
  *(ulong *)(this + 8) = param_2 - 1;
  *(undefined8 *)(this + 0x10) = 0x2c0000002e;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  __init(this,param_1);
  return;
}

