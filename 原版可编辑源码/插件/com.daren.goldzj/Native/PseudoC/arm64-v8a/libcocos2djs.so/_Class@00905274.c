
/* se::Class::~Class() */

void __thiscall se::Class::~Class(Class *this)

{
  if (*(ulong **)(this + 0x38) != (ulong *)0x0) {
    v8::V8::DisposeGlobal(*(ulong **)(this + 0x38));
    *(undefined8 *)(this + 0x38) = 0;
  }
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}

