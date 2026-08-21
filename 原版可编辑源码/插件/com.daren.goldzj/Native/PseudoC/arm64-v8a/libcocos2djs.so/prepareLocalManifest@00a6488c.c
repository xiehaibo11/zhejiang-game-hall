
/* cocos2d::extension::AssetsManagerEx::prepareLocalManifest() */

void __thiscall cocos2d::extension::AssetsManagerEx::prepareLocalManifest(AssetsManagerEx *this)

{
  undefined8 uVar1;
  
  uVar1 = Manifest::getAssets(*(Manifest **)(this + 0xe0));
  *(undefined8 *)(this + 0x48) = uVar1;
  Manifest::prependSearchPaths();
  return;
}

