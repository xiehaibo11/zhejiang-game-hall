
/* cocos2d::StringUtils::StringUTF8::getAsCharSequence(unsigned long) const */

void cocos2d::StringUtils::StringUTF8::getAsCharSequence(ulong param_1)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  long in_x1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  long lVar6;
  ulong uVar7;
  
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  lVar2 = *(long *)param_1;
  lVar4 = *(long *)(param_1 + 8);
  uVar7 = in_x1 - 1;
  lVar6 = in_x1 * 0x18;
  while (uVar7 = uVar7 + 1, uVar7 < (ulong)((lVar4 - lVar2 >> 3) * -0x5555555555555555)) {
    pbVar1 = (byte *)(*(long *)param_1 + lVar6);
    uVar3 = *(ulong *)(pbVar1 + 8);
    pbVar5 = *(byte **)(pbVar1 + 0x10);
    if ((*pbVar1 & 1) == 0) {
      pbVar5 = pbVar1 + 1;
      uVar3 = (ulong)(*pbVar1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(in_x8,(char *)pbVar5,uVar3);
    lVar6 = lVar6 + 0x18;
  }
  return;
}

