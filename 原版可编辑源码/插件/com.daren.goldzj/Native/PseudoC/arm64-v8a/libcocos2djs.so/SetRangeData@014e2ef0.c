
/* v8::internal::HandlerTable::SetRangeData(int, int) */

void __thiscall v8::internal::HandlerTable::SetRangeData(HandlerTable *this,int param_1,int param_2)

{
  *(int *)(*(long *)(this + 8) + (long)(int)(param_1 << 2 | 3) * 4) = param_2;
  return;
}

