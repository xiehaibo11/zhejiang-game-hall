
/* universe::FileSystemAndroid::isDirectoryExistInternal(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

bool __thiscall
universe::FileSystemAndroid::isDirectoryExistInternal(FileSystemAndroid *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  basic_string *__file;
  uint local_90;
  
  bVar2 = *param_1;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 != 0) {
    __file = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      __file = param_1 + 1;
    }
    if (*__file != (basic_string)0x2f) {
      if (assetmanager == 0) {
        return false;
      }
      lVar4 = AAssetManager_openDir(assetmanager,__file);
      if (lVar4 == 0) {
        return false;
      }
      lVar5 = AAssetDir_getNextFileName();
      if (lVar5 == 0) {
        return false;
      }
      AAssetDir_close(lVar4);
      return true;
    }
    iVar3 = stat((char *)__file,(stat *)&stack0xffffffffffffff60);
    if (iVar3 == 0) {
      return (local_90 & 0xf000) == 0x4000;
    }
  }
  return false;
}

