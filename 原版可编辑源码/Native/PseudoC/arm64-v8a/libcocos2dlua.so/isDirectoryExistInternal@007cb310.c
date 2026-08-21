
/* cocos2d::FileUtilsAndroid::isDirectoryExistInternal(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

bool __thiscall
cocos2d::FileUtilsAndroid::isDirectoryExistInternal(FileUtilsAndroid *this,basic_string *param_1)

{
  basic_string *pbVar1;
  basic_string *pbVar2;
  basic_string bVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  basic_string *pbVar7;
  long lVar8;
  long lVar9;
  char *__file;
  ulong uVar10;
  ulong uVar11;
  void *__src;
  char *pcVar12;
  stat sStack_e0;
  char *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  bVar3 = *param_1;
  uVar11 = *(ulong *)(param_1 + 8);
  uVar10 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar10 = uVar11;
  }
  if (uVar10 == 0) {
    bVar5 = false;
    goto LAB_007cb568;
  }
  sStack_e0.__unused[2] = 0;
  local_50 = (char *)0x0;
  sStack_e0.__unused[1] = 0;
  if (((byte)bVar3 & 1) == 0) {
    local_50 = *(char **)(param_1 + 0x10);
    sStack_e0.__unused[2] = *(long *)(param_1 + 8);
    sStack_e0.__unused[1] = *(long *)param_1;
  }
  else {
    if (0xffffffffffffffef < uVar11) goto LAB_007cb598;
    __src = *(void **)(param_1 + 0x10);
    if (uVar11 < 0x17) {
      pcVar12 = (char *)((ulong)(sStack_e0.__unused + 1) | 1);
      sStack_e0.__unused[1] = (long)(byte)((int)uVar11 << 1);
      if (uVar11 != 0) goto LAB_007cb3c4;
    }
    else {
      uVar10 = uVar11 + 0x10 & 0xfffffffffffffff0;
      pcVar12 = operator_new(uVar10);
      sStack_e0.__unused[1] = uVar10 | 1;
      sStack_e0.__unused[2] = uVar11;
      local_50 = pcVar12;
LAB_007cb3c4:
      memcpy(pcVar12,__src,uVar11);
    }
    pcVar12[uVar11] = '\0';
  }
  __file = (char *)((ulong)(sStack_e0.__unused + 1) | 1);
  pcVar12 = __file;
  uVar10 = (ulong)((byte)sStack_e0.__unused[1] >> 1);
  if ((sStack_e0.__unused[1] & 1U) != 0) {
    pcVar12 = local_50;
    uVar10 = sStack_e0.__unused[2];
  }
  if (pcVar12[uVar10 - 1] == '/') {
    uVar10 = (ulong)((byte)sStack_e0.__unused[1] >> 1);
    if ((sStack_e0.__unused[1] & 1U) != 0) {
      uVar10 = sStack_e0.__unused[2];
    }
    uVar11 = uVar10 - 1;
    if (uVar10 < uVar11) {
LAB_007cb598:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar10 = uVar11;
    if ((sStack_e0.__unused[1] & 1U) == 0) {
      sStack_e0.__unused[1] = CONCAT71(sStack_e0.__unused[1]._1_7_,(char)((int)uVar11 << 1));
      uVar10 = sStack_e0.__unused[2];
    }
    sStack_e0.__unused[2] = uVar10;
    pcVar12[uVar11] = '\0';
  }
  if (((byte)sStack_e0.__unused[1] & 1) != 0) {
    __file = local_50;
  }
  if (*__file == '/') {
    iVar6 = stat(__file,&sStack_e0);
    if (iVar6 == 0) {
      bVar5 = ((uint)sStack_e0.st_nlink & 0xf000) == 0x4000;
    }
    else {
LAB_007cb468:
      bVar5 = false;
    }
  }
  else {
    uVar10 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar10 = (ulong)((byte)*param_1 >> 1);
    }
    pcVar12 = __file;
    if (6 < (long)uVar10) {
      pbVar1 = pbVar2 + uVar10;
      pbVar7 = pbVar2;
      do {
        if ((uVar10 - 6 == 0) ||
           (pbVar7 = memchr(pbVar7,0x61,uVar10 - 6), pbVar7 == (basic_string *)0x0)) break;
        iVar6 = memcmp(pbVar7,"assets/",7);
        if (iVar6 == 0) {
          pcVar12 = __file + 7;
          if (pbVar7 != pbVar2 || pbVar7 == pbVar1) {
            pcVar12 = __file;
          }
          break;
        }
        pbVar7 = pbVar7 + 1;
        uVar10 = (long)pbVar1 - (long)pbVar7;
      } while (6 < (long)uVar10);
    }
    if ((assetmanager == 0) || (lVar8 = AAssetManager_openDir(assetmanager,pcVar12), lVar8 == 0)) {
      bVar5 = false;
    }
    else {
      lVar9 = AAssetDir_getNextFileName(lVar8);
      if (lVar9 == 0) goto LAB_007cb468;
      AAssetDir_close(lVar8);
      bVar5 = true;
    }
  }
  if ((sStack_e0.__unused[1] & 1U) != 0) {
    operator_delete(local_50);
  }
LAB_007cb568:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}

