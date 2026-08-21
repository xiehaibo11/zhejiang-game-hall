
/* std::__ndk1::numpunct_byname<char>::numpunct_byname(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long) */

void __thiscall
std::__ndk1::numpunct_byname<char>::numpunct_byname
          (numpunct_byname<char> *this,basic_string *param_1,ulong param_2)

{
  basic_string *pbVar1;
  
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined2 *)(this + 0x10) = 0x2c2e;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR__numpunct_01cdbce0;
  *(ulong *)(this + 8) = param_2 - 1;
  pbVar1 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
  }
  __init(this,(char *)pbVar1);
  return;
}

