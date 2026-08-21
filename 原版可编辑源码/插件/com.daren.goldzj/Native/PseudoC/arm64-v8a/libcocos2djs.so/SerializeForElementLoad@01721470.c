
/* v8::internal::compiler::MapData::SerializeForElementLoad(v8::internal::compiler::JSHeapBroker*)
    */

void __thiscall
v8::internal::compiler::MapData::SerializeForElementLoad(MapData *this,JSHeapBroker *param_1)

{
  long local_28;
  
  if (this[0xb8] == (MapData)0x0) {
    this[0xb8] = (MapData)0x1;
    TraceScope::TraceScope((TraceScope *)&local_28,param_1,this,"MapData::SerializeForElementLoad");
    SerializePrototype(this,param_1);
    *(int *)(local_28 + 0x170) = *(int *)(local_28 + 0x170) + -1;
  }
  return;
}

