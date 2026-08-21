
/* cocos2d::StringUtils::StringUTF8::getAsCharSequence(unsigned long, unsigned long) const */

void cocos2d::StringUtils::StringUTF8::getAsCharSequence(ulong param_1,ulong param_2)

{
  byte *pbVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong in_x2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  uVar5 = (*(long *)(param_1 + 8) - *(long *)param_1 >> 3) * -0x5555555555555555 - param_2;
  if (in_x2 <= uVar5) {
    uVar5 = in_x2;
  }
  uVar6 = param_2 - 1;
  lVar4 = param_2 * 0x18;
  while (uVar6 = uVar6 + 1, uVar6 < uVar5 + param_2) {
    pbVar1 = (byte *)(*(long *)param_1 + lVar4);
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

