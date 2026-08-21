
/* v8::internal::compiler::JSGlobalProxyData::JSGlobalProxyData(v8::internal::compiler::JSHeapBroker*,
   v8::internal::compiler::ObjectData**, v8::internal::Handle<v8::internal::JSGlobalProxy>) */

void __thiscall
v8::internal::compiler::JSGlobalProxyData::JSGlobalProxyData(JSGlobalProxyData *this,long param_1)

{
  undefined8 uVar1;
  
  HeapObjectData::HeapObjectData();
  *(undefined4 *)(this + 0x1f) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  this[0x48] = (JSGlobalProxyData)0x0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa8) = 0x3f800000;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = uVar1;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = uVar1;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>>>
  ::rehash((__hash_table<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>>>
            *)(this + 0x78),100);
  return;
}

