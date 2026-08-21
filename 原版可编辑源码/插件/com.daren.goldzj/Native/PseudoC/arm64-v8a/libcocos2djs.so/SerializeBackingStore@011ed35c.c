
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x011ed488 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Serializer::ObjectSerializer::SerializeBackingStore(void*, int) */

ulong __thiscall
v8::internal::Serializer::ObjectSerializer::SerializeBackingStore
          (ObjectSerializer *this,void *param_1,int param_2)

{
  uint uVar1;
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this_00;
  TemplateHashMapEntry *pTVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  void *local_38;
  undefined1 auStack_18 [4];
  uchar local_14 [4];
  
  lVar3 = *(long *)(*(long *)(this + 8) + 0x70);
  uVar1 = *(int *)(*(long *)(this + 8) + 0x78) - 1;
  uVar4 = (ulong)(uVar1 & (uint)param_1);
  lVar5 = lVar3 + uVar4 * 0x18;
  if ((*(char *)(lVar5 + 0x14) != '\0') && (*(void **)(lVar3 + uVar4 * 0x18) != param_1)) {
    do {
      uVar4 = (ulong)((int)uVar4 + 1U & uVar1);
      if (*(char *)(lVar3 + uVar4 * 0x18 + 0x14) == '\0') break;
    } while (*(void **)(lVar3 + uVar4 * 0x18) != param_1);
    lVar5 = lVar3 + uVar4 * 0x18;
  }
  if (((lVar5 == 0) || (*(char *)(lVar5 + 0x14) == '\0')) || ((int)*(ulong *)(lVar5 + 8) == 6)) {
    this_00 = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(this + 0x18);
    local_14[0] = '\x1c';
    if (*(undefined1 **)(this_00 + 8) == *(undefined1 **)(this_00 + 0x10)) {
      std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
      __push_back_slow_path<unsigned_char_const&>(this_00,local_14);
    }
    else {
      **(undefined1 **)(this_00 + 8) = 0x1c;
      *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 1;
    }
    SnapshotByteSink::PutInt(*(ulong *)(this + 0x18),(char *)(long)param_2);
    SnapshotByteSink::PutRaw(*(uchar **)(this + 0x18),(uint)param_1,(char *)(ulong)(uint)param_2);
    uVar4 = SerializerAllocator::AllocateOffHeapBackingStore
                      ((SerializerAllocator *)(*(long *)(this + 8) + 0xd8));
    local_38 = param_1;
    pTVar2 = base::
             TemplateHashMapImpl<unsigned_long,v8::internal::SerializerReference,v8::base::KeyEqualityMatcher<long>,v8::base::DefaultAllocationPolicy>
             ::
             LookupOrInsert<v8::base::TemplateHashMapImpl<unsigned_long,v8::internal::SerializerReference,v8::base::KeyEqualityMatcher<long>,v8::base::DefaultAllocationPolicy>::LookupOrInsert(unsigned_long_const&,unsigned_int,v8::base::DefaultAllocationPolicy)::_lambda()_1_>
                       (*(undefined8 *)(this + 8),uVar4,&local_38,(ulong)param_1 & 0xffffffff,
                        auStack_18);
    *(ulong *)(pTVar2 + 8) = uVar4;
  }
  else {
    uVar4 = *(ulong *)(lVar5 + 8) & 0xffffffff00000000;
  }
  return uVar4 >> 0x20;
}

