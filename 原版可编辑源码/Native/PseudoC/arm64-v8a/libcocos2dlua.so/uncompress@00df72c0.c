
/* cocos2d::extension::AssetsManager::uncompress() */

undefined4 __thiscall cocos2d::extension::AssetsManager::uncompress(AssetsManager *this)

{
  void *pvVar1;
  size_t sVar2;
  long lVar3;
  bool bVar4;
  AssetsManager *pAVar5;
  int iVar6;
  long *plVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  void *pvVar11;
  char *pcVar12;
  ulong *puVar13;
  ulong uVar14;
  FILE *pFVar15;
  undefined4 uVar16;
  void *pvVar17;
  char *pcVar18;
  ulong uVar19;
  ulong local_2398;
  ulong local_2388;
  ulong local_2380;
  char *local_2378;
  ulong local_2370;
  ulong uStack_2368;
  char *local_2360;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_2350 [8];
  size_t local_2348;
  void *local_2340;
  byte local_2338 [16];
  void *local_2328;
  unz_file_info_s auStack_2320 [136];
  ulong local_2298 [2];
  byte local_2288 [16];
  undefined8 local_2278;
  char acStack_2270 [512];
  byte local_2070 [16];
  char *local_2060;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  FUN_007c1fb0(local_2288,this + 0x2f8,"cocos2dx-update-temp-package.zip");
  plVar7 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar7 + 0x118))(local_2070,plVar7,local_2288);
  pcVar18 = (char *)((ulong)local_2070 | 1);
                    /* try { // try from 00df733c to 00ef734b has its CatchHandler @ 00df7484 */
  if ((local_2070[0] & 1) != 0) {
    pcVar18 = local_2060;
  }
  pvVar8 = (void *)unzOpen(pcVar18);
                    /* try { // try from 00df734c to 00ef74bf has its CatchHandler @ 00df7244 */
  if ((local_2070[0] & 1) != 0) {
    operator_delete(local_2060);
  }
  if (pvVar8 != (void *)0x0) {
    iVar6 = unzGetGlobalInfo(pvVar8,(unz_global_info_s *)local_2298);
    if (iVar6 == 0) {
      if (local_2298[0] != 0) {
        pvVar17 = (void *)((ulong)local_2350 | 1);
        local_2398 = 0;
        pcVar18 = (char *)((ulong)&local_2388 | 1);
        do {
          iVar6 = unzGetCurrentFileInfo
                            (pvVar8,auStack_2320,acStack_2270,0x200,(void *)0x0,0,(char *)0x0,0);
          if (iVar6 != 0) {
            unzClose(pvVar8);
            goto LAB_00df7374;
          }
          FUN_007c1fb0(local_2338,this + 0x2f8,acStack_2270);
          lVar9 = __strlen_chk(acStack_2270,0x200);
          if (acStack_2270[lVar9 + -1] == '/') {
            plVar7 = (long *)FileUtils::getInstance();
            uVar10 = (**(code **)(*plVar7 + 0x158))(plVar7,local_2338);
            if ((uVar10 & 1) == 0) {
              unzClose(pvVar8);
              goto LAB_00df770c;
            }
LAB_00df76d8:
            unzCloseCurrentFile(pvVar8);
            if ((local_2398 + 1 < local_2298[0]) && (iVar6 = unzGoToNextFile(pvVar8), iVar6 != 0)) {
              unzClose(pvVar8);
              goto LAB_00df770c;
            }
            bVar4 = false;
          }
          else {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_2350,acStack_2270);
                    /* catch() { ... } // from try @ 00df733c with catch @ 00df7484 */
            pvVar1 = pvVar17;
            sVar2 = (ulong)((byte)local_2350[0] >> 1);
            if (((byte)local_2350[0] & 1) != 0) {
              pvVar1 = local_2340;
              sVar2 = local_2348;
            }
            if (sVar2 == 0) {
LAB_00df76a8:
              iVar6 = unzOpenCurrentFile(pvVar8);
              if (iVar6 == 0) {
                plVar7 = (long *)FileUtils::getInstance();
                (**(code **)(*plVar7 + 0x118))(&local_2370,plVar7,local_2338);
                pcVar12 = (char *)((ulong)&local_2370 | 1);
                if ((local_2370 & 1) != 0) {
                  pcVar12 = local_2360;
                }
                pFVar15 = fopen(pcVar12,"wb");
                if ((local_2370 & 1) != 0) {
                  operator_delete(local_2360);
                }
                if (pFVar15 == (FILE *)0x0) {
                  unzCloseCurrentFile(pvVar8);
                  unzClose(pvVar8);
                }
                else {
                  while (iVar6 = unzReadCurrentFile(pvVar8,local_2070,0x2000), -1 < iVar6) {
                    if (iVar6 == 0) {
                      fclose(pFVar15);
                      bVar4 = false;
                      goto joined_r0x00df7808;
                    }
                    fwrite(local_2070,(long)iVar6,1,pFVar15);
                  }
                  unzCloseCurrentFile(pvVar8);
                  unzClose(pvVar8);
                }
              }
              else {
                unzClose(pvVar8);
              }
            }
            else {
              pvVar11 = memchr(pvVar1,0x2f,sVar2);
              uVar10 = (long)pvVar11 - (long)pvVar1;
              if (pvVar11 == (void *)0x0) {
                uVar10 = 0xffffffffffffffff;
              }
              do {
                if (uVar10 == 0xffffffffffffffff) goto LAB_00df76a8;
                local_2380 = 0;
                local_2378 = (char *)0x0;
                local_2388 = 0;
                pvVar1 = pvVar17;
                uVar14 = (ulong)((byte)local_2350[0] >> 1);
                if (((byte)local_2350[0] & 1) != 0) {
                  pvVar1 = local_2340;
                  uVar14 = local_2348;
                }
                if (uVar10 <= uVar14) {
                  uVar14 = uVar10;
                }
                if (0xffffffffffffffef < uVar14) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_length_error();
                }
                if (uVar14 < 0x17) {
                  local_2388 = (ulong)(byte)((int)uVar14 << 1);
                  pcVar12 = pcVar18;
                  if (uVar14 != 0) goto LAB_00df7554;
                }
                else {
                  uVar19 = uVar14 + 0x10 & 0xfffffffffffffff0;
                  pcVar12 = operator_new(uVar19);
                  local_2388 = uVar19 | 1;
                  local_2380 = uVar14;
                  local_2378 = pcVar12;
LAB_00df7554:
                  memcpy(pcVar12,pvVar1,uVar14);
                }
                pcVar12[uVar14] = '\0';
                uVar14 = (ulong)((byte)this[0x2f8] >> 1);
                pAVar5 = this + 0x2f9;
                if (((byte)this[0x2f8] & 1) != 0) {
                  uVar14 = *(ulong *)(this + 0x300);
                  pAVar5 = *(AssetsManager **)(this + 0x308);
                }
                puVar13 = (ulong *)std::__ndk1::
                                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                   ::insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                             *)&local_2388,0,(char *)pAVar5,uVar14);
                local_2360 = (char *)puVar13[2];
                uStack_2368 = puVar13[1];
                local_2370 = *puVar13;
                puVar13[1] = 0;
                puVar13[2] = 0;
                *puVar13 = 0;
                if ((local_2388 & 1) != 0) {
                  operator_delete(local_2378);
                }
                plVar7 = (long *)FileUtils::getInstance();
                (**(code **)(*plVar7 + 0x118))(&local_2388,plVar7,&local_2370);
                pcVar12 = pcVar18;
                if ((local_2388 & 1) != 0) {
                  pcVar12 = local_2378;
                }
                pFVar15 = fopen(pcVar12,"r");
                if ((local_2388 & 1) != 0) {
                  operator_delete(local_2378);
                }
                if (pFVar15 == (FILE *)0x0) {
                  plVar7 = (long *)FileUtils::getInstance();
                  uVar14 = (**(code **)(*plVar7 + 0x158))(plVar7,&local_2370);
                  if ((uVar14 & 1) != 0) goto LAB_00df7624;
                  unzClose(pvVar8);
                  bVar4 = true;
                }
                else {
                  fclose(pFVar15);
LAB_00df7624:
                  uVar10 = uVar10 + 1;
                  pvVar1 = pvVar17;
                  uVar14 = (ulong)((byte)local_2350[0] >> 1);
                  if (((byte)local_2350[0] & 1) != 0) {
                    pvVar1 = local_2340;
                    uVar14 = local_2348;
                  }
                  sVar2 = uVar14 - uVar10;
                  if (uVar14 < uVar10 || sVar2 == 0) {
                    bVar4 = false;
                    uVar10 = 0xffffffffffffffff;
                  }
                  else {
                    if (sVar2 == 0) {
                      pvVar11 = (void *)0x0;
                    }
                    else {
                      pvVar11 = memchr((void *)((long)pvVar1 + uVar10),0x2f,sVar2);
                    }
                    uVar10 = (long)pvVar11 - (long)pvVar1;
                    bVar4 = false;
                    if (pvVar11 == (void *)0x0) {
                      uVar10 = 0xffffffffffffffff;
                    }
                  }
                }
                if ((local_2370 & 1) != 0) {
                  operator_delete(local_2360);
                }
              } while (!bVar4);
            }
            bVar4 = true;
joined_r0x00df7808:
            if (((byte)local_2350[0] & 1) != 0) {
              operator_delete(local_2340);
            }
            if (!bVar4) goto LAB_00df76d8;
LAB_00df770c:
            bVar4 = true;
          }
          if ((local_2338[0] & 1) != 0) {
            operator_delete(local_2328);
          }
          if (bVar4) goto LAB_00df7374;
          local_2398 = local_2398 + 1;
        } while (local_2398 < local_2298[0]);
      }
      unzClose(pvVar8);
      uVar16 = 1;
      goto joined_r0x00df737c;
    }
    unzClose(pvVar8);
  }
LAB_00df7374:
  uVar16 = 0;
joined_r0x00df737c:
  if ((local_2288[0] & 1) != 0) {
    operator_delete(local_2278);
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

