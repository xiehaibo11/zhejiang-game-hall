
/* v8::internal::GrowArrayElementsDescriptor::~GrowArrayElementsDescriptor() */

void __thiscall
v8::internal::GrowArrayElementsDescriptor::~GrowArrayElementsDescriptor
          (GrowArrayElementsDescriptor *this)

{
  operator_delete(this);
  return;
}

