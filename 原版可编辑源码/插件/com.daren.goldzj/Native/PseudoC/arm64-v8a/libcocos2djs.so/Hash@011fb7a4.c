
/* v8::internal::IdentityMapBase::Hash(unsigned long) const */

void __thiscall v8::internal::IdentityMapBase::Hash(IdentityMapBase *this,ulong param_1)

{
  if (*(ulong *)(*(long *)(this + 0x10) + -0x7cb0) != param_1) {
    base::hash_value(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","address != ReadOnlyRoots(heap_).not_mapped_symbol().ptr()");
}

