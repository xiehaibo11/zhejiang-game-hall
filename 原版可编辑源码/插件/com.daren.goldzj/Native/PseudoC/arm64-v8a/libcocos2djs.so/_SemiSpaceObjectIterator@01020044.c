
/* v8::internal::SemiSpaceObjectIterator::~SemiSpaceObjectIterator() */

void __thiscall
v8::internal::SemiSpaceObjectIterator::~SemiSpaceObjectIterator(SemiSpaceObjectIterator *this)

{
  void *in_x1;
  
  Malloced::operator_delete((Malloced *)this,in_x1);
  return;
}

