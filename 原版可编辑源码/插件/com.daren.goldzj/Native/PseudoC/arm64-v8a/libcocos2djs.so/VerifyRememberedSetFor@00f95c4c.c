
/* v8::internal::Heap::VerifyRememberedSetFor(v8::internal::HeapObject) */

void __thiscall v8::internal::Heap::VerifyRememberedSetFor(Heap *this,ulong param_2)

{
  int iVar1;
  Mutex *this_00;
  undefined **local_98;
  undefined8 **ppuStack_90;
  undefined8 **local_88;
  Heap *pHStack_80;
  __tree_node **local_78;
  __tree_node *local_70;
  undefined8 local_68;
  __tree_node **local_60;
  __tree_node *local_58;
  undefined8 local_50;
  ulong local_48;
  
  this_00 = *(Mutex **)((MemoryChunk *)(param_2 & 0xfffffffffffc0000) + 0xa0);
  local_48 = param_2;
  if (this_00 != (Mutex *)0x0) {
    base::Mutex::Lock(this_00);
  }
  iVar1 = HeapObject::SizeFromMap
                    ((HeapObject *)&local_48,
                     param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
  local_60 = &local_58;
  local_58 = (__tree_node *)0x0;
  local_78 = &local_70;
  local_70 = (__tree_node *)0x0;
  local_50 = 0;
  local_68 = 0;
  if ((*(byte *)((local_48 & 0xfffffffffffc0000) + 8) & 0x18) == 0) {
    CollectSlots<(v8::internal::RememberedSetType)0>
              ((MemoryChunk *)(param_2 & 0xfffffffffffc0000),param_2 - 1,(param_2 - 1) + (long)iVar1
               ,(set *)&local_60,(set *)&local_78);
    local_98 = &PTR__ObjectVisitor_01ca7980;
    ppuStack_90 = &local_60;
    local_88 = &local_78;
    pHStack_80 = this;
    HeapObject::IterateBody((HeapObject *)&local_48,(ObjectVisitor *)&local_98);
  }
  std::__ndk1::
  __tree<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>,std::__ndk1::less<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>>>
  ::destroy((__tree<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>,std::__ndk1::less<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>>>
             *)&local_78,local_70);
  std::__ndk1::
  __tree<unsigned_long,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<unsigned_long>>::
  destroy((__tree<unsigned_long,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<unsigned_long>>
           *)&local_60,local_58);
  if (this_00 != (Mutex *)0x0) {
    base::Mutex::Unlock(this_00);
  }
  return;
}

