
/* v8::internal::ArgumentsAdaptorDescriptor::~ArgumentsAdaptorDescriptor() */

void __thiscall
v8::internal::ArgumentsAdaptorDescriptor::~ArgumentsAdaptorDescriptor
          (ArgumentsAdaptorDescriptor *this)

{
  operator_delete(this);
  return;
}

