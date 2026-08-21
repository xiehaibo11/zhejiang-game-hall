
/* v8::internal::MarkCompactCollector::~MarkCompactCollector() */

void __thiscall
v8::internal::MarkCompactCollector::~MarkCompactCollector(MarkCompactCollector *this)

{
  ~MarkCompactCollector(this);
  operator_delete(this);
  return;
}

