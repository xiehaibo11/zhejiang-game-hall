
/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<v8::internal::compiler::Variable,
   v8::internal::compiler::Node*>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<v8::internal::compiler::Variable,
   v8::internal::compiler::Node*>, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<v8::internal::compiler::Variable,
   v8::internal::compiler::Node*>,
   std::__ndk1::__map_value_compare<v8::internal::compiler::Variable,
   std::__ndk1::__value_type<v8::internal::compiler::Variable, v8::internal::compiler::Node*>,
   std::__ndk1::less<v8::internal::compiler::Variable>, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Variable,
   v8::internal::compiler::Node*> > >::__emplace_unique_key_args<v8::internal::compiler::Variable,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<v8::internal::compiler::Variable
   const&>, std::__ndk1::tuple<> >(v8::internal::compiler::Variable const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<v8::internal::compiler::Variable
   const&>&&, std::__ndk1::tuple<>&&) */

undefined1  [16]
std::__ndk1::
__tree<std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::Variable,std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>,std::__ndk1::less<v8::internal::compiler::Variable>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>>>
::
__emplace_unique_key_args<v8::internal::compiler::Variable,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::compiler::Variable_const&>,std::__ndk1::tuple<>>
          (Variable *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  undefined4 uVar1;
  Zone *this;
  __tree_node_base *p_Var2;
  undefined8 uVar3;
  __tree_node_base *p_Var4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  
  puVar5 = (undefined8 *)(param_1 + 8);
  puVar6 = (undefined8 *)*puVar5;
  puVar8 = puVar5;
  if (puVar6 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar7 = puVar6, puVar8 = puVar7, *(int *)param_2 < *(int *)(puVar7 + 4)) {
        puVar5 = puVar7;
        puVar6 = (undefined8 *)*puVar7;
        if ((undefined8 *)*puVar7 == (undefined8 *)0x0) {
          p_Var4 = (__tree_node_base *)*puVar7;
          goto joined_r0x016bc0c0;
        }
      }
      if (*(int *)param_2 <= *(int *)(puVar7 + 4)) break;
      puVar5 = puVar7 + 1;
      puVar6 = (undefined8 *)*puVar5;
    } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
  }
  p_Var4 = (__tree_node_base *)*puVar5;
  puVar7 = puVar5;
joined_r0x016bc0c0:
  if (p_Var4 == (__tree_node_base *)0x0) {
    this = *(Zone **)(param_1 + 0x10);
    p_Var4 = *(__tree_node_base **)(this + 0x10);
    if ((ulong)(*(long *)(this + 0x18) - (long)p_Var4) < 0x30) {
      p_Var4 = (__tree_node_base *)v8::internal::Zone::NewExpand(this,0x30);
    }
    else {
      *(__tree_node_base **)(this + 0x10) = p_Var4 + 0x30;
    }
    uVar1 = **(undefined4 **)param_4;
    *(undefined8 *)(p_Var4 + 0x28) = 0;
    *(undefined8 *)p_Var4 = 0;
    *(undefined8 *)(p_Var4 + 8) = 0;
    *(undefined8 **)(p_Var4 + 0x10) = puVar8;
    *(undefined4 *)(p_Var4 + 0x20) = uVar1;
    *puVar7 = p_Var4;
    p_Var2 = p_Var4;
    if (**(long **)param_1 != 0) {
      *(long *)param_1 = **(long **)param_1;
      p_Var2 = (__tree_node_base *)*puVar7;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 8),p_Var2);
    uVar3 = 1;
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  }
  else {
    uVar3 = 0;
  }
  auVar9._8_8_ = uVar3;
  auVar9._0_8_ = p_Var4;
  return auVar9;
}

