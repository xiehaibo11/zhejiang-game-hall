
/* v8::internal::LargeObjectSpaceObjectIterator::~LargeObjectSpaceObjectIterator() */

void __thiscall
v8::internal::LargeObjectSpaceObjectIterator::~LargeObjectSpaceObjectIterator
          (LargeObjectSpaceObjectIterator *this)

{
  void *in_x1;
  
  Malloced::operator_delete((Malloced *)this,in_x1);
  return;
}

