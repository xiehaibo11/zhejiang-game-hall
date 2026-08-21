
/* cocos2d::extension::AssetsManagerEx::prepareLocalManifest() */

void __thiscall cocos2d::extension::AssetsManagerEx::prepareLocalManifest(AssetsManagerEx *this)

{
  undefined8 uVar1;
  
                    /* catch() { ... } // from try @ 00e02d8c with catch @ 00e02e60 */
                    /* catch() { ... } // from try @ 00e02d7c with catch @ 00e02e64 */
  uVar1 = Manifest::getAssets(*(Manifest **)(this + 0x100));
  *(undefined8 *)(this + 0x68) = uVar1;
  Manifest::prependSearchPaths();
  return;
}

