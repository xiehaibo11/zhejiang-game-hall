
/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<v8::internal::compiler::Node*,
   v8::internal::ZoneHandleSet<v8::internal::Map> >,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<v8::internal::compiler::Node*,
   v8::internal::ZoneHandleSet<v8::internal::Map> >, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,
   v8::internal::ZoneHandleSet<v8::internal::Map> >,
   std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,
   std::__ndk1::__value_type<v8::internal::compiler::Node*,
   v8::internal::ZoneHandleSet<v8::internal::Map> >,
   std::__ndk1::less<v8::internal::compiler::Node*>, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,
   v8::internal::ZoneHandleSet<v8::internal::Map> > >
   >::__emplace_unique_key_args<v8::internal::compiler::Node*, std::__ndk1::piecewise_construct_t
   const&, std::__ndk1::tuple<v8::internal::compiler::Node* const&>, std::__ndk1::tuple<>
   >(v8::internal::compiler::Node* const&, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<v8::internal::compiler::Node* const&>&&, std::__ndk1::tuple<>&&) */

undefined1  [16]
std::__ndk1::
__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
::
__emplace_unique_key_args<v8::internal::compiler::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::compiler::Node*const&>,std::__ndk1::tuple<>>
          (Node **param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  Zone *this;
  __tree_node_base *p_Var1;
  undefined8 uVar2;
  __tree_node_base *p_Var3;
  Node *pNVar4;
  Node *pNVar5;
  Node *pNVar6;
  Node *pNVar7;
  undefined1 auVar8 [16];
  
  pNVar4 = (Node *)(param_1 + 1);
  pNVar5 = *(Node **)pNVar4;
  pNVar7 = pNVar4;
  if (pNVar5 != (Node *)0x0) {
    pNVar4 = (Node *)(param_1 + 1);
    do {
      while (pNVar6 = pNVar5, pNVar7 = pNVar6, *(ulong *)param_2 < *(ulong *)(pNVar6 + 0x20)) {
        pNVar4 = pNVar6;
        pNVar5 = *(Node **)pNVar6;
        if (*(Node **)pNVar6 == (Node *)0x0) {
          p_Var3 = *(__tree_node_base **)pNVar6;
          goto joined_r0x0177112c;
        }
      }
      if (*(ulong *)param_2 <= *(ulong *)(pNVar6 + 0x20)) break;
      pNVar4 = pNVar6 + 8;
      pNVar5 = *(Node **)pNVar4;
    } while (*(Node **)pNVar4 != (Node *)0x0);
  }
  p_Var3 = *(__tree_node_base **)pNVar4;
  pNVar6 = pNVar4;
joined_r0x0177112c:
  if (p_Var3 == (__tree_node_base *)0x0) {
    this = (Zone *)param_1[2];
    p_Var3 = *(__tree_node_base **)(this + 0x10);
    if ((ulong)(*(long *)(this + 0x18) - (long)p_Var3) < 0x30) {
      p_Var3 = (__tree_node_base *)v8::internal::Zone::NewExpand(this,0x30);
    }
    else {
      *(__tree_node_base **)(this + 0x10) = p_Var3 + 0x30;
    }
    uVar2 = **(undefined8 **)param_4;
    *(undefined8 *)p_Var3 = 0;
    *(undefined8 *)(p_Var3 + 8) = 0;
    *(Node **)(p_Var3 + 0x10) = pNVar7;
    *(undefined8 *)(p_Var3 + 0x20) = uVar2;
    *(undefined8 *)(p_Var3 + 0x28) = 1;
    *(__tree_node_base **)pNVar6 = p_Var3;
    p_Var1 = p_Var3;
    if (*(Node **)*param_1 != (Node *)0x0) {
      *param_1 = *(Node **)*param_1;
      p_Var1 = *(__tree_node_base **)pNVar6;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var1);
    uVar2 = 1;
    param_1[3] = param_1[3] + 1;
  }
  else {
    uVar2 = 0;
  }
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = p_Var3;
  return auVar8;
}

