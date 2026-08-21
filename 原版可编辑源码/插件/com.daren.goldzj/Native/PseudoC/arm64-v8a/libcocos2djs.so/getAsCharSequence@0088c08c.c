
/* cocos2d::StringUtils::StringUTF8::getAsCharSequence() const */

void cocos2d::StringUtils::StringUTF8::getAsCharSequence(void)

{
  byte *pbVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined8 *in_x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  *(undefined8 *)in_x8 = 0;
  pbVar3 = (byte *)in_x0[1];
  for (pbVar1 = (byte *)*in_x0; pbVar1 != pbVar3; pbVar1 = pbVar1 + 0x18) {
    uVar2 = *(ulong *)(pbVar1 + 8);
    pbVar4 = *(byte **)(pbVar1 + 0x10);
    if ((*pbVar1 & 1) == 0) {
      pbVar4 = pbVar1 + 1;
      uVar2 = (ulong)(*pbVar1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(in_x8,(char *)pbVar4,uVar2);
  }
  return;
}

