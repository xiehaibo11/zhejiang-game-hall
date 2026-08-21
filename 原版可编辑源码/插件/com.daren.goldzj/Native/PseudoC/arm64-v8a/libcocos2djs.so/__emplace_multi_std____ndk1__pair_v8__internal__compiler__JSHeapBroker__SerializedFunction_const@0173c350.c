
/* std::__ndk1::__tree_iterator<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,
   v8::internal::ZoneVector<v8::internal::compiler::Hints> >,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,
   v8::internal::ZoneVector<v8::internal::compiler::Hints> >, void*>*, long>
   std::__ndk1::__tree<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,
   v8::internal::ZoneVector<v8::internal::compiler::Hints> >,
   std::__ndk1::__map_value_compare<v8::internal::compiler::JSHeapBroker::SerializedFunction,
   std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,
   v8::internal::ZoneVector<v8::internal::compiler::Hints> >,
   std::__ndk1::less<v8::internal::compiler::JSHeapBroker::SerializedFunction>, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,
   v8::internal::ZoneVector<v8::internal::compiler::Hints> > >
   >::__emplace_multi<std::__ndk1::pair<v8::internal::compiler::JSHeapBroker::SerializedFunction
   const, v8::internal::ZoneVector<v8::internal::compiler::Hints> >
   >(std::__ndk1::pair<v8::internal::compiler::JSHeapBroker::SerializedFunction const,
   v8::internal::ZoneVector<v8::internal::compiler::Hints> >&&) */

__tree_node_base * __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::__map_value_compare<v8::internal::compiler::JSHeapBroker::SerializedFunction,std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::less<v8::internal::compiler::JSHeapBroker::SerializedFunction>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>>>
::
__emplace_multi<std::__ndk1::pair<v8::internal::compiler::JSHeapBroker::SerializedFunction_const,v8::internal::ZoneVector<v8::internal::compiler::Hints>>>
          (__tree<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::__map_value_compare<v8::internal::compiler::JSHeapBroker::SerializedFunction,std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::less<v8::internal::compiler::JSHeapBroker::SerializedFunction>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>>>
           *this,pair *param_1)

{
  __tree<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::__map_value_compare<v8::internal::compiler::JSHeapBroker::SerializedFunction,std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::less<v8::internal::compiler::JSHeapBroker::SerializedFunction>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>>>
  *p_Var1;
  Zone *this_00;
  __tree_node_base *p_Var2;
  __tree_node_base *p_Var3;
  __tree<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::__map_value_compare<v8::internal::compiler::JSHeapBroker::SerializedFunction,std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::less<v8::internal::compiler::JSHeapBroker::SerializedFunction>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>>>
  *p_Var4;
  __tree<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::__map_value_compare<v8::internal::compiler::JSHeapBroker::SerializedFunction,std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::less<v8::internal::compiler::JSHeapBroker::SerializedFunction>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>>>
  *p_Var5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  this_00 = *(Zone **)(this + 0x10);
  p_Var2 = *(__tree_node_base **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)p_Var2) < 0x60) {
    p_Var2 = (__tree_node_base *)v8::internal::Zone::NewExpand(this_00,0x60);
  }
  else {
    *(__tree_node_base **)(this_00 + 0x10) = p_Var2 + 0x60;
  }
  uVar7 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)param_1;
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(p_Var2 + 0x48) = 0;
  *(undefined8 *)(p_Var2 + 0x50) = 0;
  *(undefined8 *)(p_Var2 + 0x40) = 0;
  *(undefined8 *)(p_Var2 + 0x28) = uVar7;
  *(undefined8 *)(p_Var2 + 0x20) = uVar6;
  *(undefined8 *)(p_Var2 + 0x38) = uVar9;
  *(undefined8 *)(p_Var2 + 0x30) = uVar8;
  *(undefined8 *)(p_Var2 + 0x58) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(p_Var2 + 0x40) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(p_Var2 + 0x48) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(p_Var2 + 0x50) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  p_Var4 = this + 8;
  p_Var5 = p_Var4;
  if (*(__tree<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::__map_value_compare<v8::internal::compiler::JSHeapBroker::SerializedFunction,std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::less<v8::internal::compiler::JSHeapBroker::SerializedFunction>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>>>
        **)p_Var4 !=
      (__tree<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::__map_value_compare<v8::internal::compiler::JSHeapBroker::SerializedFunction,std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::less<v8::internal::compiler::JSHeapBroker::SerializedFunction>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>>>
       *)0x0) {
    p_Var1 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::__map_value_compare<v8::internal::compiler::JSHeapBroker::SerializedFunction,std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::less<v8::internal::compiler::JSHeapBroker::SerializedFunction>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>>>
               **)p_Var4;
    do {
      while ((p_Var4 = p_Var1, **(ulong **)(p_Var4 + 0x20) <= **(ulong **)(p_Var2 + 0x20) &&
             ((**(ulong **)(p_Var2 + 0x20) != **(ulong **)(p_Var4 + 0x20) ||
              (**(ulong **)(p_Var4 + 0x30) <= **(ulong **)(p_Var2 + 0x30)))))) {
        p_Var1 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::__map_value_compare<v8::internal::compiler::JSHeapBroker::SerializedFunction,std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::less<v8::internal::compiler::JSHeapBroker::SerializedFunction>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>>>
                   **)(p_Var4 + 8);
        if (*(__tree<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::__map_value_compare<v8::internal::compiler::JSHeapBroker::SerializedFunction,std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::less<v8::internal::compiler::JSHeapBroker::SerializedFunction>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>>>
              **)(p_Var4 + 8) ==
            (__tree<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::__map_value_compare<v8::internal::compiler::JSHeapBroker::SerializedFunction,std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::less<v8::internal::compiler::JSHeapBroker::SerializedFunction>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>>>
             *)0x0) {
          p_Var5 = p_Var4 + 8;
          goto LAB_0173c428;
        }
      }
      p_Var1 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::__map_value_compare<v8::internal::compiler::JSHeapBroker::SerializedFunction,std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::less<v8::internal::compiler::JSHeapBroker::SerializedFunction>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>>>
                 **)p_Var4;
      p_Var5 = p_Var4;
    } while (*(__tree<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::__map_value_compare<v8::internal::compiler::JSHeapBroker::SerializedFunction,std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::less<v8::internal::compiler::JSHeapBroker::SerializedFunction>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>>>
               **)p_Var4 !=
             (__tree<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::__map_value_compare<v8::internal::compiler::JSHeapBroker::SerializedFunction,std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::less<v8::internal::compiler::JSHeapBroker::SerializedFunction>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>>>
              *)0x0);
  }
LAB_0173c428:
  *(undefined8 *)p_Var2 = 0;
  *(undefined8 *)(p_Var2 + 8) = 0;
  *(__tree<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::__map_value_compare<v8::internal::compiler::JSHeapBroker::SerializedFunction,std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::less<v8::internal::compiler::JSHeapBroker::SerializedFunction>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>>>
    **)(p_Var2 + 0x10) = p_Var4;
  *(__tree_node_base **)p_Var5 = p_Var2;
  p_Var3 = p_Var2;
  if (**(long **)this != 0) {
    *(long *)this = **(long **)this;
    p_Var3 = *(__tree_node_base **)p_Var5;
  }
  __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
            (*(__tree_node_base **)(this + 8),p_Var3);
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return p_Var2;
}

