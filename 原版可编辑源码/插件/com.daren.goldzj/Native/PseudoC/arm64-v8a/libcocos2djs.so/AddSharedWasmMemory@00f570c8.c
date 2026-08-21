
/* v8::internal::Isolate::AddSharedWasmMemory(v8::internal::Handle<v8::internal::WasmMemoryObject>)
    */

void __thiscall v8::internal::Isolate::AddSharedWasmMemory(Isolate *this,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(this + 0x95a0);
  lVar2 = *(long *)(this + 0x95a8);
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
  local_40 = 0;
  uStack_38 = param_2;
  puVar3 = (undefined8 *)WeakArrayList::AddToEnd(this,this + 0xfc8,&local_40);
  *(undefined8 *)(this + 0xfc8) = *puVar3;
  if (this != (Isolate *)0x0) {
    *(undefined8 *)(this + 0x95a0) = uVar1;
    *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
    if (*(long *)(this + 0x95a8) != lVar2) {
      *(long *)(this + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(this);
    }
  }
  return;
}

