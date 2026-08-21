
/* v8::internal::compiler::CommonNodeCache::FindHeapConstant(v8::internal::Handle<v8::internal::HeapObject>)
    */

void __thiscall
v8::internal::compiler::CommonNodeCache::FindHeapConstant(CommonNodeCache *this,long param_2)

{
  NodeCache<long,v8::base::hash<long>,std::__ndk1::equal_to<long>>::Find
            ((NodeCache<long,v8::base::hash<long>,std::__ndk1::equal_to<long>> *)(this + 0xe0),
             *(Zone **)(this + 0x140),param_2);
  return;
}

