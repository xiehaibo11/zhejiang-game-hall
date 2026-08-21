
/* v8::internal::MaterializedObjectStore::Set(unsigned long,
   v8::internal::Handle<v8::internal::FixedArray>) */

void __thiscall
v8::internal::MaterializedObjectStore::Set
          (MaterializedObjectStore *this,ulong param_1,ulong *param_3)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  int iVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_38;
  
  puVar6 = *(ulong **)(this + 8);
  puVar3 = *(ulong **)(this + 0x10);
  local_38 = param_1;
  if ((long)puVar3 - (long)puVar6 != 0) {
    puVar7 = puVar6;
    if (*puVar6 != param_1) {
      do {
        if (puVar3 + -1 == puVar7) goto LAB_00f1ecf4;
        puVar1 = puVar7 + 1;
        puVar7 = puVar7 + 1;
      } while (*puVar1 != param_1);
    }
    iVar5 = (int)((ulong)((long)puVar7 - (long)puVar6) >> 3);
    if (puVar7 == puVar3) {
      iVar5 = -1;
    }
    if (iVar5 != -1) goto LAB_00f1ed20;
  }
LAB_00f1ecf4:
  iVar5 = (int)((ulong)((long)puVar3 - (long)puVar6) >> 3);
  if (*(ulong **)(this + 0x18) == puVar3) {
    std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>::
    __push_back_slow_path<unsigned_long_const&>
              ((vector<unsigned_long,std::__ndk1::allocator<unsigned_long>> *)(this + 8),&local_38);
  }
  else {
    *puVar3 = param_1;
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  }
LAB_00f1ed20:
  puVar3 = (ulong *)EnsureStackEntries(this,iVar5 + 1);
  uVar9 = *puVar3;
  uVar8 = *param_3;
  lVar2 = uVar9 + (long)(iVar5 << 2);
  *(int *)(lVar2 + 7) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar4 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    lVar2 = lVar2 + 7;
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,lVar2,uVar8);
      uVar4 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,lVar2,uVar8);
    }
  }
  return;
}

