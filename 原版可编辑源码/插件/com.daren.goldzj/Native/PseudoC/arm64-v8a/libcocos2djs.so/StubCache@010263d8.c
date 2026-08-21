
/* v8::internal::StubCache::StubCache(v8::internal::Isolate*) */

void __thiscall v8::internal::StubCache::StubCache(StubCache *this,Isolate *param_1)

{
  memset(this,0,0x7800);
  *(Isolate **)(this + 0x7800) = param_1;
  return;
}

