
/* cocos2d::FileUtilsAndroid::isFileExistInternal(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

undefined4 __thiscall
cocos2d::FileUtilsAndroid::isFileExistInternal(FileUtilsAndroid *this,basic_string *param_1)

{
  basic_string *pbVar1;
  FileUtilsAndroid *__s2;
  basic_string bVar2;
  FileUtilsAndroid FVar3;
  long lVar4;
  ZipFile *this_00;
  int iVar5;
  basic_string *pbVar6;
  FILE *__stream;
  size_t sVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  basic_string *__filename;
  void *__dest;
  ulong local_70;
  size_t local_68;
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  std::__ndk1::recursive_mutex::lock((recursive_mutex *)(this + 8));
  bVar2 = *param_1;
  uVar10 = *(ulong *)(param_1 + 8);
  uVar8 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar8 = uVar10;
  }
  if (uVar8 == 0) {
LAB_007cb2cc:
    uVar11 = 0;
  }
  else {
    if (((byte)bVar2 & 1) == 0) {
      __filename = param_1 + 1;
      uVar10 = (ulong)((byte)bVar2 >> 1);
      if (*__filename != (basic_string)0x2f) goto LAB_007cb148;
LAB_007cb1cc:
      __stream = fopen((char *)__filename,"r");
      if (__stream == (FILE *)0x0) goto LAB_007cb2cc;
      fclose(__stream);
    }
    else {
      __filename = *(basic_string **)(param_1 + 0x10);
      if (*__filename == (basic_string)0x2f) goto LAB_007cb1cc;
LAB_007cb148:
      __s2 = this + 0xa1;
      sVar7 = (ulong)((byte)this[0xa0] >> 1);
      if (((byte)this[0xa0] & 1) != 0) {
        __s2 = *(FileUtilsAndroid **)(this + 0xb0);
        sVar7 = *(size_t *)(this + 0xa8);
      }
      if (sVar7 == 0) {
LAB_007cb1f8:
        __filename = __filename + sVar7;
      }
      else if ((long)sVar7 <= (long)uVar10) {
        FVar3 = *__s2;
        pbVar1 = __filename + uVar10;
        pbVar6 = __filename;
        do {
          if ((0xfffffffffffffffe < uVar10 - sVar7) ||
             (pbVar6 = memchr(pbVar6,(uint)(byte)FVar3,(uVar10 - sVar7) + 1),
             pbVar6 == (basic_string *)0x0)) break;
          iVar5 = memcmp(pbVar6,__s2,sVar7);
          if (iVar5 == 0) {
            if ((pbVar6 != pbVar1) && (pbVar6 == __filename)) goto LAB_007cb1f8;
            break;
          }
          pbVar6 = pbVar6 + 1;
          uVar10 = (long)pbVar1 - (long)pbVar6;
        } while ((long)sVar7 <= (long)uVar10);
      }
      this_00 = obbfile;
      if (obbfile != (ZipFile *)0x0) {
        local_68 = 0;
        local_60 = (void *)0x0;
        local_70 = 0;
        sVar7 = strlen((char *)__filename);
        if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (sVar7 < 0x17) {
          __dest = (void *)((ulong)&local_70 | 1);
          local_70 = CONCAT71(local_70._1_7_,(char)((int)sVar7 << 1));
          if (sVar7 != 0) goto LAB_007cb268;
        }
        else {
          uVar8 = sVar7 + 0x10 & 0xfffffffffffffff0;
          __dest = operator_new(uVar8);
          local_70 = uVar8 | 1;
          local_68 = sVar7;
          local_60 = __dest;
LAB_007cb268:
          memcpy(__dest,__filename,sVar7);
        }
        *(undefined1 *)((long)__dest + sVar7) = 0;
        uVar8 = ZipFile::fileExists(this_00,(basic_string *)&local_70);
        if ((local_70 & 1) != 0) {
          operator_delete(local_60);
        }
        if ((uVar8 & 1) != 0) goto LAB_007cb2c4;
      }
      if ((assetmanager == 0) || (lVar9 = AAssetManager_open(assetmanager,__filename,0), lVar9 == 0)
         ) goto LAB_007cb2cc;
      AAsset_close();
    }
LAB_007cb2c4:
    uVar11 = 1;
  }
  std::__ndk1::recursive_mutex::unlock((recursive_mutex *)(this + 8));
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

