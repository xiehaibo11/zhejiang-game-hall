
/* cocos2d::extension::AssetsManager::setStoragePath(char const*) */

void __thiscall cocos2d::extension::AssetsManager::setStoragePath(AssetsManager *this,char *param_1)

{
  AssetsManager AVar1;
  size_t sVar2;
  ulong uVar3;
  AssetsManager *pAVar4;
  
  sVar2 = strlen(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x2f8),param_1,sVar2);
  AVar1 = this[0x2f8];
  if (((byte)AVar1 & 1) == 0) {
    if ((byte)AVar1 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(this + 0x300) == 0) {
    return;
  }
  if (((byte)AVar1 & 1) == 0) {
    uVar3 = (ulong)((byte)AVar1 >> 1);
    pAVar4 = this + 0x2f9;
  }
  else {
    uVar3 = *(ulong *)(this + 0x300);
    pAVar4 = *(AssetsManager **)(this + 0x308);
  }
  if (pAVar4[uVar3 - 1] != (AssetsManager)0x2f) {
                    /* catch() { ... } // from try @ 00df7bdc with catch @ 00df7f28 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x2f8),"/",1);
  }
                    /* catch() { ... } // from try @ 00df7c18 with catch @ 00df7f44 */
  return;
}

