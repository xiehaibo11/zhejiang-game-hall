
/* v8::internal::FastNewFunctionContextDescriptor::~FastNewFunctionContextDescriptor() */

void __thiscall
v8::internal::FastNewFunctionContextDescriptor::~FastNewFunctionContextDescriptor
          (FastNewFunctionContextDescriptor *this)

{
  operator_delete(this);
  return;
}

