
/* v8::String::Value::~Value() */

void __thiscall v8::String::Value::~Value(Value *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
    return;
  }
  return;
}

