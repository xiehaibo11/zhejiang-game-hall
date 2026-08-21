
/* v8::internal::compiler::JSGlobalObjectData::JSGlobalObjectData(v8::internal::compiler::JSHeapBroker*,
   v8::internal::compiler::ObjectData**, v8::internal::Handle<v8::internal::JSGlobalObject>) */

void __thiscall
v8::internal::compiler::JSGlobalObjectData::JSGlobalObjectData
          (JSGlobalObjectData *this,long param_1,undefined8 param_3,ulong *param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong local_60;
  ulong local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  HeapObjectData::HeapObjectData();
  *(undefined4 *)(this + 0x1f) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  this[0x48] = (JSGlobalObjectData)0x0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = uVar2;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = uVar2;
  *(undefined4 *)(this + 0xa8) = 0x3f800000;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>>>
  ::rehash((__hash_table<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>>>
            *)(this + 0x78),100);
  uVar3 = *param_4;
  local_60 = uVar3 & 0xffffffff00000000;
  local_48 = 0;
  local_58 = local_60 | *(uint *)(uVar3 + 0xf);
  local_44 = 0;
  uStack_50 = 0;
  local_40 = 0;
  PrototypeIterator::Advance((PrototypeIterator *)&local_60);
  this[0xb0] = (JSGlobalObjectData)((int)local_58 != (int)uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

