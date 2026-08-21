
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x011ed314 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Serializer::ObjectSerializer::SerializePrologue(v8::internal::SnapshotSpace, int,
   v8::internal::Map) */

void __thiscall
v8::internal::Serializer::ObjectSerializer::SerializePrologue
          (ObjectSerializer *this,int param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *pvVar3;
  ulong uVar4;
  TemplateHashMapEntry *pTVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  Logger *this_00;
  undefined8 local_58;
  undefined1 auStack_50 [4];
  undefined1 local_4c;
  undefined1 local_48;
  uchar local_44 [4];
  
  lVar6 = *(long *)(*(long *)(this + 8) + 0x98);
  if (lVar6 != 0) {
    lVar7 = *(long *)(this + 0x10) + -1;
    uVar1 = ~(uint)lVar7 + (uint)lVar7 * 0x8000;
    uVar1 = (uVar1 ^ uVar1 >> 0xc) * 5;
    uVar1 = (uVar1 ^ uVar1 >> 4) * 0x809;
    uVar2 = *(int *)(lVar6 + 0x20) - 1;
    uVar10 = (ulong)((uVar1 & 0x3fffffff ^ uVar1 >> 0x10) & uVar2);
    plVar8 = (long *)(*(long *)(lVar6 + 0x18) + uVar10 * 0x18);
    lVar11 = *plVar8;
    while (lVar11 != 0) {
      if (lVar11 == lVar7) {
        pcVar12 = (char *)0x0;
        if ((lVar7 != 0) && (plVar8 != (long *)0x0)) {
          pcVar12 = (char *)plVar8[1];
        }
        goto LAB_011ed158;
      }
      uVar10 = (ulong)((int)uVar10 + 1U & uVar2);
      plVar8 = (long *)(*(long *)(lVar6 + 0x18) + uVar10 * 0x18);
      lVar11 = *plVar8;
    }
    pcVar12 = (char *)0x0;
LAB_011ed158:
    this_00 = *(Logger **)(*(long *)(*(long *)(this + 8) + 0x68) + 0x9558);
    uVar10 = Logger::is_logging(this_00);
    if ((uVar10 & 1) != 0) {
      Logger::CodeNameEvent
                (this_00,*(long *)(this + 0x10) - 1,
                 (*(int **)(this + 0x18))[2] - **(int **)(this + 0x18),pcVar12);
    }
  }
  if (param_2 == 4) {
    uVar10 = SerializerAllocator::AllocateMap((SerializerAllocator *)(*(long *)(this + 8) + 0xd8));
    pvVar3 = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(this + 0x18);
    local_48 = 4;
    if (*(undefined1 **)(pvVar3 + 8) != *(undefined1 **)(pvVar3 + 0x10)) {
      **(undefined1 **)(pvVar3 + 8) = 4;
      goto LAB_011ed234;
    }
    lVar6 = -8;
LAB_011ed2a0:
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    __push_back_slow_path<unsigned_char_const&>(pvVar3,&stack0xffffffffffffffc0 + lVar6);
  }
  else {
    if (param_2 == 5) {
      pvVar3 = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(this + 0x18);
      local_44[0] = '\x05';
      if (*(undefined1 **)(pvVar3 + 8) == *(undefined1 **)(pvVar3 + 0x10)) {
        std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
        __push_back_slow_path<unsigned_char_const&>(pvVar3,local_44);
      }
      else {
        **(undefined1 **)(pvVar3 + 8) = 5;
        *(long *)(pvVar3 + 8) = *(long *)(pvVar3 + 8) + 1;
      }
      SnapshotByteSink::PutInt
                (*(ulong *)(this + 0x18),(char *)((long)((ulong)param_3 << 0x20) >> 0x22));
      if (*(short *)((*(ulong *)(this + 0x10) & 0xffffffff00000000 | 7) +
                    (ulong)*(uint *)(*(ulong *)(this + 0x10) - 1)) == 0x9a) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!object_.IsCode()");
      }
      uVar10 = SerializerAllocator::AllocateLargeObject
                         ((SerializerAllocator *)(*(long *)(this + 8) + 0xd8),param_3);
      uVar4 = uVar10;
      goto LAB_011ed2bc;
    }
    uVar10 = SerializerAllocator::Allocate
                       ((SerializerAllocator *)(*(long *)(this + 8) + 0xd8),param_2,param_3);
    pvVar3 = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(this + 0x18);
    local_4c = (undefined1)param_2;
    if (*(undefined1 **)(pvVar3 + 8) == *(undefined1 **)(pvVar3 + 0x10)) {
      lVar6 = -0xc;
      goto LAB_011ed2a0;
    }
    **(undefined1 **)(pvVar3 + 8) = local_4c;
LAB_011ed234:
    *(long *)(pvVar3 + 8) = *(long *)(pvVar3 + 8) + 1;
  }
  uVar4 = *(ulong *)(this + 0x18);
  SnapshotByteSink::PutInt(uVar4,(char *)((long)((ulong)param_3 << 0x20) >> 0x22));
LAB_011ed2bc:
  if (FLAG_serialization_statistics != '\0') {
    lVar6 = *(long *)(this + 8) + (long)param_2 * 8;
    lVar7 = *(long *)(lVar6 + 0x168);
    lVar9 = (ulong)*(ushort *)(param_4 + 7) * 4;
    lVar11 = (ulong)*(ushort *)(param_4 + 7) * 8;
    *(int *)(lVar7 + lVar9) = *(int *)(lVar7 + lVar9) + 1;
    lVar6 = *(long *)(lVar6 + 0x198);
    *(long *)(lVar6 + lVar11) = *(long *)(lVar6 + lVar11) + (long)(int)param_3;
  }
  local_58 = *(undefined8 *)(this + 0x10);
  pTVar5 = base::
           TemplateHashMapImpl<unsigned_long,v8::internal::SerializerReference,v8::base::KeyEqualityMatcher<long>,v8::base::DefaultAllocationPolicy>
           ::
           LookupOrInsert<v8::base::TemplateHashMapImpl<unsigned_long,v8::internal::SerializerReference,v8::base::KeyEqualityMatcher<long>,v8::base::DefaultAllocationPolicy>::LookupOrInsert(unsigned_long_const&,unsigned_int,v8::base::DefaultAllocationPolicy)::_lambda()_1_>
                     (*(undefined8 *)(this + 8),uVar4,&local_58,local_58,auStack_50);
  *(ulong *)(pTVar5 + 8) = uVar10;
  (**(code **)(**(long **)(this + 8) + 0x28))(*(long **)(this + 8),param_4);
  return;
}

