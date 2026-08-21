
/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__get_monthname(int&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   >&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&,
   std::__ndk1::ctype<char> const&) const */

void __thiscall
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__get_monthname(time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                *this,int *param_1,undefined8 param_2,undefined8 param_4,undefined8 param_5,
               undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (**(code **)(*(long *)(this + 0x10) + 8))();
  lVar2 = FUN_011dcaa8(param_2,param_4,lVar1,lVar1 + 0x240,param_6,param_5,0);
  if (lVar2 - lVar1 < 0x240) {
    lVar1 = (lVar2 - lVar1 >> 3) * -0x5555555555555555;
    *param_1 = (int)lVar1 +
               ((int)((ulong)(lVar1 / 6 + (lVar1 >> 0x3f)) >> 1) -
               (SUB164(SEXT816(lVar1) * SEXT816(0x2aaaaaaaaaaaaaab),0xc) >> 0x1f)) * -0xc;
  }
  return;
}

