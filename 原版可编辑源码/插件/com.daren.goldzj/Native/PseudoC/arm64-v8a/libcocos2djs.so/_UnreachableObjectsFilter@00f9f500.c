
/* v8::internal::UnreachableObjectsFilter::~UnreachableObjectsFilter() */

void __thiscall
v8::internal::UnreachableObjectsFilter::~UnreachableObjectsFilter(UnreachableObjectsFilter *this)

{
  ~UnreachableObjectsFilter(this);
  operator_delete(this);
  return;
}

