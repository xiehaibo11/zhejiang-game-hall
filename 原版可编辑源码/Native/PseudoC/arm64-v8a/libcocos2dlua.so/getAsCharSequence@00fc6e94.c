
/* cocos2d::StringUtils::StringUTF8::getAsCharSequence() const */

void cocos2d::StringUtils::StringUTF8::getAsCharSequence(void)

{
  byte *pbVar1;
  ulong uVar2;
  byte *pbVar3;
  long *in_x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  long lVar4;
  long lVar5;
  
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  lVar5 = (in_x0[1] - *in_x0 >> 3) * -0x5555555555555555;
  if (in_x0[1] - *in_x0 == -0x18) {
    lVar5 = -1;
  }
  lVar5 = lVar5 + 1;
  lVar4 = 0;
  while (lVar5 = lVar5 + -1, lVar5 != 0) {
    pbVar1 = (byte *)(*in_x0 + lVar4);
    uVar2 = *(ulong *)(pbVar1 + 8);
    pbVar3 = *(byte **)(pbVar1 + 0x10);
    if ((*pbVar1 & 1) == 0) {
      pbVar3 = pbVar1 + 1;
      uVar2 = (ulong)(*pbVar1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(in_x8,(char *)pbVar3,uVar2);
    lVar4 = lVar4 + 0x18;
  }
  return;
}

