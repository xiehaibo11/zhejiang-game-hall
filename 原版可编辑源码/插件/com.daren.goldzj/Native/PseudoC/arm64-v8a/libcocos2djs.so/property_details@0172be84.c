
/* v8::internal::compiler::PropertyCellRef::property_details() const */

int __thiscall v8::internal::compiler::PropertyCellRef::property_details(PropertyCellRef *this)

{
  long lVar1;
  int iVar2;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    iVar2 = *(int *)(*(long *)**(undefined8 **)this + 7) >> 1;
  }
  else {
    lVar1 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar1 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) != 0xa5) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsPropertyCell()");
    }
    iVar2 = *(int *)(lVar1 + 0x18);
  }
  return iVar2;
}

