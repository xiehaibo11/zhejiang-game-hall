
/* cocos2d::FileUtilsAndroid::isAbsolutePath(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

undefined4 __thiscall
cocos2d::FileUtilsAndroid::isAbsolutePath(FileUtilsAndroid *this,basic_string *param_1)

{
  basic_string *pbVar1;
  FileUtilsAndroid *__s2;
  basic_string bVar2;
  FileUtilsAndroid FVar3;
  size_t __n;
  int iVar4;
  basic_string *pbVar5;
  ulong uVar6;
  basic_string *pbVar7;
  undefined4 uVar8;
  
  std::__ndk1::recursive_mutex::lock((recursive_mutex *)(this + 8));
  bVar2 = *param_1;
  pbVar7 = *(basic_string **)(param_1 + 0x10);
  if (((byte)bVar2 & 1) == 0) {
    pbVar7 = param_1 + 1;
  }
  if (*pbVar7 != (basic_string)0x2f) {
    __s2 = this + 0xa1;
    __n = (ulong)((byte)this[0xa0] >> 1);
    if (((byte)this[0xa0] & 1) != 0) {
      __s2 = *(FileUtilsAndroid **)(this + 0xb0);
      __n = *(size_t *)(this + 0xa8);
    }
    if (__n != 0) {
      uVar6 = (ulong)((byte)bVar2 >> 1);
      if (((byte)bVar2 & 1) != 0) {
        uVar6 = *(ulong *)(param_1 + 8);
      }
      if ((long)__n <= (long)uVar6) {
        FVar3 = *__s2;
        pbVar1 = pbVar7 + uVar6;
        pbVar5 = pbVar7;
        do {
          if ((0xfffffffffffffffe < uVar6 - __n) ||
             (pbVar5 = memchr(pbVar5,(uint)(byte)FVar3,(uVar6 - __n) + 1),
             pbVar5 == (basic_string *)0x0)) break;
          iVar4 = memcmp(pbVar5,__s2,__n);
          if (iVar4 == 0) {
            uVar8 = 0;
            if ((pbVar5 == pbVar1) || (pbVar5 != pbVar7)) goto LAB_007cb684;
            goto LAB_007cb680;
          }
          pbVar5 = pbVar5 + 1;
          uVar6 = (long)pbVar1 - (long)pbVar5;
        } while ((long)__n <= (long)uVar6);
      }
      uVar8 = 0;
      goto LAB_007cb684;
    }
  }
LAB_007cb680:
  uVar8 = 1;
LAB_007cb684:
  std::__ndk1::recursive_mutex::unlock((recursive_mutex *)(this + 8));
  return uVar8;
}

