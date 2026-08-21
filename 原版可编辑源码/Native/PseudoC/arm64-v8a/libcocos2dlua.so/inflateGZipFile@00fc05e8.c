
/* cocos2d::ZipUtils::inflateGZipFile(char const*, unsigned char**) */

uint cocos2d::ZipUtils::inflateGZipFile(char *param_1,uchar **param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  uchar *puVar6;
  uint uVar7;
  ulong __size;
  uint uVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [16];
  void *local_68;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)FileUtils::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_78,param_1);
  (**(code **)(*plVar4 + 0x118))(local_60,plVar4,local_78);
  pvVar1 = (void *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    pvVar1 = local_50;
  }
  lVar5 = gzopen(pvVar1,"rb");
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (lVar5 != 0) {
    puVar6 = malloc(0x80000);
    *param_2 = puVar6;
    if (param_2 != (uchar **)0x0) {
      uVar3 = gzread(lVar5,puVar6,0x80000);
      if (-1 < (int)uVar3) {
        uVar7 = 0;
        __size = 0x80000;
        uVar8 = 0x80000;
        do {
          if ((uVar3 == 0) || (uVar7 = uVar3 + uVar7, uVar3 < uVar8)) {
            gzclose(lVar5);
            goto LAB_00fc0724;
          }
          uVar8 = uVar8 * 2;
          __size = (ulong)((int)__size + uVar8);
          puVar6 = realloc(*param_2,__size);
          if (puVar6 == (uchar *)0x0) break;
          *param_2 = puVar6;
          uVar3 = gzread(lVar5,puVar6 + uVar7,uVar8);
        } while (-1 < (int)uVar3);
      }
      free(*param_2);
      *param_2 = (uchar *)0x0;
      uVar7 = 0xffffffff;
      goto LAB_00fc0724;
    }
  }
  uVar7 = 0xffffffff;
LAB_00fc0724:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

