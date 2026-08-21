
/* non-virtual thunk to
   v8::internal::VerifyReadOnlyPointersVisitor::~VerifyReadOnlyPointersVisitor() */

void __thiscall
v8::internal::VerifyReadOnlyPointersVisitor::~VerifyReadOnlyPointersVisitor
          (VerifyReadOnlyPointersVisitor *this)

{
  operator_delete(this + -8);
  return;
}

