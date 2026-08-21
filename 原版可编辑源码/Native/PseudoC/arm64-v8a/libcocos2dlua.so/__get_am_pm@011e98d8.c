
/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::__get_am_pm(int&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&,
   std::__ndk1::ctype<char> const&) const */

void __thiscall
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__get_am_pm(time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>
            *this,int *param_1,undefined8 param_2,undefined8 param_4,uint *param_5,
           undefined8 param_6)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  
  pbVar3 = (byte *)(**(code **)(*(long *)(this + 0x10) + 0x10))();
  if ((*pbVar3 & 1) == 0) {
    uVar5 = (ulong)(*pbVar3 >> 1);
    bVar2 = pbVar3[0x18];
  }
  else {
    uVar5 = *(ulong *)(pbVar3 + 8);
    bVar2 = pbVar3[0x18];
  }
  if ((bVar2 & 1) == 0) {
    uVar6 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar6 = *(ulong *)(pbVar3 + 0x20);
  }
  if (uVar5 + uVar6 == 0) {
    *param_5 = *param_5 | 4;
  }
  else {
    pbVar4 = (byte *)FUN_011dcaa8(param_2,param_4,pbVar3,pbVar3 + 0x30,param_6,param_5,0);
    iVar1 = *param_1;
    if ((iVar1 == 0xc) && (pbVar4 == pbVar3)) {
      *param_1 = 0;
    }
    else if ((iVar1 < 0xc) && ((long)pbVar4 - (long)pbVar3 == 0x18)) {
      *param_1 = iVar1 + 0xc;
    }
  }
  return;
}

