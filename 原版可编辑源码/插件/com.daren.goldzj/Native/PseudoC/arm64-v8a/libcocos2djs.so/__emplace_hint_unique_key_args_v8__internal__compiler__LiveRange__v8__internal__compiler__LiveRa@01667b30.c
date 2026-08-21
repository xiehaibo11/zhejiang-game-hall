
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x01667b58 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* std::__ndk1::__tree_iterator<v8::internal::compiler::LiveRange*,
   std::__ndk1::__tree_node<v8::internal::compiler::LiveRange*, void*>*, long>
   std::__ndk1::__tree<v8::internal::compiler::LiveRange*,
   v8::internal::compiler::LiveRangeOrdering,
   v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>
   >::__emplace_hint_unique_key_args<v8::internal::compiler::LiveRange*,
   v8::internal::compiler::LiveRange*
   const&>(std::__ndk1::__tree_const_iterator<v8::internal::compiler::LiveRange*,
   std::__ndk1::__tree_node<v8::internal::compiler::LiveRange*, void*>*, long>,
   v8::internal::compiler::LiveRange* const&, v8::internal::compiler::LiveRange* const&) */

__tree_node_base * __thiscall
std::__ndk1::
__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
::
__emplace_hint_unique_key_args<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRange*const&>
          (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
           *this,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  __tree_node_base **pp_Var1;
  Zone *this_00;
  __tree_node_base *p_Var2;
  __tree_node_base *p_Var3;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  pp_Var1 = __find_equal<v8::internal::compiler::LiveRange*>
                      (this,param_2,&local_38,auStack_40,param_3);
  p_Var3 = *pp_Var1;
  if (p_Var3 == (__tree_node_base *)0x0) {
    this_00 = *(Zone **)(this + 0x10);
    p_Var3 = *(__tree_node_base **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)p_Var3) < 0x28) {
      p_Var3 = (__tree_node_base *)v8::internal::Zone::NewExpand(this_00,0x28);
    }
    else {
      *(__tree_node_base **)(this_00 + 0x10) = p_Var3 + 0x28;
    }
    *(undefined8 *)(p_Var3 + 0x20) = *param_4;
    *(undefined8 *)p_Var3 = 0;
    *(undefined8 *)(p_Var3 + 8) = 0;
    *(undefined8 *)(p_Var3 + 0x10) = local_38;
    *pp_Var1 = p_Var3;
    p_Var2 = p_Var3;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      p_Var2 = *pp_Var1;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),p_Var2);
    *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  }
  return p_Var3;
}

