
/* v8::internal::SourceTextModuleDescriptor::AddImport(v8::internal::AstRawString const*,
   v8::internal::AstRawString const*, v8::internal::AstRawString const*,
   v8::internal::Scanner::Location, v8::internal::Scanner::Location, v8::internal::Zone*) */

void __thiscall
v8::internal::SourceTextModuleDescriptor::AddImport
          (SourceTextModuleDescriptor *this,undefined8 param_1,undefined8 param_2,
          AstRawString *param_3,undefined8 param_5,long param_6,Zone *param_7)

{
  long lVar1;
  undefined8 *puVar2;
  AstRawString *local_60;
  undefined8 *puStack_58;
  
  puVar2 = *(undefined8 **)(param_7 + 0x10);
  if ((ulong)(*(long *)(param_7 + 0x18) - (long)puVar2) < 0x28) {
    puVar2 = (undefined8 *)Zone::NewExpand(param_7,0x28);
  }
  else {
    *(undefined8 **)(param_7 + 0x10) = puVar2 + 5;
  }
  *puVar2 = param_5;
  puVar2[1] = 0;
  puVar2[2] = param_2;
  puVar2[3] = param_1;
  puVar2[4] = 0xffffffff;
  puStack_58 = (undefined8 *)((ulong)*(uint *)(this + 0x18) | param_6 << 0x20);
  local_60 = param_3;
  lVar1 = std::__ndk1::
          __tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>>>
          ::
          __emplace_unique_key_args<v8::internal::AstRawString_const*,std::__ndk1::pair<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>>
                    ((__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::ModuleRequest>>>
                      *)this,&local_60,(pair *)&local_60);
  local_60 = (AstRawString *)puVar2[2];
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(lVar1 + 0x28);
  puStack_58 = puVar2;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>>>
  ::
  __emplace_unique_key_args<v8::internal::AstRawString_const*,std::__ndk1::pair<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>>
            ((__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>>>
              *)(this + 0x80),&local_60,(pair *)&local_60);
  return;
}

