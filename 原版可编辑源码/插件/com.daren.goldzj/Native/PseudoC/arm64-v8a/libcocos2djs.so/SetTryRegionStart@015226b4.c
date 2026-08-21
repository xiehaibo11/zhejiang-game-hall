
/* v8::internal::interpreter::HandlerTableBuilder::SetTryRegionStart(int, unsigned long) */

void __thiscall
v8::internal::interpreter::HandlerTableBuilder::SetTryRegionStart
          (HandlerTableBuilder *this,int param_1,ulong param_2)

{
  *(ulong *)(*(long *)this +
            (-(ulong)((uint)param_1 >> 0x1f) & 0xffffffe000000000 | (ulong)(uint)param_1 << 5)) =
       param_2;
  return;
}

