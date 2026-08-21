
/* cocos2d::VolatileTextureMgr::addStringTexture(cocos2d::Texture2D*, char const*,
   cocos2d::FontDefinition const&) */

void cocos2d::VolatileTextureMgr::addStringTexture
               (Texture2D *param_1,char *param_2,FontDefinition *param_3)

{
  ulong uVar1;
  FontDefinition *pFVar2;
  long lVar3;
  size_t sVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
                    /* try { // try from 00ff16dc to 010f16e7 has its CatchHandler @ 00ff1720 */
  if (_isReloading == '\0') {
                    /* try { // try from 00ff16e8 to 010f173b has its CatchHandler @ 00ff1680 */
    lVar3 = findVolotileTexture(param_1);
    *(undefined4 *)(lVar3 + 0x10) = 3;
    sVar4 = strlen(param_2);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + 0x60),param_2,sVar4);
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (lVar3 + 0x78) !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_3) {
                    /* catch() { ... } // from try @ 00ff16dc with catch @ 00ff1720 */
      uVar1 = *(ulong *)(param_3 + 8);
      pFVar2 = *(FontDefinition **)(param_3 + 0x10);
      if (((byte)*param_3 & 1) == 0) {
        pFVar2 = param_3 + 1;
        uVar1 = (ulong)((byte)*param_3 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (lVar3 + 0x78),(char *)pFVar2,uVar1);
    }
                    /* catch() { ... } // from try @ 00ff1768 with catch @ 00ff173c */
    uVar5 = *(undefined8 *)(param_3 + 0x18);
    *(undefined8 *)(lVar3 + 0x98) = *(undefined8 *)(param_3 + 0x20);
    *(undefined8 *)(lVar3 + 0x90) = uVar5;
    Size::operator=((Size *)(lVar3 + 0xa0),(Size *)(param_3 + 0x28));
    *(undefined4 *)(lVar3 + 0xa8) = *(undefined4 *)(param_3 + 0x30);
                    /* try { // try from 00ff1760 to 010f1767 has its CatchHandler @ 00ff17ac */
    *(FontDefinition *)(lVar3 + 0xac) = param_3[0x34];
                    /* try { // try from 00ff1768 to 010f17c7 has its CatchHandler @ 00ff173c */
    Size::operator=((Size *)(lVar3 + 0xb0),(Size *)(param_3 + 0x38));
    *(undefined8 *)(lVar3 + 0xb8) = *(undefined8 *)(param_3 + 0x40);
    uVar6 = *(undefined8 *)(param_3 + 0x50);
    uVar5 = *(undefined8 *)(param_3 + 0x48);
    *(undefined4 *)(lVar3 + 0xd0) = *(undefined4 *)(param_3 + 0x58);
    *(undefined8 *)(lVar3 + 200) = uVar6;
    *(undefined8 *)(lVar3 + 0xc0) = uVar5;
  }
  return;
}

