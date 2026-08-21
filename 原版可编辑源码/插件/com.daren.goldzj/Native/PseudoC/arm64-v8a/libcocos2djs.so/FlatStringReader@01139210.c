
/* v8::internal::FlatStringReader::FlatStringReader(v8::internal::Isolate*,
   v8::internal::Vector<char const>) */

void __thiscall
v8::internal::FlatStringReader::FlatStringReader
          (FlatStringReader *this,long param_1,undefined8 param_3,undefined4 param_4)

{
  *(undefined ***)this = &PTR__Relocatable_01cacc40;
  *(long *)(this + 8) = param_1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0xb790);
  *(FlatStringReader **)(param_1 + 0xb790) = this;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR__Relocatable_01cb4ee8;
  this[0x20] = (FlatStringReader)0x1;
  *(undefined4 *)(this + 0x24) = param_4;
  *(undefined8 *)(this + 0x28) = param_3;
  return;
}

