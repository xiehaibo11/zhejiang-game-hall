
/* v8::internal::SourceTextModuleDescriptor::AddExport(v8::internal::AstRawString const*,
   v8::internal::AstRawString const*, v8::internal::Scanner::Location, v8::internal::Zone*) */

void __thiscall
v8::internal::SourceTextModuleDescriptor::AddExport
          (SourceTextModuleDescriptor *this,undefined8 param_1,undefined8 param_2,undefined8 param_4
          ,Zone *param_5)

{
  undefined8 local_40;
  undefined8 *puStack_38;
  
  puStack_38 = *(undefined8 **)(param_5 + 0x10);
  if ((ulong)(*(long *)(param_5 + 0x18) - (long)puStack_38) < 0x28) {
    puStack_38 = (undefined8 *)Zone::NewExpand(param_5,0x28);
  }
  else {
    *(undefined8 **)(param_5 + 0x10) = puStack_38 + 5;
  }
  puStack_38[2] = param_1;
  puStack_38[3] = 0;
  *puStack_38 = param_4;
  puStack_38[1] = param_2;
  puStack_38[4] = 0xffffffff;
  local_40 = param_1;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>>>
  ::
  __emplace_multi<std::__ndk1::pair<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>>
            ((__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>>>
              *)(this + 0x60),(pair *)&local_40);
  return;
}

