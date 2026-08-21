
/* cocos2d::FileUtils::isDirectoryExist(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

uint cocos2d::FileUtils::isDirectoryExist(basic_string *param_1)

{
  __ndk1 *this;
  byte *pbVar1;
  __ndk1 *p_Var2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  undefined1 *puVar6;
  uint uVar7;
  basic_string *pbVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  basic_string *in_x1;
  basic_string *in_x2;
  ulong local_d8;
  undefined8 uStack_d0;
  undefined1 *local_c8;
  byte local_c0;
  void *local_b0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [16];
  void *local_98;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  ulong local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  pbVar8 = (basic_string *)(**(code **)(*(long *)param_1 + 0x108))();
  if (((ulong)pbVar8 & 1) == 0) {
    lVar9 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                        *)(param_1 + 0x90),in_x1);
    if (lVar9 != 0) {
      uVar7 = (**(code **)(*(long *)param_1 + 0x170))(param_1,lVar9 + 0x28);
      if (*(long *)(lVar5 + 0x28) != local_58) goto LAB_00875748;
      goto LAB_0087572c;
    }
    uStack_68 = 0;
    local_60 = (undefined1 *)0x0;
    local_70 = 0;
    p_Var2 = *(__ndk1 **)(param_1 + 0x50);
    for (this = *(__ndk1 **)(param_1 + 0x48); this != p_Var2; this = this + 0x18) {
      pbVar3 = *(byte **)(param_1 + 0x38);
      for (pbVar1 = *(byte **)(param_1 + 0x30); pbVar1 != pbVar3; pbVar1 = pbVar1 + 0x18) {
        std::__ndk1::operator+(this,in_x1,in_x2);
        in_x2 = *(basic_string **)(pbVar1 + 8);
        pbVar4 = *(byte **)(pbVar1 + 0x10);
        if ((*pbVar1 & 1) == 0) {
          pbVar4 = pbVar1 + 1;
          in_x2 = (basic_string *)(ulong)(*pbVar1 >> 1);
        }
        puVar10 = (ulong *)std::__ndk1::
                           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           ::append(local_a8,(char *)pbVar4,(ulong)in_x2);
        local_80 = (void *)puVar10[2];
        uStack_88 = puVar10[1];
        local_90 = *puVar10;
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
        (**(code **)(*(long *)param_1 + 0x40))(&local_d8,param_1,&local_90);
        if ((local_70 & 1) != 0) {
          *local_60 = 0;
          uStack_68 = 0;
          if ((local_70 & 1) != 0) {
            operator_delete(local_60);
          }
        }
        uStack_68 = uStack_d0;
        local_70 = local_d8;
        local_d8 = 0;
        uStack_d0 = 0;
        local_60 = local_c8;
        local_c8 = (undefined1 *)0x0;
        if ((local_90 & 1) != 0) {
          operator_delete(local_80);
        }
        if (((byte)local_a8[0] & 1) != 0) {
          operator_delete(local_98);
        }
        uVar11 = (**(code **)(*(long *)param_1 + 0x170))(param_1,&local_70);
        if ((uVar11 & 1) != 0) {
          FUN_00873560(&local_d8);
          std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                      *)(param_1 + 0x90),(basic_string *)&local_d8,(pair *)&local_d8);
          if ((local_c0 & 1) != 0) {
            operator_delete(local_b0);
          }
          if ((local_d8 & 1) != 0) {
            operator_delete(local_c8);
          }
          uVar7 = 1;
          puVar6 = local_60;
          uVar11 = local_70;
          goto joined_r0x0087570c;
        }
      }
    }
    uVar7 = 0;
    puVar6 = local_60;
    uVar11 = local_70;
  }
  else {
    normalizePath(pbVar8);
    uVar7 = (**(code **)(*(long *)param_1 + 0x170))(param_1,&local_d8);
    puVar6 = local_c8;
    uVar11 = local_d8;
  }
joined_r0x0087570c:
  if ((uVar11 & 1) != 0) {
    operator_delete(puVar6);
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
LAB_00875748:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_0087572c:
  return uVar7 & 1;
}

