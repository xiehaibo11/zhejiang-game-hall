
/* v8::internal::EmbedderGraphEntriesAllocator::~EmbedderGraphEntriesAllocator() */

void __thiscall
v8::internal::EmbedderGraphEntriesAllocator::~EmbedderGraphEntriesAllocator
          (EmbedderGraphEntriesAllocator *this)

{
  operator_delete(this);
  return;
}

