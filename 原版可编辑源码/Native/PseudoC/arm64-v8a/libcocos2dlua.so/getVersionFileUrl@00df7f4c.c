
/* cocos2d::extension::AssetsManager::getVersionFileUrl() const */

AssetsManager * __thiscall cocos2d::extension::AssetsManager::getVersionFileUrl(AssetsManager *this)

{
  if (((byte)this[0x340] & 1) == 0) {
    return this + 0x341;
  }
                    /* try { // try from 00df7f60 to 00ef7fab has its CatchHandler @ 00df7f60
                       catch() { ... } // from try @ 00df7f60 with catch @ 00df7f60
                       catch() { ... } // from try @ 00df8bd8 with catch @ 00df7f60
                       catch() { ... } // from try @ 00df8c38 with catch @ 00df7f60
                       catch() { ... } // from try @ 00df8f5c with catch @ 00df7f60
                       catch() { ... } // from try @ 00df8f8c with catch @ 00df7f60 */
  return *(AssetsManager **)(this + 0x350);
}

