
/* v8::internal::MinorMarkCompactCollector::~MinorMarkCompactCollector() */

void __thiscall
v8::internal::MinorMarkCompactCollector::~MinorMarkCompactCollector(MinorMarkCompactCollector *this)

{
  ~MinorMarkCompactCollector(this);
  operator_delete(this);
  return;
}

