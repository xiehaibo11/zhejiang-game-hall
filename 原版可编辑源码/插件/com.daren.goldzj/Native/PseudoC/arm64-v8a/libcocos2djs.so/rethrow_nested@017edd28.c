
/* std::nested_exception::rethrow_nested() const */

void __thiscall std::nested_exception::rethrow_nested(nested_exception *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_28;
  
  lVar3 = *(long *)(this + 8);
  __cxa_decrement_exception_refcount(0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  uVar2 = *(undefined8 *)(this + 8);
  local_28 = uVar2;
  __cxa_increment_exception_refcount(uVar2);
  uVar1 = rethrow_exception(&local_28);
  __cxa_decrement_exception_refcount(uVar2);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar1);
}

