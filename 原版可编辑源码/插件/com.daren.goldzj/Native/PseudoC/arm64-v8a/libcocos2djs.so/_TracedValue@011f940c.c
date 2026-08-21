
/* v8::tracing::TracedValue::~TracedValue() */

void __thiscall v8::tracing::TracedValue::~TracedValue(TracedValue *this)

{
  *(undefined ***)this = &PTR__TracedValue_01cbbe80;
  if (((byte)this[8] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x18));
  return;
}

