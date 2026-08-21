
/* v8::internal::MarkCompactCollector::ClearWeakCollections() */

void __thiscall v8::internal::MarkCompactCollector::ClearWeakCollections(MarkCompactCollector *this)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  void *pvVar14;
  int iVar15;
  ulong local_d8;
  byte **local_d0;
  byte *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  Scope aSStack_b0 [64];
  long *local_70;
  long *local_68;
  char local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  GCTracer::Scope::Scope(aSStack_b0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x1f);
  if (DAT_01d3f228 == (byte *)0x0) {
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f228 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.gc");
  }
  pbVar4 = DAT_01d3f228;
  local_d0 = (byte **)0x0;
  if ((*DAT_01d3f228 & 5) != 0) {
    uVar7 = GCTracer::Scope::Name(0x1f);
    local_70 = (long *)0x0;
    local_68 = (long *)0x0;
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,0x58,pbVar4,uVar7,0,0,0,0,0,0,0,&local_70,0);
    plVar6 = local_68;
    local_68 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = local_70;
    local_70 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    local_c0 = GCTracer::Scope::Name(0x1f);
    local_d0 = &local_c8;
    local_c8 = pbVar4;
    local_b8 = uVar7;
  }
  local_d8 = 0;
  uVar8 = Worklist<v8::internal::EphemeronHashTable,64>::Pop
                    ((Worklist<v8::internal::EphemeronHashTable,64> *)(this + 0xb38),0,
                     (EphemeronHashTable *)&local_d8);
  while ((uVar8 & 1) != 0) {
    uVar1 = *(uint *)(local_d8 + 0xf);
    if ((int)uVar1 >> 1 != 0) {
      lVar13 = 0;
      iVar15 = 0xc;
      while( true ) {
        uVar11 = (ulong)*(uint *)(local_d8 + (long)iVar15 + 7);
        uVar9 = local_d8 & 0xffffffff00000000;
        uVar8 = ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
                ::ValueAt((ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
                           *)&local_d8,lVar13);
        uVar9 = uVar9 | uVar11 & 0xfffffffffffc0000;
        if ((uVar8 & 1) == 0) {
          uVar10 = 1 << (ulong)((uint)(uVar11 - uVar9 >> 2) & 0x1f);
          uVar12 = uVar11 - uVar9 >> 7 & 0x1ffffff;
        }
        else {
          uVar12 = uVar11 - uVar9 >> 7 & 0x1ffffff;
          uVar10 = 1 << (ulong)((uint)(uVar11 - uVar9 >> 2) & 0x1f);
          if (((*(uint *)(*(long *)(uVar9 + 0x10) + uVar12 * 4) & uVar10) != 0) &&
             (uVar11 = uVar8 - (uVar8 & 0xfffffffffffc0000),
             (*(uint *)(*(long *)((uVar8 & 0xfffffffffffc0000) + 0x10) +
                       (uVar11 >> 7 & 0x1ffffff) * 4) >> (ulong)((uint)(uVar11 >> 2) & 0x1f) & 1) ==
             0)) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.",
                     "non_atomic_marking_state()->IsBlackOrGrey(key) implies non_atomic_marking_state()->IsBlackOrGrey(HeapObject::cast(value))"
                    );
          }
        }
        if ((*(uint *)(*(long *)(uVar9 + 0x10) + uVar12 * 4) & uVar10) == 0) {
          ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
          ::RemoveEntry((ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
                         *)&local_d8,lVar13);
        }
        if (((long)((ulong)uVar1 << 0x20) >> 0x21) + -1 == lVar13) break;
        lVar13 = lVar13 + 1;
        iVar15 = iVar15 + 8;
      }
    }
    uVar8 = Worklist<v8::internal::EphemeronHashTable,64>::Pop
                      ((Worklist<v8::internal::EphemeronHashTable,64> *)(this + 0xb38),0,
                       (EphemeronHashTable *)&local_d8);
  }
  for (plVar6 = *(long **)(*(long *)(this + 8) + 0x10); plVar6 != (long *)0x0;
      plVar6 = (long *)*plVar6) {
    while (uVar9 = plVar6[2] & 0xfffffffffffc0000, uVar8 = plVar6[2] - uVar9,
          (*(uint *)(*(long *)(uVar9 + 0x10) + (uVar8 >> 7 & 0x1ffffff) * 4) >>
           (ulong)((uint)(uVar8 >> 2) & 0x1f) & 1) == 0) {
      plVar6 = (long *)*plVar6;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<v8::internal::EphemeronHashTable,std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::EphemeronHashTable,std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<v8::internal::EphemeronHashTable>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>>>
      ::remove(&local_70,*(undefined8 *)(this + 8));
      plVar5 = local_70;
      local_70 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        if (local_60 != '\0') {
          puVar3 = (void *)plVar5[5];
          while (puVar3 != (void *)0x0) {
            pvVar14 = (void *)*puVar3;
            operator_delete(puVar3);
            puVar3 = pvVar14;
          }
          pvVar14 = (void *)plVar5[3];
          plVar5[3] = 0;
          if (pvVar14 != (void *)0x0) {
            operator_delete(pvVar14);
          }
        }
        operator_delete(plVar5);
      }
      if (plVar6 == (long *)0x0) goto LAB_00fc48c4;
    }
  }
LAB_00fc48c4:
  if ((local_d0 != (byte **)0x0) && (*local_c8 != 0)) {
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x28))(plVar6,local_c8,local_c0,local_b8);
  }
  GCTracer::Scope::~Scope(aSStack_b0);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

