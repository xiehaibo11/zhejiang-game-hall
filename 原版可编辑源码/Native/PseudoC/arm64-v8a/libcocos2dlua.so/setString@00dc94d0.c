
/* cocos2d::ui::TextAtlas::setString(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::ui::TextAtlas::setString(TextAtlas *this,basic_string *param_1)

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
  basic_string *pbVar8;
  
                    /* try { // try from 00dc94e4 to 00ec9587 has its CatchHandler @ 00dc94e4
                       catch() { ... } // from try @ 00dc94e4 with catch @ 00dc94e4
                       catch() { ... } // from try @ 00dc967c with catch @ 00dc94e4
                       catch() { ... } // from try @ 00dc984c with catch @ 00dc94e4
                       catch() { ... } // from try @ 00dc9880 with catch @ 00dc94e4 */
  pbVar6 = (byte *)(**(code **)(**(long **)(this + 0x4f0) + 0x590))();
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
    pbVar8 = *(basic_string **)(pbVar6 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      __s1 = param_1 + 1;
    }
    if ((bVar3 & 1) == 0) {
      pbVar8 = (basic_string *)(pbVar6 + 1);
    }
    pbVar4 = param_1;
    sVar1 = __n;
    if (((byte)bVar2 & 1) == 0) {
      while( true ) {
        if (sVar1 == 0) {
          return;
        }
        if (pbVar4[1] != *pbVar8) break;
        sVar7 = sVar7 - 1;
        pbVar8 = pbVar8 + 1;
        pbVar4 = pbVar4 + 1;
        sVar1 = sVar7;
      }
    }
    else {
      if (__n == 0) {
        return;
      }
      iVar5 = memcmp(__s1,pbVar8,__n);
      if (iVar5 == 0) {
        return;
      }
    }
  }
                    /* try { // try from 00dc9588 to 00ec958f has its CatchHandler @ 00dc98a0 */
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x4f8) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
                    /* try { // try from 00dc9590 to 00ec95a3 has its CatchHandler @ 00dc9928 */
    pbVar8 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar8 = param_1 + 1;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x4f8),(char *)pbVar8,__n);
  }
                    /* try { // try from 00dc95a8 to 00ec95c3 has its CatchHandler @ 00dc989c */
  (**(code **)(**(long **)(this + 0x4f0) + 0x588))(*(long **)(this + 0x4f0),param_1);
  (**(code **)(**(long **)(this + 0x4f0) + 0x168))();
  Widget::updateContentSizeWithTextureSize((Size *)this);
  this[0x548] = (TextAtlas)0x1;
  return;
}

