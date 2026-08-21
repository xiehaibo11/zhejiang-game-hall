
/* cocos2d::PUAffector::addEmitterToExclude(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::PUAffector::addEmitterToExclude(PUAffector *this,basic_string *param_1)

{
  size_t sVar1;
  size_t __n;
  basic_string *__s2;
  basic_string bVar2;
  basic_string *pbVar3;
  basic_string *pbVar4;
  int iVar5;
  size_t sVar6;
  basic_string *__s1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  basic_string *pbVar7;
  basic_string *pbVar8;
  
  pbVar7 = *(basic_string **)(this + 0x78);
  this_00 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (this + 0x80);
  pbVar8 = pbVar7;
  if (pbVar7 != (basic_string *)this_00) {
    __n = *(size_t *)(param_1 + 8);
    __s2 = *(basic_string **)(param_1 + 0x10);
                    /* try { // try from 00e210c8 to 00f210cf has its CatchHandler @ 00e211c0 */
    if (((byte)*param_1 & 1) == 0) {
      __s2 = param_1 + 1;
      __n = (ulong)((byte)*param_1 >> 1);
    }
    do {
      bVar2 = *pbVar7;
      sVar6 = (size_t)((byte)bVar2 >> 1);
      sVar1 = sVar6;
                    /* try { // try from 00e210f8 to 00f2110f has its CatchHandler @ 00e211c4 */
      if (((byte)bVar2 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar7 + 8);
      }
      if (sVar1 == __n) {
        __s1 = *(basic_string **)(pbVar7 + 0x10);
        if (((byte)bVar2 & 1) == 0) {
          __s1 = pbVar7 + 1;
        }
        pbVar3 = pbVar7;
        pbVar4 = __s2;
        sVar1 = __n;
        pbVar8 = pbVar7;
        if (((byte)bVar2 & 1) == 0) {
          while( true ) {
            if (sVar1 == 0) goto LAB_00e21160;
                    /* try { // try from 00e21120 to 00f21127 has its CatchHandler @ 00e211c0 */
            if (pbVar3[1] != *pbVar4) break;
            sVar6 = sVar6 - 1;
            pbVar3 = pbVar3 + 1;
            pbVar4 = pbVar4 + 1;
            sVar1 = sVar6;
          }
        }
        else {
                    /* try { // try from 00e21150 to 00f21157 has its CatchHandler @ 00e211bc */
          if ((__n == 0) || (iVar5 = memcmp(__s1,__s2,__n), iVar5 == 0)) break;
        }
      }
      pbVar7 = pbVar7 + 0x18;
      pbVar8 = (basic_string *)this_00;
    } while (pbVar7 != (basic_string *)this_00);
  }
LAB_00e21160:
  if (pbVar8 == (basic_string *)this_00) {
    if (*(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
         (this + 0x88) == this_00) {
                    /* catch() { ... } // from try @ 00e20ee4 with catch @ 00e211a4 */
                    /* catch() { ... } // from try @ 00e20ff0 with catch @ 00e211a8 */
                    /* catch() { ... } // from try @ 00e2100c with catch @ 00e211bc
                       catch() { ... } // from try @ 00e21150 with catch @ 00e211bc */
      std::__ndk1::
      vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::
      __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                  *)(this + 0x78),param_1);
      return;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(this_00,param_1);
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x80) = this_00 + 0x18;
  }
  return;
}

