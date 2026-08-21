
/* v8::internal::HandlerTable::GetRangeEnd(int) const */

undefined4 __thiscall v8::internal::HandlerTable::GetRangeEnd(HandlerTable *this,int param_1)

{
  return *(undefined4 *)(*(long *)(this + 8) + (long)(int)(param_1 << 2 | 1) * 4);
}

