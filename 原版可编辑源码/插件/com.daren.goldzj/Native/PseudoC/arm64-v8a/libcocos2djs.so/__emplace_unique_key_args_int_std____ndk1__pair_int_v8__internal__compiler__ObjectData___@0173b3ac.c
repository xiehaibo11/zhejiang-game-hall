
/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<int,
   v8::internal::compiler::ObjectData*>, std::__ndk1::__tree_node<std::__ndk1::__value_type<int,
   v8::internal::compiler::ObjectData*>, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<int, v8::internal::compiler::ObjectData*>,
   std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int,
   v8::internal::compiler::ObjectData*>, std::__ndk1::less<int>, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__value_type<int, v8::internal::compiler::ObjectData*> >
   >::__emplace_unique_key_args<int, std::__ndk1::pair<int, v8::internal::compiler::ObjectData*>
   >(int const&, std::__ndk1::pair<int, v8::internal::compiler::ObjectData*>&&) */

undefined1  [16] __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>>>
::__emplace_unique_key_args<int,std::__ndk1::pair<int,v8::internal::compiler::ObjectData*>>
          (__tree<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>>>
           *this,int *param_1,pair *param_2)

{
  Zone *this_00;
  __tree_node_base *p_Var1;
  undefined8 uVar2;
  __tree_node_base *p_Var3;
  __tree<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>>>
  *p_Var4;
  __tree<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>>>
  *p_Var5;
  __tree<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>>>
  *p_Var6;
  __tree<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>>>
  *p_Var7;
  undefined1 auVar8 [16];
  
  p_Var4 = this + 8;
  p_Var5 = *(__tree<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>>>
             **)p_Var4;
  p_Var7 = p_Var4;
  if (p_Var5 != (__tree<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>>>
                 *)0x0) {
    p_Var4 = this + 8;
    do {
      while (p_Var6 = p_Var5, p_Var7 = p_Var6, *param_1 < *(int *)(p_Var6 + 0x20)) {
        p_Var4 = p_Var6;
        p_Var5 = *(__tree<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>>>
                   **)p_Var6;
        if (*(__tree<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>>>
              **)p_Var6 ==
            (__tree<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>>>
             *)0x0) {
          p_Var3 = *(__tree_node_base **)p_Var6;
          goto joined_r0x0173b420;
        }
      }
      if (*param_1 <= *(int *)(p_Var6 + 0x20)) break;
      p_Var4 = p_Var6 + 8;
      p_Var5 = *(__tree<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>>>
                 **)p_Var4;
    } while (*(__tree<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>>>
               **)p_Var4 !=
             (__tree<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>>>
              *)0x0);
  }
  p_Var3 = *(__tree_node_base **)p_Var4;
  p_Var6 = p_Var4;
joined_r0x0173b420:
  if (p_Var3 == (__tree_node_base *)0x0) {
    this_00 = *(Zone **)(this + 0x10);
    p_Var3 = *(__tree_node_base **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)p_Var3) < 0x30) {
      p_Var3 = (__tree_node_base *)v8::internal::Zone::NewExpand(this_00,0x30);
    }
    else {
      *(__tree_node_base **)(this_00 + 0x10) = p_Var3 + 0x30;
    }
    *(undefined4 *)(p_Var3 + 0x20) = *(undefined4 *)param_2;
    uVar2 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)p_Var3 = 0;
    *(undefined8 *)(p_Var3 + 8) = 0;
    *(__tree<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::ObjectData*>>>
      **)(p_Var3 + 0x10) = p_Var7;
    *(undefined8 *)(p_Var3 + 0x28) = uVar2;
    *(__tree_node_base **)p_Var6 = p_Var3;
    p_Var1 = p_Var3;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      p_Var1 = *(__tree_node_base **)p_Var6;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),p_Var1);
    uVar2 = 1;
    *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  }
  else {
    uVar2 = 0;
  }
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = p_Var3;
  return auVar8;
}

