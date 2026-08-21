
/* cocos2d::ZipUtils::inflateGZipFile(char const*, unsigned char**) */

uint cocos2d::ZipUtils::inflateGZipFile(char *param_1,uchar **param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  size_t __n;
  long lVar4;
  uchar *puVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  void *pvVar9;
  ulong local_88;
  size_t local_80;
  void *local_78;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)FileUtils::getInstance();
  local_88 = 0;
  local_80 = 0;
  local_78 = (void *)0x0;
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    pvVar9 = (void *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00888070;
  }
  else {
    uVar7 = __n + 0x10 & 0xfffffffffffffff0;
    pvVar9 = operator_new(uVar7);
    local_88 = uVar7 | 1;
    local_80 = __n;
    local_78 = pvVar9;
LAB_00888070:
    memcpy(pvVar9,param_1,__n);
  }
  *(undefined1 *)((long)pvVar9 + __n) = 0;
  (**(code **)(*plVar3 + 0xe8))(local_70,plVar3,&local_88);
  pvVar9 = (void *)((ulong)local_70 | 1);
  if ((local_70[0] & 1) != 0) {
    pvVar9 = local_60;
  }
  lVar4 = gzopen(pvVar9,&DAT_019f4e7c);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (lVar4 != 0) {
    puVar5 = malloc(0x80000);
    *param_2 = puVar5;
    if (param_2 != (uchar **)0x0) {
      uVar2 = gzread(lVar4,puVar5,0x80000);
      if (-1 < (int)uVar2) {
        uVar6 = 0;
        uVar7 = 0x80000;
        uVar8 = 0x80000;
        do {
          if ((uVar2 == 0) || (uVar6 = uVar2 + uVar6, uVar2 < uVar8)) {
            gzclose(lVar4);
            goto LAB_00888180;
          }
          uVar8 = uVar8 * 2;
          uVar7 = (ulong)((int)uVar7 + uVar8);
          puVar5 = realloc(*param_2,uVar7);
          if (puVar5 == (uchar *)0x0) break;
          *param_2 = puVar5;
          uVar2 = gzread(lVar4,puVar5 + uVar6,uVar8);
        } while (-1 < (int)uVar2);
      }
      free(*param_2);
      *param_2 = (uchar *)0x0;
      uVar6 = 0xffffffff;
      goto LAB_00888180;
    }
  }
  uVar6 = 0xffffffff;
LAB_00888180:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}

