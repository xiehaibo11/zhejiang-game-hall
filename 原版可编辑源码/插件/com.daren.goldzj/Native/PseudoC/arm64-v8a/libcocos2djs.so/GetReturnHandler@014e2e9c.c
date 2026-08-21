
/* v8::internal::HandlerTable::GetReturnHandler(int) const */

uint __thiscall v8::internal::HandlerTable::GetReturnHandler(HandlerTable *this,int param_1)

{
  return *(uint *)(*(long *)(this + 8) + (long)(int)(param_1 << 1 | 1) * 4) >> 3;
}

