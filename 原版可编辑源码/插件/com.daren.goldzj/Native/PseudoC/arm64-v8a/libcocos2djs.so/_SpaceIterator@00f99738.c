
/* v8::internal::SpaceIterator::~SpaceIterator() */

void __thiscall v8::internal::SpaceIterator::~SpaceIterator(SpaceIterator *this)

{
  void *in_x1;
  
  Malloced::operator_delete((Malloced *)this,in_x1);
  return;
}

