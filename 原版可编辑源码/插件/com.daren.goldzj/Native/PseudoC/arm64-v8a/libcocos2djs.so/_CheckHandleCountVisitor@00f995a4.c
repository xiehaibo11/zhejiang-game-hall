
/* v8::internal::CheckHandleCountVisitor::~CheckHandleCountVisitor() */

void __thiscall
v8::internal::CheckHandleCountVisitor::~CheckHandleCountVisitor(CheckHandleCountVisitor *this)

{
  *(undefined ***)this = &PTR__CheckHandleCountVisitor_01ca7c28;
  if (*(long *)(this + 8) < 0x7800) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","HandleScope::kCheckHandleThreshold > handle_count_");
}

