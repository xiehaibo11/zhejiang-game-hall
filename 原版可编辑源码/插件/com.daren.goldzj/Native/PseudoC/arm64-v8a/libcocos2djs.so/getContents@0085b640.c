
/* cocos2d::FileUtilsAndroid::getContents(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::ResizableBuffer*)
    */

undefined4 __thiscall
cocos2d::FileUtilsAndroid::getContents
          (FileUtilsAndroid *this,basic_string *param_1,ResizableBuffer *param_2)

{
  long *plVar1;
  void *pvVar2;
  ulong __n;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  basic_string *pbVar12;
  char *pcVar13;
  ulong local_a0;
  ulong local_98;
  char *local_90;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  basic_string local_70 [8];
  ulong local_68;
  long *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar7 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8);
  }
  if (uVar7 == 0) {
    uVar4 = 1;
    goto LAB_0085b8bc;
  }
  (**(code **)(*(long *)this + 0x40))(local_70);
  uVar7 = (ulong)((byte)local_70[0] >> 1);
  if (((byte)local_70[0] & 1) != 0) {
    uVar7 = local_68;
  }
  if (uVar7 == 0) {
    uVar4 = 1;
  }
  else {
    plVar1 = (long *)((ulong)local_70 | 1);
    if (((byte)local_70[0] & 1) != 0) {
      plVar1 = local_60;
    }
    if ((char)*plVar1 == '/') {
      uVar4 = FileUtils::getContents((FileUtils *)this,local_70,param_2);
    }
    else {
      __n = uVar7 - 8;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      if (7 < (long)uVar7) {
        plVar6 = plVar1;
        uVar11 = uVar7;
        do {
          if ((uVar11 - 7 == 0) || (plVar6 = memchr(plVar6,0x40,uVar11 - 7), plVar6 == (long *)0x0))
          break;
          if (*plVar6 == 0x2f73746573736140) {
            if ((plVar6 != (long *)((long)plVar1 + uVar7)) && (plVar6 == plVar1)) {
              local_a0 = 0;
              local_98 = 0;
              local_90 = (char *)0x0;
              if ((uVar7 < 8) || (0xffffffffffffffef < __n)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (__n < 0x17) {
                pcVar13 = (char *)((ulong)&local_a0 | 1);
                local_a0 = (ulong)(byte)((int)__n << 1);
                if (__n != 0) goto LAB_0085b974;
              }
              else {
                uVar7 = uVar7 + 8 & 0xfffffffffffffff0;
                pcVar13 = operator_new(uVar7);
                local_a0 = uVar7 | 1;
                local_98 = __n;
                local_90 = pcVar13;
LAB_0085b974:
                memcpy(pcVar13,plVar1 + 1,__n);
              }
              pcVar13[__n] = '\0';
              uVar7 = local_a0 >> 1 & 0x7f;
              pcVar13 = (char *)((ulong)&local_a0 | 1);
              if ((local_a0 & 1) != 0) {
                uVar7 = local_98;
                pcVar13 = local_90;
              }
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_88,pcVar13,uVar7);
              if ((local_a0 & 1) != 0) {
                operator_delete(local_90);
              }
              goto LAB_0085b7c8;
            }
            break;
          }
          plVar6 = (long *)((long)plVar6 + 1);
          uVar11 = (long)((long)plVar1 + uVar7) - (long)plVar6;
        } while (7 < (long)uVar11);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_88,(char *)plVar1,uVar7);
LAB_0085b7c8:
      if ((obbfile == (ZipFile *)0x0) ||
         (uVar7 = ZipFile::getFileData(obbfile,(basic_string *)&local_88,param_2), (uVar7 & 1) == 0)
         ) {
        if (assetmanager == 0) {
          __android_log_print(3,"CCFileUtils-android.cpp",
                              "... FileUtilsAndroid::assetmanager is nullptr");
          uVar4 = 4;
        }
        else {
          pvVar2 = (void *)((ulong)&local_88 | 1);
          if ((local_88 & 1) != 0) {
            pvVar2 = local_78;
          }
          lVar8 = AAssetManager_open(assetmanager,pvVar2,0);
          if (lVar8 == 0) {
            pbVar12 = *(basic_string **)(param_1 + 0x10);
            if (((byte)*param_1 & 1) == 0) {
              pbVar12 = param_1 + 1;
            }
            __android_log_print(3,"CCFileUtils-android.cpp","asset (%s) is nullptr",pbVar12);
            uVar4 = 2;
          }
          else {
            lVar9 = AAsset_getLength();
            (**(code **)(*(long *)param_2 + 0x10))(param_2,lVar9);
            uVar10 = (**(code **)(*(long *)param_2 + 0x18))(param_2);
            iVar5 = AAsset_read(lVar8,uVar10,lVar9);
            AAsset_close(lVar8);
            if (lVar9 <= iVar5) goto LAB_0085b898;
            if (-1 < iVar5) {
              (**(code **)(*(long *)param_2 + 0x10))(param_2);
            }
            uVar4 = 3;
          }
        }
      }
      else {
LAB_0085b898:
        uVar4 = 0;
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
    }
  }
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
LAB_0085b8bc:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}

