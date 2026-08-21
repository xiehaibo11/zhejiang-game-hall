
/* v8::internal::Serializer::ObjectSerializer::SerializeObject() */

void __thiscall v8::internal::Serializer::ObjectSerializer::SerializeObject(ObjectSerializer *this)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this_00;
  int iVar5;
  HeapObject *pHVar6;
  ulong uVar7;
  long lVar8;
  uchar local_3c [4];
  undefined8 local_38;
  
  pHVar6 = (HeapObject *)(this + 0x10);
  uVar3 = HeapObject::SizeFromMap
                    (pHVar6,*(ulong *)pHVar6 & 0xffffffff00000000 |
                            (ulong)*(uint *)(*(ulong *)pHVar6 - 1));
  uVar7 = *(ulong *)pHVar6 & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)pHVar6 - 1);
  uVar4 = ReadOnlyHeap::Contains();
  if (((uVar4 & 1) == 0) &&
     ((*(byte *)((*(ulong *)(this + 0x10) & 0xfffffffffffc0000) + 10) >> 5 & 1) == 0)) {
    iVar2 = *(int *)(*(long *)((*(ulong *)(this + 0x10) & 0xfffffffffffc0000) + 0x58) + 0x48);
    iVar5 = 5;
    if (iVar2 != 7) {
      iVar5 = iVar2;
    }
  }
  else {
    iVar5 = 0;
  }
  SerializePrologue(this,iVar5,uVar3,uVar7);
  if (*(int *)(this + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","0 == bytes_processed_so_far_");
  }
  lVar8 = *(long *)(this + 8);
  *(undefined4 *)(this + 0x20) = 4;
  iVar5 = *(int *)(lVar8 + 0xd0);
  *(int *)(lVar8 + 0xd0) = iVar5 + 1;
  if (((iVar5 < 0x1f) ||
      (uVar4 = SerializerDeserializer::CanBeDeferred(*(undefined8 *)(this + 0x10)), (uVar4 & 1) == 0
      )) && (uVar4 = (**(code **)(**(long **)(this + 8) + 0x30))
                               (*(long **)(this + 8),*(undefined8 *)(this + 0x10)), (uVar4 & 1) == 0
            )) {
    SerializeContent(this,uVar7,uVar3);
  }
  else {
    lVar1 = *(long *)(this + 8);
    local_38 = *(undefined8 *)(this + 0x10);
    if (*(undefined8 **)(lVar1 + 0xc0) == *(undefined8 **)(lVar1 + 200)) {
      std::__ndk1::vector<v8::internal::HeapObject,std::__ndk1::allocator<v8::internal::HeapObject>>
      ::__push_back_slow_path<v8::internal::HeapObject_const&>
                ((vector<v8::internal::HeapObject,std::__ndk1::allocator<v8::internal::HeapObject>>
                  *)(lVar1 + 0xb8),(HeapObject *)&local_38);
    }
    else {
      **(undefined8 **)(lVar1 + 0xc0) = local_38;
      *(long *)(lVar1 + 0xc0) = *(long *)(lVar1 + 0xc0) + 8;
    }
    this_00 = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(this + 0x18);
    local_3c[0] = '\x16';
    if (*(undefined1 **)(this_00 + 8) == *(undefined1 **)(this_00 + 0x10)) {
      std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
      __push_back_slow_path<unsigned_char_const&>(this_00,local_3c);
    }
    else {
      **(undefined1 **)(this_00 + 8) = 0x16;
      *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 1;
    }
  }
  *(int *)(lVar8 + 0xd0) = *(int *)(lVar8 + 0xd0) + -1;
  return;
}

