
/* v8::internal::compiler::MapRef::SerializeOwnDescriptors() */

void __thiscall v8::internal::compiler::MapRef::SerializeOwnDescriptors(MapRef *this)

{
  MapData *pMVar1;
  JSHeapBroker *pJVar2;
  ulong uVar3;
  ulong uVar4;
  long local_38;
  
  if (*(int *)(*(long *)this + 8) != 2) {
    if (*(int *)(*(long *)(this + 8) + 0x70) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","broker()->mode() == JSHeapBroker::kSerializing");
    }
    pMVar1 = (MapData *)ObjectRef::data((ObjectRef *)this);
    if (*(int *)(pMVar1 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(pMVar1 + 0x10) + 0x18) != 0xa2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    if (pMVar1[0x68] == (MapData)0x0) {
      pJVar2 = *(JSHeapBroker **)(this + 8);
      pMVar1[0x68] = (MapData)0x1;
      TraceScope::TraceScope
                ((TraceScope *)&local_38,pJVar2,pMVar1,"MapData::SerializeOwnDescriptors");
      uVar4 = (ulong)(*(uint *)(**(long **)pMVar1 + 0xb) >> 10) & 0x3ff;
      if ((int)uVar4 != 0) {
        uVar3 = 0;
        do {
          MapData::SerializeOwnDescriptor(pMVar1,pJVar2,uVar3);
          uVar3 = uVar3 + 1;
        } while (uVar4 != uVar3);
      }
      *(int *)(local_38 + 0x170) = *(int *)(local_38 + 0x170) + -1;
    }
  }
  return;
}

