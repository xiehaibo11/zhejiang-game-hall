
/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<v8::internal::AstRawString
   const*, v8::internal::SourceTextModuleDescriptor::ModuleRequest>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<v8::internal::AstRawString const*,
   v8::internal::SourceTextModuleDescriptor::ModuleRequest>, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<v8::internal::AstRawString const*,
   v8::internal::SourceTextModuleDescriptor::ModuleRequest>,
   std::__ndk1::__map_value_compare<v8::internal::AstRawString const*,
   std::__ndk1::__value_type<v8::internal::AstRawString const*,
   v8::internal::SourceTextModuleDescriptor::ModuleRequest>,
   v8::internal::SourceTextModuleDescriptor::AstRawStringComparer, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString const*,
   v8::internal::SourceTextModuleDescriptor::ModuleRequest> >
   >::__emplace_unique_key_args<v8::internal::AstRawString const*,
   std::__ndk1::pair<v8::internal::AstRawString const*,
   v8::internal::SourceTextModuleDescriptor::ModuleRequest> >(v8::internal::AstRawString const*
   const&, std::__ndk1::pair<v8::internal::AstRawString const*,
   v8::internal::SourceTextModuleDescriptor::ModuleRequest>&&) */

undefined1  [16] __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>>>
::
__emplace_unique_key_args<v8::internal::AstRawString_const*,std::__ndk1::pair<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>>
          (__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>>>
           *this,AstRawString **param_1,pair *param_2)

{
  __tree_node_base **pp_Var1;
  Zone *this_00;
  undefined8 uVar2;
  __tree_node_base *p_Var3;
  __tree_node_base *p_Var4;
  undefined1 auVar5 [16];
  __tree_end_node *local_38;
  
  pp_Var1 = __find_equal<v8::internal::AstRawString_const*>(this,&local_38,param_1);
  p_Var4 = *pp_Var1;
  if (p_Var4 == (__tree_node_base *)0x0) {
    this_00 = *(Zone **)(this + 0x10);
    p_Var4 = *(__tree_node_base **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)p_Var4) < 0x30) {
      p_Var4 = (__tree_node_base *)v8::internal::Zone::NewExpand(this_00,0x30);
    }
    else {
      *(__tree_node_base **)(this_00 + 0x10) = p_Var4 + 0x30;
    }
    *(undefined8 *)(p_Var4 + 0x20) = *(undefined8 *)param_2;
    *(undefined8 *)(p_Var4 + 0x28) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)p_Var4 = 0;
    *(undefined8 *)(p_Var4 + 8) = 0;
    *(__tree_end_node **)(p_Var4 + 0x10) = local_38;
    *pp_Var1 = p_Var4;
    p_Var3 = p_Var4;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      p_Var3 = *pp_Var1;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),p_Var3);
    uVar2 = 1;
    *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  }
  else {
    uVar2 = 0;
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = p_Var4;
  return auVar5;
}

