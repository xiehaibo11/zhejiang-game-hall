
/* v8::internal::V8HeapExplorer::MarkVisitedField(int) */

void __thiscall v8::internal::V8HeapExplorer::MarkVisitedField(V8HeapExplorer *this,int param_1)

{
  ulong uVar1;
  
  if (-1 < param_1) {
    uVar1 = (ulong)((uint)param_1 >> 5) & 0x7fffff8;
    *(ulong *)(*(long *)(this + 0xb8) + uVar1) =
         *(ulong *)(*(long *)(this + 0xb8) + uVar1) | 1L << ((ulong)((uint)param_1 >> 2) & 0x3f);
  }
  return;
}

