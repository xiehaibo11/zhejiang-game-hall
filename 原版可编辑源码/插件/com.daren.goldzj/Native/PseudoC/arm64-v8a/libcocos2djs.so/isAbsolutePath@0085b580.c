
/* cocos2d::FileUtilsAndroid::isAbsolutePath(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

bool __thiscall
cocos2d::FileUtilsAndroid::isAbsolutePath(FileUtilsAndroid *this,basic_string *param_1)

{
  basic_string *pbVar1;
  basic_string bVar2;
  bool bVar3;
  basic_string *pbVar4;
  ulong uVar5;
  basic_string *pbVar6;
  
  bVar2 = *param_1;
  pbVar6 = *(basic_string **)(param_1 + 0x10);
  if (((byte)bVar2 & 1) == 0) {
    pbVar6 = param_1 + 1;
  }
  if (*pbVar6 == (basic_string)0x2f) {
    bVar3 = true;
  }
  else {
    uVar5 = (ulong)((byte)bVar2 >> 1);
    if (((byte)bVar2 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 8);
    }
    if (7 < (long)uVar5) {
      pbVar1 = pbVar6 + uVar5;
      pbVar4 = pbVar6;
      do {
        if (uVar5 - 7 == 0) break;
        pbVar4 = memchr(pbVar4,0x40,uVar5 - 7);
        if (pbVar4 == (basic_string *)0x0) {
          return false;
        }
        if (*(long *)pbVar4 == 0x2f73746573736140) {
          return pbVar4 != pbVar1 && pbVar4 == pbVar6;
        }
        pbVar4 = pbVar4 + 1;
        uVar5 = (long)pbVar1 - (long)pbVar4;
      } while (7 < (long)uVar5);
    }
    bVar3 = false;
  }
  return bVar3;
}

