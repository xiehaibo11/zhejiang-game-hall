
/* v8::internal::IdentityMapBase::FindEntry(unsigned long) const */

long __thiscall v8::internal::IdentityMapBase::FindEntry(IdentityMapBase *this,ulong param_1)

{
  uint uVar1;
  long lVar2;
  
  if (this[0x38] == (IdentityMapBase)0x0) {
    if ((*(int *)(this + 0x1c) == 0) || (uVar1 = Lookup(this,param_1), (int)uVar1 < 0)) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(this + 0x30) + (ulong)uVar1 * 8;
    }
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!is_iterable()");
}

