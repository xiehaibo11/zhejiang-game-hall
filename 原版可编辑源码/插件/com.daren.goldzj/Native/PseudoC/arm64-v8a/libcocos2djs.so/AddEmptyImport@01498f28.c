
/* v8::internal::SourceTextModuleDescriptor::AddEmptyImport(v8::internal::AstRawString const*,
   v8::internal::Scanner::Location) */

void __thiscall
v8::internal::SourceTextModuleDescriptor::AddEmptyImport
          (SourceTextModuleDescriptor *this,AstRawString *param_1,long param_3)

{
  AstRawString *local_20;
  ulong uStack_18;
  
  uStack_18 = (ulong)*(uint *)(this + 0x18) | param_3 << 0x20;
  local_20 = param_1;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>>>
  ::
  __emplace_unique_key_args<v8::internal::AstRawString_const*,std::__ndk1::pair<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>>
            ((__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>>>
              *)this,&local_20,(pair *)&local_20);
  return;
}

