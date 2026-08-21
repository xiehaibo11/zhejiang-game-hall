
/* v8::internal::AllocationProfile::GetRootNode() */

long __thiscall v8::internal::AllocationProfile::GetRootNode(AllocationProfile *this)

{
  if (*(long *)(this + 0x30) != 0) {
    return *(long *)(*(long *)(this + 0x10) + (*(ulong *)(this + 0x28) / 0x2e) * 8) +
           (*(ulong *)(this + 0x28) % 0x2e) * 0x58;
  }
  return 0;
}

