
/* v8::internal::HandlerTable::GetReturnOffset(int) const */

undefined4 __thiscall v8::internal::HandlerTable::GetReturnOffset(HandlerTable *this,int param_1)

{
  return *(undefined4 *)(*(long *)(this + 8) + (long)(param_1 << 1) * 4);
}

