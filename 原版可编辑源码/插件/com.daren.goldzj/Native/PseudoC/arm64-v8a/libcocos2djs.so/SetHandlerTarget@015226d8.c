
/* v8::internal::interpreter::HandlerTableBuilder::SetHandlerTarget(int, unsigned long) */

void __thiscall
v8::internal::interpreter::HandlerTableBuilder::SetHandlerTarget
          (HandlerTableBuilder *this,int param_1,ulong param_2)

{
  *(ulong *)(*(long *)this + (long)param_1 * 0x20 + 0x10) = param_2;
  return;
}

