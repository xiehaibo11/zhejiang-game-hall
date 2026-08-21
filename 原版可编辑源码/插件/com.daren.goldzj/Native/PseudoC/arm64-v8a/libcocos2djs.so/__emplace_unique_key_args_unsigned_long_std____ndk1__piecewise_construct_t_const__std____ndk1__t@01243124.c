
/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<unsigned long,
   v8::internal::wasm::ControlTransferEntry>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned long,
   v8::internal::wasm::ControlTransferEntry>, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<unsigned long,
   v8::internal::wasm::ControlTransferEntry>, std::__ndk1::__map_value_compare<unsigned long,
   std::__ndk1::__value_type<unsigned long, v8::internal::wasm::ControlTransferEntry>,
   std::__ndk1::less<unsigned long>, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned long,
   v8::internal::wasm::ControlTransferEntry> > >::__emplace_unique_key_args<unsigned long,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<unsigned long const&>,
   std::__ndk1::tuple<> >(unsigned long const&, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<unsigned long const&>&&, std::__ndk1::tuple<>&&) */

undefined1  [16]
std::__ndk1::
__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
::
__emplace_unique_key_args<unsigned_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_const&>,std::__ndk1::tuple<>>
          (ulong *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  Zone *this;
  __tree_node_base *p_Var1;
  undefined8 uVar2;
  __tree_node_base *p_Var3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined1 auVar8 [16];
  
  puVar4 = param_1 + 1;
  puVar5 = (ulong *)*puVar4;
  puVar7 = puVar4;
  if (puVar5 != (ulong *)0x0) {
    puVar4 = param_1 + 1;
    do {
      while (puVar6 = puVar5, puVar7 = puVar6, *(ulong *)param_2 < puVar6[4]) {
        puVar4 = puVar6;
        puVar5 = (ulong *)*puVar6;
        if ((ulong *)*puVar6 == (ulong *)0x0) {
          p_Var3 = (__tree_node_base *)*puVar6;
          goto joined_r0x01243198;
        }
      }
      if (*(ulong *)param_2 <= puVar6[4]) break;
      puVar4 = puVar6 + 1;
      puVar5 = (ulong *)*puVar4;
    } while ((ulong *)*puVar4 != (ulong *)0x0);
  }
  p_Var3 = (__tree_node_base *)*puVar4;
  puVar6 = puVar4;
joined_r0x01243198:
  if (p_Var3 == (__tree_node_base *)0x0) {
    this = (Zone *)param_1[2];
    p_Var3 = *(__tree_node_base **)(this + 0x10);
    if ((ulong)(*(long *)(this + 0x18) - (long)p_Var3) < 0x38) {
      p_Var3 = (__tree_node_base *)v8::internal::Zone::NewExpand(this,0x38);
    }
    else {
      *(__tree_node_base **)(this + 0x10) = p_Var3 + 0x38;
    }
    uVar2 = **(undefined8 **)param_4;
    *(undefined4 *)(p_Var3 + 0x30) = 0;
    *(undefined8 *)p_Var3 = 0;
    *(undefined8 *)(p_Var3 + 8) = 0;
    *(ulong **)(p_Var3 + 0x10) = puVar7;
    *(undefined8 *)(p_Var3 + 0x20) = uVar2;
    *(undefined8 *)(p_Var3 + 0x28) = 0;
    *puVar6 = (ulong)p_Var3;
    p_Var1 = p_Var3;
    if (*(ulong *)*param_1 != 0) {
      *param_1 = *(ulong *)*param_1;
      p_Var1 = (__tree_node_base *)*puVar6;
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

