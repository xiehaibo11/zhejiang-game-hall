
/* v8::internal::compiler::JSHeapBroker::GetData(v8::internal::Handle<v8::internal::Object>) const
    */

undefined8 __thiscall
v8::internal::compiler::JSHeapBroker::GetData(JSHeapBroker *this,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong local_18;
  
  local_18 = param_2;
  lVar1 = RefsMap::Lookup(*(RefsMap **)(this + 0x30),&local_18);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  return uVar2;
}

