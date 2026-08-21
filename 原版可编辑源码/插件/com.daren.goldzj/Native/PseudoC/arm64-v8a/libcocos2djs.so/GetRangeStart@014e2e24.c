
/* v8::internal::HandlerTable::GetRangeStart(int) const */

undefined4 __thiscall v8::internal::HandlerTable::GetRangeStart(HandlerTable *this,int param_1)

{
  return *(undefined4 *)(*(long *)(this + 8) + (long)(param_1 << 2) * 4);
}

