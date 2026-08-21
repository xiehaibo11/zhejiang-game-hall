
/* std::__ndk1::__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey, int>,
   std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,
   std::__ndk1::__value_type<v8::internal::ConstantPoolKey, int>,
   std::__ndk1::less<v8::internal::ConstantPoolKey>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey, int> >
   >::__find_leaf_high(std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*&,
   v8::internal::ConstantPoolKey const&) */

__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
* __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
::__find_leaf_high(__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                   *this,__tree_end_node **param_1,ConstantPoolKey *param_2)

{
  char cVar1;
  __tree_end_node _Var2;
  __tree_end_node *p_Var3;
  __tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
  *p_Var4;
  __tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
  *p_Var5;
  
  p_Var5 = this + 8;
  if (*(__tree_end_node **)p_Var5 == (__tree_end_node *)0x0) {
    *param_1 = (__tree_end_node *)p_Var5;
  }
  else {
    cVar1 = *param_2;
    p_Var3 = *(__tree_end_node **)p_Var5;
    do {
      while (p_Var4 = (__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                       *)p_Var3, _Var2 = *(__tree_end_node *)(p_Var4 + 0x20),
            _Var2 != (__tree_end_node)0x0 && cVar1 == '\0') {
LAB_00ee8880:
        p_Var3 = *(__tree_end_node **)p_Var4;
        if (*(__tree_end_node **)p_Var4 == (__tree_end_node *)0x0) {
          *param_1 = (__tree_end_node *)p_Var4;
          return p_Var4;
        }
      }
      if ((cVar1 == '\0') || (_Var2 != (__tree_end_node)0x0)) {
        if ((char)param_2[0x10] < (char)*(__tree_end_node *)(p_Var4 + 0x30)) goto LAB_00ee8880;
        if ((char)param_2[0x10] <= (char)*(__tree_end_node *)(p_Var4 + 0x30)) {
          if (cVar1 == '\0') {
            if (_Var2 != (__tree_end_node)0x0) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","!is_value32_");
            }
            if (*(ulong *)(param_2 + 8) < *(ulong *)(p_Var4 + 0x28)) goto LAB_00ee8880;
          }
          else {
            if (_Var2 != (__tree_end_node)0x1) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","is_value32_");
            }
            if (*(uint *)(param_2 + 8) < *(uint *)(p_Var4 + 0x28)) goto LAB_00ee8880;
          }
        }
      }
      p_Var3 = *(__tree_end_node **)(p_Var4 + 8);
    } while (*(__tree_end_node **)(p_Var4 + 8) != (__tree_end_node *)0x0);
    p_Var5 = p_Var4 + 8;
    *param_1 = (__tree_end_node *)p_Var4;
  }
  return p_Var5;
}

