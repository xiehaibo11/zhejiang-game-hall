
/* cocos2d::FileUtilsAndroid::getFileSize(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

long __thiscall cocos2d::FileUtilsAndroid::getFileSize(FileUtilsAndroid *this,basic_string *param_1)

{
  basic_string *pbVar1;
  FileUtilsAndroid *__s2;
  basic_string bVar2;
  FileUtilsAndroid FVar3;
  long lVar4;
  size_t __n;
  bool bVar5;
  int iVar6;
  long lVar7;
  basic_string *pbVar8;
  long lVar9;
  ulong uVar10;
  basic_string *pbVar11;
  void *__src;
  undefined1 *puVar12;
  ulong uVar13;
  ulong local_98;
  ulong uStack_90;
  undefined1 *local_88;
  ulong local_80;
  ulong uStack_78;
  undefined1 *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  std::__ndk1::recursive_mutex::lock((recursive_mutex *)(this + 8));
  lVar7 = FileUtils::getFileSize((FileUtils *)this,param_1);
  if (lVar7 != -1) goto LAB_007cb700;
  if (assetmanager == 0) {
    lVar7 = -1;
    goto LAB_007cb700;
  }
  uStack_78 = 0;
  local_70 = (undefined1 *)0x0;
  local_80 = 0;
  bVar2 = *param_1;
  if (((byte)bVar2 & 1) == 0) {
    local_70 = *(undefined1 **)(param_1 + 0x10);
    uStack_78 = *(ulong *)(param_1 + 8);
    local_80 = *(ulong *)param_1;
    bVar5 = false;
  }
  else {
    uVar10 = *(ulong *)(param_1 + 8);
    if (0xffffffffffffffef < uVar10) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __src = *(void **)(param_1 + 0x10);
    if (uVar10 < 0x17) {
      puVar12 = (undefined1 *)((ulong)&local_80 | 1);
      local_80 = (ulong)(byte)((int)uVar10 << 1);
      if (uVar10 != 0) goto LAB_007cb7cc;
    }
    else {
      uVar13 = uVar10 + 0x10 & 0xfffffffffffffff0;
      puVar12 = operator_new(uVar13);
      local_80 = uVar13 | 1;
      uStack_78 = uVar10;
      local_70 = puVar12;
LAB_007cb7cc:
      memcpy(puVar12,__src,uVar10);
    }
    bVar5 = true;
    puVar12[uVar10] = 0;
  }
  pbVar11 = *(basic_string **)(param_1 + 0x10);
  if (!bVar5) {
    pbVar11 = param_1 + 1;
  }
  __s2 = this + 0xa1;
  __n = (ulong)((byte)this[0xa0] >> 1);
  if (((byte)this[0xa0] & 1) != 0) {
    __s2 = *(FileUtilsAndroid **)(this + 0xb0);
    __n = *(size_t *)(this + 0xa8);
  }
  if (__n == 0) {
LAB_007cb884:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_98,(ulong)param_1,__n,(allocator *)0xffffffffffffffff);
    if ((local_80 & 1) != 0) {
      *local_70 = 0;
      uStack_78 = 0;
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
    }
    uStack_78 = uStack_90;
    local_80 = local_98;
    local_70 = local_88;
  }
  else {
    uVar10 = (ulong)((byte)bVar2 >> 1);
    if (bVar5) {
      uVar10 = *(ulong *)(param_1 + 8);
    }
    if ((long)__n <= (long)uVar10) {
      FVar3 = *__s2;
      pbVar1 = pbVar11 + uVar10;
      pbVar8 = pbVar11;
      do {
        if ((0xfffffffffffffffe < uVar10 - __n) ||
           (pbVar8 = memchr(pbVar8,(uint)(byte)FVar3,(uVar10 - __n) + 1),
           pbVar8 == (basic_string *)0x0)) break;
        iVar6 = memcmp(pbVar8,__s2,__n);
        if (iVar6 == 0) {
          if ((pbVar8 != pbVar1) && (pbVar8 == pbVar11)) goto LAB_007cb884;
          break;
        }
        pbVar8 = pbVar8 + 1;
        uVar10 = (long)pbVar1 - (long)pbVar8;
      } while ((long)__n <= (long)uVar10);
    }
  }
  puVar12 = (undefined1 *)((ulong)&local_80 | 1);
  if ((local_80 & 1) != 0) {
    puVar12 = local_70;
  }
  lVar9 = AAssetManager_open(assetmanager,puVar12,0);
  if (lVar9 == 0) {
    lVar7 = -1;
  }
  else {
    lVar7 = AAsset_getLength();
    AAsset_close(lVar9);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
LAB_007cb700:
  std::__ndk1::recursive_mutex::unlock((recursive_mutex *)(this + 8));
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar7;
}

