
/* v8::internal::HeapObjectsMap::MoveObject(unsigned long, unsigned long, int) */

bool __thiscall
v8::internal::HeapObjectsMap::MoveObject
          (HeapObjectsMap *this,ulong param_1,ulong param_2,int param_3)

{
  uint uVar1;
  TemplateHashMapImpl<void*,void*,v8::base::KeyEqualityMatcher<void*>,v8::base::DefaultAllocationPolicy>
  *this_00;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong *puVar8;
  void *local_58;
  
  if (param_1 == param_2) {
    bVar2 = false;
  }
  else {
    uVar7 = ~(uint)param_1 + (uint)param_1 * 0x8000;
    uVar7 = (uVar7 ^ uVar7 >> 0xc) * 5;
    uVar7 = (uVar7 ^ uVar7 >> 4) * 0x809;
    this_00 = (TemplateHashMapImpl<void*,void*,v8::base::KeyEqualityMatcher<void*>,v8::base::DefaultAllocationPolicy>
               *)(this + 8);
    local_58 = (void *)param_1;
    uVar3 = base::
            TemplateHashMapImpl<void*,void*,v8::base::KeyEqualityMatcher<void*>,v8::base::DefaultAllocationPolicy>
            ::Remove(this_00,&local_58,uVar7 & 0x3fffffff ^ uVar7 >> 0x10);
    uVar7 = (uint)param_2;
    if (uVar3 == 0) {
      uVar7 = ~uVar7 + uVar7 * 0x8000;
      uVar7 = (uVar7 ^ uVar7 >> 0xc) * 5;
      uVar7 = (uVar7 ^ uVar7 >> 4) * 0x809;
      local_58 = (void *)param_2;
      lVar4 = base::
              TemplateHashMapImpl<void*,void*,v8::base::KeyEqualityMatcher<void*>,v8::base::DefaultAllocationPolicy>
              ::Remove(this_00,&local_58,uVar7 & 0x3fffffff ^ uVar7 >> 0x10);
      if (lVar4 != 0) {
        uVar5 = (ulong)(int)lVar4;
        uVar6 = (*(long *)(this + 0x28) - *(long *)(this + 0x20) >> 3) * -0x5555555555555555;
        if (uVar6 < uVar5 || uVar6 - uVar5 == 0) goto LAB_0119e07c;
        *(undefined8 *)(*(long *)(this + 0x20) + uVar5 * 0x18 + 8) = 0;
      }
    }
    else {
      uVar7 = ~uVar7 + uVar7 * 0x8000;
      uVar7 = (uVar7 ^ uVar7 >> 0xc) * 5;
      uVar7 = (uVar7 ^ uVar7 >> 4) * 0x809;
      uVar7 = uVar7 & 0x3fffffff ^ uVar7 >> 0x10;
      uVar5 = (ulong)(*(int *)(this + 0x10) - 1U & uVar7);
      puVar8 = (ulong *)(*(long *)(this + 8) + uVar5 * 0x18);
      uVar6 = *puVar8;
      while (uVar6 != 0) {
        if (uVar6 == param_2) goto LAB_0119df6c;
        uVar5 = (ulong)((int)uVar5 + 1U & *(int *)(this + 0x10) - 1U);
        puVar8 = (ulong *)(*(long *)(this + 8) + uVar5 * 0x18);
        uVar6 = *puVar8;
      }
      *puVar8 = param_2;
      puVar8[1] = 0;
      *(uint *)(puVar8 + 2) = uVar7;
      uVar1 = *(int *)(this + 0x14) + 1;
      *(uint *)(this + 0x14) = uVar1;
      if (*(uint *)(this + 0x10) <= uVar1 + (uVar1 >> 2)) {
        base::
        TemplateHashMapImpl<void*,void*,v8::base::KeyEqualityMatcher<void*>,v8::base::DefaultAllocationPolicy>
        ::Resize(this_00);
        uVar5 = (ulong)(*(int *)(this + 0x10) - 1U & uVar7);
        puVar8 = (ulong *)(*(long *)(this + 8) + uVar5 * 0x18);
        uVar6 = *puVar8;
        while ((uVar6 != 0 && (uVar6 != param_2))) {
          uVar5 = (ulong)((int)uVar5 + 1U & *(int *)(this + 0x10) - 1U);
          puVar8 = (ulong *)(*(long *)(this + 8) + uVar5 * 0x18);
          uVar6 = *puVar8;
        }
      }
LAB_0119df6c:
      if (puVar8[1] != 0) {
        uVar5 = (ulong)(int)puVar8[1];
        uVar6 = (*(long *)(this + 0x28) - *(long *)(this + 0x20) >> 3) * -0x5555555555555555;
        if (uVar6 < uVar5 || uVar6 - uVar5 == 0) goto LAB_0119e07c;
        *(undefined8 *)(*(long *)(this + 0x20) + uVar5 * 0x18 + 8) = 0;
      }
      uVar6 = (ulong)(int)uVar3;
      uVar5 = (*(long *)(this + 0x28) - *(long *)(this + 0x20) >> 3) * -0x5555555555555555;
      if (uVar5 < uVar6 || uVar5 - uVar6 == 0) {
LAB_0119e07c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(ulong *)(*(long *)(this + 0x20) + uVar6 * 0x18 + 8) = param_2;
      if (FLAG_heap_profiler_trace_objects != '\0') {
        uVar5 = (*(long *)(this + 0x28) - *(long *)(this + 0x20) >> 3) * -0x5555555555555555;
        if (uVar5 < uVar6 || uVar5 - uVar6 == 0) goto LAB_0119e07c;
        PrintF("Move object from %p to %p old size %6d new size %6d\n",param_1,param_2,
               (ulong)*(uint *)(*(long *)(this + 0x20) + uVar6 * 0x18 + 0x10),(ulong)(uint)param_3);
      }
      uVar5 = (*(long *)(this + 0x28) - *(long *)(this + 0x20) >> 3) * -0x5555555555555555;
      if (uVar5 < uVar6 || uVar5 - uVar6 == 0) goto LAB_0119e07c;
      *(int *)(*(long *)(this + 0x20) + uVar6 * 0x18 + 0x10) = param_3;
      puVar8[1] = uVar3;
    }
    bVar2 = uVar3 != 0;
  }
  return bVar2;
}

