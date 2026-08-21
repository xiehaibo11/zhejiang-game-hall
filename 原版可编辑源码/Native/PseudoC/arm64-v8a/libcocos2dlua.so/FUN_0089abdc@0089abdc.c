
undefined8 FUN_0089abdc(void)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  ulong uVar3;
  char *pcVar4;
  long unaff_x25;
  undefined1 *in_stack_00000008;
  void *in_stack_00000018;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> in_stack_00000020;
  void *in_stack_00000030;
  undefined8 *in_stack_00000040;
  long in_stack_00000048;
  
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_endmodule();
  tolua_usertype();
  tolua_cclass();
  tolua_beginmodule();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_endmodule();
  tolua_usertype();
  tolua_cclass();
  tolua_beginmodule();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_endmodule();
  tolua_usertype();
  tolua_cclass();
  tolua_beginmodule();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_endmodule();
  tolua_usertype();
  tolua_module();
  tolua_beginmodule();
  tolua_cclass();
  tolua_beginmodule();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_endmodule();
  tolua_endmodule();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(&stack0x00000020,"N7cocos2d11LabelBMFontE");
  in_stack_00000008 = &stack0x00000020;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)&stack0x00000020,
                     (tuple *)&DAT_0129e137,(tuple *)&stack0x00000008);
  pbVar2 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar1 + 0x28);
  if (((byte)*pbVar2 & 1) == 0) {
    pcVar4 = (char *)(lVar1 + 0x29);
LAB_0089b3bc:
    builtin_strncpy(pcVar4,"cc.LabelBMFont",0xf);
    if (((byte)*pbVar2 & 1) == 0) {
      *pbVar2 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1c
      ;
    }
    else {
      *(undefined8 *)(lVar1 + 0x30) = 0xe;
    }
  }
  else {
    uVar3 = (*(ulong *)pbVar2 & 0xfffffffffffffffe) - 1;
    if (0xd < uVar3) {
      pcVar4 = *(char **)(lVar1 + 0x38);
      goto LAB_0089b3bc;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar2,uVar3,0xf - (*(ulong *)pbVar2 & 0xfffffffffffffffe),*(ulong *)(lVar1 + 0x30),0
               ,*(ulong *)(lVar1 + 0x30),0xe,"cc.LabelBMFont");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &stack0x00000008,"LabelBMFont");
  in_stack_00000040 = &stack0x00000008;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)&stack0x00000008,
                     (tuple *)&DAT_0129e137,(tuple *)&stack0x00000040);
  pbVar2 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar1 + 0x28);
  if (((byte)*pbVar2 & 1) == 0) {
    pcVar4 = (char *)(lVar1 + 0x29);
LAB_0089b838:
    builtin_strncpy(pcVar4,"cc.LabelBMFont",0xf);
    if (((byte)*pbVar2 & 1) == 0) {
      *pbVar2 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1c
      ;
    }
    else {
      *(undefined8 *)(lVar1 + 0x30) = 0xe;
    }
  }
  else {
    uVar3 = (*(ulong *)pbVar2 & 0xfffffffffffffffe) - 1;
    if (0xd < uVar3) {
      pcVar4 = *(char **)(lVar1 + 0x38);
      goto LAB_0089b838;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar2,uVar3,0xf - (*(ulong *)pbVar2 & 0xfffffffffffffffe),*(ulong *)(lVar1 + 0x30),0
               ,*(ulong *)(lVar1 + 0x30),0xe,"cc.LabelBMFont");
  }
  if (((ulong)in_stack_00000008 & 1) != 0) {
    operator_delete(in_stack_00000018);
  }
  if (((byte)in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  tolua_usertype();
  tolua_module();
  tolua_beginmodule();
  tolua_cclass();
  tolua_beginmodule();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_endmodule();
  tolua_endmodule();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(&stack0x00000020,"N7cocos2d8LabelTTFE");
  in_stack_00000008 = &stack0x00000020;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)&stack0x00000020,
                     (tuple *)&DAT_0129e137,(tuple *)&stack0x00000008);
  pbVar2 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar1 + 0x28);
  if (((byte)*pbVar2 & 1) == 0) {
    pcVar4 = (char *)(lVar1 + 0x29);
LAB_0089b880:
    builtin_strncpy(pcVar4,"cc.LabelTTF",0xc);
    if (((byte)*pbVar2 & 1) == 0) {
      *pbVar2 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x16
      ;
    }
    else {
      *(undefined8 *)(lVar1 + 0x30) = 0xb;
    }
  }
  else {
    uVar3 = (*(ulong *)pbVar2 & 0xfffffffffffffffe) - 1;
    if (10 < uVar3) {
      pcVar4 = *(char **)(lVar1 + 0x38);
      goto LAB_0089b880;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar2,uVar3,0xc - (*(ulong *)pbVar2 & 0xfffffffffffffffe),*(ulong *)(lVar1 + 0x30),0
               ,*(ulong *)(lVar1 + 0x30),0xb,"cc.LabelTTF");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &stack0x00000008,"LabelTTF");
  in_stack_00000040 = &stack0x00000008;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)&stack0x00000008,
                     (tuple *)&DAT_0129e137,(tuple *)&stack0x00000040);
  pbVar2 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar1 + 0x28);
  if (((byte)*pbVar2 & 1) == 0) {
    pcVar4 = (char *)(lVar1 + 0x29);
  }
  else {
    uVar3 = (*(ulong *)pbVar2 & 0xfffffffffffffffe) - 1;
    if (uVar3 < 0xb) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __grow_by_and_replace
                (pbVar2,uVar3,0xc - (*(ulong *)pbVar2 & 0xfffffffffffffffe),*(ulong *)(lVar1 + 0x30)
                 ,0,*(ulong *)(lVar1 + 0x30),0xb,"cc.LabelTTF");
      goto joined_r0x0089b93c;
    }
    pcVar4 = *(char **)(lVar1 + 0x38);
  }
  builtin_strncpy(pcVar4,"cc.LabelTTF",0xc);
  if (((byte)*pbVar2 & 1) == 0) {
    *pbVar2 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x16;
  }
  else {
    *(undefined8 *)(lVar1 + 0x30) = 0xb;
  }
joined_r0x0089b93c:
  if (((ulong)in_stack_00000008 & 1) != 0) {
    operator_delete(in_stack_00000018);
  }
  if (((byte)in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_function();
  tolua_endmodule();
  if (*(long *)(unaff_x25 + 0x28) == in_stack_00000048) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

