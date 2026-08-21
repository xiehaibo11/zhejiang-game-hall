
/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<int, int>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<int, int>, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<int, int>, std::__ndk1::__map_value_compare<int,
   std::__ndk1::__value_type<int, int>, std::__ndk1::less<int>, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__value_type<int, int> >
   >::__emplace_unique_key_args<int, int&, int&>(int const&, int&, int&) */

undefined1  [16] __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
::__emplace_unique_key_args<int,int&,int&>
          (__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
           *this,int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  Zone *this_00;
  __tree_node_base *p_Var2;
  undefined8 uVar3;
  __tree_node_base *p_Var4;
  __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
  *p_Var5;
  __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
  *p_Var6;
  __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
  *p_Var7;
  __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
  *p_Var8;
  undefined1 auVar9 [16];
  
  p_Var5 = this + 8;
  p_Var6 = *(__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
             **)p_Var5;
  p_Var8 = p_Var5;
  if (p_Var6 != (__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
                 *)0x0) {
    p_Var5 = this + 8;
    do {
      while (p_Var7 = p_Var6, p_Var8 = p_Var7, *param_1 < *(int *)(p_Var7 + 0x1c)) {
        p_Var5 = p_Var7;
        p_Var6 = *(__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
                   **)p_Var7;
        if (*(__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
              **)p_Var7 ==
            (__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
             *)0x0) {
          p_Var4 = *(__tree_node_base **)p_Var7;
          goto joined_r0x01533030;
        }
      }
      if (*param_1 <= *(int *)(p_Var7 + 0x1c)) break;
      p_Var5 = p_Var7 + 8;
      p_Var6 = *(__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
                 **)p_Var5;
    } while (*(__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
               **)p_Var5 !=
             (__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
              *)0x0);
  }
  p_Var4 = *(__tree_node_base **)p_Var5;
  p_Var7 = p_Var5;
joined_r0x01533030:
  if (p_Var4 == (__tree_node_base *)0x0) {
    this_00 = *(Zone **)(this + 0x10);
    p_Var4 = *(__tree_node_base **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)p_Var4) < 0x28) {
      p_Var4 = (__tree_node_base *)v8::internal::Zone::NewExpand(this_00,0x28);
    }
    else {
      *(__tree_node_base **)(this_00 + 0x10) = p_Var4 + 0x28;
    }
    *(int *)(p_Var4 + 0x1c) = *param_2;
    iVar1 = *param_3;
    *(undefined8 *)p_Var4 = 0;
    *(undefined8 *)(p_Var4 + 8) = 0;
    *(__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
      **)(p_Var4 + 0x10) = p_Var8;
    *(int *)(p_Var4 + 0x20) = iVar1;
    *(__tree_node_base **)p_Var7 = p_Var4;
    p_Var2 = p_Var4;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      p_Var2 = *(__tree_node_base **)p_Var7;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),p_Var2);
    uVar3 = 1;
    *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  }
  else {
    uVar3 = 0;
  }
  auVar9._8_8_ = uVar3;
  auVar9._0_8_ = p_Var4;
  return auVar9;
}

