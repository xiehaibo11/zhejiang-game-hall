
/* luaval_to_std_vector_string(lua_State*, int, std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > >*, char const*) */

undefined4 luaval_to_std_vector_string(lua_State *param_1,int param_2,vector *param_3,char *param_4)

{
  ulong *puVar1;
  long lVar2;
  ulong __n;
  void *__src;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  undefined4 uVar7;
  void *__dest;
  ulong uVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90;
  undefined7 uStack_8f;
  ulong uStack_88;
  void *local_80;
  char acStack_78 [16];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar7 = 0;
  if ((param_1 != (lua_State *)0x0) && (param_3 != (vector *)0x0)) {
    iVar3 = lua_gettop();
    if (param_2 <= iVar3) {
      pcVar6 = acStack_78;
      iVar3 = tolua_istable(param_1,param_2,0);
      if (iVar3 != 0) {
        uVar4 = lua_objlen(param_1,param_2);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(&local_90,"");
        uVar8 = 0;
        uVar7 = 1;
        if (uVar4 != 0) {
          do {
            uVar8 = uVar8 + 1;
            lua_pushnumber((double)uVar8,param_1);
            lua_gettable(param_1,param_2);
            iVar3 = lua_isstring(param_1,0xffffffff);
            if (iVar3 != 0) {
              uVar5 = luaval_to_std_string(param_1,-1,(basic_string *)&local_90,pcVar6);
              __src = local_80;
              __n = uStack_88;
              if ((uVar5 & 1) == 0) {
                uVar7 = 0;
              }
              else {
                puVar1 = *(ulong **)(param_3 + 8);
                if (puVar1 == *(ulong **)(param_3 + 0x10)) {
                  std::__ndk1::
                  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                  ::
                  __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                            ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                              *)param_3,(basic_string *)&local_90);
                }
                else {
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  puVar1[2] = 0;
                  if (((byte)local_90 & 1) == 0) {
                    puVar1[2] = (ulong)local_80;
                    puVar1[1] = uStack_88;
                    *puVar1 = CONCAT71(uStack_8f,local_90);
                  }
                  else {
                    if (0xffffffffffffffef < uStack_88) {
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__basic_string_common<true>::__throw_length_error();
                    }
                    if (uStack_88 < 0x17) {
                      __dest = (void *)((long)puVar1 + 1);
                      *(char *)puVar1 = (char)((int)uStack_88 << 1);
                      if (uStack_88 != 0) goto LAB_007da2fc;
                    }
                    else {
                      uVar5 = uStack_88 + 0x10 & 0xfffffffffffffff0;
                      __dest = operator_new(uVar5);
                      puVar1[1] = __n;
                      puVar1[2] = (ulong)__dest;
                      *puVar1 = uVar5 | 1;
LAB_007da2fc:
                      memcpy(__dest,__src,__n);
                    }
                    *(undefined1 *)((long)__dest + __n) = 0;
                  }
                  *(ulong **)(param_3 + 8) = puVar1 + 3;
                }
                uVar7 = 1;
              }
            }
            lua_settop(param_1,0xfffffffe);
          } while (uVar4 != uVar8);
        }
        if (((byte)local_90 & 1) != 0) {
          operator_delete(local_80);
        }
        goto LAB_007da33c;
      }
    }
    uVar7 = 0;
  }
LAB_007da33c:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

