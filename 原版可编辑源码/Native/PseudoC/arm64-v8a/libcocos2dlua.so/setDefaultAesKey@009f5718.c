
/* universe::network::Encryption::setDefaultAesKey() */

undefined8 __thiscall universe::network::Encryption::setDefaultAesKey(Encryption *this)

{
  *(undefined8 *)(this + 0x20) = 0x20;
  *(undefined8 *)(this + 0x18) = 0x8b4412cb2eda0139;
  *(undefined8 *)(this + 0x10) = 0x3c02cc7a0010a205;
  *(undefined8 *)(this + 8) = 0x710230136d71123;
  *(undefined8 *)this = 0xff89e313051262f3;
  return 1;
}

