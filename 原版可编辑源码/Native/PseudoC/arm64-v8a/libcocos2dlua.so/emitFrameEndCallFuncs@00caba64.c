
/* cocostudio::timeline::ActionTimeline::emitFrameEndCallFuncs(int) */

void __thiscall
cocostudio::timeline::ActionTimeline::emitFrameEndCallFuncs(ActionTimeline *this,int param_1)

{
  long lVar1;
  bool bVar2;
  ActionTimeline *pAVar3;
  __tree_node *p_Var4;
  ActionTimeline *pAVar5;
  long lVar6;
  __tree_node *p_Var7;
  __tree_node *local_50;
  __tree_node *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pAVar5 = *(ActionTimeline **)(this + 0x128);
  if (pAVar5 != (ActionTimeline *)0x0) {
    pAVar3 = this + 0x128;
    do {
      if (param_1 <= *(int *)(pAVar5 + 0x20)) {
        pAVar3 = pAVar5;
      }
      pAVar5 = *(ActionTimeline **)(pAVar5 + (ulong)(*(int *)(pAVar5 + 0x20) < param_1) * 8);
    } while (pAVar5 != (ActionTimeline *)0x0);
    if ((pAVar3 != this + 0x128) && (*(int *)(pAVar3 + 0x20) <= param_1)) {
      local_48 = (__tree_node *)0x0;
      local_40 = 0;
      local_50 = (__tree_node *)&local_48;
      std::__ndk1::
      map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::function<void()>>>>
      ::
      insert<std::__ndk1::__map_const_iterator<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,void*>*,long>>>
                ((map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::function<void()>>>>
                  *)&local_50,*(undefined8 *)(pAVar3 + 0x28),pAVar3 + 0x30);
      p_Var7 = local_50;
      while (p_Var7 != (__tree_node *)&local_48) {
        if (*(__tree_node **)(p_Var7 + 0x60) == (__tree_node *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        (**(code **)(*(long *)*(__tree_node **)(p_Var7 + 0x60) + 0x30))();
        p_Var4 = *(__tree_node **)(p_Var7 + 8);
        if (*(__tree_node **)(p_Var7 + 8) == (__tree_node *)0x0) {
          p_Var4 = p_Var7 + 0x10;
          bVar2 = (__tree_node *)*(__tree_node ***)*(__tree_node **)p_Var4 != p_Var7;
          p_Var7 = *(__tree_node **)p_Var4;
          if (bVar2) {
            do {
              lVar6 = *(long *)p_Var4;
              p_Var4 = (__tree_node *)(lVar6 + 0x10);
              p_Var7 = *(__tree_node **)p_Var4;
            } while (*(long *)p_Var7 != lVar6);
          }
        }
        else {
          do {
            p_Var7 = p_Var4;
            p_Var4 = *(__tree_node **)p_Var7;
          } while (*(__tree_node **)p_Var7 != (__tree_node *)0x0);
        }
      }
      std::__ndk1::
      __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>>>
      ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>>>
                 *)&local_50,local_48);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

