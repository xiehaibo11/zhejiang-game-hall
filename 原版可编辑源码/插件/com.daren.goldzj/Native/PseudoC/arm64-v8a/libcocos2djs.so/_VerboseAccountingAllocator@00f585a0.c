
/* v8::internal::VerboseAccountingAllocator::~VerboseAccountingAllocator() */

void __thiscall
v8::internal::VerboseAccountingAllocator::~VerboseAccountingAllocator
          (VerboseAccountingAllocator *this)

{
  AccountingAllocator::~AccountingAllocator((AccountingAllocator *)this);
  operator_delete(this);
  return;
}

