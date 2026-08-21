
/* v8::internal::compiler::MapRef::SerializeForElementLoad() */

void __thiscall v8::internal::compiler::MapRef::SerializeForElementLoad(MapRef *this)

{
  MapData *this_00;
  JSHeapBroker *pJVar1;
  long local_28;
  
  if (*(int *)(*(long *)(this + 8) + 0x70) != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","broker()->mode() == JSHeapBroker::kSerializing");
  }
  this_00 = (MapData *)ObjectRef::data((ObjectRef *)this);
  if (*(int *)(this_00 + 8) == 1) {
    if (*(short *)(*(long *)(this_00 + 0x10) + 0x18) == 0xa2) {
      if (this_00[0xb8] == (MapData)0x0) {
        pJVar1 = *(JSHeapBroker **)(this + 8);
        this_00[0xb8] = (MapData)0x1;
        TraceScope::TraceScope
                  ((TraceScope *)&local_28,pJVar1,this_00,"MapData::SerializeForElementLoad");
        MapData::SerializePrototype(this_00,pJVar1);
        *(int *)(local_28 + 0x170) = *(int *)(local_28 + 0x170) + -1;
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsMap()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

