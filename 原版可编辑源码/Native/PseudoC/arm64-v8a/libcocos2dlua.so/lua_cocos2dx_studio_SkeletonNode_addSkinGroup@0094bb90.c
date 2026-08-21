
/* lua_cocos2dx_studio_SkeletonNode_addSkinGroup(lua_State*) */

undefined4 lua_cocos2dx_studio_SkeletonNode_addSkinGroup(lua_State *param_1)

{
  long lVar1;
  ulong __n;
  void *__src;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  __tree_node *p_Var7;
  long lVar8;
  undefined4 uVar9;
  __tree_node *p_Var10;
  void *__dest;
  ulong uVar11;
  __tree_node **local_b8;
  __tree_node *local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  __tree_node *local_88;
  __tree_node *local_80;
  undefined8 local_78;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar6 = tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 != 2) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.SkeletonNode:addSkinGroup",iVar3 + -1,2);
    uVar9 = 0;
    goto LAB_0094bdd8;
  }
  uStack_68 = 0;
  local_60 = (void *)0x0;
  local_78 = 0;
  local_70 = 0;
  local_80 = (__tree_node *)0x0;
  local_88 = (__tree_node *)&local_80;
  uVar4 = luaval_to_std_string(param_1,2,(basic_string *)&local_70,"ccs.SkeletonNode:addSkinGroup");
  uVar5 = luaval_to_std_map_string_string
                    (param_1,3,(map *)&local_88,"ccs.SkeletonNode:addSkinGroup");
  __src = local_60;
  __n = uStack_68;
  if ((uVar4 & uVar5 & 1) == 0) {
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_SkeletonNode_addSkinGroup\'",0)
    ;
    uVar9 = 0;
  }
  else {
    uStack_98 = 0;
    local_90 = (void *)0x0;
    local_a0 = 0;
    if ((local_70 & 1) == 0) {
      uStack_98 = uStack_68;
      local_a0 = local_70;
      local_90 = local_60;
    }
    else {
      if (0xffffffffffffffef < uStack_68) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uStack_68 < 0x17) {
        __dest = (void *)((ulong)&local_a0 | 1);
        local_a0 = (ulong)(byte)((int)uStack_68 << 1);
        if (uStack_68 != 0) goto LAB_0094bce4;
      }
      else {
        uVar11 = uStack_68 + 0x10 & 0xfffffffffffffff0;
        __dest = operator_new(uVar11);
        local_a0 = uVar11 | 1;
        uStack_98 = __n;
        local_90 = __dest;
LAB_0094bce4:
        memcpy(__dest,__src,__n);
      }
      *(undefined1 *)((long)__dest + __n) = 0;
    }
    local_b0 = (__tree_node *)0x0;
    uStack_a8 = 0;
    local_b8 = &local_b0;
    p_Var10 = local_88;
    while (p_Var10 != (__tree_node *)&local_80) {
      std::__ndk1::
      __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
      ::
      __emplace_hint_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>const&>
                ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                  *)&local_b8,&local_b0,p_Var10 + 0x20,p_Var10 + 0x20);
      p_Var7 = *(__tree_node **)(p_Var10 + 8);
      if (*(__tree_node **)(p_Var10 + 8) == (__tree_node *)0x0) {
        p_Var7 = p_Var10 + 0x10;
        bVar2 = (__tree_node *)*(__tree_node ***)*(__tree_node **)p_Var7 != p_Var10;
        p_Var10 = *(__tree_node **)p_Var7;
        if (bVar2) {
          do {
            lVar8 = *(long *)p_Var7;
            p_Var7 = (__tree_node *)(lVar8 + 0x10);
            p_Var10 = *(__tree_node **)p_Var7;
          } while (*(long *)p_Var10 != lVar8);
        }
      }
      else {
        do {
          p_Var10 = p_Var7;
          p_Var7 = *(__tree_node **)p_Var10;
        } while (*(__tree_node **)p_Var10 != (__tree_node *)0x0);
      }
    }
    cocostudio::timeline::SkeletonNode::addSkinGroup(uVar6,&local_a0,&local_b8);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
    ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
               *)&local_b8,local_b0);
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    uVar9 = 1;
    lua_settop(param_1,1);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
             *)&local_88,local_80);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
LAB_0094bdd8:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}

