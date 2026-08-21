
/* v8::internal::IdentityMapBase::ScanKeysFor(unsigned long) const */

ulong __thiscall v8::internal::IdentityMapBase::ScanKeysFor(IdentityMapBase *this,ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(ulong *)(*(long *)(this + 0x10) + -0x7cb0) == param_1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","address != ReadOnlyRoots(heap_).not_mapped_symbol().ptr()");
  }
  uVar1 = base::hash_value(param_1);
  uVar1 = *(uint *)(this + 0x24) & uVar1;
  if ((int)uVar1 < *(int *)(this + 0x20)) {
    uVar2 = (ulong)(int)uVar1;
    do {
      uVar3 = *(ulong *)(*(long *)(this + 0x28) + uVar2 * 8);
      if (uVar3 == param_1) {
        return uVar2;
      }
      if (uVar3 == *(ulong *)(*(long *)(this + 0x10) + -0x7cb0)) {
        return 0xffffffff;
      }
      uVar2 = uVar2 + 1;
    } while ((long)uVar2 < (long)*(int *)(this + 0x20));
  }
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      uVar3 = *(ulong *)(*(long *)(this + 0x28) + uVar2 * 8);
      if (uVar3 == param_1) {
        return uVar2;
      }
    } while ((uVar3 != *(ulong *)(*(long *)(this + 0x10) + -0x7cb0)) &&
            (uVar2 = uVar2 + 1, uVar1 != uVar2));
  }
  return 0xffffffff;
}

