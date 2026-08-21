
/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,
   v8::internal::compiler::Node*>, v8::internal::compiler::CsaLoadElimination::FieldInfo>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,
   v8::internal::compiler::Node*>, v8::internal::compiler::CsaLoadElimination::FieldInfo>, void*>*,
   long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,
   v8::internal::compiler::Node*>, v8::internal::compiler::CsaLoadElimination::FieldInfo>,
   std::__ndk1::__map_value_compare<std::__ndk1::pair<v8::internal::compiler::Node*,
   v8::internal::compiler::Node*>,
   std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,
   v8::internal::compiler::Node*>, v8::internal::compiler::CsaLoadElimination::FieldInfo>,
   std::__ndk1::less<std::__ndk1::pair<v8::internal::compiler::Node*, v8::internal::compiler::Node*>
   >, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,
   v8::internal::compiler::Node*>, v8::internal::compiler::CsaLoadElimination::FieldInfo> >
   >::__emplace_unique_key_args<std::__ndk1::pair<v8::internal::compiler::Node*,
   v8::internal::compiler::Node*>, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<std::__ndk1::pair<v8::internal::compiler::Node*,
   v8::internal::compiler::Node*> const&>, std::__ndk1::tuple<>
   >(std::__ndk1::pair<v8::internal::compiler::Node*, v8::internal::compiler::Node*> const&,
   std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<std::__ndk1::pair<v8::internal::compiler::Node*,
   v8::internal::compiler::Node*> const&>&&, std::__ndk1::tuple<>&&) */

undefined1  [16]
std::__ndk1::
__tree<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo>,std::__ndk1::less<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo>>>
::
__emplace_unique_key_args<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>const&>,std::__ndk1::tuple<>>
          (pair *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  Zone *this;
  __tree_node_base *p_Var1;
  undefined8 uVar2;
  __tree_node_base *p_Var3;
  pair *ppVar4;
  pair *ppVar5;
  pair *ppVar6;
  pair *ppVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  ppVar4 = param_1 + 8;
  ppVar5 = *(pair **)ppVar4;
  ppVar7 = ppVar4;
  if (ppVar5 != (pair *)0x0) {
    ppVar4 = param_1 + 8;
    do {
      while (ppVar6 = ppVar5, ppVar7 = ppVar6, *(ulong *)param_2 < *(ulong *)(ppVar6 + 0x20)) {
LAB_0169d3c8:
        ppVar4 = ppVar6;
        ppVar5 = *(pair **)ppVar6;
        if (*(pair **)ppVar6 == (pair *)0x0) {
          p_Var3 = *(__tree_node_base **)ppVar6;
          goto joined_r0x0169d414;
        }
      }
      if (*(ulong *)param_2 <= *(ulong *)(ppVar6 + 0x20)) {
        if (*(ulong *)(param_2 + 8) < *(ulong *)(ppVar6 + 0x28)) goto LAB_0169d3c8;
        if (*(ulong *)(param_2 + 8) <= *(ulong *)(ppVar6 + 0x28)) break;
      }
      ppVar4 = ppVar6 + 8;
      ppVar5 = *(pair **)ppVar4;
    } while (*(pair **)ppVar4 != (pair *)0x0);
  }
  p_Var3 = *(__tree_node_base **)ppVar4;
  ppVar6 = ppVar4;
joined_r0x0169d414:
  if (p_Var3 == (__tree_node_base *)0x0) {
    this = *(Zone **)(param_1 + 0x10);
    p_Var3 = *(__tree_node_base **)(this + 0x10);
    if ((ulong)(*(long *)(this + 0x18) - (long)p_Var3) < 0x40) {
      p_Var3 = (__tree_node_base *)v8::internal::Zone::NewExpand(this,0x40);
    }
    else {
      *(__tree_node_base **)(this + 0x10) = p_Var3 + 0x40;
    }
    uVar8 = (*(undefined8 **)param_4)[1];
    uVar2 = **(undefined8 **)param_4;
    *(undefined8 *)(p_Var3 + 0x30) = 0;
    *(undefined8 *)(p_Var3 + 0x38) = 0;
    *(undefined8 *)p_Var3 = 0;
    *(undefined8 *)(p_Var3 + 8) = 0;
    *(pair **)(p_Var3 + 0x10) = ppVar7;
    *(undefined8 *)(p_Var3 + 0x28) = uVar8;
    *(undefined8 *)(p_Var3 + 0x20) = uVar2;
    *(__tree_node_base **)ppVar6 = p_Var3;
    p_Var1 = p_Var3;
    if (**(long **)param_1 != 0) {
      *(long *)param_1 = **(long **)param_1;
      p_Var1 = *(__tree_node_base **)ppVar6;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 8),p_Var1);
    uVar2 = 1;
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  }
  else {
    uVar2 = 0;
  }
  auVar9._8_8_ = uVar2;
  auVar9._0_8_ = p_Var3;
  return auVar9;
}

