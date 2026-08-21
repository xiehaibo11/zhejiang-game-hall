
/* v8::internal::compiler::MapData::SerializeOwnDescriptors(v8::internal::compiler::JSHeapBroker*)
    */

void __thiscall
v8::internal::compiler::MapData::SerializeOwnDescriptors(MapData *this,JSHeapBroker *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long local_38;
  
  if (this[0x68] == (MapData)0x0) {
    this[0x68] = (MapData)0x1;
    TraceScope::TraceScope((TraceScope *)&local_38,param_1,this,"MapData::SerializeOwnDescriptors");
    uVar2 = (ulong)(*(uint *)(**(long **)this + 0xb) >> 10) & 0x3ff;
    if ((int)uVar2 != 0) {
      uVar1 = 0;
      do {
        SerializeOwnDescriptor(this,param_1,uVar1);
        uVar1 = uVar1 + 1;
      } while (uVar2 != uVar1);
    }
    *(int *)(local_38 + 0x170) = *(int *)(local_38 + 0x170) + -1;
  }
  return;
}

