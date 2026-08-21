
/* cocos2d::experimental::AudioPlayerProvider::isSmallFile(cocos2d::experimental::AudioPlayerProvider::AudioFileInfo
   const&) */

void __thiscall
cocos2d::experimental::AudioPlayerProvider::isSmallFile
          (AudioPlayerProvider *this,AudioFileInfo *param_1)

{
  AudioFileInfo *pAVar1;
  size_t __n;
  size_t sVar2;
  int *piVar3;
  AudioFileInfo *pAVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  bool bVar8;
  int iVar9;
  undefined1 *puVar10;
  ulong uVar11;
  AudioFileInfo *pAVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  char *__s2;
  uint uVar16;
  undefined8 local_80;
  size_t sStack_78;
  char *local_70;
  undefined8 local_60;
  size_t sStack_58;
  char *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar11 = *(ulong *)(param_1 + 8);
  pAVar4 = *(AudioFileInfo **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pAVar4 = param_1 + 1;
    uVar11 = (ulong)((byte)*param_1 >> 1);
  }
  pAVar1 = pAVar4 + uVar11;
  pAVar12 = pAVar1;
  if (0 < (long)uVar11) {
    do {
      if (uVar11 == 0) goto LAB_00e6c6e0;
      lVar15 = uVar11 - 1;
      uVar11 = uVar11 - 1;
    } while (pAVar4[lVar15] != (AudioFileInfo)0x2e);
    pAVar12 = pAVar4 + uVar11;
  }
LAB_00e6c6e0:
  uVar16 = 0;
  sStack_78 = 0;
  local_70 = (char *)0x0;
  local_80 = 0;
  if ((pAVar12 != pAVar1) && ((long)pAVar12 - (long)pAVar4 != 0xffffffffffffffff)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_60,(ulong)param_1,(long)pAVar12 - (long)pAVar4,
                 (allocator *)0xffffffffffffffff);
    sStack_78 = sStack_58;
    local_80 = local_60;
    uVar6 = local_80;
    local_80._0_1_ = (byte)local_60;
    uVar16 = (uint)(byte)local_80;
    local_70 = local_50;
    local_80 = uVar6;
  }
  pcVar7 = local_70;
  bVar8 = (uVar16 & 1) != 0;
  __n = (ulong)(uVar16 >> 1);
  if (bVar8) {
    __n = sStack_78;
  }
  __s2 = (char *)((ulong)&local_80 | 1);
  if (bVar8) {
    __s2 = local_70;
  }
  uVar11 = (ulong)(DAT_0178f300 >> 1);
  sVar2 = uVar11;
  if ((DAT_0178f300 & 1) != 0) {
    sVar2 = DAT_0178f308;
  }
  if (sVar2 == __n) {
    puVar10 = &DAT_0178f301;
    if ((DAT_0178f300 & 1) != 0) {
      puVar10 = DAT_0178f310;
    }
    if ((DAT_0178f300 & 1) == 0) {
      if (__n != 0) {
        pcVar13 = &DAT_0178f301;
        puVar10 = &DAT_0178f300;
        pcVar14 = __s2;
        do {
          if (*pcVar13 != *pcVar14) goto LAB_00e6c7e0;
          uVar11 = uVar11 - 1;
          pcVar13 = pcVar13 + 1;
          pcVar14 = pcVar14 + 1;
        } while (uVar11 != 0);
        goto LAB_00e6c9b8;
      }
    }
    else if ((__n != 0) && (iVar9 = memcmp(puVar10,__s2,__n), iVar9 != 0)) goto LAB_00e6c7e0;
    puVar10 = &DAT_0178f300;
    goto LAB_00e6c9b8;
  }
LAB_00e6c7e0:
  uVar11 = (ulong)(DAT_0178f320 >> 1);
  sVar2 = uVar11;
  if ((DAT_0178f320 & 1) != 0) {
    sVar2 = DAT_0178f328;
  }
  if (sVar2 == __n) {
    puVar10 = &DAT_0178f321;
    if ((DAT_0178f320 & 1) != 0) {
      puVar10 = DAT_0178f330;
    }
    if ((DAT_0178f320 & 1) == 0) {
      if (__n != 0) {
        pcVar13 = &DAT_0178f321;
        puVar10 = &DAT_0178f320;
        pcVar14 = __s2;
        do {
          if (*pcVar13 != *pcVar14) goto LAB_00e6c878;
          uVar11 = uVar11 - 1;
          pcVar13 = pcVar13 + 1;
          pcVar14 = pcVar14 + 1;
        } while (uVar11 != 0);
        goto LAB_00e6c9b8;
      }
    }
    else if ((__n != 0) && (iVar9 = memcmp(puVar10,__s2,__n), iVar9 != 0)) goto LAB_00e6c878;
    puVar10 = &DAT_0178f320;
    goto LAB_00e6c9b8;
  }
LAB_00e6c878:
  uVar11 = (ulong)(DAT_0178f340 >> 1);
  sVar2 = uVar11;
  if ((DAT_0178f340 & 1) != 0) {
    sVar2 = DAT_0178f348;
  }
  if (sVar2 == __n) {
    puVar10 = &DAT_0178f341;
    if ((DAT_0178f340 & 1) != 0) {
      puVar10 = DAT_0178f350;
    }
    if ((DAT_0178f340 & 1) == 0) {
      if (__n != 0) {
        pcVar13 = &DAT_0178f341;
        puVar10 = &DAT_0178f340;
        pcVar14 = __s2;
        do {
          if (*pcVar13 != *pcVar14) goto LAB_00e6c910;
          uVar11 = uVar11 - 1;
          pcVar13 = pcVar13 + 1;
          pcVar14 = pcVar14 + 1;
        } while (uVar11 != 0);
        goto LAB_00e6c9b8;
      }
    }
    else if ((__n != 0) && (iVar9 = memcmp(puVar10,__s2,__n), iVar9 != 0)) goto LAB_00e6c910;
    puVar10 = &DAT_0178f340;
    goto LAB_00e6c9b8;
  }
LAB_00e6c910:
  uVar11 = (ulong)(DAT_0178f360 >> 1);
  sVar2 = uVar11;
  if ((DAT_0178f360 & 1) != 0) {
    sVar2 = DAT_0178f368;
  }
  if (sVar2 == __n) {
    puVar10 = &DAT_0178f361;
    if ((DAT_0178f360 & 1) != 0) {
      puVar10 = DAT_0178f370;
    }
    if ((DAT_0178f360 & 1) == 0) {
      if (__n != 0) {
        pcVar13 = &DAT_0178f361;
        puVar10 = &DAT_0178f360;
        do {
          if (*pcVar13 != *__s2) goto LAB_00e6c9a4;
          uVar11 = uVar11 - 1;
          pcVar13 = pcVar13 + 1;
          __s2 = __s2 + 1;
        } while (uVar11 != 0);
        goto LAB_00e6c9b8;
      }
    }
    else if ((__n != 0) && (iVar9 = memcmp(puVar10,__s2,__n), iVar9 != 0)) goto LAB_00e6c9a4;
    puVar10 = &DAT_0178f360;
  }
  else {
LAB_00e6c9a4:
    puVar10 = &DAT_0178f380;
  }
LAB_00e6c9b8:
  piVar3 = &DAT_0178f318;
  if (puVar10 != &DAT_0178f380) {
    piVar3 = (int *)(puVar10 + 0x18);
  }
  lVar15 = *(long *)(param_1 + 0x30);
  iVar9 = *piVar3;
  if ((uVar16 & 1) != 0) {
    operator_delete(pcVar7);
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar15 < iVar9);
}

