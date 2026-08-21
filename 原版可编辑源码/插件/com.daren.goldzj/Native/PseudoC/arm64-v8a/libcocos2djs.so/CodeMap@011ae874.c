
/* v8::internal::CodeMap::CodeMap() */

void __thiscall v8::internal::CodeMap::CodeMap(CodeMap *this)

{
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(CodeMap **)(this + 0x30) = this + 0x38;
  *(undefined4 *)(this + 0x48) = 0xffffffff;
  return;
}

