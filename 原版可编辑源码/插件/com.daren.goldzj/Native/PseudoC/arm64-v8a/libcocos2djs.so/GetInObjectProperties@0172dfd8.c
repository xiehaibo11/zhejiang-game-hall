
/* v8::internal::compiler::MapRef::GetInObjectProperties() const */

int __thiscall v8::internal::compiler::MapRef::GetInObjectProperties(MapRef *this)

{
  long lVar1;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    lVar1 = *(long *)**(undefined8 **)this;
    return (uint)*(byte *)(lVar1 + 3) - (uint)*(byte *)(lVar1 + 4);
  }
  lVar1 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar1 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
  }
  if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) != 0xa2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsMap()");
  }
  if (0xa9 < *(ushort *)(lVar1 + 0x18)) {
    return *(int *)(lVar1 + 0x30);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","InstanceTypeChecker::IsJSObject(instance_type())");
}

