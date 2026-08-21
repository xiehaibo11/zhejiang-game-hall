
/* cocos2d::FileUtilsAndroid::isDirectoryExistInternal(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

bool __thiscall
cocos2d::FileUtilsAndroid::isDirectoryExistInternal(FileUtilsAndroid *this,basic_string *param_1)

{
  size_t __n;
  char *pcVar1;
  FileUtilsAndroid *__s2;
  basic_string bVar2;
  FileUtilsAndroid FVar3;
  long lVar4;
  size_t __n_00;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  char *pcVar11;
  ulong __n_01;
  void *__src;
  stat sStack_f0;
  char *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  bVar2 = *param_1;
  __n_01 = *(ulong *)(param_1 + 8);
  uVar10 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar10 = __n_01;
  }
  if (uVar10 == 0) {
    bVar5 = false;
    goto LAB_0085b548;
  }
  sStack_f0.__unused[1] = 0;
  sStack_f0.__unused[2] = 0;
  local_60 = (char *)0x0;
  if (((byte)bVar2 & 1) == 0) {
    local_60 = *(char **)(param_1 + 0x10);
    sStack_f0.__unused[2] = *(long *)(param_1 + 8);
    sStack_f0.__unused[1] = *(long *)param_1;
  }
  else {
    if (0xffffffffffffffef < __n_01) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __src = *(void **)(param_1 + 0x10);
    if (__n_01 < 0x17) {
      pcVar11 = (char *)((ulong)(sStack_f0.__unused + 1) | 1);
      sStack_f0.__unused[1] = (long)(byte)((int)__n_01 << 1);
      if (__n_01 != 0) goto LAB_0085b3b4;
    }
    else {
      uVar10 = __n_01 + 0x10 & 0xfffffffffffffff0;
      pcVar11 = operator_new(uVar10);
      sStack_f0.__unused[1] = uVar10 | 1;
      sStack_f0.__unused[2] = __n_01;
      local_60 = pcVar11;
LAB_0085b3b4:
      memcpy(pcVar11,__src,__n_01);
    }
    pcVar11[__n_01] = '\0';
  }
  pcVar11 = (char *)((ulong)(sStack_f0.__unused + 1) | 1);
  pcVar7 = pcVar11;
  uVar10 = (ulong)((byte)sStack_f0.__unused[1] >> 1);
  if ((sStack_f0.__unused[1] & 1U) != 0) {
    pcVar7 = local_60;
    uVar10 = sStack_f0.__unused[2];
  }
  if (pcVar7[uVar10 - 1] == '/') {
    pcVar7[uVar10 - 1] = '\0';
  }
  if ((sStack_f0.__unused[1] & 1U) != 0) {
    pcVar11 = local_60;
  }
  if (*pcVar11 == '/') {
    iVar6 = stat(pcVar11,&sStack_f0);
    if (iVar6 == 0) {
      bVar5 = ((uint)sStack_f0.st_nlink & 0xf000) == 0x4000;
    }
    else {
LAB_0085b42c:
      bVar5 = false;
    }
  }
  else {
    uVar10 = (ulong)((byte)sStack_f0.__unused[1] >> 1);
    if ((sStack_f0.__unused[1] & 1U) != 0) {
      uVar10 = sStack_f0.__unused[2];
    }
    __s2 = this + 0x79;
    __n_00 = (ulong)((byte)this[0x78] >> 1);
    if (((byte)this[0x78] & 1) != 0) {
      __s2 = *(FileUtilsAndroid **)(this + 0x88);
      __n_00 = *(size_t *)(this + 0x80);
    }
    if (__n_00 == 0) {
LAB_0085b4ec:
      pcVar11 = pcVar11 + __n_00;
    }
    else if ((long)__n_00 <= (long)uVar10) {
      FVar3 = *__s2;
      pcVar1 = pcVar11 + uVar10;
      pcVar7 = pcVar11;
      do {
        __n = (uVar10 - __n_00) + 1;
        if ((__n == 0) || (pcVar7 = memchr(pcVar7,(uint)(byte)FVar3,__n), pcVar7 == (char *)0x0))
        break;
        iVar6 = memcmp(pcVar7,__s2,__n_00);
        if (iVar6 == 0) {
          if ((pcVar7 != pcVar1) && (pcVar7 == pcVar11)) goto LAB_0085b4ec;
          break;
        }
        pcVar7 = pcVar7 + 1;
        uVar10 = (long)pcVar1 - (long)pcVar7;
      } while ((long)__n_00 <= (long)uVar10);
    }
    if ((assetmanager == 0) || (lVar8 = AAssetManager_openDir(assetmanager,pcVar11), lVar8 == 0)) {
      bVar5 = false;
    }
    else {
      lVar9 = AAssetDir_getNextFileName(lVar8);
      if (lVar9 == 0) goto LAB_0085b42c;
      AAssetDir_close(lVar8);
      bVar5 = true;
    }
  }
  if ((sStack_f0.__unused[1] & 1U) != 0) {
    operator_delete(local_60);
  }
LAB_0085b548:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}

