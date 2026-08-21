
/* v8::internal::BuiltinsConstantsTableBuilder::BuiltinsConstantsTableBuilder(v8::internal::Isolate*)
    */

void __thiscall
v8::internal::BuiltinsConstantsTableBuilder::BuiltinsConstantsTableBuilder
          (BuiltinsConstantsTableBuilder *this,Isolate *param_1)

{
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x39) = 0;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(Isolate **)(this + 0x18) = param_1 + 0x8850;
  *(Isolate **)this = param_1;
  *(undefined ***)(this + 8) = &PTR__IdentityMap_01ca5ee8;
  return;
}

