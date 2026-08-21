
/* cocos2d::FileUtilsAndroid::init() */

uint __thiscall cocos2d::FileUtilsAndroid::init(FileUtilsAndroid *this)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  ZipFile *this_00;
  ulong uVar7;
  ulong local_78 [2];
  void *local_68;
  basic_string local_60 [8];
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x78),"@assets/",8);
  getApkPathJNI();
  pvVar2 = (void *)((ulong)local_60 | 1);
  uVar7 = (ulong)((byte)local_60[0] >> 1);
  if (((byte)local_60[0] & 1) != 0) {
    pvVar2 = local_50;
    uVar7 = local_58;
  }
  if (4 < (long)uVar7) {
    pvVar1 = (void *)((long)pvVar2 + uVar7);
    pvVar6 = pvVar2;
    do {
      if ((uVar7 - 4 == 0) || (pvVar6 = memchr(pvVar6,0x2f,uVar7 - 4), pvVar6 == (void *)0x0))
      break;
      iVar4 = memcmp(pvVar6,"/obb/",5);
      if (iVar4 == 0) {
        if ((pvVar6 != pvVar1) && ((long)pvVar6 - (long)pvVar2 != -1)) {
          this_00 = operator_new(0x38);
          local_78[0] = 0;
          local_78[1] = 0;
          local_68 = (void *)0x0;
          ZipFile::ZipFile(this_00,local_60,(basic_string *)local_78);
          obbfile = this_00;
          if ((local_78[0] & 1) != 0) {
            operator_delete(local_68);
          }
        }
        break;
      }
      pvVar6 = (void *)((long)pvVar6 + 1);
      uVar7 = (long)pvVar1 - (long)pvVar6;
    } while (4 < (long)uVar7);
  }
  uVar5 = FileUtils::init((FileUtils *)this);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar5 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

