
/* cocos2d::FileUtilsAndroid::init() */

uint __thiscall cocos2d::FileUtilsAndroid::init(FileUtilsAndroid *this)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  char *__s;
  size_t sVar5;
  void *pvVar6;
  ZipFile *this_00;
  void *pvVar7;
  ulong uVar8;
  ulong local_88 [2];
  void *local_78;
  ulong local_70;
  size_t local_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  std::__ndk1::recursive_mutex::lock((recursive_mutex *)(this + 8));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0xa0),"assets/",7);
  __s = (char *)getApkPath();
  local_70 = 0;
  local_68 = 0;
  local_60 = (void *)0x0;
  sVar5 = strlen(__s);
  if (0xffffffffffffffef < sVar5) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (sVar5 < 0x17) {
    pvVar7 = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)sVar5 << 1));
    if (sVar5 == 0) goto LAB_007ca928;
  }
  else {
    uVar8 = sVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar7 = operator_new(uVar8);
    local_70 = uVar8 | 1;
    local_68 = sVar5;
    local_60 = pvVar7;
  }
  memcpy(pvVar7,__s,sVar5);
LAB_007ca928:
  *(undefined1 *)((long)pvVar7 + sVar5) = 0;
  sVar5 = local_70 >> 1 & 0x7f;
  pvVar7 = (void *)((ulong)&local_70 | 1);
  if ((local_70 & 1) != 0) {
    sVar5 = local_68;
    pvVar7 = local_60;
  }
  if (4 < (long)sVar5) {
    pvVar1 = (void *)((long)pvVar7 + sVar5);
    pvVar6 = pvVar7;
    do {
      if ((sVar5 - 4 == 0) || (pvVar6 = memchr(pvVar6,0x2f,sVar5 - 4), pvVar6 == (void *)0x0))
      break;
      iVar3 = memcmp(pvVar6,"/obb/",5);
      if (iVar3 == 0) {
        if ((pvVar6 != pvVar1) && ((long)pvVar6 - (long)pvVar7 != -1)) {
          this_00 = operator_new(0x10);
          local_88[1] = 0;
          local_78 = (void *)0x0;
          local_88[0] = 0;
          ZipFile::ZipFile(this_00,(basic_string *)&local_70,(basic_string *)local_88);
          obbfile = this_00;
          if ((local_88[0] & 1) != 0) {
            operator_delete(local_78);
          }
        }
        break;
      }
      pvVar6 = (void *)((long)pvVar6 + 1);
      sVar5 = (long)pvVar1 - (long)pvVar6;
    } while (4 < (long)sVar5);
  }
  uVar4 = FileUtils::init((FileUtils *)this);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  std::__ndk1::recursive_mutex::unlock((recursive_mutex *)(this + 8));
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

