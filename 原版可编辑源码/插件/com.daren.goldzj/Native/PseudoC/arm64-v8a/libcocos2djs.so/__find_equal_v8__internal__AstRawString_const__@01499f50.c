
/* std::__ndk1::__tree_node_base<void*>*&
   std::__ndk1::__tree<std::__ndk1::__value_type<v8::internal::AstRawString const*,
   v8::internal::SourceTextModuleDescriptor::ModuleRequest>,
   std::__ndk1::__map_value_compare<v8::internal::AstRawString const*,
   std::__ndk1::__value_type<v8::internal::AstRawString const*,
   v8::internal::SourceTextModuleDescriptor::ModuleRequest>,
   v8::internal::SourceTextModuleDescriptor::AstRawStringComparer, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString const*,
   v8::internal::SourceTextModuleDescriptor::ModuleRequest> >
   >::__find_equal<v8::internal::AstRawString
   const*>(std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*&,
   v8::internal::AstRawString const* const&) */

__tree_node_base ** __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>>>
::__find_equal<v8::internal::AstRawString_const*>
          (__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>>>
           *this,__tree_end_node **param_1,AstRawString **param_2)

{
  AstRawString AVar1;
  AstRawString AVar2;
  int iVar3;
  __tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>>>
  *p_Var4;
  __tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>>>
  *p_Var5;
  __tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>>>
  *p_Var6;
  AstRawString *pAVar7;
  AstRawString *pAVar8;
  
  p_Var5 = this + 8;
  p_Var6 = *(__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>>>
             **)p_Var5;
  if (p_Var6 == (__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>>>
                 *)0x0) {
    *param_1 = (__tree_end_node *)p_Var5;
  }
  else {
    pAVar7 = *param_2;
    pAVar8 = *(AstRawString **)(p_Var6 + 0x20);
    if (pAVar7 != pAVar8) {
      AVar1 = pAVar7[0x1c];
      do {
        AVar2 = pAVar8[0x1c];
        if ((AVar1 != (AstRawString)0x0) == (AVar2 != (AstRawString)0x0)) {
          iVar3 = (int)*(undefined8 *)(pAVar7 + 0x10);
          if (iVar3 != *(int *)(pAVar8 + 0x10)) {
            if (*(int *)(pAVar8 + 0x10) <= iVar3) goto LAB_0149a00c;
            goto LAB_01499fd0;
          }
          iVar3 = memcmp(*(void **)(pAVar7 + 8),*(void **)(pAVar8 + 8),(long)iVar3);
          if (iVar3 < 0) goto LAB_01499fd0;
LAB_0149a00c:
          if ((AVar2 != (AstRawString)0x0) == (AVar1 != (AstRawString)0x0)) {
            iVar3 = (int)*(undefined8 *)(pAVar8 + 0x10);
            if (iVar3 == *(int *)(pAVar7 + 0x10)) {
              iVar3 = memcmp(*(void **)(pAVar8 + 8),*(void **)(pAVar7 + 8),(long)iVar3);
              if (-1 < iVar3) break;
            }
            else if (*(int *)(pAVar7 + 0x10) <= iVar3) break;
          }
          else if (AVar2 == (AstRawString)0x0) break;
          p_Var5 = p_Var6 + 8;
          p_Var4 = *(__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>>>
                     **)p_Var5;
          if (p_Var4 == (__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>>>
                         *)0x0) break;
        }
        else {
          if (AVar1 == (AstRawString)0x0) goto LAB_0149a00c;
LAB_01499fd0:
          p_Var4 = *(__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>>>
                     **)p_Var6;
          p_Var5 = p_Var6;
          if (p_Var4 == (__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>>>
                         *)0x0) {
            *param_1 = (__tree_end_node *)p_Var6;
            return (__tree_node_base **)p_Var6;
          }
        }
        pAVar8 = *(AstRawString **)(p_Var4 + 0x20);
        p_Var6 = p_Var4;
      } while (pAVar7 != pAVar8);
    }
    *param_1 = (__tree_end_node *)p_Var6;
  }
  return (__tree_node_base **)p_Var5;
}

