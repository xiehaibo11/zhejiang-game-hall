
/* v8::internal::compiler::JSObjectRef::GetElementsKind() const */

byte __thiscall v8::internal::compiler::JSObjectRef::GetElementsKind(JSObjectRef *this)

{
  long lVar1;
  byte *pbVar2;
  ObjectRef local_20 [16];
  
  local_20 = (ObjectRef  [16])HeapObjectRef::map((HeapObjectRef *)this);
  if (*(int *)(local_20._0_8_ + 1) == 2) {
    pbVar2 = (byte *)(*(long *)*local_20._0_8_ + 10);
  }
  else {
    lVar1 = ObjectRef::data(local_20);
    if (*(int *)(lVar1 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) != 0xa2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    pbVar2 = (byte *)(lVar1 + 0x21);
  }
  return *pbVar2 >> 3;
}

