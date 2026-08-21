
/* cocos2d::FileUtilsAndroid::isFileExistInternal(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

void __thiscall
cocos2d::FileUtilsAndroid::isFileExistInternal(FileUtilsAndroid *this,basic_string *param_1)

{
  basic_string *pbVar1;
  basic_string bVar2;
  long lVar3;
  ZipFile *this_00;
  basic_string *pbVar4;
  FILE *__stream;
  size_t __n;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  basic_string *__filename;
  basic_string *__s;
  void *__dest;
  ulong local_60;
  size_t local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  bVar2 = *param_1;
  uVar8 = *(ulong *)(param_1 + 8);
  uVar5 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar5 = uVar8;
  }
  if (uVar5 == 0) {
    uVar7 = 0;
    goto LAB_0085b2cc;
  }
  if (((byte)bVar2 & 1) == 0) {
    __filename = param_1 + 1;
    uVar8 = (ulong)((byte)bVar2 >> 1);
    if (*__filename != (basic_string)0x2f) goto LAB_0085b168;
LAB_0085b1d4:
    __stream = fopen((char *)__filename,"r");
    uVar7 = 0;
    if (__stream == (FILE *)0x0) goto LAB_0085b2cc;
    fclose(__stream);
  }
  else {
    __filename = *(basic_string **)(param_1 + 0x10);
    if (*__filename == (basic_string)0x2f) goto LAB_0085b1d4;
LAB_0085b168:
    __s = __filename;
    if (7 < (long)uVar8) {
      pbVar1 = __filename + uVar8;
      pbVar4 = __filename;
      do {
        if ((uVar8 - 7 == 0) ||
           (pbVar4 = memchr(pbVar4,0x40,uVar8 - 7), pbVar4 == (basic_string *)0x0)) break;
        if (*(long *)pbVar4 == 0x2f73746573736140) {
          __s = __filename + 8;
          if (pbVar4 != __filename || pbVar4 == pbVar1) {
            __s = __filename;
          }
          break;
        }
        pbVar4 = pbVar4 + 1;
        uVar8 = (long)pbVar1 - (long)pbVar4;
      } while (7 < (long)uVar8);
    }
    this_00 = obbfile;
    if (obbfile != (ZipFile *)0x0) {
      local_60 = 0;
      local_58 = 0;
      local_50 = (void *)0x0;
      __n = strlen((char *)__s);
      if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (__n < 0x17) {
        __dest = (void *)((ulong)&local_60 | 1);
        local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
        if (__n != 0) goto LAB_0085b26c;
      }
      else {
        uVar5 = __n + 0x10 & 0xfffffffffffffff0;
        __dest = operator_new(uVar5);
        local_60 = uVar5 | 1;
        local_58 = __n;
        local_50 = __dest;
LAB_0085b26c:
        memcpy(__dest,__s,__n);
      }
      *(undefined1 *)((long)__dest + __n) = 0;
      uVar5 = ZipFile::fileExists(this_00,(basic_string *)&local_60);
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
      if ((uVar5 & 1) != 0) goto LAB_0085b2c8;
    }
    uVar7 = 0;
    if (assetmanager == 0) goto LAB_0085b2cc;
    lVar6 = AAssetManager_open(assetmanager,__s,0);
    uVar7 = 0;
    if (lVar6 == 0) goto LAB_0085b2cc;
    AAsset_close();
  }
LAB_0085b2c8:
  uVar7 = 1;
LAB_0085b2cc:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

