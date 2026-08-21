
/* v8::internal::compiler::MapRef::UnusedPropertyFields() const */

uint __thiscall v8::internal::compiler::MapRef::UnusedPropertyFields(MapRef *this)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    lVar2 = *(long *)**(undefined8 **)this;
    bVar1 = *(byte *)(lVar2 + 5);
    uVar3 = (uint)bVar1;
    if (2 < bVar1) {
      return (uint)*(byte *)(lVar2 + 3) - (uint)bVar1;
    }
  }
  else {
    lVar2 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar2 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar2 + 0x10) + 0x18) != 0xa2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    uVar3 = *(uint *)(lVar2 + 0x3c);
  }
  return uVar3;
}

