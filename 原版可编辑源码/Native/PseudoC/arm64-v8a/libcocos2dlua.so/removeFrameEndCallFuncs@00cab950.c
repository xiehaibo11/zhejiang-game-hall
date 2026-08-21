
/* cocostudio::timeline::ActionTimeline::removeFrameEndCallFuncs(int) */

void __thiscall
cocostudio::timeline::ActionTimeline::removeFrameEndCallFuncs(ActionTimeline *this,int param_1)

{
  long *plVar1;
  __tree_node_base *p_Var2;
  long *plVar3;
  __tree_node_base *p_Var4;
  long lVar5;
  __tree_node_base *p_Var6;
  
  p_Var2 = *(__tree_node_base **)(this + 0x128);
  if (p_Var2 != (__tree_node_base *)0x0) {
    p_Var4 = p_Var2;
    p_Var6 = (__tree_node_base *)(this + 0x128);
    do {
      if (param_1 <= *(int *)(p_Var4 + 0x20)) {
        p_Var6 = p_Var4;
      }
      p_Var4 = *(__tree_node_base **)(p_Var4 + (ulong)(*(int *)(p_Var4 + 0x20) < param_1) * 8);
    } while (p_Var4 != (__tree_node_base *)0x0);
    if ((p_Var6 != (__tree_node_base *)(this + 0x128)) && (*(int *)(p_Var6 + 0x20) <= param_1)) {
      plVar1 = *(long **)(p_Var6 + 8);
      if (*(long **)(p_Var6 + 8) == (long *)0x0) {
        p_Var4 = p_Var6 + 0x10;
        plVar3 = *(long **)p_Var4;
        if ((__tree_node_base *)*plVar3 != p_Var6) {
          do {
            lVar5 = *(long *)p_Var4;
            p_Var4 = (__tree_node_base *)(lVar5 + 0x10);
            plVar3 = *(long **)p_Var4;
          } while (*plVar3 != lVar5);
        }
      }
      else {
        do {
          plVar3 = plVar1;
          plVar1 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
      if (*(__tree_node_base **)(this + 0x120) == p_Var6) {
        *(long **)(this + 0x120) = plVar3;
      }
      *(long *)(this + 0x130) = *(long *)(this + 0x130) + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>(p_Var2,p_Var6);
      std::__ndk1::
      __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>>>
      ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>>>
                 *)(p_Var6 + 0x28),*(__tree_node **)(p_Var6 + 0x30));
      operator_delete(p_Var6);
      return;
    }
  }
  return;
}

