
/* universe::network::Encryption::setAesKey(unsigned char const*, unsigned long) */

undefined8 __thiscall
universe::network::Encryption::setAesKey(Encryption *this,uchar *param_1,ulong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_2 < 0x21) && ((1L << (param_2 & 0x3f) & 0x101010000U) != 0)) {
    *(ulong *)(this + 0x20) = param_2;
    memcpy(this,param_1,param_2);
    uVar1 = 1;
  }
  return uVar1;
}

