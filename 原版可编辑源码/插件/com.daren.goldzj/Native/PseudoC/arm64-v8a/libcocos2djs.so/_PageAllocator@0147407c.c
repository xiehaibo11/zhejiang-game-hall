
/* v8::base::PageAllocator::~PageAllocator() */

void __thiscall v8::base::PageAllocator::~PageAllocator(PageAllocator *this)

{
  operator_delete(this);
  return;
}

