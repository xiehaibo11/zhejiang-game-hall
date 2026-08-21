
/* v8::PropertyDescriptor::~PropertyDescriptor() */

void __thiscall v8::PropertyDescriptor::~PropertyDescriptor(PropertyDescriptor *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}

