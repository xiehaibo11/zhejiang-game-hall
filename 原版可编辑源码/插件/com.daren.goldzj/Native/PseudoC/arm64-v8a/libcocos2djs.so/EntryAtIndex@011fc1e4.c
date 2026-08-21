
/* v8::internal::IdentityMapBase::EntryAtIndex(int) const */

long __thiscall v8::internal::IdentityMapBase::EntryAtIndex(IdentityMapBase *this,int param_1)

{
  if (this[0x38] != (IdentityMapBase)0x0) {
    return *(long *)(this + 0x30) + (long)param_1 * 8;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","is_iterable()");
}

