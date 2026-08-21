
/* v8::internal::FlatStringReader::FlatStringReader(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::String>) */

void __thiscall
v8::internal::FlatStringReader::FlatStringReader(FlatStringReader *this,long param_1,long *param_3)

{
  *(undefined ***)this = &PTR__Relocatable_01cacc40;
  *(long *)(this + 8) = param_1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0xb790);
  *(FlatStringReader **)(param_1 + 0xb790) = this;
  *(long **)(this + 0x18) = param_3;
  *(undefined ***)this = &PTR__Relocatable_01cb4ee8;
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(*param_3 + 7);
  PostGarbageCollection(this);
  return;
}

