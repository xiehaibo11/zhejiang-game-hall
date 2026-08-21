
/* cocos2d::extension::AssetsManager::getStoragePath() const */

AssetsManager * __thiscall cocos2d::extension::AssetsManager::getStoragePath(AssetsManager *this)

{
  if (((byte)this[0x2f8] & 1) == 0) {
    return this + 0x2f9;
  }
  return *(AssetsManager **)(this + 0x308);
}

