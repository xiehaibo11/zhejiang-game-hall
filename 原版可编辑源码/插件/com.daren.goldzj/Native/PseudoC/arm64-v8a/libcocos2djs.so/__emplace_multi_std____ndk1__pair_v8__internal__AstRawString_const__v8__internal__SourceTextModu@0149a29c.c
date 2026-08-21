
/* std::__ndk1::__tree_iterator<std::__ndk1::__value_type<v8::internal::AstRawString const*,
   v8::internal::SourceTextModuleDescriptor::Entry*>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<v8::internal::AstRawString const*,
   v8::internal::SourceTextModuleDescriptor::Entry*>, void*>*, long>
   std::__ndk1::__tree<std::__ndk1::__value_type<v8::internal::AstRawString const*,
   v8::internal::SourceTextModuleDescriptor::Entry*>,
   std::__ndk1::__map_value_compare<v8::internal::AstRawString const*,
   std::__ndk1::__value_type<v8::internal::AstRawString const*,
   v8::internal::SourceTextModuleDescriptor::Entry*>,
   v8::internal::SourceTextModuleDescriptor::AstRawStringComparer, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString const*,
   v8::internal::SourceTextModuleDescriptor::Entry*> >
   >::__emplace_multi<std::__ndk1::pair<v8::internal::AstRawString const*,
   v8::internal::SourceTextModuleDescriptor::Entry*> >(std::__ndk1::pair<v8::internal::AstRawString
   const*, v8::internal::SourceTextModuleDescriptor::Entry*>&&) */

__tree_node_base * __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>>>
::
__emplace_multi<std::__ndk1::pair<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>>
          (__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>>>
           *this,pair *param_1)

{
  __tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>>>
  *p_Var1;
  int iVar2;
  Zone *this_00;
  __tree_node_base *p_Var3;
  __tree_node_base *p_Var4;
  __tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>>>
  *p_Var5;
  long lVar6;
  __tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>>>
  *p_Var7;
  long lVar8;
  
  this_00 = *(Zone **)(this + 0x10);
  p_Var3 = *(__tree_node_base **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)p_Var3) < 0x30) {
    p_Var3 = (__tree_node_base *)v8::internal::Zone::NewExpand(this_00,0x30);
  }
  else {
    *(__tree_node_base **)(this_00 + 0x10) = p_Var3 + 0x30;
  }
  lVar8 = *(long *)param_1;
  *(long *)(p_Var3 + 0x20) = lVar8;
  *(undefined8 *)(p_Var3 + 0x28) = *(undefined8 *)(param_1 + 8);
  p_Var5 = this + 8;
  p_Var1 = *(__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>>>
             **)p_Var5;
  p_Var7 = p_Var5;
  if (*(__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>>>
        **)p_Var5 !=
      (__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>>>
       *)0x0) {
LAB_0149a300:
    do {
      p_Var7 = p_Var1;
      lVar6 = *(long *)(p_Var7 + 0x20);
      if (lVar6 != lVar8) {
        if ((*(char *)(lVar8 + 0x1c) != '\0') == (*(char *)(lVar6 + 0x1c) != '\0')) {
          iVar2 = (int)*(undefined8 *)(lVar8 + 0x10);
          if (iVar2 == *(int *)(lVar6 + 0x10)) {
            iVar2 = memcmp(*(void **)(lVar8 + 8),*(void **)(lVar6 + 8),(long)iVar2);
            if (-1 < iVar2) goto LAB_0149a2f4;
          }
          else if (*(int *)(lVar6 + 0x10) <= iVar2) goto LAB_0149a2f4;
LAB_0149a330:
          p_Var5 = p_Var7;
          p_Var1 = *(__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>>>
                     **)p_Var7;
          if (*(__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>>>
                **)p_Var7 ==
              (__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>>>
               *)0x0) goto LAB_0149a378;
          goto LAB_0149a300;
        }
        if (*(char *)(lVar8 + 0x1c) != '\0') goto LAB_0149a330;
      }
LAB_0149a2f4:
      p_Var1 = *(__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>>>
                 **)(p_Var7 + 8);
    } while (*(__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>>>
               **)(p_Var7 + 8) !=
             (__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>>>
              *)0x0);
    p_Var5 = p_Var7 + 8;
  }
LAB_0149a378:
  *(undefined8 *)p_Var3 = 0;
  *(undefined8 *)(p_Var3 + 8) = 0;
  *(__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>>>
    **)(p_Var3 + 0x10) = p_Var7;
  *(__tree_node_base **)p_Var5 = p_Var3;
  p_Var4 = p_Var3;
  if (**(long **)this != 0) {
    *(long *)this = **(long **)this;
    p_Var4 = *(__tree_node_base **)p_Var5;
  }
  __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
            (*(__tree_node_base **)(this + 8),p_Var4);
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return p_Var3;
}

