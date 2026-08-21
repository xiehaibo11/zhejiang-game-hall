
/* luaval_to_ccvaluemap(lua_State*, int, std::__ndk1::unordered_map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Value,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, cocos2d::Value> > >*, char
   const*) */

bool luaval_to_ccvaluemap(lua_State *param_1,int param_2,unordered_map *param_3,char *param_4)

{
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
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_100 [16];
  void *local_f0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e8 [16];
  void *local_d8;
  tuple atStack_d0 [24];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_b8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_b0 [2];
  Value *local_a0;
  Value *pVStack_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  bVar5 = false;
  if ((param_1 != (lua_State *)0x0) && (param_3 != (unordered_map *)0x0)) {
    ptVar9 = atStack_d0;
    iVar6 = tolua_istable(param_1,param_2,0);
    bVar5 = iVar6 != 0;
    if (iVar6 != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_e8,"");
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_100,"");
      lua_pushnil(param_1);
      while (iVar6 = lua_next(param_1,param_2), iVar6 != 0) {
        iVar6 = lua_isstring(param_1,0xfffffffe);
        if (iVar6 == 0) {
          lua_settop(param_1,0xfffffffe);
        }
        else {
          uVar7 = luaval_to_std_string(param_1,-2,(basic_string *)local_e8,(char *)ptVar9);
          if ((uVar7 & 1) != 0) {
            iVar6 = lua_type(param_1,0xffffffff);
            if (iVar6 == 5) {
              lua_pushnumber(0x3ff0000000000000,param_1);
              lua_gettable(param_1,0xfffffffe);
              iVar6 = lua_type(param_1,0xffffffff);
              if (iVar6 == 0) {
                lua_settop(param_1,0xfffffffe);
                pVStack_98 = (Value *)0x0;
                local_a0 = (void *)0x0;
                uStack_88 = 0;
                local_90 = (undefined8 *)0x0;
                local_80 = 0x3f800000;
                iVar6 = lua_gettop(param_1);
                uVar7 = luaval_to_ccvaluemap
                                  (param_1,iVar6,(unordered_map *)&local_a0,(char *)ptVar9);
                pVVar2 = local_a0;
                puVar3 = local_90;
                if ((uVar7 & 1) != 0) {
                  cocos2d::Value::Value((Value *)local_b0,(unordered_map *)&local_a0);
                  ptVar9 = (tuple *)&local_b8;
                  local_b8 = local_e8;
                  lVar8 = std::__ndk1::
                          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                          ::
                          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                                    ((basic_string *)param_3,(piecewise_construct_t *)local_e8,
                                     (tuple *)&DAT_01276f05,ptVar9);
                  cocos2d::Value::operator=((Value *)(lVar8 + 0x28),(Value *)local_b0);
                  cocos2d::Value::~Value((Value *)local_b0);
                  pVVar2 = local_a0;
                  puVar3 = local_90;
                }
                while (puVar3 != (void *)0x0) {
                  pvVar10 = (void *)*puVar3;
                  local_a0 = pVVar2;
                  cocos2d::Value::~Value((Value *)(puVar3 + 5));
                  if ((*(byte *)(puVar3 + 2) & 1) != 0) {
                    operator_delete((void *)puVar3[4]);
                  }
                  operator_delete(puVar3);
                  pVVar2 = local_a0;
                  puVar3 = pvVar10;
                }
                local_a0 = (Value *)0x0;
                if (pVVar2 != (void *)0x0) {
                  operator_delete(pVVar2);
                }
              }
              else {
                lua_settop(param_1,0xfffffffe);
                pVStack_98 = (Value *)0x0;
                local_90 = (undefined8 *)0x0;
                local_a0 = (Value *)0x0;
                iVar6 = lua_gettop(param_1);
                uVar7 = luaval_to_ccvaluevector(param_1,iVar6,(vector *)&local_a0,(char *)ptVar9);
                if ((uVar7 & 1) != 0) {
                  cocos2d::Value::Value((Value *)local_b0,(vector *)&local_a0);
                  ptVar9 = (tuple *)&local_b8;
                  local_b8 = local_e8;
                  lVar8 = std::__ndk1::
                          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                          ::
                          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                                    ((basic_string *)param_3,(piecewise_construct_t *)local_e8,
                                     (tuple *)&DAT_01276f05,ptVar9);
                  cocos2d::Value::operator=((Value *)(lVar8 + 0x28),(Value *)local_b0);
                  cocos2d::Value::~Value((Value *)local_b0);
                }
                pVVar4 = local_a0;
                pVVar2 = pVStack_98;
                if (local_a0 != (Value *)0x0) {
                  while (pVVar2 != pVVar4) {
                    cocos2d::Value::~Value(pVVar2 + -0x10);
                    pVVar2 = pVVar2 + -0x10;
                  }
                  pVStack_98 = pVVar4;
                  operator_delete(local_a0);
                }
              }
            }
            else {
              iVar6 = lua_type(param_1,0xffffffff);
              if (iVar6 == 4) {
                uVar7 = luaval_to_std_string(param_1,-1,(basic_string *)local_100,(char *)ptVar9);
                if ((uVar7 & 1) != 0) {
                  cocos2d::Value::Value((Value *)&local_a0,(basic_string *)local_100);
                  ptVar9 = (tuple *)local_b0;
                  local_b0[0] = local_e8;
                  lVar8 = std::__ndk1::
                          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                          ::
                          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                                    ((basic_string *)param_3,(piecewise_construct_t *)local_e8,
                                     (tuple *)&DAT_01276f05,ptVar9);
                  cocos2d::Value::operator=((Value *)(lVar8 + 0x28),(Value *)&local_a0);
                  goto LAB_007d8d70;
                }
              }
              else {
                iVar6 = lua_type(param_1,0xffffffff);
                if (iVar6 == 1) {
                  ptVar9 = (tuple *)&local_a0;
                  iVar6 = tolua_isboolean(param_1,0xffffffff,0);
                  if (iVar6 != 0) {
                    iVar6 = tolua_toboolean(param_1,0xffffffff,0);
                    cocos2d::Value::Value((Value *)&local_a0,iVar6 != 0);
                    ptVar9 = (tuple *)local_b0;
                    local_b0[0] = local_e8;
                    lVar8 = std::__ndk1::
                            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                            ::
                            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                                      ((basic_string *)param_3,(piecewise_construct_t *)local_e8,
                                       (tuple *)&DAT_01276f05,ptVar9);
                    cocos2d::Value::operator=((Value *)(lVar8 + 0x28),(Value *)&local_a0);
LAB_007d8d70:
                    cocos2d::Value::~Value((Value *)&local_a0);
                  }
                }
                else {
                  iVar6 = lua_type(param_1,0xffffffff);
                  if (iVar6 == 3) {
                    dVar11 = (double)tolua_tonumber(0,param_1,0xffffffff);
                    cocos2d::Value::Value((Value *)&local_a0,dVar11);
                    ptVar9 = (tuple *)local_b0;
                    local_b0[0] = local_e8;
                    lVar8 = std::__ndk1::
                            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                            ::
                            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                                      ((basic_string *)param_3,(piecewise_construct_t *)local_e8,
                                       (tuple *)&DAT_01276f05,ptVar9);
                    cocos2d::Value::operator=((Value *)(lVar8 + 0x28),(Value *)&local_a0);
                    goto LAB_007d8d70;
                  }
                }
              }
            }
          }
          lua_settop(param_1,0xfffffffe);
        }
      }
      if (((byte)local_100[0] & 1) != 0) {
        operator_delete(local_f0);
      }
      if (((byte)local_e8[0] & 1) != 0) {
        operator_delete(local_d8);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

