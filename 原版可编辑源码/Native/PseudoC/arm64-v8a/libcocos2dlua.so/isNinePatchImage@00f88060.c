
/* cocos2d::NinePatchImageParser::isNinePatchImage(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

bool cocos2d::NinePatchImageParser::isNinePatchImage(basic_string *param_1)

{
  ulong uVar1;
  basic_string bVar2;
  int iVar3;
  basic_string *pbVar4;
  
  bVar2 = *param_1;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 < 7) {
    return false;
  }
  pbVar4 = *(basic_string **)(param_1 + 0x10);
  if (((byte)bVar2 & 1) == 0) {
    pbVar4 = param_1 + 1;
  }
  iVar3 = memcmp(pbVar4 + (uVar1 - 6),&DAT_01448778,6);
  return iVar3 == 0;
}

