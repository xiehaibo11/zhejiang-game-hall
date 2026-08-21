
/* cocos2d::extension::AssetsManager::getPackageUrl() const */

AssetsManager * __thiscall cocos2d::extension::AssetsManager::getPackageUrl(AssetsManager *this)

{
  if (((byte)this[0x328] & 1) == 0) {
    return this + 0x329;
  }
  return *(AssetsManager **)(this + 0x338);
}

