
/* v8::internal::CallPrinter::GetErrorHint() const */

undefined8 __thiscall v8::internal::CallPrinter::GetErrorHint(CallPrinter *this)

{
  if (this[0x21] == (CallPrinter)0x0) {
    if (this[0x1f] != (CallPrinter)0x0) {
      return 1;
    }
    if (this[0x20] != (CallPrinter)0x0) {
      return 2;
    }
  }
  else {
    if (this[0x1f] != (CallPrinter)0x0) {
      return 3;
    }
    if (this[0x20] != (CallPrinter)0x0) {
      return 4;
    }
  }
  return 0;
}

