
/* v8::internal::Heap::SetConstructStubInvokeDeoptPCOffset(int) */

void __thiscall v8::internal::Heap::SetConstructStubInvokeDeoptPCOffset(Heap *this,int param_1)

{
  *(ulong *)(this + -0x7850) =
       -(ulong)((uint)param_1 >> 0x1f) & 0xfffffffe00000000 | (ulong)(uint)param_1 << 1;
  return;
}

