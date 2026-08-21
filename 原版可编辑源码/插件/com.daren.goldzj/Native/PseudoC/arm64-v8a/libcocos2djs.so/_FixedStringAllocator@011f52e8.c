
/* v8::internal::FixedStringAllocator::~FixedStringAllocator() */

void __thiscall
v8::internal::FixedStringAllocator::~FixedStringAllocator(FixedStringAllocator *this)

{
  operator_delete(this);
  return;
}

