
/* v8::internal::BuiltinFrame::~BuiltinFrame() */

void __thiscall v8::internal::BuiltinFrame::~BuiltinFrame(BuiltinFrame *this)

{
  operator_delete(this);
  return;
}

