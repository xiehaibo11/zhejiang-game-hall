
/* universe::network::Encryption::setAesKeyLua(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

undefined4 __thiscall universe::network::Encryption::setAesKeyLua(Encryption *this,byte *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  bVar1 = *param_2;
  if ((bVar1 & 1) == 0) {
    uVar3 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar3 = *(ulong *)(param_2 + 8);
  }
  uVar2 = 0;
  if ((uVar3 < 0x21) && ((1L << (uVar3 & 0x3f) & 0x101010000U) != 0)) {
    if ((bVar1 & 1) == 0) {
      uVar3 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar3 = *(ulong *)(param_2 + 8);
    }
    *(ulong *)(this + 0x20) = uVar3;
    if ((*param_2 & 1) == 0) {
      param_2 = param_2 + 1;
    }
    else {
      param_2 = *(byte **)(param_2 + 0x10);
    }
    memcpy(this,param_2,uVar3);
    uVar2 = 1;
  }
  return uVar2;
}

