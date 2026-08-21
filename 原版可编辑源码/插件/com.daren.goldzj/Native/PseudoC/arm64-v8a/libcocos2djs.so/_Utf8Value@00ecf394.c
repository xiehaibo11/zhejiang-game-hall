
/* v8::String::Utf8Value::~Utf8Value() */

void __thiscall v8::String::Utf8Value::~Utf8Value(Utf8Value *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
    return;
  }
  return;
}

