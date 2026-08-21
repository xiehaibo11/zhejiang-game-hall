
/* v8::internal::AllocateDescriptor::~AllocateDescriptor() */

void __thiscall v8::internal::AllocateDescriptor::~AllocateDescriptor(AllocateDescriptor *this)

{
  operator_delete(this);
  return;
}

