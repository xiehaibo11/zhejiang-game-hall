
/* v8::internal::JSArrayBufferDataEntryAllocator::~JSArrayBufferDataEntryAllocator() */

void __thiscall
v8::internal::JSArrayBufferDataEntryAllocator::~JSArrayBufferDataEntryAllocator
          (JSArrayBufferDataEntryAllocator *this)

{
  operator_delete(this);
  return;
}

