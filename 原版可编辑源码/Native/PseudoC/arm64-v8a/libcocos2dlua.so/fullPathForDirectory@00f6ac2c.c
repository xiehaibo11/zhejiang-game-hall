
/* cocos2d::FileUtils::fullPathForDirectory(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

void cocos2d::FileUtils::fullPathForDirectory(basic_string *param_1)

{
  void *pvVar1;
  byte *pbVar2;
  __ndk1 *p_Var3;
  byte *pbVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  basic_string *in_x1;
  basic_string *in_x2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  __ndk1 *this;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c0 [16];
  void *local_b0;
  ulong local_a8;
  ulong uStack_a0;
  undefined1 *local_98;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [8];
  ulong local_88;
  void *local_80;
  undefined7 uStack_78;
  undefined1 local_71;
  undefined7 uStack_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  std::__ndk1::recursive_mutex::lock((recursive_mutex *)(param_1 + 8));
  uVar10 = (ulong)((byte)*in_x1 >> 1);
  if (((byte)*in_x1 & 1) != 0) {
    uVar10 = *(ulong *)(in_x1 + 8);
  }
  if (uVar10 == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(in_x8,"");
  }
  else {
    uVar10 = (**(code **)(*(long *)param_1 + 0x140))(param_1);
    if ((uVar10 & 1) == 0) {
      lVar11 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
               ::
               find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                         ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                           *)(param_1 + 0xe0),in_x1);
      if (lVar11 == 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(local_90,in_x1);
        uStack_a0 = 0;
        local_98 = (undefined1 *)0x0;
        pvVar1 = (void *)((ulong)local_90 | 1);
        uVar10 = (ulong)((byte)local_90[0] >> 1);
        if (((byte)local_90[0] & 1) != 0) {
          pvVar1 = local_80;
          uVar10 = local_88;
        }
        local_a8 = 0;
        if (*(char *)((long)pvVar1 + (uVar10 - 1)) != '/') {
          in_x2 = (basic_string *)0x1;
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    (local_90,"/",1);
        }
        this = *(__ndk1 **)(param_1 + 0x70);
        p_Var3 = *(__ndk1 **)(param_1 + 0x78);
        if (this != p_Var3) {
          do {
            pbVar4 = *(byte **)(param_1 + 0x60);
            for (pbVar2 = *(byte **)(param_1 + 0x58); pbVar2 != pbVar4; pbVar2 = pbVar2 + 0x18) {
              std::__ndk1::operator+(this,(basic_string *)local_90,in_x2);
              in_x2 = *(basic_string **)(pbVar2 + 8);
              pbVar5 = *(byte **)(pbVar2 + 0x10);
              if ((*pbVar2 & 1) == 0) {
                pbVar5 = pbVar2 + 1;
                in_x2 = (basic_string *)(ulong)(*pbVar2 >> 1);
              }
              puVar12 = (undefined8 *)
                        std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::append(local_c0,(char *)pbVar5,(ulong)in_x2);
              puVar6 = (undefined1 *)puVar12[2];
              uVar7 = *(undefined1 *)puVar12;
              uStack_70 = (undefined7)((ulong)puVar12[1] >> 8);
              uStack_78 = (undefined7)*(undefined8 *)((long)puVar12 + 1);
              local_71 = (undefined1)((ulong)*(undefined8 *)((long)puVar12 + 1) >> 0x38);
              *puVar12 = 0;
              puVar12[1] = 0;
              puVar12[2] = 0;
              if ((local_a8 & 1) == 0) {
                local_a8 = local_a8 & 0xffffffffffff0000;
              }
              else {
                *local_98 = 0;
                uStack_a0 = 0;
                if ((local_a8 & 1) != 0) {
                  operator_delete(local_98);
                  local_a8 = 0;
                }
              }
              uVar9 = CONCAT17(local_71,uStack_78);
              local_a8 = CONCAT71(local_a8._1_7_,uVar7);
              uStack_78 = 0;
              *(ulong *)((long)((ulong)&local_a8 | 1) + 7) = CONCAT71(uStack_70,local_71);
              *(undefined8 *)((ulong)&local_a8 | 1) = uVar9;
              local_71 = 0;
              uStack_70 = 0;
              local_98 = puVar6;
              if (((byte)local_c0[0] & 1) != 0) {
                operator_delete(local_b0);
              }
              uVar10 = (**(code **)(*(long *)param_1 + 0x1f0))(param_1,&local_a8);
              if ((uVar10 & 1) != 0) {
                uVar10 = local_a8 >> 1 & 0x7f;
                if ((local_a8 & 1) != 0) {
                  uVar10 = uStack_a0;
                }
                if (uVar10 != 0) {
                  std::__ndk1::
                  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                  ::
                  __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&>
                            ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                              *)(param_1 + 0xe0),in_x1,in_x1,(basic_string *)&local_a8);
                  puVar6 = local_98;
                  uVar10 = uStack_a0;
                  uStack_a0 = 0;
                  local_98 = (undefined1 *)0x0;
                  *(undefined1 **)(in_x8 + 0x10) = puVar6;
                  *(ulong *)(in_x8 + 8) = uVar10;
                  *(ulong *)in_x8 = local_a8;
                  local_a8 = 0;
                  goto joined_r0x00f6aea4;
                }
              }
            }
            this = this + 0x18;
          } while (this != p_Var3);
        }
        (**(code **)(*(long *)param_1 + 0xb8))(param_1);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(in_x8,"");
        if ((local_a8 & 1) != 0) {
          operator_delete(local_98);
        }
joined_r0x00f6aea4:
        if (((byte)local_90[0] & 1) != 0) {
          operator_delete(local_80);
        }
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(in_x8,(basic_string *)(lVar11 + 0x28));
      }
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(in_x8,in_x1);
    }
  }
  std::__ndk1::recursive_mutex::unlock((recursive_mutex *)(param_1 + 8));
  if (*(long *)(lVar8 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

