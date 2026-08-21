
/* v8::internal::FastNewObjectDescriptor::~FastNewObjectDescriptor() */

void __thiscall
v8::internal::FastNewObjectDescriptor::~FastNewObjectDescriptor(FastNewObjectDescriptor *this)

{
  operator_delete(this);
  return;
}

