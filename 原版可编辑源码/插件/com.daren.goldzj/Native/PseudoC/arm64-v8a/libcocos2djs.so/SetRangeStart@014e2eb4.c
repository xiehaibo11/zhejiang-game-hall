
/* v8::internal::HandlerTable::SetRangeStart(int, int) */

void __thiscall
v8::internal::HandlerTable::SetRangeStart(HandlerTable *this,int param_1,int param_2)

{
  *(int *)(*(long *)(this + 8) + (long)(param_1 << 2) * 4) = param_2;
  return;
}

