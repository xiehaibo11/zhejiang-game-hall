
/* cocos2d::TextFieldTTF::setPasswordTextStyle(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::TextFieldTTF::setPasswordTextStyle(TextFieldTTF *this,basic_string *param_1)

{
  size_t __n;
  size_t sVar1;
  basic_string bVar2;
  TextFieldTTF TVar3;
  TextFieldTTF *pTVar4;
  int iVar5;
  ulong uVar6;
  basic_string *pbVar7;
  TextFieldTTF *__s2;
  
                    /* try { // try from 00f5735c to 01057387 has its CatchHandler @ 00f57668 */
  bVar2 = *param_1;
  uVar6 = (ulong)((byte)bVar2 >> 1);
  __n = uVar6;
  if (((byte)bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 8);
  }
  if (__n != 0) {
    TVar3 = this[0x6f8];
                    /* try { // try from 00f57390 to 01057393 has its CatchHandler @ 00f5766c */
    sVar1 = (ulong)((byte)TVar3 >> 1);
    if (((byte)TVar3 & 1) != 0) {
      sVar1 = *(size_t *)(this + 0x700);
    }
                    /* try { // try from 00f5739c to 0105740b has its CatchHandler @ 00f57650 */
    if (__n != sVar1) {
LAB_00f573f0:
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (this + 0x6f8) !=
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1)
      {
        pbVar7 = *(basic_string **)(param_1 + 0x10);
        if (((byte)bVar2 & 1) == 0) {
          pbVar7 = param_1 + 1;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (this + 0x6f8),(char *)pbVar7,__n);
      }
                    /* try { // try from 00f57424 to 01057497 has its CatchHandler @ 00f5766c */
                    /* WARNING: Could not recover jumptable at 0x00f57430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x588))(this,this + 0x6b8);
      return;
    }
    __s2 = *(TextFieldTTF **)(this + 0x708);
    if (((byte)TVar3 & 1) == 0) {
      __s2 = this + 0x6f9;
    }
    pTVar4 = (TextFieldTTF *)param_1;
    if (((byte)bVar2 & 1) == 0) {
      do {
        if (pTVar4[1] != *__s2) goto LAB_00f573f0;
        uVar6 = uVar6 - 1;
        __s2 = __s2 + 1;
        pTVar4 = pTVar4 + 1;
      } while (uVar6 != 0);
    }
    else {
      iVar5 = memcmp(*(void **)(param_1 + 0x10),__s2,__n);
      if (iVar5 != 0) goto LAB_00f573f0;
    }
  }
  return;
}

