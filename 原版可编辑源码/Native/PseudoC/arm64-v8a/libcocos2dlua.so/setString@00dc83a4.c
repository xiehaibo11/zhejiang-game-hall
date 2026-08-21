
/* cocos2d::ui::Text::setString(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::ui::Text::setString(Text *this,basic_string *param_1)

{
  size_t __n;
  size_t sVar1;
  basic_string bVar2;
  byte bVar3;
  basic_string *pbVar4;
  int iVar5;
  byte *pbVar6;
  basic_string *__s1;
  size_t sVar7;
  basic_string *__s2;
  
  pbVar6 = (byte *)(**(code **)(**(long **)(this + 0x528) + 0x590))();
  bVar2 = *param_1;
  bVar3 = *pbVar6;
  sVar7 = (size_t)((byte)bVar2 >> 1);
  __n = sVar7;
  if (((byte)bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 8);
  }
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(pbVar6 + 8);
  }
  if (__n == sVar1) {
    __s1 = *(basic_string **)(param_1 + 0x10);
    __s2 = *(basic_string **)(pbVar6 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      __s1 = param_1 + 1;
    }
    if ((bVar3 & 1) == 0) {
      __s2 = (basic_string *)(pbVar6 + 1);
    }
    pbVar4 = param_1;
    if (((byte)bVar2 & 1) == 0) {
      while( true ) {
        if (__n == 0) {
          return;
        }
        if (pbVar4[1] != *__s2) break;
        sVar7 = sVar7 - 1;
        __s2 = __s2 + 1;
        pbVar4 = pbVar4 + 1;
        __n = sVar7;
      }
    }
    else {
      if (__n == 0) {
        return;
      }
      iVar5 = memcmp(__s1,__s2,__n);
      if (iVar5 == 0) {
        return;
      }
    }
  }
  (**(code **)(**(long **)(this + 0x528) + 0x588))(*(long **)(this + 0x528),param_1);
  (**(code **)(**(long **)(this + 0x528) + 0x168))();
  Widget::updateContentSizeWithTextureSize((Size *)this);
  this[0x530] = (Text)0x1;
  return;
}

