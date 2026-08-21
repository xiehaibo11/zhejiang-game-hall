
/* v8::internal::AccountingAllocator::~AccountingAllocator() */

void __thiscall v8::internal::AccountingAllocator::~AccountingAllocator(AccountingAllocator *this)

{
  operator_delete(this);
  return;
}

