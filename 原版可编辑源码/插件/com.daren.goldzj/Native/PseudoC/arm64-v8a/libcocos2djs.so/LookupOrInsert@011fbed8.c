
/* v8::internal::IdentityMapBase::LookupOrInsert(unsigned long) */

void __thiscall v8::internal::IdentityMapBase::LookupOrInsert(IdentityMapBase *this,ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (*(ulong *)(*(long *)(this + 0x10) + -0x7cb0) == param_1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","address != ReadOnlyRoots(heap_).not_mapped_symbol().ptr()");
  }
  uVar1 = base::hash_value(param_1);
  uVar3 = *(ulong *)(*(long *)(this + 0x10) + -0x7cb0);
  uVar1 = *(uint *)(this + 0x24) & uVar1;
  if ((int)uVar1 < *(int *)(this + 0x20)) {
    uVar2 = (ulong)(int)uVar1;
    do {
      uVar4 = *(ulong *)(*(long *)(this + 0x28) + uVar2 * 8);
      if (uVar4 == param_1) goto LAB_011fbf88;
      if (uVar4 == uVar3) goto LAB_011fbf9c;
      uVar2 = uVar2 + 1;
    } while ((long)*(int *)(this + 0x20) != uVar2);
  }
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      uVar4 = *(ulong *)(*(long *)(this + 0x28) + uVar2 * 8);
      if (uVar4 == param_1) goto LAB_011fbf88;
    } while ((uVar4 != uVar3) && (uVar2 = uVar2 + 1, uVar1 != uVar2));
  }
LAB_011fbf9c:
  if (*(int *)(this + 0x18) != *(int *)(*(long *)(this + 0x10) + 0x1b4)) {
    Rehash(this);
  }
  InsertKey(this,param_1);
  return;
LAB_011fbf88:
  if (-1 < (int)uVar2) {
    return;
  }
  goto LAB_011fbf9c;
}

