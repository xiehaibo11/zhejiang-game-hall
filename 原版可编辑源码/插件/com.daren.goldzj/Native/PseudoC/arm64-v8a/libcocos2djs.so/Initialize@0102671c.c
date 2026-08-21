
/* v8::internal::SourceCodeCache::Initialize(v8::internal::Isolate*, bool) */

void __thiscall
v8::internal::SourceCodeCache::Initialize(SourceCodeCache *this,Isolate *param_1,bool param_2)

{
  if (param_2) {
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 0x168);
    return;
  }
  *(undefined8 *)(this + 8) = 0;
  return;
}

