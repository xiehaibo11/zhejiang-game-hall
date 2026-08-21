
/* v8::internal::ReadOnlyHeap::DeseralizeIntoIsolate(v8::internal::Isolate*,
   v8::internal::ReadOnlyDeserializer*) */

void __thiscall
v8::internal::ReadOnlyHeap::DeseralizeIntoIsolate
          (ReadOnlyHeap *this,Isolate *param_1,ReadOnlyDeserializer *param_2)

{
  ReadOnlyDeserializer::DeserializeInto(param_2,param_1);
  PagedSpace::ShrinkImmortalImmovablePages(*(PagedSpace **)(this + 8));
  ReadOnlySpace::Seal(*(ReadOnlySpace **)(this + 8),1);
  *this = (ReadOnlyHeap)0x1;
  return;
}

