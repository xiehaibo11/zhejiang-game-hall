
/* cocos2d::PUScriptCompiler::compile(std::__ndk1::list<cocos2d::PUConcreteNode*,
   std::__ndk1::allocator<cocos2d::PUConcreteNode*> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::PUScriptCompiler::compile(PUScriptCompiler *this,list *param_1,basic_string *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  list *plVar9;
  undefined1 *local_70;
  long *local_68;
  long local_60;
  basic_string *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar5 = 0;
  }
  else {
    local_60 = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined1 ***)(this + 0x60) = &local_70;
    local_68 = (long *)&local_70;
    local_70 = (undefined1 *)&local_70;
    for (plVar9 = *(list **)(param_1 + 8); param_1 != plVar9; plVar9 = *(list **)(plVar9 + 8)) {
      visit(this,*(PUConcreteNode **)(plVar9 + 0x10));
    }
    local_50 = param_2;
    lVar2 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<cocos2d::PUAbstractNode*,std::__ndk1::allocator<cocos2d::PUAbstractNode*>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<cocos2d::PUAbstractNode*,std::__ndk1::allocator<cocos2d::PUAbstractNode*>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<cocos2d::PUAbstractNode*,std::__ndk1::allocator<cocos2d::PUAbstractNode*>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<cocos2d::PUAbstractNode*,std::__ndk1::allocator<cocos2d::PUAbstractNode*>>>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((basic_string *)(this + 0x30),(piecewise_construct_t *)param_2,
                       (tuple *)&DAT_014241b3,(tuple *)&local_50);
    plVar4 = (long *)(lVar2 + 0x28);
    if ((undefined1 **)plVar4 != &local_70) {
      plVar3 = *(long **)(lVar2 + 0x30);
      plVar6 = local_68;
      if (&local_70 != (undefined1 **)local_68) {
        do {
          if (plVar4 == plVar3) break;
          plVar3[2] = plVar6[2];
          plVar6 = (long *)plVar6[1];
          plVar3 = (long *)plVar3[1];
        } while (&local_70 != (undefined1 **)plVar6);
      }
      if (plVar4 == plVar3) {
        std::__ndk1::list<cocos2d::PUAbstractNode*,std::__ndk1::allocator<cocos2d::PUAbstractNode*>>
        ::insert<std::__ndk1::__list_const_iterator<cocos2d::PUAbstractNode*,void*>>
                  (plVar4,plVar4,plVar6,&local_70,0);
      }
      else {
        lVar7 = *(long *)(lVar2 + 0x28);
        lVar8 = *plVar3;
        *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(lVar7 + 8);
        **(long **)(lVar7 + 8) = lVar8;
        do {
          plVar6 = (long *)plVar3[1];
          *(long *)(lVar2 + 0x38) = *(long *)(lVar2 + 0x38) + -1;
          operator_delete(plVar3);
          plVar3 = plVar6;
        } while (plVar4 != plVar6);
      }
    }
    if (local_60 != 0) {
      lVar2 = *local_68;
      *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(local_70 + 8);
      **(long **)(local_70 + 8) = lVar2;
      local_60 = 0;
      plVar4 = local_68;
      if ((undefined1 **)local_68 != &local_70) {
        do {
          plVar6 = (long *)plVar4[1];
          operator_delete(plVar4);
          plVar4 = plVar6;
        } while ((undefined1 **)plVar6 != &local_70);
      }
    }
    uVar5 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

