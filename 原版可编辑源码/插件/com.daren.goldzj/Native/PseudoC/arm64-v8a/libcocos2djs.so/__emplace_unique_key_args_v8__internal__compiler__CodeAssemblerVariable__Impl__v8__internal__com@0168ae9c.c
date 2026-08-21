
/* std::__ndk1::pair<std::__ndk1::__tree_iterator<v8::internal::compiler::CodeAssemblerVariable::Impl*,
   std::__ndk1::__tree_node<v8::internal::compiler::CodeAssemblerVariable::Impl*, void*>*, long>,
   bool> std::__ndk1::__tree<v8::internal::compiler::CodeAssemblerVariable::Impl*,
   v8::internal::compiler::CodeAssemblerVariable::ImplComparator,
   v8::internal::ZoneAllocator<v8::internal::compiler::CodeAssemblerVariable::Impl*>
   >::__emplace_unique_key_args<v8::internal::compiler::CodeAssemblerVariable::Impl*,
   v8::internal::compiler::CodeAssemblerVariable::Impl*
   const&>(v8::internal::compiler::CodeAssemblerVariable::Impl* const&,
   v8::internal::compiler::CodeAssemblerVariable::Impl* const&) */

undefined1  [16] __thiscall
std::__ndk1::
__tree<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,v8::internal::ZoneAllocator<v8::internal::compiler::CodeAssemblerVariable::Impl*>>
::
__emplace_unique_key_args<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::CodeAssemblerVariable::Impl*const&>
          (__tree<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,v8::internal::ZoneAllocator<v8::internal::compiler::CodeAssemblerVariable::Impl*>>
           *this,Impl **param_1,Impl **param_2)

{
  Zone *this_00;
  __tree_node_base *p_Var1;
  undefined8 uVar2;
  Impl *pIVar3;
  __tree_node_base *p_Var4;
  __tree<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,v8::internal::ZoneAllocator<v8::internal::compiler::CodeAssemblerVariable::Impl*>>
  *p_Var5;
  __tree<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,v8::internal::ZoneAllocator<v8::internal::compiler::CodeAssemblerVariable::Impl*>>
  *p_Var6;
  __tree<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,v8::internal::ZoneAllocator<v8::internal::compiler::CodeAssemblerVariable::Impl*>>
  *p_Var7;
  __tree<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,v8::internal::ZoneAllocator<v8::internal::compiler::CodeAssemblerVariable::Impl*>>
  *p_Var8;
  undefined1 auVar9 [16];
  
  p_Var5 = this + 8;
  p_Var6 = *(__tree<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,v8::internal::ZoneAllocator<v8::internal::compiler::CodeAssemblerVariable::Impl*>>
             **)p_Var5;
  p_Var8 = p_Var5;
  if (p_Var6 != (__tree<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,v8::internal::ZoneAllocator<v8::internal::compiler::CodeAssemblerVariable::Impl*>>
                 *)0x0) {
    p_Var5 = this + 8;
    do {
      while (p_Var7 = p_Var6, p_Var8 = p_Var7,
            *(uint *)(*param_1 + 0xc) < *(uint *)(*(long *)(p_Var7 + 0x20) + 0xc)) {
        p_Var5 = p_Var7;
        p_Var6 = *(__tree<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,v8::internal::ZoneAllocator<v8::internal::compiler::CodeAssemblerVariable::Impl*>>
                   **)p_Var7;
        if (*(__tree<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,v8::internal::ZoneAllocator<v8::internal::compiler::CodeAssemblerVariable::Impl*>>
              **)p_Var7 ==
            (__tree<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,v8::internal::ZoneAllocator<v8::internal::compiler::CodeAssemblerVariable::Impl*>>
             *)0x0) {
          p_Var4 = *(__tree_node_base **)p_Var7;
          goto joined_r0x0168af18;
        }
      }
      if (*(uint *)(*param_1 + 0xc) <= *(uint *)(*(long *)(p_Var7 + 0x20) + 0xc)) break;
      p_Var5 = p_Var7 + 8;
      p_Var6 = *(__tree<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,v8::internal::ZoneAllocator<v8::internal::compiler::CodeAssemblerVariable::Impl*>>
                 **)p_Var5;
    } while (*(__tree<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,v8::internal::ZoneAllocator<v8::internal::compiler::CodeAssemblerVariable::Impl*>>
               **)p_Var5 !=
             (__tree<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,v8::internal::ZoneAllocator<v8::internal::compiler::CodeAssemblerVariable::Impl*>>
              *)0x0);
  }
  p_Var4 = *(__tree_node_base **)p_Var5;
  p_Var7 = p_Var5;
joined_r0x0168af18:
  if (p_Var4 == (__tree_node_base *)0x0) {
    this_00 = *(Zone **)(this + 0x10);
    p_Var4 = *(__tree_node_base **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)p_Var4) < 0x28) {
      p_Var4 = (__tree_node_base *)v8::internal::Zone::NewExpand(this_00,0x28);
    }
    else {
      *(__tree_node_base **)(this_00 + 0x10) = p_Var4 + 0x28;
    }
    pIVar3 = *param_2;
    *(undefined8 *)p_Var4 = 0;
    *(undefined8 *)(p_Var4 + 8) = 0;
    *(__tree<v8::internal::compiler::CodeAssemblerVariable::Impl*,v8::internal::compiler::CodeAssemblerVariable::ImplComparator,v8::internal::ZoneAllocator<v8::internal::compiler::CodeAssemblerVariable::Impl*>>
      **)(p_Var4 + 0x10) = p_Var8;
    *(Impl **)(p_Var4 + 0x20) = pIVar3;
    *(__tree_node_base **)p_Var7 = p_Var4;
    p_Var1 = p_Var4;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      p_Var1 = *(__tree_node_base **)p_Var7;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),p_Var1);
    uVar2 = 1;
    *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  }
  else {
    uVar2 = 0;
  }
  auVar9._8_8_ = uVar2;
  auVar9._0_8_ = p_Var4;
  return auVar9;
}

