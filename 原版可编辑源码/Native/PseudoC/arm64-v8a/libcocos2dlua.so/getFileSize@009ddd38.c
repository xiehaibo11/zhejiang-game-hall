
/* universe::FileSystemAndroid::getFileSize(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

__off_t __thiscall
universe::FileSystemAndroid::getFileSize(FileSystemAndroid *this,basic_string *param_1)

{
  char *__file;
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  __off_t _Var5;
  basic_string *pbVar6;
  stat sStack_d0;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
  }
  if (uVar3 != 0) {
    uVar3 = isFileExistExternal(this,param_1);
    if ((uVar3 & 1) != 0) {
      TanGaoXiong::getAbsolutePath((basic_string *)this);
      __file = (char *)((ulong)(sStack_d0.__unused + 1) | 1);
      if (((byte)sStack_d0.__unused[1] & 1) != 0) {
        __file = local_40;
      }
      iVar2 = stat(__file,&sStack_d0);
      _Var5 = sStack_d0.st_size;
      if (iVar2 != 0) {
        _Var5 = -1;
      }
      if (((byte)sStack_d0.__unused[1] & 1) != 0) {
        operator_delete(local_40);
      }
      goto LAB_009dde78;
    }
    uVar3 = TanGaoXiong::isAbsolutePath((TanGaoXiong *)this,param_1);
    if ((uVar3 & 1) == 0) {
      uVar3 = (ulong)((byte)*param_1 >> 1);
      if (((byte)*param_1 & 1) != 0) {
        uVar3 = *(ulong *)(param_1 + 8);
      }
      if ((uVar3 != 0) &&
         (uVar3 = TanGaoXiong::isAbsolutePath((TanGaoXiong *)this,param_1), (uVar3 & 1) == 0)) {
        pbVar6 = *(basic_string **)(param_1 + 0x10);
        if (((byte)*param_1 & 1) == 0) {
          pbVar6 = param_1 + 1;
        }
        lVar4 = AAssetManager_open(assetmanager,pbVar6,0);
        if (lVar4 != 0) {
          AAsset_close();
          pbVar6 = param_1 + 1;
          if (((byte)*param_1 & 1) != 0) {
            pbVar6 = *(basic_string **)(param_1 + 0x10);
          }
          lVar4 = AAssetManager_open(assetmanager,pbVar6,0);
          if (lVar4 != 0) {
            _Var5 = AAsset_getLength();
            AAsset_close(lVar4);
            goto LAB_009dde78;
          }
          AAsset_close();
        }
      }
    }
  }
  _Var5 = -1;
LAB_009dde78:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return _Var5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

