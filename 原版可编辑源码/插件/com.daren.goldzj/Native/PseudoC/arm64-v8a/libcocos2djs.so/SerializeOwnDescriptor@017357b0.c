
/* v8::internal::compiler::MapRef::SerializeOwnDescriptor(v8::internal::InternalIndex) */

void __thiscall
v8::internal::compiler::MapRef::SerializeOwnDescriptor(MapRef *this,undefined8 param_2)

{
  MapData *pMVar1;
  
  if (*(int *)(*(long *)this + 8) == 2) {
    return;
  }
  if (*(int *)(*(long *)(this + 8) + 0x70) != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","broker()->mode() == JSHeapBroker::kSerializing");
  }
  pMVar1 = (MapData *)ObjectRef::data((ObjectRef *)this);
  if (*(int *)(pMVar1 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
  }
  if (*(short *)(*(long *)(pMVar1 + 0x10) + 0x18) == 0xa2) {
    MapData::SerializeOwnDescriptor(pMVar1,*(undefined8 *)(this + 8),param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsMap()");
}

