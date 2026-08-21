
/* dragonBones::BaseFactory::removeDragonBonesData(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool) */

void __thiscall
dragonBones::BaseFactory::removeDragonBonesData
          (BaseFactory *this,basic_string *param_1,bool param_2)

{
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>>>
  *this_00;
  long *plVar1;
  __tree_node_base *p_Var2;
  long *plVar3;
  __tree_node_base *p_Var4;
  long lVar5;
  
  this_00 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>>>
             *)(this + 0x10);
  p_Var2 = (__tree_node_base *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     (this_00,param_1);
  if (this + 0x18 == (BaseFactory *)p_Var2) {
    return;
  }
  if (param_2) {
    BaseObject::returnToPool(*(BaseObject **)(p_Var2 + 0x38));
  }
  plVar1 = *(long **)(p_Var2 + 8);
  if (*(long **)(p_Var2 + 8) == (long *)0x0) {
    p_Var4 = p_Var2 + 0x10;
    plVar3 = *(long **)p_Var4;
    if ((__tree_node_base *)*plVar3 != p_Var2) {
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
  if (*(__tree_node_base **)this_00 == p_Var2) {
    *(long **)this_00 = plVar3;
  }
  *(long *)(this + 0x20) = *(long *)(this + 0x20) + -1;
  std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
            (*(__tree_node_base **)(this + 0x18),p_Var2);
  if (((byte)p_Var2[0x20] & 1) != 0) {
    operator_delete(*(void **)(p_Var2 + 0x30));
  }
  operator_delete(p_Var2);
  return;
}

