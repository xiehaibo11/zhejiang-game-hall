
/* v8::internal::Debug::ChangeBreakOnException(v8::internal::ExceptionBreakType, bool) */

void __thiscall v8::internal::Debug::ChangeBreakOnException(Debug *this,int param_2,byte param_3)

{
  if (param_2 == 1) {
    this[0xf] = (Debug)(param_3 & 1);
    return;
  }
  this[0xe] = (Debug)(param_3 & 1);
  return;
}

