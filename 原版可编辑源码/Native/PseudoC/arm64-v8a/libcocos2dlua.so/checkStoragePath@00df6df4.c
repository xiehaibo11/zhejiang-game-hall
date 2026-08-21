
/* cocos2d::extension::AssetsManager::checkStoragePath() */

void __thiscall cocos2d::extension::AssetsManager::checkStoragePath(AssetsManager *this)

{
  AssetsManager AVar1;
  AssetsManager *pAVar2;
  ulong uVar3;
  
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
                    /* try { // try from 00df6e18 to 00ef6e2f has its CatchHandler @ 00df7080 */
    uVar3 = (ulong)((byte)AVar1 >> 1);
    pAVar2 = this + 0x2f9;
  }
  else {
                    /* try { // try from 00df6e30 to 00ef6e47 has its CatchHandler @ 00df7060 */
    uVar3 = *(ulong *)(this + 0x300);
    pAVar2 = *(AssetsManager **)(this + 0x308);
  }
  if (pAVar2[uVar3 - 1] != (AssetsManager)0x2f) {
                    /* try { // try from 00df6e48 to 00ef6e4f has its CatchHandler @ 00df7034 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x2f8),"/",1);
  }
  return;
}

