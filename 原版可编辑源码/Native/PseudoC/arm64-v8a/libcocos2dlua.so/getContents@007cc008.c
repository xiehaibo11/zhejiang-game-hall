
/* cocos2d::FileUtilsAndroid::getContents(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::ResizableBuffer*)
   const */

undefined4 __thiscall
cocos2d::FileUtilsAndroid::getContents
          (FileUtilsAndroid *this,basic_string *param_1,ResizableBuffer *param_2)

{
  void *pvVar1;
  byte *__s2;
  byte bVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  size_t sVar9;
  char *pcVar10;
  ulong uVar11;
  basic_string *pbVar12;
  size_t local_b0;
  ulong local_a8;
  char *local_a0;
  ulong local_98;
  undefined8 local_90;
  void *local_88;
  basic_string local_80 [8];
  ulong local_78;
  char *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (((DAT_01781bb8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_01781bb8), iVar5 != 0)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_01781ba0,"assets/");
    __cxa_atexit(std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_01781ba0,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_01781bb8);
  }
  uVar7 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8);
  }
  if (uVar7 == 0) {
    uVar4 = 1;
    goto LAB_007cc2b4;
  }
  (**(code **)(*(long *)this + 0x50))(local_80,this,param_1);
  pcVar10 = (char *)((ulong)local_80 | 1);
  if (((byte)local_80[0] & 1) != 0) {
    pcVar10 = local_70;
  }
  if (*pcVar10 == '/') {
    uVar4 = FileUtils::getContents((FileUtils *)this,local_80,param_2);
  }
  else {
    local_90 = 0;
    local_88 = (void *)0x0;
    local_98 = 0;
    __s2 = DAT_01781bb0;
    sVar9 = DAT_01781ba8;
    if ((DAT_01781ba0 & 1) == 0) {
      __s2 = &DAT_01781ba1;
      sVar9 = (ulong)(DAT_01781ba0 >> 1);
    }
    if (sVar9 == 0) {
LAB_007cc170:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_b0,(ulong)local_80,sVar9,(allocator *)0xffffffffffffffff);
      uVar7 = local_b0 >> 1 & 0x7f;
      pcVar10 = (char *)((ulong)&local_b0 | 1);
      if ((local_b0 & 1) != 0) {
        uVar7 = local_a8;
        pcVar10 = local_a0;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_98,pcVar10,uVar7);
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
    }
    else {
      uVar7 = (ulong)((byte)local_80[0] >> 1);
      if (((byte)local_80[0] & 1) != 0) {
        uVar7 = local_78;
      }
      if ((long)sVar9 <= (long)uVar7) {
        bVar2 = *__s2;
        pcVar6 = pcVar10;
        uVar11 = uVar7;
        do {
          if ((0xfffffffffffffffe < uVar11 - sVar9) ||
             (pcVar6 = memchr(pcVar6,(uint)bVar2,(uVar11 - sVar9) + 1), pcVar6 == (char *)0x0))
          break;
          iVar5 = memcmp(pcVar6,__s2,sVar9);
          if (iVar5 == 0) {
            if ((pcVar6 != pcVar10 + uVar7) && (pcVar6 == pcVar10)) goto LAB_007cc170;
            break;
          }
          pcVar6 = pcVar6 + 1;
          uVar11 = (long)(pcVar10 + uVar7) - (long)pcVar6;
        } while ((long)sVar9 <= (long)uVar11);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_98,pcVar10,uVar7);
    }
    if ((obbfile == (ZipFile *)0x0) ||
       (uVar7 = ZipFile::getFileData(obbfile,(basic_string *)&local_98,param_2), (uVar7 & 1) == 0))
    {
      if (assetmanager == 0) {
        __android_log_print(3,"CCFileUtils-android.cpp",
                            "... FileUtilsAndroid::assetmanager is nullptr");
        uVar4 = 4;
      }
      else {
        pvVar1 = (void *)((ulong)&local_98 | 1);
        if ((local_98 & 1) != 0) {
          pvVar1 = local_88;
        }
        lVar8 = AAssetManager_open(assetmanager,pvVar1,0);
        if (lVar8 == 0) {
          __android_log_print(3,"CCFileUtils-android.cpp","asset is nullptr");
          uVar4 = 2;
        }
        else {
          sVar9 = AAsset_getLength();
          pcVar10 = malloc(sVar9);
          iVar5 = AAsset_read(lVar8,pcVar10,sVar9);
          AAsset_close(lVar8);
          if ((long)sVar9 <= (long)iVar5) {
            local_b0 = sVar9;
            lVar8 = hdq::decrypt(pcVar10,sVar9,&local_b0);
            if (lVar8 != 0) {
              (**(code **)(*(long *)param_2 + 0x20))(param_2,lVar8,local_b0);
              goto LAB_007cc290;
            }
            pbVar12 = *(basic_string **)(param_1 + 0x10);
            if (((byte)*param_1 & 1) == 0) {
              pbVar12 = param_1 + 1;
            }
            log("FileUtils: decrypt file error. %s",pbVar12);
          }
          free(pcVar10);
          uVar4 = 3;
        }
      }
    }
    else {
LAB_007cc290:
      uVar4 = 0;
    }
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
  }
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
LAB_007cc2b4:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}

