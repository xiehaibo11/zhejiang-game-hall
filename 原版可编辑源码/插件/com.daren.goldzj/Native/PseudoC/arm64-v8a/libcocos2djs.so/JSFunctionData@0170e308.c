
/* v8::internal::compiler::JSFunctionData::JSFunctionData(v8::internal::compiler::JSHeapBroker*,
   v8::internal::compiler::ObjectData**, v8::internal::Handle<v8::internal::JSFunction>) */

void __thiscall
v8::internal::compiler::JSFunctionData::JSFunctionData
          (JSFunctionData *this,long param_1,undefined8 param_3,ulong *param_4)

{
  uint uVar1;
  JSFunctionData JVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  HeapObjectData::HeapObjectData();
  *(undefined4 *)(this + 0x1f) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  this[0x48] = (JSFunctionData)0x0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = uVar3;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = uVar3;
  *(undefined4 *)(this + 0xa8) = 0x3f800000;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>>>
  ::rehash((__hash_table<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,v8::internal::compiler::ObjectData*>>>
            *)(this + 0x78),100);
  uVar5 = *param_4;
  JVar2 = (JSFunctionData)0x0;
  uVar4 = uVar5 & 0xffffffff00000000;
  uVar1 = *(uint *)((uVar4 | *(uint *)(uVar5 + 0xb)) + 3);
  if (uVar1 != 0x84) {
    if (((uVar1 & 1) == 0) ||
       (1 < *(ushort *)((uVar4 | 7) + (ulong)*(uint *)((uVar4 | uVar1) - 1)) - 0x95)) {
      JVar2 = (JSFunctionData)
              (*(short *)((uVar4 | 7) +
                         (ulong)*(uint *)((uVar4 | *(uint *)((uVar4 | *(uint *)(uVar5 + 0x13)) + 3))
                                         - 1)) == 0x9f);
    }
    else {
      JVar2 = (JSFunctionData)0x0;
    }
  }
  this[0xb0] = JVar2;
  uVar5 = *param_4;
  uVar4 = uVar5 & 0xffffffff00000000;
  if (*(char *)((uVar4 | 9) + (ulong)*(uint *)(uVar5 - 1)) < '\0') {
    JVar2 = (JSFunctionData)
            (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar4 + *(uint *)(uVar5 + 0x1b) + -1)) ==
            0xa2);
  }
  else {
    JVar2 = (JSFunctionData)0x0;
  }
  this[0xb1] = JVar2;
  uVar5 = *param_4;
  uVar4 = uVar5 & 0xffffffff00000000;
  if (*(char *)((uVar4 | 9) + (ulong)*(uint *)(uVar5 - 1)) < '\0') {
    if (((*(byte *)((uVar4 | 9) + (ulong)*(uint *)(uVar5 - 1)) & 1) == 0) &&
       (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar4 + *(uint *)(uVar5 + 0x1b) + -1)) != 0xa2)) {
      JVar2 = (JSFunctionData)(*(uint *)(uVar5 + 0x1b) != *(uint *)(uVar4 + 0xa8));
    }
    else {
      JVar2 = (JSFunctionData)0x1;
    }
  }
  else {
    JVar2 = (JSFunctionData)0x0;
  }
  this[0xb2] = JVar2;
  uVar4 = *param_4;
  uVar5 = uVar4 & 0xffffffff00000000 | 9;
  if (((*(char *)(uVar5 + *(uint *)(uVar4 - 1)) < '\0') &&
      ((*(byte *)(uVar5 + *(uint *)(uVar4 - 1)) >> 6 & 1) != 0)) ||
     (((*(uint *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xb)) + 0x1b) & 0x1f) - 0xd
      & 0xff) < 4)) {
    JVar2 = (JSFunctionData)(*(byte *)(uVar5 + *(uint *)(uVar4 - 1)) & 1);
  }
  else {
    JVar2 = (JSFunctionData)0x1;
  }
  this[0xb3] = JVar2;
  this[0xb4] = (JSFunctionData)0x0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  return;
}

