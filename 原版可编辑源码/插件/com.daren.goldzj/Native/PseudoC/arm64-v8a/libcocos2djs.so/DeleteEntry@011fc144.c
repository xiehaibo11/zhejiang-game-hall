
/* v8::internal::IdentityMapBase::DeleteEntry(unsigned long, void**) */

undefined8 __thiscall
v8::internal::IdentityMapBase::DeleteEntry(IdentityMapBase *this,ulong param_1,void **param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (this[0x38] == (IdentityMapBase)0x0) {
    if ((*(int *)(this + 0x1c) == 0) || (iVar1 = Lookup(this,param_1), iVar1 < 0)) {
      uVar2 = 0;
    }
    else {
      DeleteIndex(this,iVar1,param_2);
      uVar2 = 1;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!is_iterable()");
}

