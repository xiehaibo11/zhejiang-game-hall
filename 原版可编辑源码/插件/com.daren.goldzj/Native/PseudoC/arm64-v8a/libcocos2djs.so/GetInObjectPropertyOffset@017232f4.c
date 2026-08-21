
/* v8::internal::compiler::MapRef::GetInObjectPropertyOffset(int) const */

int __thiscall v8::internal::compiler::MapRef::GetInObjectPropertyOffset(MapRef *this,int param_1)

{
  long lVar1;
  uint uVar2;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar2 = (uint)*(byte *)(*(long *)**(undefined8 **)this + 4);
  }
  else {
    lVar1 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar1 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) != 0xa2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    if (*(ushort *)(lVar1 + 0x18) < 0xaa) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","InstanceTypeChecker::IsJSObject(instance_type())");
    }
    uVar2 = *(uint *)(lVar1 + 0x2c);
  }
  return (uVar2 + param_1) * 4;
}

