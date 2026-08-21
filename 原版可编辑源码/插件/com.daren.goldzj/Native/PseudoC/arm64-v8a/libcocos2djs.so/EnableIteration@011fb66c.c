
/* v8::internal::IdentityMapBase::EnableIteration() */

void __thiscall v8::internal::IdentityMapBase::EnableIteration(IdentityMapBase *this)

{
  if (this[0x38] == (IdentityMapBase)0x0) {
    this[0x38] = (IdentityMapBase)0x1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!is_iterable()");
}

