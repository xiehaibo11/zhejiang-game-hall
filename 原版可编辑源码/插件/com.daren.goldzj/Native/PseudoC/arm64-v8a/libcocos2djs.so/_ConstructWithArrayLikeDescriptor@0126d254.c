
/* v8::internal::ConstructWithArrayLikeDescriptor::~ConstructWithArrayLikeDescriptor() */

void __thiscall
v8::internal::ConstructWithArrayLikeDescriptor::~ConstructWithArrayLikeDescriptor
          (ConstructWithArrayLikeDescriptor *this)

{
  operator_delete(this);
  return;
}

