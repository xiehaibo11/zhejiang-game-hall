
/* v8::internal::PagedSpaceObjectIterator::~PagedSpaceObjectIterator() */

void __thiscall
v8::internal::PagedSpaceObjectIterator::~PagedSpaceObjectIterator(PagedSpaceObjectIterator *this)

{
  void *in_x1;
  
  Malloced::operator_delete((Malloced *)this,in_x1);
  return;
}

