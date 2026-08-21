
/* v8::HeapSnapshot::GetNode(int) const */

long __thiscall v8::HeapSnapshot::GetNode(HeapSnapshot *this,int param_1)

{
  ulong uVar1;
  
  if ((ulong)(long)param_1 < *(ulong *)(this + 0xf8)) {
    uVar1 = *(long *)(this + 0xf0) + (long)param_1;
    return *(long *)(*(long *)(this + 0xd8) + (uVar1 / 0x66) * 8) + (uVar1 % 0x66) * 0x28;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

