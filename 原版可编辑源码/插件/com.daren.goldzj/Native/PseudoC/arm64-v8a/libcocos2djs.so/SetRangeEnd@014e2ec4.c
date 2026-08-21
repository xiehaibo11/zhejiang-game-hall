
/* v8::internal::HandlerTable::SetRangeEnd(int, int) */

void __thiscall v8::internal::HandlerTable::SetRangeEnd(HandlerTable *this,int param_1,int param_2)

{
  *(int *)(*(long *)(this + 8) + (long)(int)(param_1 << 2 | 1) * 4) = param_2;
  return;
}

