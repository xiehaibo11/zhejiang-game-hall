
/* v8::internal::IdentityMapBase::InsertKey(unsigned long) */

void __thiscall v8::internal::IdentityMapBase::InsertKey(IdentityMapBase *this,ulong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(*(long *)(this + 0x10) + -0x7cb0);
  uVar4 = uVar5;
  do {
    if (uVar4 == param_1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","address != ReadOnlyRoots(heap_).not_mapped_symbol().ptr()");
    }
    uVar2 = base::hash_value(param_1);
    iVar1 = *(int *)(this + 0x20);
    iVar3 = iVar1;
    if (iVar1 < 0) {
      iVar3 = iVar1 + 1;
    }
    iVar3 = (iVar3 >> 1) + -1;
    if (0 < iVar3) {
      do {
        uVar2 = *(uint *)(this + 0x24) & uVar2;
        uVar4 = *(ulong *)(*(long *)(this + 0x28) + (long)(int)uVar2 * 8);
        if (uVar4 == param_1) {
          return;
        }
        if (uVar4 == uVar5) {
          *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
          *(ulong *)(*(long *)(this + 0x28) + (long)(int)uVar2 * 8) = param_1;
          return;
        }
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (0 < iVar3);
    }
    Resize(this,iVar1 << 1);
    uVar4 = *(ulong *)(*(long *)(this + 0x10) + -0x7cb0);
  } while( true );
}

