
/* universe::FileSystemAndroid::isFileExistInternal(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

undefined8 __thiscall
universe::FileSystemAndroid::isFileExistInternal(FileSystemAndroid *this,basic_string *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  basic_string *pbVar4;
  
  uVar1 = (ulong)((byte)*param_1 >> 1);
                    /* catch() { ... } // from try @ 009fb1c8 with catch @ 009fb26c */
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
                    /* catch() { ... } // from try @ 009fb0c0 with catch @ 009fb270 */
                    /* catch() { ... } // from try @ 009fb180 with catch @ 009fb278 */
  if ((uVar1 == 0) ||
     (uVar1 = CustomFileManager::isAbsolutePath((CustomFileManager *)this,param_1), (uVar1 & 1) != 0
     )) {
    uVar2 = 0;
  }
  else {
    pbVar4 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar4 = param_1 + 1;
    }
    lVar3 = AAssetManager_open(assetmanager,pbVar4,0);
    uVar2 = 0;
    if (lVar3 != 0) {
      AAsset_close();
      uVar2 = 1;
    }
  }
  return uVar2;
}

