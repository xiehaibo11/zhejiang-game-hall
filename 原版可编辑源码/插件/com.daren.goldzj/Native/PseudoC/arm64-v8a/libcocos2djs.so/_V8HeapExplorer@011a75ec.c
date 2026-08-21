
/* v8::internal::V8HeapExplorer::~V8HeapExplorer() */

void __thiscall v8::internal::V8HeapExplorer::~V8HeapExplorer(V8HeapExplorer *this)

{
  ~V8HeapExplorer(this);
  operator_delete(this);
  return;
}

