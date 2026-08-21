
/* cocos2d::extension::EventAssetsManagerEx::getDownloadedFiles() const */

int __thiscall
cocos2d::extension::EventAssetsManagerEx::getDownloadedFiles(EventAssetsManagerEx *this)

{
                    /* try { // try from 00a6b8d4 to 00b6b8eb has its CatchHandler @ 00a6ba44 */
  return *(int *)(*(long *)(this + 0x10) + 0x1c0) - *(int *)(*(long *)(this + 0x10) + 0x1c4);
}

