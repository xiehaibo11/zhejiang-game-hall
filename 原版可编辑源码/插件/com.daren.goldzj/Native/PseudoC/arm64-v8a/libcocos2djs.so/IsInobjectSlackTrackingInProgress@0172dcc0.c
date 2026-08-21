
/* v8::internal::compiler::MapRef::IsInobjectSlackTrackingInProgress() const */

bool __thiscall v8::internal::compiler::MapRef::IsInobjectSlackTrackingInProgress(MapRef *this)

{
  long lVar1;
  uint uVar2;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar2 = *(uint *)(*(long *)**(undefined8 **)this + 0xb);
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
    uVar2 = *(uint *)(lVar1 + 0x24);
  }
  return uVar2 >> 0x1d != 0;
}

