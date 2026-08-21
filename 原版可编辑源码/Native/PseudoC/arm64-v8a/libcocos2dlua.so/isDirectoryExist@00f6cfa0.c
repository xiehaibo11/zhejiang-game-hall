
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
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  basic_string *in_x1;
  basic_string *in_x2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [16];
  void *local_b8;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  ulong local_98;
  undefined8 uStack_90;
  undefined1 *local_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  std::__ndk1::recursive_mutex::lock((recursive_mutex *)(param_1 + 8));
  uVar8 = (**(code **)(*(long *)param_1 + 0x140))(param_1);
  if ((uVar8 & 1) == 0) {
    lVar9 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                        *)(param_1 + 0xe0),in_x1);
    if (lVar9 == 0) {
      uStack_78 = 0;
      local_70 = (undefined1 *)0x0;
      local_80 = 0;
      p_Var2 = *(__ndk1 **)(param_1 + 0x78);
      for (this = *(__ndk1 **)(param_1 + 0x70); this != p_Var2; this = this + 0x18) {
        pbVar3 = *(byte **)(param_1 + 0x60);
        for (pbVar1 = *(byte **)(param_1 + 0x58); pbVar1 != pbVar3; pbVar1 = pbVar1 + 0x18) {
          std::__ndk1::operator+(this,in_x1,in_x2);
          in_x2 = *(basic_string **)(pbVar1 + 8);
          pbVar4 = *(byte **)(pbVar1 + 0x10);
          if ((*pbVar1 & 1) == 0) {
            pbVar4 = pbVar1 + 1;
            in_x2 = (basic_string *)(ulong)(*pbVar1 >> 1);
          }
          puVar10 = (ulong *)std::__ndk1::
                             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                             ::append(local_c8,(char *)pbVar4,(ulong)in_x2);
          local_a0 = (void *)puVar10[2];
          uStack_a8 = puVar10[1];
          local_b0 = *puVar10;
          puVar10[1] = 0;
          puVar10[2] = 0;
          *puVar10 = 0;
          (**(code **)(*(long *)param_1 + 0x208))(&local_98,param_1,&local_b0);
          if ((local_80 & 1) != 0) {
            *local_70 = 0;
            uStack_78 = 0;
            if ((local_80 & 1) != 0) {
              operator_delete(local_70);
            }
          }
          uStack_78 = uStack_90;
          local_80 = local_98;
          local_98 = 0;
          uStack_90 = 0;
          local_70 = local_88;
          local_88 = (undefined1 *)0x0;
          if ((local_b0 & 1) != 0) {
            operator_delete(local_a0);
          }
          if (((byte)local_c8[0] & 1) != 0) {
            operator_delete(local_b8);
          }
          uVar8 = (**(code **)(*(long *)param_1 + 0x1f0))(param_1,&local_80);
          if ((uVar8 & 1) != 0) {
            std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&>
                      ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                        *)(param_1 + 0xe0),in_x1,in_x1,(basic_string *)&local_80);
            uVar7 = 1;
            uVar6 = 1;
            if ((local_80 & 1) == 0) goto LAB_00f6d03c;
            goto LAB_00f6d1c4;
          }
        }
      }
      uVar7 = 0;
      uVar6 = 0;
      if ((local_80 & 1) != 0) {
LAB_00f6d1c4:
        uVar7 = uVar6;
        operator_delete(local_70);
      }
    }
    else {
      uVar7 = (**(code **)(*(long *)param_1 + 0x1f0))(param_1,lVar9 + 0x28);
    }
  }
  else {
    uVar7 = (**(code **)(*(long *)param_1 + 0x1f0))(param_1);
  }
LAB_00f6d03c:
  std::__ndk1::recursive_mutex::unlock((recursive_mutex *)(param_1 + 8));
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7 & 1;
}

