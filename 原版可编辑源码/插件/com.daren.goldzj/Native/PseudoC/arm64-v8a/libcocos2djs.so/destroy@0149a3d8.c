
/* std::__ndk1::__tree<std::__ndk1::__value_type<v8::internal::AstRawString const*,
   v8::internal::SourceTextModuleDescriptor::Entry const*>,
   std::__ndk1::__map_value_compare<v8::internal::AstRawString const*,
   std::__ndk1::__value_type<v8::internal::AstRawString const*,
   v8::internal::SourceTextModuleDescriptor::Entry const*>,
   std::__ndk1::less<v8::internal::AstRawString const*>, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString const*,
   v8::internal::SourceTextModuleDescriptor::Entry const*> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<v8::internal::AstRawString const*,
   v8::internal::SourceTextModuleDescriptor::Entry const*>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry_const*>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry_const*>,std::__ndk1::less<v8::internal::AstRawString_const*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry_const*>>>
::destroy(__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry_const*>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry_const*>,std::__ndk1::less<v8::internal::AstRawString_const*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry_const*>>>
          *this,__tree_node *param_1)

{
  for (; param_1 != (__tree_node *)0x0; param_1 = *(__tree_node **)(param_1 + 8)) {
    destroy(this,*(__tree_node **)param_1);
  }
  return;
}

