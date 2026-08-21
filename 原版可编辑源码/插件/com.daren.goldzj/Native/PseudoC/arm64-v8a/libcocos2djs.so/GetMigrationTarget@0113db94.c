
/* v8::internal::TransitionsAccessor::GetMigrationTarget() */

ulong __thiscall v8::internal::TransitionsAccessor::GetMigrationTarget(TransitionsAccessor *this)

{
  if (*(int *)(this + 0x20) == 2) {
    return *(ulong *)(this + 0x10) & 0xffffffff00000000 |
           (ulong)*(uint *)(*(ulong *)(this + 0x10) + 0x23);
  }
  return 0;
}

