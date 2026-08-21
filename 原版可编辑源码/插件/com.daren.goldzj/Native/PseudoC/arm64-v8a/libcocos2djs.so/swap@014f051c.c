
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,
   std::__ndk1::shared_ptr<v8::internal::BackingStore> >,
   std::__ndk1::__unordered_map_hasher<v8::internal::JSArrayBuffer,
   std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,
   std::__ndk1::shared_ptr<v8::internal::BackingStore> >,
   v8::internal::LocalArrayBufferTracker::Hasher, true>,
   std::__ndk1::__unordered_map_equal<v8::internal::JSArrayBuffer,
   std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,
   std::__ndk1::shared_ptr<v8::internal::BackingStore> >,
   std::__ndk1::equal_to<v8::internal::JSArrayBuffer>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,
   std::__ndk1::shared_ptr<v8::internal::BackingStore> > >
   >::swap(std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,
   std::__ndk1::shared_ptr<v8::internal::BackingStore> >,
   std::__ndk1::__unordered_map_hasher<v8::internal::JSArrayBuffer,
   std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,
   std::__ndk1::shared_ptr<v8::internal::BackingStore> >,
   v8::internal::LocalArrayBufferTracker::Hasher, true>,
   std::__ndk1::__unordered_map_equal<v8::internal::JSArrayBuffer,
   std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,
   std::__ndk1::shared_ptr<v8::internal::BackingStore> >,
   std::__ndk1::equal_to<v8::internal::JSArrayBuffer>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,
   std::__ndk1::shared_ptr<v8::internal::BackingStore> > > >&) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::__unordered_map_hasher<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,v8::internal::LocalArrayBufferTracker::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::equal_to<v8::internal::JSArrayBuffer>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>>>
::swap(__hash_table<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::__unordered_map_hasher<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,v8::internal::LocalArrayBufferTracker::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::equal_to<v8::internal::JSArrayBuffer>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>>>
       *this,__hash_table *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  __hash_table *p_Var6;
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::__unordered_map_hasher<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,v8::internal::LocalArrayBufferTracker::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::equal_to<v8::internal::JSArrayBuffer>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>>>
  *p_Var7;
  ulong uVar8;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)this;
  *(undefined8 *)this = 0;
  uVar5 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  pvVar4 = *(void **)this;
  *(undefined8 *)this = uVar5;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)param_1;
  *(undefined8 *)param_1 = uVar9;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  uVar5 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar5;
  p_Var7 = this + 0x10;
  uVar5 = *(undefined8 *)p_Var7;
  p_Var6 = param_1 + 0x10;
  *(undefined8 *)p_Var7 = *(undefined8 *)p_Var6;
  *(undefined8 *)p_Var6 = uVar5;
  uVar5 = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  uVar2 = *(undefined4 *)(this + 0x20);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  if (*(long *)(this + 0x18) != 0) {
    uVar1 = *(ulong *)(this + 8);
    uVar8 = *(ulong *)(*(long *)(this + 0x10) + 8);
    if ((uVar1 & uVar1 - 1) == 0) {
      uVar8 = uVar1 - 1 & uVar8;
    }
    else if (uVar1 <= uVar8) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar8 / uVar1;
      }
      uVar8 = uVar8 - uVar3 * uVar1;
    }
    *(__hash_table<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::__unordered_map_hasher<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,v8::internal::LocalArrayBufferTracker::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::equal_to<v8::internal::JSArrayBuffer>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>>>
      **)(*(long *)this + uVar8 * 8) = p_Var7;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    uVar8 = *(ulong *)(*(long *)(param_1 + 0x10) + 8);
    if ((uVar1 & uVar1 - 1) == 0) {
      uVar8 = uVar1 - 1 & uVar8;
    }
    else if (uVar1 <= uVar8) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar8 / uVar1;
      }
      uVar8 = uVar8 - uVar3 * uVar1;
    }
    *(__hash_table **)(*(long *)param_1 + uVar8 * 8) = p_Var6;
  }
  return;
}

