
/* v8::internal::compiler::CommonNodeCache::FindExternalConstant(v8::internal::ExternalReference) */

void __thiscall
v8::internal::compiler::CommonNodeCache::FindExternalConstant(CommonNodeCache *this,long param_2)

{
  NodeCache<long,v8::base::hash<long>,std::__ndk1::equal_to<long>>::Find
            ((NodeCache<long,v8::base::hash<long>,std::__ndk1::equal_to<long>> *)(this + 0x80),
             *(Zone **)(this + 0x140),param_2);
  return;
}

