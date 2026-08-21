
/* cocos2d::FileUtilsAndroid::listFiles(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

void cocos2d::FileUtilsAndroid::listFiles(basic_string *param_1)

{
  byte bVar1;
  long lVar2;
  ulong *puVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  char *pcVar8;
  size_t sVar9;
  ulong uVar10;
  void *pvVar11;
  basic_string *in_x1;
  undefined8 *in_x8;
  basic_string *pbVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  void *pvVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  byte *pbVar22;
  ulong *puVar23;
  ulong *puVar24;
  ulong local_b0;
  ulong uStack_a8;
  char *local_a0;
  ulong local_98;
  ulong local_90;
  void *local_88;
  byte local_80 [8];
  ulong local_78;
  char *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  bVar4 = ((byte)*in_x1 & 1) != 0;
  uVar10 = (ulong)((byte)*in_x1 >> 1);
  if (bVar4) {
    uVar10 = *(ulong *)(in_x1 + 8);
  }
  if (uVar10 != 0) {
    pbVar12 = *(basic_string **)(in_x1 + 0x10);
    if (!bVar4) {
      pbVar12 = in_x1 + 1;
    }
    if (*pbVar12 == (basic_string)0x2f) {
      FileUtils::listFiles((FileUtils *)param_1,in_x1);
      goto LAB_007cbb30;
    }
  }
  (**(code **)(*(long *)param_1 + 0x208))(local_80);
  if (((DAT_01781b98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_01781b98), iVar5 != 0)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_01781b80,"assets/");
    __cxa_atexit(std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_01781b80,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_01781b98);
  }
  pcVar8 = (char *)((ulong)local_80 | 1);
  if ((local_80[0] & 1) != 0) {
    pcVar8 = local_70;
  }
  pbVar22 = DAT_01781b90;
  sVar9 = DAT_01781b88;
  if ((DAT_01781b80 & 1) == 0) {
    pbVar22 = &DAT_01781b81;
    sVar9 = (ulong)(DAT_01781b80 >> 1);
  }
  local_90 = 0;
  local_88 = (void *)0x0;
  local_98 = 0;
  if (sVar9 == 0) {
LAB_007cba8c:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_b0,(ulong)local_80,sVar9,(allocator *)0xffffffffffffffff);
    uVar10 = local_b0 >> 1 & 0x7f;
    pcVar8 = (char *)((ulong)&local_b0 | 1);
    if ((local_b0 & 1) != 0) {
      uVar10 = uStack_a8;
      pcVar8 = local_a0;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_98,pcVar8,uVar10);
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
  }
  else {
    uVar10 = (ulong)(local_80[0] >> 1);
    if ((local_80[0] & 1) != 0) {
      uVar10 = local_78;
    }
    if ((long)sVar9 <= (long)uVar10) {
      bVar1 = *pbVar22;
      pcVar6 = pcVar8;
      uVar13 = uVar10;
      do {
        if ((0xfffffffffffffffe < uVar13 - sVar9) ||
           (pcVar6 = memchr(pcVar6,(uint)bVar1,(uVar13 - sVar9) + 1), pcVar6 == (char *)0x0)) break;
        iVar5 = memcmp(pcVar6,pbVar22,sVar9);
        if (iVar5 == 0) {
          if ((pcVar6 != pcVar8 + uVar10) && (pcVar6 == pcVar8)) goto LAB_007cba8c;
          break;
        }
        pcVar6 = pcVar6 + 1;
        uVar13 = (long)(pcVar8 + uVar10) - (long)pcVar6;
      } while ((long)sVar9 <= (long)uVar13);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_98,pcVar8,uVar10);
  }
  if (obbfile == (basic_string *)0x0) {
    if (assetmanager == 0) {
      __android_log_print(3,"CCFileUtils-android.cpp",
                          "... FileUtilsAndroid::assetmanager is nullptr");
      in_x8[1] = 0;
      in_x8[2] = 0;
      *in_x8 = 0;
    }
    else {
      pvVar18 = (void *)((ulong)&local_98 | 1);
      pvVar11 = pvVar18;
      uVar10 = (ulong)((byte)local_98._0_1_ >> 1);
      if ((local_98 & 1) != 0) {
        pvVar11 = local_88;
        uVar10 = local_90;
      }
      if (*(char *)((long)pvVar11 + (uVar10 - 1)) == '/') {
        uVar10 = (ulong)((byte)local_98._0_1_ >> 1);
        if ((local_98 & 1) != 0) {
          uVar10 = local_90;
        }
        uVar13 = uVar10 - 1;
        if (uVar10 < uVar13) {
LAB_007cc000:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar10 = uVar13;
        if ((local_98 & 1) == 0) {
          local_98 = CONCAT71(local_98._1_7_,(char)((int)uVar13 << 1));
          uVar10 = local_90;
        }
        local_90 = uVar10;
        *(undefined1 *)((long)pvVar11 + uVar13) = 0;
      }
      pvVar11 = pvVar18;
      if (((byte)local_98._0_1_ & 1) != 0) {
        pvVar11 = local_88;
      }
      lVar7 = AAssetManager_openDir(assetmanager,pvVar11);
      if (lVar7 == 0) {
        if ((local_98 & 1) != 0) {
          pvVar18 = local_88;
        }
        __android_log_print(3,"CCFileUtils-android.cpp",
                            "... FileUtilsAndroid::failed to open dir %s",pvVar18);
        AAssetDir_close(0);
        *in_x8 = 0;
        in_x8[1] = 0;
        in_x8[2] = 0;
      }
      else {
        pcVar8 = (char *)AAssetDir_getNextFileName();
        if (pcVar8 == (char *)0x0) {
          puVar19 = (ulong *)0x0;
          puVar23 = (ulong *)0x0;
          puVar24 = (ulong *)0x0;
        }
        else {
          puVar24 = (ulong *)0x0;
          puVar23 = (ulong *)0x0;
          puVar19 = (ulong *)0x0;
          do {
            uStack_a8 = 0;
            local_a0 = (char *)0x0;
            local_b0 = 0;
            sVar9 = strlen(pcVar8);
            if (0xffffffffffffffef < sVar9) goto LAB_007cc000;
            if (sVar9 < 0x17) {
              local_b0 = CONCAT71(local_b0._1_7_,(char)((int)sVar9 << 1));
              pcVar6 = (char *)((ulong)&local_b0 | 1);
              if (sVar9 != 0) goto LAB_007cbcb4;
            }
            else {
              uVar10 = sVar9 + 0x10 & 0xfffffffffffffff0;
              pcVar6 = operator_new(uVar10);
              local_b0 = uVar10 | 1;
              uStack_a8 = sVar9;
              local_a0 = pcVar6;
LAB_007cbcb4:
              memcpy(pcVar6,pcVar8,sVar9);
            }
            pcVar6[sVar9] = '\0';
            uVar10 = (**(code **)(*(long *)param_1 + 0x1f0))(param_1,&local_b0);
            if ((uVar10 & 1) != 0) {
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_b0,"/",1);
            }
            pcVar8 = local_a0;
            uVar10 = uStack_a8;
            if (puVar23 == puVar24) {
              lVar14 = (long)puVar23 - (long)puVar19 >> 3;
              uVar10 = lVar14 * -0x5555555555555555 + 1;
              if (0xaaaaaaaaaaaaaaa < uVar10) goto LAB_007cc000;
              lVar16 = (long)puVar24 - (long)puVar19 >> 3;
              uVar13 = 0xaaaaaaaaaaaaaaa;
              if ((ulong)(lVar16 * -0x5555555555555555) < 0x555555555555555) {
                uVar17 = lVar16 * 0x5555555555555556;
                uVar13 = uVar10;
                if (uVar10 <= uVar17) {
                  uVar13 = uVar17;
                }
                if (uVar13 != 0) goto LAB_007cbd88;
                pvVar11 = (void *)0x0;
              }
              else {
LAB_007cbd88:
                pvVar11 = operator_new(uVar13 * 0x18);
              }
              pcVar8 = local_a0;
              uVar10 = uStack_a8;
              puVar20 = (ulong *)((long)pvVar11 + lVar14 * 8);
              *puVar20 = 0;
              puVar20[1] = 0;
              puVar20[2] = 0;
              if ((local_b0 & 1) == 0) {
                puVar20[2] = (ulong)local_a0;
                puVar20[1] = uStack_a8;
                *puVar20 = local_b0;
              }
              else {
                if (0xffffffffffffffef < uStack_a8) goto LAB_007cc000;
                if (uStack_a8 < 0x17) {
                  pbVar22 = (byte *)((long)puVar20 + 1);
                  *(byte *)puVar20 = (byte)((int)uStack_a8 << 1);
                  if (uStack_a8 != 0) goto LAB_007cbe88;
                }
                else {
                  uVar17 = uStack_a8 + 0x10 & 0xfffffffffffffff0;
                  pbVar22 = operator_new(uVar17);
                  *(ulong *)((long)pvVar11 + lVar14 * 8 + 8) = uVar10;
                  *(byte **)((long)pvVar11 + lVar14 * 8 + 0x10) = pbVar22;
                  *puVar20 = uVar17 | 1;
LAB_007cbe88:
                  memcpy(pbVar22,pcVar8,uVar10);
                }
                pbVar22[uVar10] = 0;
              }
              puVar24 = (ulong *)((long)pvVar11 + uVar13 * 0x18);
              puVar15 = puVar23;
              puVar21 = puVar20;
              if (puVar23 != puVar19) {
                do {
                  uVar13 = puVar15[-2];
                  uVar10 = puVar15[-3];
                  puVar21[-1] = puVar15[-1];
                  puVar21[-2] = uVar13;
                  puVar21[-3] = uVar10;
                  puVar15[-2] = 0;
                  puVar15[-1] = 0;
                  puVar15[-3] = 0;
                  puVar15 = puVar15 + -3;
                  puVar21 = puVar21 + -3;
                } while (puVar19 != puVar15);
                bVar1 = (byte)puVar23[-3];
                puVar15 = puVar23 + -3;
                while( true ) {
                  puVar3 = puVar15;
                  if ((bVar1 & 1) != 0) {
                    operator_delete((void *)puVar23[-1]);
                  }
                  if (puVar19 == puVar3) break;
                  bVar1 = (byte)puVar3[-3];
                  puVar15 = puVar3 + -3;
                  puVar23 = puVar3;
                }
              }
              if (puVar19 != (ulong *)0x0) {
                operator_delete(puVar19);
              }
            }
            else {
              *puVar23 = 0;
              puVar23[1] = 0;
              puVar23[2] = 0;
              puVar21 = puVar19;
              puVar20 = puVar23;
              if ((local_b0 & 1) == 0) {
                puVar23[2] = (ulong)local_a0;
                puVar23[1] = uStack_a8;
                *puVar23 = local_b0;
              }
              else {
                if (0xffffffffffffffef < uStack_a8) goto LAB_007cc000;
                if (uStack_a8 < 0x17) {
                  pbVar22 = (byte *)((long)puVar23 + 1);
                  *(byte *)puVar23 = (byte)((int)uStack_a8 << 1);
                  if (uStack_a8 != 0) goto LAB_007cbe3c;
                }
                else {
                  uVar13 = uStack_a8 + 0x10 & 0xfffffffffffffff0;
                  pbVar22 = operator_new(uVar13);
                  puVar23[1] = uVar10;
                  puVar23[2] = (ulong)pbVar22;
                  *puVar23 = uVar13 | 1;
LAB_007cbe3c:
                  memcpy(pbVar22,pcVar8,uVar10);
                }
                pbVar22[uVar10] = 0;
              }
            }
            puVar19 = puVar21;
            puVar23 = puVar20 + 3;
            if ((local_b0 & 1) != 0) {
              operator_delete(local_a0);
            }
            pcVar8 = (char *)AAssetDir_getNextFileName(lVar7);
          } while (pcVar8 != (char *)0x0);
        }
        AAssetDir_close(lVar7);
        *in_x8 = puVar19;
        in_x8[1] = puVar23;
        in_x8[2] = puVar24;
      }
    }
  }
  else {
    ZipFile::listFiles(obbfile);
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
LAB_007cbb30:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

