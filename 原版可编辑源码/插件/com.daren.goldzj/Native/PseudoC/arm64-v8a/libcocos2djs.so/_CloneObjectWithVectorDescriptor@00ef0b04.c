
/* v8::internal::CloneObjectWithVectorDescriptor::~CloneObjectWithVectorDescriptor() */

void __thiscall
v8::internal::CloneObjectWithVectorDescriptor::~CloneObjectWithVectorDescriptor
          (CloneObjectWithVectorDescriptor *this)

{
  operator_delete(this);
  return;
}

