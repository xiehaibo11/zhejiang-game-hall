
/* v8::internal::HeapEntry::SetNamedAutoIndexReference(v8::internal::HeapGraphEdge::Type, char
   const*, v8::internal::HeapEntry*, v8::internal::StringsStorage*) */

void __thiscall
v8::internal::HeapEntry::SetNamedAutoIndexReference
          (HeapEntry *this,uint param_2,long param_3,undefined8 param_4,StringsStorage *param_5)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  if (param_3 == 0) {
    uVar3 = StringsStorage::GetName(param_5,*(int *)(this + 4) + 1);
  }
  else {
    uVar3 = StringsStorage::GetFormatted((char *)param_5,"%d / %s");
  }
  lVar8 = *(long *)(this + 0x10);
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  lVar4 = *(long *)(lVar8 + 0x108);
  lVar6 = *(long *)(lVar8 + 0x110);
  uVar1 = 0;
  if (lVar6 - lVar4 != 0) {
    uVar1 = (lVar6 - lVar4 >> 3) * 0xaa - 1;
  }
  uVar7 = *(long *)(lVar8 + 0x128) + *(long *)(lVar8 + 0x120);
  if (uVar1 == uVar7) {
    std::__ndk1::
    deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>::
    __add_back_capacity((deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>
                         *)(lVar8 + 0x100));
    lVar4 = *(long *)(lVar8 + 0x108);
    lVar6 = *(long *)(lVar8 + 0x110);
    uVar7 = *(long *)(lVar8 + 0x120) + *(long *)(lVar8 + 0x128);
  }
  if (lVar6 == lVar4) {
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = (uint *)(*(long *)(lVar4 + (uVar7 / 0xaa) * 8) + (uVar7 % 0xaa) * 0x18);
  }
  uVar2 = *(uint *)this;
  *(undefined8 *)(puVar5 + 2) = param_4;
  *(undefined8 *)(puVar5 + 4) = uVar3;
  *puVar5 = uVar2 >> 1 & 0x7ffffff8 | param_2;
  *(long *)(lVar8 + 0x128) = *(long *)(lVar8 + 0x128) + 1;
  return;
}

