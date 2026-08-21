
/* v8::internal::HeapObjectsMap::FindOrAddEntry(unsigned long, unsigned int, bool) */

int __thiscall
v8::internal::HeapObjectsMap::FindOrAddEntry
          (HeapObjectsMap *this,ulong param_1,uint param_2,bool param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong *puVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  int local_60;
  undefined4 uStack_5c;
  ulong uStack_58;
  uint local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar2 = ~(uint)param_1 + (uint)param_1 * 0x8000;
  uVar2 = (uVar2 ^ uVar2 >> 0xc) * 5;
  uVar2 = (uVar2 ^ uVar2 >> 4) * 0x809;
  uVar2 = uVar2 & 0x3fffffff ^ uVar2 >> 0x10;
  uVar8 = (ulong)(*(int *)(this + 0x10) - 1U & uVar2);
  puVar6 = (ulong *)(*(long *)(this + 8) + uVar8 * 0x18);
  uVar9 = *puVar6;
  while (uVar9 != 0) {
    if (uVar9 == param_1) goto LAB_0119e2ac;
    uVar8 = (ulong)((int)uVar8 + 1U & *(int *)(this + 0x10) - 1U);
    puVar6 = (ulong *)(*(long *)(this + 8) + uVar8 * 0x18);
    uVar9 = *puVar6;
  }
  *puVar6 = param_1;
  puVar6[1] = 0;
  *(uint *)(puVar6 + 2) = uVar2;
  uVar1 = *(int *)(this + 0x14) + 1;
  *(uint *)(this + 0x14) = uVar1;
  if (*(uint *)(this + 0x10) <= uVar1 + (uVar1 >> 2)) {
    base::
    TemplateHashMapImpl<void*,void*,v8::base::KeyEqualityMatcher<void*>,v8::base::DefaultAllocationPolicy>
    ::Resize();
    uVar8 = (ulong)(*(int *)(this + 0x10) - 1U & uVar2);
    puVar6 = (ulong *)(*(long *)(this + 8) + uVar8 * 0x18);
    uVar9 = *puVar6;
    while ((uVar9 != 0 && (uVar9 != param_1))) {
      uVar8 = (ulong)((int)uVar8 + 1U & *(int *)(this + 0x10) - 1U);
      puVar6 = (ulong *)(*(long *)(this + 8) + uVar8 * 0x18);
      uVar9 = *puVar6;
    }
  }
LAB_0119e2ac:
  if (puVar6[1] == 0) {
    puVar6[1] = (*(long *)(this + 0x28) - *(long *)(this + 0x20) >> 3) * -0x5555555555555555;
    iVar10 = *(int *)this;
    *(int *)this = iVar10 + 2;
    uStack_4c = CONCAT31(uStack_4c._1_3_,param_3);
    puVar4 = *(undefined8 **)(this + 0x28);
    local_60 = iVar10;
    uStack_58 = param_1;
    local_50 = param_2;
    if (puVar4 < *(undefined8 **)(this + 0x30)) {
      puVar4[2] = CONCAT44(uStack_4c,param_2);
      puVar4[1] = param_1;
      *puVar4 = CONCAT44(uStack_5c,iVar10);
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + 0x18;
    }
    else {
      std::__ndk1::
      vector<v8::internal::HeapObjectsMap::EntryInfo,std::__ndk1::allocator<v8::internal::HeapObjectsMap::EntryInfo>>
      ::__push_back_slow_path<v8::internal::HeapObjectsMap::EntryInfo>
                ((vector<v8::internal::HeapObjectsMap::EntryInfo,std::__ndk1::allocator<v8::internal::HeapObjectsMap::EntryInfo>>
                  *)(this + 0x20),(EntryInfo *)&local_60);
    }
  }
  else {
    lVar3 = *(long *)(this + 0x20);
    uVar9 = (ulong)(int)puVar6[1];
    uVar8 = (*(long *)(this + 0x28) - lVar3 >> 3) * -0x5555555555555555;
    if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(bool *)(lVar3 + uVar9 * 0x18 + 0x14) = param_3;
    if (FLAG_heap_profiler_trace_objects != '\0') {
      PrintF("Update object size : %p with old size %d and new size %d\n",param_1,
             (ulong)*(uint *)(lVar3 + uVar9 * 0x18 + 0x10),(ulong)param_2);
    }
    piVar7 = (int *)(lVar3 + uVar9 * 0x18);
    iVar10 = *piVar7;
    piVar7[4] = param_2;
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

