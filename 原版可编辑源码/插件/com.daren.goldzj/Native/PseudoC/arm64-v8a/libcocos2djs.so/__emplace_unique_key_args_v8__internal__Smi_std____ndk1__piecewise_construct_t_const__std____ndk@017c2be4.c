
/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<v8::internal::Smi,
   unsigned int>, std::__ndk1::__tree_node<std::__ndk1::__value_type<v8::internal::Smi, unsigned
   int>, void*>*, long>, bool> std::__ndk1::__tree<std::__ndk1::__value_type<v8::internal::Smi,
   unsigned int>, std::__ndk1::__map_value_compare<v8::internal::Smi,
   std::__ndk1::__value_type<v8::internal::Smi, unsigned int>, std::__ndk1::less<v8::internal::Smi>,
   true>, v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::Smi, unsigned int> >
   >::__emplace_unique_key_args<v8::internal::Smi, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<v8::internal::Smi const&>, std::__ndk1::tuple<> >(v8::internal::Smi const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<v8::internal::Smi const&>&&,
   std::__ndk1::tuple<>&&) */

undefined1  [16]
std::__ndk1::
__tree<std::__ndk1::__value_type<v8::internal::Smi,unsigned_int>,std::__ndk1::__map_value_compare<v8::internal::Smi,std::__ndk1::__value_type<v8::internal::Smi,unsigned_int>,std::__ndk1::less<v8::internal::Smi>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::Smi,unsigned_int>>>
::
__emplace_unique_key_args<v8::internal::Smi,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::Smi_const&>,std::__ndk1::tuple<>>
          (Smi *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  Zone *this;
  __tree_node_base *p_Var1;
  undefined8 uVar2;
  __tree_node_base *p_Var3;
  Smi *pSVar4;
  Smi *pSVar5;
  Smi *pSVar6;
  Smi *pSVar7;
  undefined1 auVar8 [16];
  
  pSVar4 = param_1 + 8;
  pSVar5 = *(Smi **)pSVar4;
  pSVar7 = pSVar4;
  if (pSVar5 != (Smi *)0x0) {
    pSVar4 = param_1 + 8;
    do {
      while (pSVar6 = pSVar5, pSVar7 = pSVar6, *(uint *)param_2 < *(uint *)(pSVar6 + 0x20)) {
        pSVar4 = pSVar6;
        pSVar5 = *(Smi **)pSVar6;
        if (*(Smi **)pSVar6 == (Smi *)0x0) {
          p_Var3 = *(__tree_node_base **)pSVar6;
          goto joined_r0x017c2c58;
        }
      }
      if (*(uint *)param_2 <= *(uint *)(pSVar6 + 0x20)) break;
      pSVar4 = pSVar6 + 8;
      pSVar5 = *(Smi **)pSVar4;
    } while (*(Smi **)pSVar4 != (Smi *)0x0);
  }
  p_Var3 = *(__tree_node_base **)pSVar4;
  pSVar6 = pSVar4;
joined_r0x017c2c58:
  if (p_Var3 == (__tree_node_base *)0x0) {
    this = *(Zone **)(param_1 + 0x10);
    p_Var3 = *(__tree_node_base **)(this + 0x10);
    if ((ulong)(*(long *)(this + 0x18) - (long)p_Var3) < 0x30) {
      p_Var3 = (__tree_node_base *)v8::internal::Zone::NewExpand(this,0x30);
    }
    else {
      *(__tree_node_base **)(this + 0x10) = p_Var3 + 0x30;
    }
    uVar2 = **(undefined8 **)param_4;
    *(undefined4 *)(p_Var3 + 0x28) = 0;
    *(undefined8 *)p_Var3 = 0;
    *(undefined8 *)(p_Var3 + 8) = 0;
    *(Smi **)(p_Var3 + 0x10) = pSVar7;
    *(undefined8 *)(p_Var3 + 0x20) = uVar2;
    *(__tree_node_base **)pSVar6 = p_Var3;
    p_Var1 = p_Var3;
    if (**(long **)param_1 != 0) {
      *(long *)param_1 = **(long **)param_1;
      p_Var1 = *(__tree_node_base **)pSVar6;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 8),p_Var1);
    uVar2 = 1;
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  }
  else {
    uVar2 = 0;
  }
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = p_Var3;
  return auVar8;
}

