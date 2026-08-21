
/* v8::internal::ScavengerCollector::ClearOldEphemerons() */

void __thiscall v8::internal::ScavengerCollector::ClearOldEphemerons(ScavengerCollector *this)

{
  uint *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  void *pvVar5;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  void *pvVar11;
  long *plVar12;
  long local_68;
  void *local_60 [2];
  char local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)*(long *)(*(long *)(this + 8) + 0x10);
  do {
    if (plVar4 == (long *)0x0) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_68 = plVar4[2];
    if ((long *)plVar4[5] != (long *)0x0) {
      plVar10 = (long *)plVar4[5];
      do {
        while( true ) {
          puVar6 = (uint *)(local_68 + ((int)plVar10[2] * 8 + 0xc) + 7);
          uVar7 = (ulong)puVar6 & 0xffffffff00000000;
          uVar8 = uVar7 | *puVar6;
          uVar9 = *(ulong *)((uVar7 | (ulong)*puVar6 & 0xfffffffffffc0000) + 8);
          if ((((uint)uVar9 >> 3 & 1) == 0) || ((*(uint *)(uVar8 - 1) & 1) == 0)) break;
          ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
          ::RemoveEntry((ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
                         *)&local_68);
LAB_01003b1c:
          plVar12 = (long *)*plVar10;
          std::__ndk1::
          __hash_table<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>
          ::remove(local_60,plVar4 + 3,plVar10);
          pvVar5 = local_60[0];
          local_60[0] = (void *)0x0;
          if (pvVar5 != (void *)0x0) {
            operator_delete(pvVar5);
          }
          plVar10 = plVar12;
          if (plVar12 == (long *)0x0) goto LAB_01003a84;
        }
        puVar1 = (uint *)(uVar8 - 1);
        if ((uVar9 & 8) != 0) {
          uVar8 = 0;
        }
        if ((*puVar1 & 1) == 0) {
          uVar8 = (uVar7 | *puVar1) + 1;
        }
        *puVar6 = (uint)uVar8;
        if ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0) goto LAB_01003b1c;
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
LAB_01003a84:
    if (plVar4[6] == 0) {
      plVar10 = (long *)*plVar4;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<v8::internal::EphemeronHashTable,std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::EphemeronHashTable,std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<v8::internal::EphemeronHashTable>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>>>
      ::remove(local_60,*(undefined8 *)(this + 8),plVar4);
      pvVar5 = local_60[0];
      local_60[0] = (void *)0x0;
      plVar4 = plVar10;
      if (pvVar5 != (void *)0x0) {
        if (local_50 != '\0') {
          puVar3 = *(void **)((long)pvVar5 + 0x28);
          while (puVar3 != (void *)0x0) {
            pvVar11 = (void *)*puVar3;
            operator_delete(puVar3);
            puVar3 = pvVar11;
          }
          pvVar11 = *(void **)((long)pvVar5 + 0x18);
          *(undefined8 *)((long)pvVar5 + 0x18) = 0;
          if (pvVar11 != (void *)0x0) {
            operator_delete(pvVar11);
          }
        }
        operator_delete(pvVar5);
      }
    }
    else {
      plVar4 = (long *)*plVar4;
    }
  } while( true );
}

