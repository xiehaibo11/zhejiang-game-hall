
/* luaval_to_ccvaluemapintkey(lua_State*, int, std::__ndk1::unordered_map<int, cocos2d::Value,
   std::__ndk1::hash<int>, std::__ndk1::equal_to<int>, std::__ndk1::allocator<std::__ndk1::pair<int
   const, cocos2d::Value> > >*, char const*) */

bool luaval_to_ccvaluemapintkey(lua_State *param_1,int param_2,unordered_map *param_3,char *param_4)

{
  char *__nptr;
  long lVar1;
  Value *pVVar2;
  undefined8 *puVar3;
  Value *pVVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  tuple *ptVar9;
  void *pvVar10;
  double dVar11;
  int local_114;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_110 [16];
  void *local_100;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_f8 [16];
  char *local_e8;
  tuple atStack_e0 [24];
  int *local_c8;
  int *local_c0 [2];
  Value *local_b0;
  Value *pVStack_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  bVar5 = false;
  if ((param_1 != (lua_State *)0x0) && (param_3 != (unordered_map *)0x0)) {
    ptVar9 = atStack_e0;
    iVar6 = tolua_istable(param_1,param_2,0);
    bVar5 = iVar6 != 0;
    if (iVar6 != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_f8,"");
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_110,"");
      local_114 = 0;
      lua_pushnil(param_1);
      while (iVar6 = lua_next(param_1,param_2), iVar6 != 0) {
        iVar6 = lua_isstring(param_1,0xfffffffe);
        if (iVar6 == 0) {
          lua_settop(param_1,0xfffffffe);
        }
        else {
          uVar7 = luaval_to_std_string(param_1,-2,(basic_string *)local_f8,(char *)ptVar9);
          if ((uVar7 & 1) != 0) {
            __nptr = (char *)((ulong)local_f8 | 1);
            if (((byte)local_f8[0] & 1) != 0) {
              __nptr = local_e8;
            }
            local_114 = atoi(__nptr);
            iVar6 = lua_type(param_1,0xffffffff);
            if (iVar6 == 5) {
              lua_pushnumber(0x3ff0000000000000,param_1);
              lua_gettable(param_1,0xfffffffe);
              iVar6 = lua_type(param_1,0xffffffff);
              if (iVar6 == 0) {
                lua_settop(param_1,0xfffffffe);
                pVStack_a8 = (Value *)0x0;
                local_b0 = (void *)0x0;
                uStack_98 = 0;
                local_a0 = (undefined8 *)0x0;
                local_90 = 0x3f800000;
                iVar6 = lua_gettop(param_1);
                uVar7 = luaval_to_ccvaluemap
                                  (param_1,iVar6,(unordered_map *)&local_b0,(char *)ptVar9);
                pVVar2 = local_b0;
                puVar3 = local_a0;
                if ((uVar7 & 1) != 0) {
                  cocos2d::Value::Value((Value *)local_c0,(unordered_map *)&local_b0);
                  ptVar9 = (tuple *)&local_c8;
                  local_c8 = &local_114;
                  lVar8 = std::__ndk1::
                          __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Value>>>
                          ::
                          __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                                    ((int *)param_3,(piecewise_construct_t *)&local_114,
                                     (tuple *)&DAT_01276f05,ptVar9);
                  cocos2d::Value::operator=((Value *)(lVar8 + 0x18),(Value *)local_c0);
                  cocos2d::Value::~Value((Value *)local_c0);
                  pVVar2 = local_b0;
                  puVar3 = local_a0;
                }
                while (puVar3 != (void *)0x0) {
                  pvVar10 = (void *)*puVar3;
                  local_b0 = pVVar2;
                  cocos2d::Value::~Value((Value *)(puVar3 + 5));
                  if ((*(byte *)(puVar3 + 2) & 1) != 0) {
                    operator_delete((void *)puVar3[4]);
                  }
                  operator_delete(puVar3);
                  pVVar2 = local_b0;
                  puVar3 = pvVar10;
                }
                local_b0 = (Value *)0x0;
                if (pVVar2 != (void *)0x0) {
                  operator_delete(pVVar2);
                }
              }
              else {
                lua_settop(param_1,0xfffffffe);
                pVStack_a8 = (Value *)0x0;
                local_a0 = (undefined8 *)0x0;
                local_b0 = (Value *)0x0;
                iVar6 = lua_gettop(param_1);
                uVar7 = luaval_to_ccvaluevector(param_1,iVar6,(vector *)&local_b0,(char *)ptVar9);
                if ((uVar7 & 1) != 0) {
                  cocos2d::Value::Value((Value *)local_c0,(vector *)&local_b0);
                  ptVar9 = (tuple *)&local_c8;
                  local_c8 = &local_114;
                  lVar8 = std::__ndk1::
                          __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Value>>>
                          ::
                          __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                                    ((int *)param_3,(piecewise_construct_t *)&local_114,
                                     (tuple *)&DAT_01276f05,ptVar9);
                  cocos2d::Value::operator=((Value *)(lVar8 + 0x18),(Value *)local_c0);
                  cocos2d::Value::~Value((Value *)local_c0);
                }
                pVVar4 = local_b0;
                pVVar2 = pVStack_a8;
                if (local_b0 != (Value *)0x0) {
                  while (pVVar2 != pVVar4) {
                    cocos2d::Value::~Value(pVVar2 + -0x10);
                    pVVar2 = pVVar2 + -0x10;
                  }
                  pVStack_a8 = pVVar4;
                  operator_delete(local_b0);
                }
              }
            }
            else {
              iVar6 = lua_type(param_1,0xffffffff);
              if (iVar6 == 4) {
                uVar7 = luaval_to_std_string(param_1,-1,(basic_string *)local_110,(char *)ptVar9);
                if ((uVar7 & 1) != 0) {
                  cocos2d::Value::Value((Value *)&local_b0,(basic_string *)local_110);
                  ptVar9 = (tuple *)local_c0;
                  local_c0[0] = &local_114;
                  lVar8 = std::__ndk1::
                          __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Value>>>
                          ::
                          __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                                    ((int *)param_3,(piecewise_construct_t *)&local_114,
                                     (tuple *)&DAT_01276f05,ptVar9);
                  cocos2d::Value::operator=((Value *)(lVar8 + 0x18),(Value *)&local_b0);
                  goto LAB_007d9c84;
                }
              }
              else {
                iVar6 = lua_type(param_1,0xffffffff);
                if (iVar6 == 1) {
                  ptVar9 = (tuple *)&local_b0;
                  iVar6 = tolua_isboolean(param_1,0xffffffff,0);
                  if (iVar6 != 0) {
                    iVar6 = tolua_toboolean(param_1,0xffffffff,0);
                    cocos2d::Value::Value((Value *)&local_b0,iVar6 != 0);
                    ptVar9 = (tuple *)local_c0;
                    local_c0[0] = &local_114;
                    lVar8 = std::__ndk1::
                            __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Value>>>
                            ::
                            __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                                      ((int *)param_3,(piecewise_construct_t *)&local_114,
                                       (tuple *)&DAT_01276f05,ptVar9);
                    cocos2d::Value::operator=((Value *)(lVar8 + 0x18),(Value *)&local_b0);
LAB_007d9c84:
                    cocos2d::Value::~Value((Value *)&local_b0);
                  }
                }
                else {
                  iVar6 = lua_type(param_1,0xffffffff);
                  if (iVar6 == 3) {
                    dVar11 = (double)tolua_tonumber(0,param_1,0xffffffff);
                    cocos2d::Value::Value((Value *)&local_b0,dVar11);
                    ptVar9 = (tuple *)local_c0;
                    local_c0[0] = &local_114;
                    lVar8 = std::__ndk1::
                            __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Value>>>
                            ::
                            __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                                      ((int *)param_3,(piecewise_construct_t *)&local_114,
                                       (tuple *)&DAT_01276f05,ptVar9);
                    cocos2d::Value::operator=((Value *)(lVar8 + 0x18),(Value *)&local_b0);
                    goto LAB_007d9c84;
                  }
                }
              }
            }
          }
          lua_settop(param_1,0xfffffffe);
        }
      }
      if (((byte)local_110[0] & 1) != 0) {
        operator_delete(local_100);
      }
      if (((byte)local_f8[0] & 1) != 0) {
        operator_delete(local_e8);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_80) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

