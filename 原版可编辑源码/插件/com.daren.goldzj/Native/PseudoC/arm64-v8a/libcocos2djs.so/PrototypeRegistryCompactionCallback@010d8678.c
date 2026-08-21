
/* v8::internal::JSObject::PrototypeRegistryCompactionCallback(v8::internal::HeapObject, int, int)
    */

void v8::internal::JSObject::PrototypeRegistryCompactionCallback
               (ulong param_1,undefined8 param_2,int param_3)

{
  *(int *)((param_1 & 0xffffffff00000000 | (ulong)*(uint *)(param_1 + 0x23)) + 0xb) = param_3 << 1;
  return;
}

