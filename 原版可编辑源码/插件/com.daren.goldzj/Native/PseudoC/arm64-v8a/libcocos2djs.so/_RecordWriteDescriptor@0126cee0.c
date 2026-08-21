
/* v8::internal::RecordWriteDescriptor::~RecordWriteDescriptor() */

void __thiscall
v8::internal::RecordWriteDescriptor::~RecordWriteDescriptor(RecordWriteDescriptor *this)

{
  operator_delete(this);
  return;
}

