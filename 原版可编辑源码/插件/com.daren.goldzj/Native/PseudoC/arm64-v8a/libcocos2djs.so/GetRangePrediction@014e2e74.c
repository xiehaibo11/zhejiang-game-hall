
/* v8::internal::HandlerTable::GetRangePrediction(int) const */

uint __thiscall v8::internal::HandlerTable::GetRangePrediction(HandlerTable *this,int param_1)

{
  return *(uint *)(*(long *)(this + 8) + (long)(int)(param_1 << 2 | 2) * 4) & 7;
}

