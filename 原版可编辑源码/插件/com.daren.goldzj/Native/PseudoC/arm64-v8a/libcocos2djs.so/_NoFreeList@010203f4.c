
/* v8::internal::NoFreeList::~NoFreeList() */

void __thiscall v8::internal::NoFreeList::~NoFreeList(NoFreeList *this)

{
  operator_delete(this);
  return;
}

