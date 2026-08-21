
/* cocos2d::cc_utf8_to_utf16(char const*, int, int*) */

void * cocos2d::cc_utf8_to_utf16(char *param_1,int param_2,int *param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  void *__src;
  size_t __n;
  ulong uVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_78;
  size_t local_70;
  void *local_68;
  ulong local_60;
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  pvVar7 = (void *)0x0;
  if (param_1 == (char *)0x0) goto LAB_00fc7d50;
  local_58 = 0;
  local_50 = (void *)0x0;
  local_60 = 0;
  if (param_2 == -1) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_78,param_1);
  }
  else {
    local_70 = 0;
    local_68 = (void *)0x0;
    local_78 = 0;
    if (0xffffffef < (uint)param_2) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    __n = (size_t)param_2;
    if ((uint)param_2 < 0x17) {
      pvVar7 = (void *)((ulong)&local_78 | 1);
      local_78 = (ulong)(byte)(param_2 << 1);
      if (param_2 != 0) goto LAB_00fc7c7c;
    }
    else {
      uVar9 = __n + 0x10 & 0xfffffffffffffff0;
      pvVar7 = operator_new(uVar9);
      local_78 = uVar9 | 1;
      local_70 = __n;
      local_68 = pvVar7;
LAB_00fc7c7c:
      memcpy(pvVar7,param_1,__n);
    }
    *(undefined1 *)((long)pvVar7 + __n) = 0;
  }
  bVar5 = StringUtils::
          utfConvert<char,char16_t,cocos2d::StringUtils::ConvertTrait<char>,cocos2d::StringUtils::ConvertTrait<char16_t>>
                    ((basic_string *)&local_78,(basic_string *)&local_60,ConvertUTF8toUTF16);
  uVar6 = local_58;
  uVar9 = local_60;
  if (bVar5) {
    uVar8 = local_60 >> 1 & 0x7f;
    uVar1 = uVar8;
    if ((local_60 & 1) != 0) {
      uVar1 = local_58;
    }
    uVar1 = uVar1 + 1;
    uVar3 = uVar1 * 2;
    if (CARRY8(uVar1,uVar1)) {
      uVar3 = 0xffffffffffffffff;
    }
    pvVar7 = operator_new__(uVar3,(nothrow_t *)&std::nothrow);
    if ((uVar9 & 1) == 0) {
      *(undefined2 *)((long)pvVar7 + uVar8 * 2) = 0;
      __src = (void *)((ulong)&local_60 | 2);
      uVar6 = uVar8;
    }
    else {
      *(undefined2 *)((long)pvVar7 + uVar6 * 2) = 0;
      __src = local_50;
    }
    memcpy(pvVar7,__src,uVar6 << 1);
    if (param_3 != (int *)0x0) {
      uVar2 = (uint)((byte)local_60._0_1_ >> 1);
      if ((local_60 & 1) != 0) {
        uVar2 = (uint)local_58;
      }
      *param_3 = uVar2;
    }
  }
  else {
    pvVar7 = (void *)0x0;
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00fc7d50:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pvVar7;
}

