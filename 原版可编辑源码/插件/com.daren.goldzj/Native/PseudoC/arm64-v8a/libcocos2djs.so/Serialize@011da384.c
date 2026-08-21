
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x011da3e4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::PartialSerializer::Serialize(v8::internal::Context*, bool) */

void v8::internal::PartialSerializer::Serialize(Context *param_1,bool param_2)

{
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this;
  uint uVar1;
  TemplateHashMapEntry *pTVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uchar local_4c [4];
  undefined8 local_48;
  undefined1 auStack_28 [4];
  uchar local_24 [4];
  
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(ulong)param_2;
  local_48 = Context::global_proxy(param_1 + 0x1e8);
  uVar1 = *(uint *)(param_1 + 0x84);
  *(uint *)(param_1 + 0x84) = uVar1 + 1;
  pTVar2 = base::
           TemplateHashMapImpl<unsigned_long,v8::internal::SerializerReference,v8::base::KeyEqualityMatcher<long>,v8::base::DefaultAllocationPolicy>
           ::
           LookupOrInsert<v8::base::TemplateHashMapImpl<unsigned_long,v8::internal::SerializerReference,v8::base::KeyEqualityMatcher<long>,v8::base::DefaultAllocationPolicy>::LookupOrInsert(unsigned_long_const&,unsigned_int,v8::base::DefaultAllocationPolicy)::_lambda()_1_>
                     (local_48,&local_48,local_48,auStack_28);
  *(ulong *)(pTVar2 + 8) = (ulong)uVar1 << 0x20 | 0x16;
  uVar6 = *(ulong *)(*(long *)(param_1 + 0x68) + 0xa0);
  *(int *)(*(long *)(param_1 + 0x1e8) + 0x41f) = (int)uVar6;
  uVar3 = *(ulong *)(param_1 + 0x1e8);
  if ((uVar6 & 1) != 0) {
    uVar5 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    lVar4 = uVar3 + 0x41f;
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar3,lVar4,uVar6);
      uVar3 = *(ulong *)(param_1 + 0x1e8);
      uVar5 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
      lVar4 = uVar3 + 0x41f;
    }
    if ((uVar5 & 0x18) != 0) {
      if ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0) {
        Heap_GenerationalBarrierSlow(uVar3,lVar4,uVar6);
        uVar3 = *(ulong *)(param_1 + 0x1e8);
      }
    }
  }
  MathRandom::ResetContext(uVar3);
  uVar3 = *(ulong *)(param_1 + 0x1e8) & 0xffffffff00000000;
  *(undefined8 *)
   ((uVar3 | *(uint *)((uVar3 | *(uint *)(*(ulong *)(param_1 + 0x1e8) - 1)) + 0x13)) + 0x423) = 0;
  (**(code **)(*(long *)param_1 + 0x18))(param_1,0x12,0,(undefined8 *)(ulong)param_2);
  Serializer::SerializeDeferredObjects((Serializer *)param_1);
  if (*(long *)(param_1 + 0x1f0) != *(long *)(param_1 + 0x1f8)) {
    local_24[0] = '\x1d';
    this = (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(param_1 + 0x50);
    if (*(undefined1 **)(param_1 + 0x58) == *(undefined1 **)(param_1 + 0x60)) {
      std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
      __push_back_slow_path<unsigned_char_const&>(this,local_24);
    }
    else {
      **(undefined1 **)(param_1 + 0x58) = 0x1d;
      *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
    }
    SnapshotByteSink::Append((SnapshotByteSink *)this,(SnapshotByteSink *)(param_1 + 0x1f0));
    local_4c[0] = '\x1a';
    if (*(undefined1 **)(param_1 + 0x58) == *(undefined1 **)(param_1 + 0x60)) {
      std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
      __push_back_slow_path<unsigned_char_const&>(this,local_4c);
    }
    else {
      **(undefined1 **)(param_1 + 0x58) = 0x1a;
      *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
    }
  }
  Serializer::Pad((Serializer *)param_1,0);
  return;
}

