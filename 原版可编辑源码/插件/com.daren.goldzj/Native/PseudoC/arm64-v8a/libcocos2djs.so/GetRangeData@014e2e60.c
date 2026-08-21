
/* v8::internal::HandlerTable::GetRangeData(int) const */

undefined4 __thiscall v8::internal::HandlerTable::GetRangeData(HandlerTable *this,int param_1)

{
  return *(undefined4 *)(*(long *)(this + 8) + (long)(int)(param_1 << 2 | 3) * 4);
}

