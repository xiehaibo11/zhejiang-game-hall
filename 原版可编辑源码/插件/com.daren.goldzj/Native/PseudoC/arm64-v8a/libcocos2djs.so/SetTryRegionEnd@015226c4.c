
/* v8::internal::interpreter::HandlerTableBuilder::SetTryRegionEnd(int, unsigned long) */

void __thiscall
v8::internal::interpreter::HandlerTableBuilder::SetTryRegionEnd
          (HandlerTableBuilder *this,int param_1,ulong param_2)

{
  *(ulong *)(*(long *)this + (long)param_1 * 0x20 + 8) = param_2;
  return;
}

