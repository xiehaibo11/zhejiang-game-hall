
/* array_to_luaval(lua_State*, cocos2d::__Array*) */

void array_to_luaval(lua_State *param_1,__Array *param_2)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  __String *this;
  undefined8 uVar4;
  __Dictionary *p_Var5;
  __Array *p_Var6;
  long lVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  Ref *this_00;
  double dVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [16];
  void *local_98;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [16];
  char *local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  lua_createtable(param_1,0,0);
  if ((param_1 != (lua_State *)0x0) && (param_2 != (__Array *)0x0)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_90,"");
    lVar7 = **(long **)(param_2 + 0x30);
    if (0 < lVar7) {
      puVar10 = (undefined8 *)(*(long **)(param_2 + 0x30))[2];
      puVar9 = puVar10 + lVar7 + -1;
      if (puVar10 <= puVar9) {
        iVar8 = 1;
        this_00 = (Ref *)*puVar10;
        while (this_00 != (Ref *)0x0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_a8,*(char **)(*(long *)(*(long *)this_00 + -8) + 8))
          ;
          lVar7 = std::__ndk1::
                  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                  ::
                  find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                            ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                              *)&g_luaType,(basic_string *)local_a8);
          dVar11 = (double)iVar8;
          if (lVar7 == 0) {
            this = (__String *)
                   __dynamic_cast(this_00,&cocos2d::Ref::typeinfo,&cocos2d::__String::typeinfo,0);
            if (this != (__String *)0x0) {
              lua_pushnumber(dVar11,param_1);
              uVar4 = cocos2d::__String::getCString(this);
              lua_pushstring(param_1,uVar4);
              lua_rawset(param_1,0xfffffffd);
              goto LAB_007dc6d0;
            }
            p_Var5 = (__Dictionary *)
                     __dynamic_cast(this_00,&cocos2d::Ref::typeinfo,&cocos2d::__Dictionary::typeinfo
                                    ,0);
            if (p_Var5 == (__Dictionary *)0x0) {
              p_Var6 = (__Array *)
                       __dynamic_cast(this_00,&cocos2d::Ref::typeinfo,&cocos2d::__Array::typeinfo,0)
              ;
              if (p_Var6 == (__Array *)0x0) {
                lVar7 = __dynamic_cast(this_00,&cocos2d::Ref::typeinfo,&cocos2d::__Double::typeinfo,
                                       0);
                if (lVar7 == 0) {
                  lVar7 = __dynamic_cast(this_00,&cocos2d::Ref::typeinfo,&cocos2d::__Float::typeinfo
                                         ,0);
                  if (lVar7 == 0) {
                    lVar7 = __dynamic_cast(this_00,&cocos2d::Ref::typeinfo,
                                           &cocos2d::__Integer::typeinfo,0);
                    if (lVar7 == 0) {
                      lVar7 = __dynamic_cast(this_00,&cocos2d::Ref::typeinfo,
                                             &cocos2d::__Bool::typeinfo,0);
                      if (lVar7 == 0) goto LAB_007dc6d4;
                      lua_pushnumber(dVar11,param_1);
                      lua_pushboolean(param_1,*(undefined1 *)(lVar7 + 0x30));
                      lua_rawset(param_1,0xfffffffd);
                    }
                    else {
                      lua_pushnumber(dVar11,param_1);
                      lua_pushinteger(param_1,(long)*(int *)(lVar7 + 0x30));
                      lua_rawset(param_1,0xfffffffd);
                    }
                  }
                  else {
                    lua_pushnumber(dVar11,param_1);
                    lua_pushnumber((double)*(float *)(lVar7 + 0x30),param_1);
                    lua_rawset(param_1,0xfffffffd);
                  }
                }
                else {
                  lua_pushnumber(dVar11,param_1);
                  lua_pushnumber(*(undefined8 *)(lVar7 + 0x30),param_1);
                  lua_rawset(param_1,0xfffffffd);
                }
                goto LAB_007dc6d0;
              }
              array_to_luaval(param_1,p_Var6);
            }
            else {
              dictionary_to_luaval(param_1,p_Var5);
            }
          }
          else {
            if (local_90 !=
                (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (lVar7 + 0x28)) {
              uVar1 = *(ulong *)(lVar7 + 0x30);
              pcVar2 = *(char **)(lVar7 + 0x38);
              if ((*(byte *)(lVar7 + 0x28) & 1) == 0) {
                pcVar2 = (char *)(lVar7 + 0x29);
                uVar1 = (ulong)(*(byte *)(lVar7 + 0x28) >> 1);
              }
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        (local_90,pcVar2,uVar1);
            }
            lua_pushnumber(dVar11,param_1);
            pcVar2 = (char *)((ulong)local_90 | 1);
            if (((byte)local_90[0] & 1) != 0) {
              pcVar2 = local_80;
            }
            toluafix_pushusertype_ccobject
                      (param_1,*(int *)(this_00 + 0xc),(int *)(this_00 + 0x10),this_00,pcVar2);
            lua_rawset(param_1,0xfffffffd);
            cocos2d::Ref::retain(this_00);
LAB_007dc6d0:
            iVar8 = iVar8 + 1;
          }
LAB_007dc6d4:
          if (((byte)local_a8[0] & 1) != 0) {
            operator_delete(local_98);
          }
          puVar10 = puVar10 + 1;
          if (puVar9 < puVar10) break;
          this_00 = (Ref *)*puVar10;
        }
      }
    }
    if (((byte)local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

