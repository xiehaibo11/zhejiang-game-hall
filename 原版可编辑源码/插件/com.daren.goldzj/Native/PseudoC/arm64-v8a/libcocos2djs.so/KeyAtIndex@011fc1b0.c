
/* v8::internal::IdentityMapBase::KeyAtIndex(int) const */

undefined8 __thiscall v8::internal::IdentityMapBase::KeyAtIndex(IdentityMapBase *this,int param_1)

{
  if (this[0x38] != (IdentityMapBase)0x0) {
    return *(undefined8 *)(*(long *)(this + 0x28) + (long)param_1 * 8);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","is_iterable()");
}

