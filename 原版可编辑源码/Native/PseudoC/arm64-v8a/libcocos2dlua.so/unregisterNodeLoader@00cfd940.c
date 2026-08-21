
/* cocosbuilder::NodeLoaderLibrary::unregisterNodeLoader(char const*) */

void __thiscall
cocosbuilder::NodeLoaderLibrary::unregisterNodeLoader(NodeLoaderLibrary *this,char *param_1)

{
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::NodeLoader*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::NodeLoader*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::NodeLoader*>>>
  *this_00;
  long lVar1;
  long *plVar2;
  __tree_node_base *p_Var3;
  long *plVar4;
  __tree_node_base *p_Var5;
  long lVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::NodeLoader*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::NodeLoader*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::NodeLoader*>>>
             *)(this + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,param_1);
  p_Var3 = (__tree_node_base *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::NodeLoader*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::NodeLoader*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::NodeLoader*>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     (this_00,(basic_string *)local_50);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (this + 0x30 != (NodeLoaderLibrary *)p_Var3) {
    cocos2d::Ref::release(*(Ref **)(p_Var3 + 0x38));
    plVar2 = *(long **)(p_Var3 + 8);
    if (*(long **)(p_Var3 + 8) == (long *)0x0) {
      p_Var5 = p_Var3 + 0x10;
      plVar4 = *(long **)p_Var5;
      if ((__tree_node_base *)*plVar4 != p_Var3) {
        do {
          lVar6 = *(long *)p_Var5;
          p_Var5 = (__tree_node_base *)(lVar6 + 0x10);
          plVar4 = *(long **)p_Var5;
        } while (*plVar4 != lVar6);
      }
    }
    else {
      do {
        plVar4 = plVar2;
        plVar2 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
    if (*(__tree_node_base **)this_00 == p_Var3) {
      *(long **)this_00 = plVar4;
    }
    *(long *)(this + 0x38) = *(long *)(this + 0x38) + -1;
    std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x30),p_Var3);
    if (((byte)p_Var3[0x20] & 1) != 0) {
      operator_delete(*(void **)(p_Var3 + 0x30));
    }
    operator_delete(p_Var3);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

