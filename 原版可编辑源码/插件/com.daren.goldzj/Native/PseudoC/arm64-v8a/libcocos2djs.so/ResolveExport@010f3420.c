
/* v8::internal::Module::ResolveExport(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Module>, v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::String>, v8::internal::MessageLocation, bool,
   v8::internal::Module::ResolveSet*) */

void v8::internal::Module::ResolveExport(undefined8 param_1,ulong *param_2)

{
  if (*(short *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)) == 0x44) {
    SourceTextModule::ResolveExport();
  }
  else {
    SyntheticModule::ResolveExport();
  }
  return;
}

