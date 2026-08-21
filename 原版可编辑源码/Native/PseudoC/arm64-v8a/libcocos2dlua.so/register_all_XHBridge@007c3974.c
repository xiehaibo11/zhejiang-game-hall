
/* register_all_XHBridge(lua_State*) */

undefined8 register_all_XHBridge(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  ulong uVar4;
  char *pcVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_78 [2];
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  tolua_open();
  tolua_module(param_1,&DAT_012758a8,0);
  tolua_beginmodule(param_1,&DAT_012758a8);
  tolua_usertype(param_1,"xh.XHBridge");
  tolua_cclass(param_1,"XHBridge","xh.XHBridge",&DAT_013c996e,0);
  tolua_beginmodule(param_1,"XHBridge");
  tolua_function(param_1,"xhCallOCFunc",lua_XHBridge_XHBridge_xhCallOCFunc);
  tolua_function(param_1,"setListener",FUN_007c3c70);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N2xh5XhSdkE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012759f1,(tuple *)local_78);
  pbVar3 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar2 + 0x28);
  if (((byte)*pbVar3 & 1) == 0) {
    pcVar5 = (char *)(lVar2 + 0x29);
LAB_007c3ac8:
    builtin_strncpy(pcVar5,"xh.XHBridge",0xc);
    if (((byte)*pbVar3 & 1) == 0) {
      *pbVar3 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x16
      ;
    }
    else {
      *(undefined8 *)(lVar2 + 0x30) = 0xb;
    }
  }
  else {
    uVar4 = (*(ulong *)pbVar3 & 0xfffffffffffffffe) - 1;
    if (10 < uVar4) {
      pcVar5 = *(char **)(lVar2 + 0x38);
      goto LAB_007c3ac8;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar3,uVar4,0xc - (*(ulong *)pbVar3 & 0xfffffffffffffffe),*(ulong *)(lVar2 + 0x30),0
               ,*(ulong *)(lVar2 + 0x30),0xb,"xh.XHBridge");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"XHBridge");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012759f1,(tuple *)&local_40);
  pbVar3 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar2 + 0x28);
  if (((byte)*pbVar3 & 1) == 0) {
    pcVar5 = (char *)(lVar2 + 0x29);
  }
  else {
    uVar4 = (*(ulong *)pbVar3 & 0xfffffffffffffffe) - 1;
    if (uVar4 < 0xb) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __grow_by_and_replace
                (pbVar3,uVar4,0xc - (*(ulong *)pbVar3 & 0xfffffffffffffffe),*(ulong *)(lVar2 + 0x30)
                 ,0,*(ulong *)(lVar2 + 0x30),0xb,"xh.XHBridge");
      goto joined_r0x007c3c14;
    }
    pcVar5 = *(char **)(lVar2 + 0x38);
  }
  builtin_strncpy(pcVar5,"xh.XHBridge",0xc);
  if (((byte)*pbVar3 & 1) == 0) {
    *pbVar3 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x16;
  }
  else {
    *(undefined8 *)(lVar2 + 0x30) = 0xb;
  }
joined_r0x007c3c14:
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  tolua_endmodule(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

