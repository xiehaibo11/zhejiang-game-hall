
/* cocos2d::SkinData::addSkinBoneNames(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::SkinData::addSkinBoneNames(SkinData *this,basic_string *param_1)

{
  size_t sVar1;
  size_t __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__s2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  int iVar5;
  size_t sVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__s1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  
  pbVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)this;
  this_00 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (this + 8);
  pbVar8 = pbVar7;
  if (pbVar7 != this_00) {
    __n = *(size_t *)(param_1 + 8);
    __s2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      __s2 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + 1);
      __n = (ulong)((byte)*param_1 >> 1);
    }
    do {
      bVar2 = *pbVar7;
      sVar6 = (size_t)((byte)bVar2 >> 1);
      sVar1 = sVar6;
      if (((byte)bVar2 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar7 + 8);
      }
      if (sVar1 == __n) {
        __s1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (pbVar7 + 0x10);
        if (((byte)bVar2 & 1) == 0) {
          __s1 = pbVar7 + 1;
        }
        pbVar3 = pbVar7;
        pbVar4 = __s2;
        sVar1 = __n;
        pbVar8 = pbVar7;
        if (((byte)bVar2 & 1) == 0) {
          while( true ) {
            if (sVar1 == 0) goto LAB_00d27a0c;
            if (pbVar3[1] != *pbVar4) break;
            sVar6 = sVar6 - 1;
            pbVar3 = pbVar3 + 1;
            pbVar4 = pbVar4 + 1;
            sVar1 = sVar6;
          }
        }
        else if ((__n == 0) || (iVar5 = memcmp(__s1,__s2,__n), iVar5 == 0)) break;
      }
      pbVar7 = pbVar7 + 0x18;
      pbVar8 = this_00;
    } while (pbVar7 != this_00);
  }
LAB_00d27a0c:
  if (pbVar8 == this_00) {
    if (*(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
         (this + 0x10) == this_00) {
      std::__ndk1::
      vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::
      __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                  *)this,param_1);
      return;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(this_00,param_1);
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 8) =
         this_00 + 0x18;
  }
  return;
}

