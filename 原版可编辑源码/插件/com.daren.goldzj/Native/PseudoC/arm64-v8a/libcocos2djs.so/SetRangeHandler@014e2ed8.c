
/* v8::internal::HandlerTable::SetRangeHandler(int, int,
   v8::internal::HandlerTable::CatchPrediction) */

void __thiscall
v8::internal::HandlerTable::SetRangeHandler(HandlerTable *this,int param_1,int param_2,uint param_4)

{
  *(uint *)(*(long *)(this + 8) + (long)(int)(param_1 << 2 | 2) * 4) = param_4 | param_2 << 3;
  return;
}

