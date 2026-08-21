
/* WARNING: Removing unreachable block (ram,0x00fc7e4c) */
/* cocos2d::cc_utf16_to_utf8(unsigned short const*, int, long*, long*) */

void * cocos2d::cc_utf16_to_utf8(ushort *param_1,int param_2,long *param_3,long *param_4)

{
  ushort *puVar1;
  long lVar2;
  bool bVar3;
  void *pvVar4;
  ulong uVar5;
  void *__src;
  uint uVar6;
  size_t __n;
  long lVar7;
  ushort uVar8;
  ulong uVar9;
  ulong local_78;
  size_t local_70;
  void *local_68;
  ulong local_60;
  ulong local_58;
  void *local_50;
  long local_48;
  
  uVar9 = (ulong)(uint)param_2;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pvVar4 = (void *)0x0;
  if (param_1 != (ushort *)0x0) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    if (param_2 < 0) {
      if (*param_1 != 0) {
        uVar9 = 0;
        do {
          lVar7 = uVar9 + 1;
          uVar9 = uVar9 + 1;
        } while (param_1[lVar7] != 0);
        goto LAB_00fc7e30;
      }
    }
    else if (param_2 != 0) {
LAB_00fc7e30:
      uVar6 = 0;
      lVar7 = (uVar9 & 0xffffffff) - 1;
      uVar8 = *param_1;
LAB_00fc7e64:
      uVar9 = (ulong)(uVar6 >> 1);
      uVar5 = 10;
      if (uVar9 != 10) goto LAB_00fc7ec0;
LAB_00fc7e74:
      std::__ndk1::
      basic_string<char16_t,std::__ndk1::char_traits<char16_t>,std::__ndk1::allocator<char16_t>>::
      __grow_by((basic_string<char16_t,std::__ndk1::char_traits<char16_t>,std::__ndk1::allocator<char16_t>>
                 *)&local_60,uVar5,1,uVar5,uVar5,0,0);
      if ((local_60 & 1) != 0) goto LAB_00fc7ec4;
      do {
        local_60 = CONCAT71(local_60._1_7_,(char)uVar9 * '\x02' + '\x02');
        pvVar4 = (void *)((ulong)&local_60 | 2);
        while( true ) {
          puVar1 = (ushort *)((long)pvVar4 + uVar9 * 2);
          *puVar1 = uVar8;
          puVar1[1] = 0;
          if (lVar7 == 0) goto LAB_00fc7ee0;
          uVar6 = (uint)(byte)local_60._0_1_;
          param_1 = param_1 + 1;
          lVar7 = lVar7 + -1;
          uVar8 = *param_1;
          if ((local_60 & 1) == 0) goto LAB_00fc7e64;
          uVar5 = (local_60 & 0xfffffffffffffffe) - 1;
          uVar9 = local_58;
          if (local_58 == uVar5) goto LAB_00fc7e74;
LAB_00fc7ec0:
          if ((uVar6 & 1) == 0) break;
LAB_00fc7ec4:
          local_58 = uVar9 + 1;
          pvVar4 = local_50;
        }
      } while( true );
    }
LAB_00fc7ee0:
    local_70 = 0;
    local_68 = (void *)0x0;
    local_78 = 0;
    bVar3 = StringUtils::
            utfConvert<char16_t,char,cocos2d::StringUtils::ConvertTrait<char16_t>,cocos2d::StringUtils::ConvertTrait<char>>
                      ((basic_string *)&local_60,(basic_string *)&local_78,ConvertUTF16toUTF8);
    __n = local_70;
    if (bVar3) {
      if ((local_78 & 1) == 0) {
        __n = local_78 >> 1 & 0x7f;
        pvVar4 = operator_new__(__n + 1,(nothrow_t *)&std::nothrow);
        __src = (void *)((ulong)&local_78 | 1);
      }
      else {
        pvVar4 = operator_new__(local_70 + 1,(nothrow_t *)&std::nothrow);
        __src = local_68;
      }
      *(undefined1 *)((long)pvVar4 + __n) = 0;
      memcpy(pvVar4,__src,__n);
    }
    else {
      pvVar4 = (void *)0x0;
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pvVar4;
}

