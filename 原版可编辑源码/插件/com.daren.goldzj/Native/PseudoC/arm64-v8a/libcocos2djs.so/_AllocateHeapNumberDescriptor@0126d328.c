
/* v8::internal::AllocateHeapNumberDescriptor::~AllocateHeapNumberDescriptor() */

void __thiscall
v8::internal::AllocateHeapNumberDescriptor::~AllocateHeapNumberDescriptor
          (AllocateHeapNumberDescriptor *this)

{
  operator_delete(this);
  return;
}

