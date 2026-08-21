
/* dictionary_to_luaval(lua_State*, cocos2d::__Dictionary*) */

void dictionary_to_luaval(lua_State *param_1,__Dictionary *param_2)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  __String *this;
  undefined8 uVar5;
  __Dictionary *p_Var6;
  __Array *p_Var7;
  long lVar8;
  int iVar9;
  int *piVar10;
  void *pvVar11;
  long lVar12;
  long lVar13;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  void *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  char *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lua_createtable(param_1,0,0);
  if ((param_1 != (lua_State *)0x0) && (param_2 != (__Dictionary *)0x0)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_80,"");
    if (*(long *)(param_2 + 0x30) != 0) {
      lVar13 = *(long *)(param_2 + 0x30);
      do {
        lVar12 = *(long *)(lVar13 + 0x120);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_98,"PN7cocos2d3RefE");
        lVar4 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                ::
                find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                          ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                            *)&g_luaType,(basic_string *)local_98);
        if (lVar4 == 0) {
          lVar4 = *(long *)(lVar13 + 0x108);
          if (lVar4 != 0) {
            this = (__String *)
                   __dynamic_cast(lVar4,&cocos2d::Ref::typeinfo,&cocos2d::__String::typeinfo,0);
            if (this == (__String *)0x0) {
              p_Var6 = (__Dictionary *)
                       __dynamic_cast(lVar4,&cocos2d::Ref::typeinfo,&cocos2d::__Dictionary::typeinfo
                                      ,0);
              if (p_Var6 == (__Dictionary *)0x0) {
                p_Var7 = (__Array *)
                         __dynamic_cast(lVar4,&cocos2d::Ref::typeinfo,&cocos2d::__Array::typeinfo,0)
                ;
                if (p_Var7 == (__Array *)0x0) {
                  lVar8 = __dynamic_cast(lVar4,&cocos2d::Ref::typeinfo,&cocos2d::__Double::typeinfo,
                                         0);
                  if (lVar8 == 0) {
                    lVar8 = __dynamic_cast(lVar4,&cocos2d::Ref::typeinfo,&cocos2d::__Float::typeinfo
                                           ,0);
                    if (lVar8 == 0) {
                      lVar8 = __dynamic_cast(lVar4,&cocos2d::Ref::typeinfo,
                                             &cocos2d::__Integer::typeinfo,0);
                      if (lVar8 == 0) {
                        lVar4 = __dynamic_cast(lVar4,&cocos2d::Ref::typeinfo,
                                               &cocos2d::__Bool::typeinfo,0);
                        if (lVar4 != 0) {
                          lua_pushstring(param_1,lVar13);
                          lua_pushboolean(param_1,*(undefined1 *)(lVar4 + 0x30));
                          lua_rawset(param_1,0xfffffffd);
                        }
                      }
                      else {
                        lua_pushstring(param_1,lVar13);
                        lua_pushinteger(param_1,(long)*(int *)(lVar8 + 0x30));
                        lua_rawset(param_1,0xfffffffd);
                      }
                    }
                    else {
                      lua_pushstring(param_1,lVar13);
                      lua_pushnumber((double)*(float *)(lVar8 + 0x30),param_1);
                      lua_rawset(param_1,0xfffffffd);
                    }
                  }
                  else {
                    lua_pushstring(param_1,lVar13);
                    lua_pushnumber(*(undefined8 *)(lVar8 + 0x30),param_1);
                    lua_rawset(param_1,0xfffffffd);
                  }
                }
                else {
                  array_to_luaval(param_1,p_Var7);
                }
              }
              else {
                dictionary_to_luaval(param_1,p_Var6);
              }
            }
            else {
              lua_pushstring(param_1,lVar13);
              uVar5 = cocos2d::__String::getCString(this);
              lua_pushstring(param_1,uVar5);
              lua_rawset(param_1,0xfffffffd);
            }
          }
        }
        else {
          if (local_80 !=
              (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (lVar4 + 0x28)) {
            uVar1 = *(ulong *)(lVar4 + 0x30);
            pcVar2 = *(char **)(lVar4 + 0x38);
            if ((*(byte *)(lVar4 + 0x28) & 1) == 0) {
              pcVar2 = (char *)(lVar4 + 0x29);
              uVar1 = (ulong)(*(byte *)(lVar4 + 0x28) >> 1);
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (local_80,pcVar2,uVar1);
          }
          if (*(long *)(lVar13 + 0x108) != 0) {
            lua_pushstring(param_1,lVar13);
            pvVar11 = *(void **)(lVar13 + 0x108);
            if (pvVar11 == (void *)0x0) {
              piVar10 = (int *)0x0;
              iVar9 = -1;
            }
            else {
              iVar9 = *(int *)((long)pvVar11 + 0xc);
              piVar10 = (int *)((long)pvVar11 + 0x10);
            }
            pcVar2 = (char *)((ulong)local_80 | 1);
            if (((byte)local_80[0] & 1) != 0) {
              pcVar2 = local_70;
            }
            toluafix_pushusertype_ccobject(param_1,iVar9,piVar10,pvVar11,pcVar2);
            lua_rawset(param_1,0xfffffffd);
            cocos2d::Ref::retain(*(Ref **)(lVar13 + 0x108));
          }
        }
        if (((byte)local_98[0] & 1) != 0) {
          operator_delete(local_88);
        }
        lVar13 = lVar12;
      } while (lVar12 != 0);
    }
    if (((byte)local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

