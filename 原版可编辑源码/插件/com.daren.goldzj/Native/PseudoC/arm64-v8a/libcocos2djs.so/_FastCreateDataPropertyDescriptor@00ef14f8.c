
/* v8::internal::FastCreateDataPropertyDescriptor::~FastCreateDataPropertyDescriptor() */

void __thiscall
v8::internal::FastCreateDataPropertyDescriptor::~FastCreateDataPropertyDescriptor
          (FastCreateDataPropertyDescriptor *this)

{
  operator_delete(this);
  return;
}

