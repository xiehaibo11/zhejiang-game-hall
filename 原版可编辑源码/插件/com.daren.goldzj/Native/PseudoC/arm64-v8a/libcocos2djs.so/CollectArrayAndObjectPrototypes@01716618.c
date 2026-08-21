
/* v8::internal::compiler::JSHeapBroker::CollectArrayAndObjectPrototypes() */

void __thiscall
v8::internal::compiler::JSHeapBroker::CollectArrayAndObjectPrototypes(JSHeapBroker *this)

{
  uint *puVar1;
  uint uVar2;
  Isolate *pIVar3;
  ulong uVar4;
  ulong uVar5;
  Isolate *local_48;
  ulong local_28;
  
  if (*(int *)(this + 0x70) != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","mode() == kSerializing");
  }
  if (*(long *)(this + 0x60) == 0) {
    pIVar3 = *(Isolate **)this;
    uVar4 = *(ulong *)(pIVar3 + 0x8e38);
    if ((uVar4 & 1) != 0) goto LAB_017166bc;
    do {
      do {
        uVar2 = *(uint *)(uVar4 + 0x103);
        uVar5 = uVar4 & 0xffffffff00000000;
        local_28 = uVar5 | *(uint *)(uVar4 + 0xe7);
        local_48 = pIVar3;
        std::__ndk1::
        unordered_set<v8::internal::Handle<v8::internal::JSObject>,v8::internal::Handle<v8::internal::JSObject>::hash,v8::internal::Handle<v8::internal::JSObject>::equal_to,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::JSObject>>>
        ::emplace<v8::internal::JSObject,v8::internal::Isolate*>
                  ((unordered_set<v8::internal::Handle<v8::internal::JSObject>,v8::internal::Handle<v8::internal::JSObject>::hash,v8::internal::Handle<v8::internal::JSObject>::equal_to,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::JSObject>>>
                    *)(this + 0x38),(JSObject *)&local_28,&local_48);
        local_48 = *(Isolate **)this;
        local_28 = uVar5 | uVar2;
        std::__ndk1::
        unordered_set<v8::internal::Handle<v8::internal::JSObject>,v8::internal::Handle<v8::internal::JSObject>::hash,v8::internal::Handle<v8::internal::JSObject>::equal_to,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::JSObject>>>
        ::emplace<v8::internal::JSObject,v8::internal::Isolate*>
                  ((unordered_set<v8::internal::Handle<v8::internal::JSObject>,v8::internal::Handle<v8::internal::JSObject>::hash,v8::internal::Handle<v8::internal::JSObject>::equal_to,v8::internal::ZoneAllocator<v8::internal::Handle<v8::internal::JSObject>>>
                    *)(this + 0x38),(JSObject *)&local_28,&local_48);
        puVar1 = (uint *)(uVar4 + 0x41f);
        pIVar3 = *(Isolate **)this;
        uVar4 = uVar5 | *puVar1;
      } while ((*puVar1 & 1) == 0);
LAB_017166bc:
    } while ((int)uVar4 != *(int *)(pIVar3 + 0xa0));
    if (*(long *)(this + 0x60) != 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!array_and_object_prototypes_.empty()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","array_and_object_prototypes_.empty()");
}

