
/* void ccvector_to_luaval<cocostudio::timeline::BoneNode*>(lua_State*,
   cocos2d::Vector<cocostudio::timeline::BoneNode*> const&) */

void ccvector_to_luaval<cocostudio::timeline::BoneNode*>(lua_State *param_1,Vector *param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  void *pvVar7;
  char *pcVar8;
  long *plVar9;
  int iVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lua_createtable(param_1,0,0);
  if (param_1 != (lua_State *)0x0) {
    plVar2 = *(long **)param_2;
    plVar3 = *(long **)(param_2 + 8);
    if (plVar2 != plVar3) {
      iVar10 = 1;
      plVar9 = (long *)*plVar2;
      while( true ) {
        if (plVar9 != (long *)0x0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_70,*(char **)(*(long *)(*plVar9 + -8) + 8));
          lVar5 = std::__ndk1::
                  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                  ::
                  find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                            ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                              *)&g_luaType,(basic_string *)local_70);
          if (lVar5 != 0) {
            lua_pushnumber((double)iVar10,param_1);
            pvVar7 = (void *)*plVar2;
            if (pvVar7 == (void *)0x0) {
              iVar6 = -1;
            }
            else {
              iVar6 = *(int *)((long)pvVar7 + 0xc);
            }
            piVar1 = (int *)0x0;
            if (pvVar7 != (void *)0x0) {
              piVar1 = (int *)((long)pvVar7 + 0x10);
            }
            if ((*(byte *)(lVar5 + 0x28) & 1) == 0) {
              pcVar8 = (char *)(lVar5 + 0x29);
            }
            else {
              pcVar8 = *(char **)(lVar5 + 0x38);
            }
            toluafix_pushusertype_ccobject(param_1,iVar6,piVar1,pvVar7,pcVar8);
            lua_rawset(param_1,0xfffffffd);
            iVar10 = iVar10 + 1;
          }
          if (((byte)local_70[0] & 1) != 0) {
            operator_delete(local_60);
          }
        }
        plVar2 = plVar2 + 1;
        if (plVar3 == plVar2) break;
        plVar9 = (long *)*plVar2;
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

