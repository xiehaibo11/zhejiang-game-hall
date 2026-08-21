
/* std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<dragonBones::SlotTimelineState*,
   std::__ndk1::allocator<dragonBones::SlotTimelineState*> > >,
   std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<dragonBones::SlotTimelineState*,
   std::__ndk1::allocator<dragonBones::SlotTimelineState*> > >,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<dragonBones::SlotTimelineState*,
   std::__ndk1::allocator<dragonBones::SlotTimelineState*> > > >
   >::erase(std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<dragonBones::SlotTimelineState*,
   std::__ndk1::allocator<dragonBones::SlotTimelineState*> > >,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<dragonBones::SlotTimelineState*,
   std::__ndk1::allocator<dragonBones::SlotTimelineState*> > >, void*>*, long>) */

long * __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>>>
::erase(__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>>>
        *this,__tree_node_base *param_2)

{
  long *plVar1;
  void *pvVar2;
  __tree_node_base *p_Var3;
  long lVar4;
  long *plVar5;
  
  plVar1 = *(long **)(param_2 + 8);
  if (*(long **)(param_2 + 8) == (long *)0x0) {
    p_Var3 = param_2 + 0x10;
    plVar5 = *(long **)p_Var3;
    if ((__tree_node_base *)*plVar5 != param_2) {
      do {
        lVar4 = *(long *)p_Var3;
        p_Var3 = (__tree_node_base *)(lVar4 + 0x10);
        plVar5 = *(long **)p_Var3;
      } while (*plVar5 != lVar4);
    }
  }
  else {
    do {
      plVar5 = plVar1;
      plVar1 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
  }
  if (*(__tree_node_base **)this == param_2) {
    *(long **)this = plVar5;
  }
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
  __tree_remove<std::__ndk1::__tree_node_base<void*>*>(*(__tree_node_base **)(this + 8),param_2);
  pvVar2 = *(void **)(param_2 + 0x38);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_2 + 0x40) = pvVar2;
    operator_delete(pvVar2);
  }
  if (((byte)param_2[0x20] & 1) != 0) {
    operator_delete(*(void **)(param_2 + 0x30));
  }
  operator_delete(param_2);
  return plVar5;
}

