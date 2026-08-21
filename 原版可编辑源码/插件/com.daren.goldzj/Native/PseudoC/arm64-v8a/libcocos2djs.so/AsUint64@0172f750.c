
/* v8::internal::compiler::BigIntRef::AsUint64() const */

undefined8 __thiscall v8::internal::compiler::BigIntRef::AsUint64(BigIntRef *this)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_18;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    local_18 = *(undefined8 *)**(undefined8 **)this;
    uVar1 = BigInt::AsUint64((BigInt *)&local_18,(bool *)0x0);
  }
  else {
    lVar2 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar2 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar2 + 0x10) + 0x18) != 0x41) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsBigInt()");
    }
    uVar1 = *(undefined8 *)(lVar2 + 0x18);
  }
  return uVar1;
}

