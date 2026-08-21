
/* v8::internal::IdentityMapBase::NextIndex(int) const */

int __thiscall v8::internal::IdentityMapBase::NextIndex(IdentityMapBase *this,int param_1)

{
  long lVar1;
  
  if (this[0x38] == (IdentityMapBase)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","is_iterable()");
  }
  lVar1 = (long)param_1;
  do {
    lVar1 = lVar1 + 1;
    if (*(int *)(this + 0x20) <= lVar1) {
      return *(int *)(this + 0x20);
    }
    param_1 = param_1 + 1;
  } while (*(long *)(*(long *)(this + 0x28) + lVar1 * 8) ==
           *(long *)(*(long *)(this + 0x10) + -0x7cb0));
  return param_1;
}

