
/* v8::internal::ArrayConstructorDescriptor::~ArrayConstructorDescriptor() */

void __thiscall
v8::internal::ArrayConstructorDescriptor::~ArrayConstructorDescriptor
          (ArrayConstructorDescriptor *this)

{
  operator_delete(this);
  return;
}

