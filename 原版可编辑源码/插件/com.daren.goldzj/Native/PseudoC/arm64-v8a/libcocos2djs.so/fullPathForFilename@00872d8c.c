
/* cocos2d::FileUtils::fullPathForFilename(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

void cocos2d::FileUtils::fullPathForFilename(basic_string *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  basic_string *pbVar6;
  long lVar7;
  basic_string *in_x1;
  ulong *in_x8;
  void *__dest;
  ulong uVar8;
  void *__src;
  ulong uVar9;
  basic_string bVar10;
  basic_string local_d0;
  undefined7 uStack_cf;
  ulong uStack_c8;
  undefined1 *local_c0;
  byte local_b8;
  void *local_a8;
  ulong local_a0;
  ulong uStack_98;
  undefined1 *local_90;
  byte local_80 [16];
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar8 = (ulong)((byte)*in_x1 >> 1);
  if (((byte)*in_x1 & 1) != 0) {
    uVar8 = *(ulong *)(in_x1 + 8);
  }
  if (uVar8 == 0) {
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
    goto LAB_00873008;
  }
  pbVar6 = (basic_string *)(**(code **)(*(long *)param_1 + 0x108))();
  if (((ulong)pbVar6 & 1) != 0) {
    normalizePath(pbVar6);
    goto LAB_00873008;
  }
  lVar7 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                      *)(param_1 + 0x90),in_x1);
  if (lVar7 == 0) {
    (**(code **)(*(long *)param_1 + 0x160))(local_80,param_1);
    uStack_98 = 0;
    local_90 = (undefined1 *)0x0;
    local_a0 = 0;
    lVar7 = *(long *)(param_1 + 0x48);
    lVar2 = *(long *)(param_1 + 0x50);
    if (lVar7 != lVar2) {
      bVar10 = (basic_string)0x0;
      do {
        lVar3 = *(long *)(param_1 + 0x38);
        for (lVar1 = *(long *)(param_1 + 0x30); lVar1 != lVar3; lVar1 = lVar1 + 0x18) {
          (**(code **)(*(long *)param_1 + 0x178))(&local_d0,param_1,local_80,lVar1,lVar7);
          if (((byte)bVar10 & 1) != 0) {
            *local_90 = 0;
            uStack_98 = 0;
            if ((local_a0 & 1) != 0) {
              operator_delete(local_90);
            }
          }
          local_a0 = CONCAT71(uStack_cf,local_d0);
          uStack_98 = uStack_c8;
          local_90 = local_c0;
          uVar8 = (ulong)((byte)local_d0 >> 1);
          if (((byte)local_d0 & 1) != 0) {
            uVar8 = uStack_c8;
          }
          if (uVar8 != 0) {
            FUN_00873560(&local_d0);
            std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                        *)(param_1 + 0x90),&local_d0,(pair *)&local_d0);
            if ((local_b8 & 1) != 0) {
              operator_delete(local_a8);
            }
            if (((byte)local_d0 & 1) != 0) {
              operator_delete(local_c0);
            }
            puVar5 = local_90;
            uVar9 = uStack_98;
            uVar8 = local_a0;
            local_a0 = 0;
            uStack_98 = 0;
            local_90 = (undefined1 *)0x0;
            in_x8[2] = (ulong)puVar5;
            in_x8[1] = uVar9;
            *in_x8 = uVar8;
            goto joined_r0x00872fc4;
          }
          bVar10 = local_d0;
        }
        lVar7 = lVar7 + 0x18;
      } while (lVar7 != lVar2);
    }
    (**(code **)(*(long *)param_1 + 0xa8))(param_1);
    in_x8[1] = 0;
    in_x8[2] = 0;
    *in_x8 = 0;
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
joined_r0x00872fc4:
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    goto LAB_00873008;
  }
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0;
  if ((*(byte *)(lVar7 + 0x28) & 1) == 0) {
    uVar9 = *(ulong *)(lVar7 + 0x30);
    uVar8 = *(ulong *)(lVar7 + 0x28);
    in_x8[2] = *(ulong *)(lVar7 + 0x38);
    in_x8[1] = uVar9;
    *in_x8 = uVar8;
    goto LAB_00873008;
  }
  uVar8 = *(ulong *)(lVar7 + 0x30);
  if (0xffffffffffffffef < uVar8) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(lVar7 + 0x38);
  if (uVar8 < 0x17) {
    __dest = (void *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)uVar8 << 1);
    if (uVar8 != 0) goto LAB_00872ff4;
  }
  else {
    uVar9 = uVar8 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar9);
    in_x8[1] = uVar8;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar9 | 1;
LAB_00872ff4:
    memcpy(__dest,__src,uVar8);
  }
  *(undefined1 *)((long)__dest + uVar8) = 0;
LAB_00873008:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

