
/* v8::internal::EphemeronTableUpdatingItem::Process() */

void __thiscall v8::internal::EphemeronTableUpdatingItem::Process(EphemeronTableUpdatingItem *this)

{
  uint *puVar1;
  long lVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  void *pvVar12;
  byte **local_80;
  byte *local_78;
  char *local_70;
  undefined8 local_68;
  long *local_60;
  long *local_58;
  char local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (Process()::trace_event_unique_atomic3728 == (byte *)0x0) {
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    Process()::trace_event_unique_atomic3728 =
         (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.gc");
  }
  pbVar4 = Process()::trace_event_unique_atomic3728;
  local_80 = (byte **)0x0;
  if ((*Process()::trace_event_unique_atomic3728 & 5) != 0) {
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar4,"EphemeronTableUpdatingItem::Process",0,0,0,0,0,0,0,
                       &local_60,0);
    plVar5 = local_58;
    local_58 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_60;
    local_60 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_80 = &local_78;
    local_70 = "EphemeronTableUpdatingItem::Process";
    local_78 = pbVar4;
    local_68 = uVar6;
  }
  lVar7 = *(long *)(this + 0x10);
  plVar5 = *(long **)(lVar7 + 0x10);
  if (plVar5 == (long *)0x0) {
joined_r0x00fdeea4:
    if ((local_80 != (byte **)0x0) && (*local_78 != 0)) {
      plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar5 + 0x28))(plVar5,local_78,local_70,local_68);
    }
    if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  do {
    lVar9 = plVar5[2];
    if ((*(uint *)(lVar9 + -1) & 1) == 0) {
      plVar11 = (long *)*plVar5;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<v8::internal::EphemeronHashTable,std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::EphemeronHashTable,std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<v8::internal::EphemeronHashTable>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>>>
      ::remove(&local_60,lVar7,plVar5);
      plVar8 = local_60;
      local_60 = (long *)0x0;
      plVar5 = plVar11;
      if (plVar8 != (long *)0x0) {
        if (local_50 != '\0') {
          puVar3 = (void *)plVar8[5];
          while (puVar3 != (void *)0x0) {
            pvVar12 = (void *)*puVar3;
            operator_delete(puVar3);
            puVar3 = pvVar12;
          }
LAB_00fdee8c:
          pvVar12 = (void *)plVar8[3];
          plVar8[3] = 0;
          if (pvVar12 != (void *)0x0) {
            operator_delete(pvVar12);
          }
        }
LAB_00fded50:
        operator_delete(plVar8);
        plVar5 = plVar11;
      }
    }
    else {
      plVar8 = (long *)plVar5[5];
      if (plVar8 != (long *)0x0) {
        do {
          while( true ) {
            puVar1 = (uint *)(lVar9 + 7 + (long)((int)plVar8[2] * 8 + 0xc));
            uVar10 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1;
            if ((*(uint *)(uVar10 - 1) & 1) == 0) {
              uVar10 = ((ulong)puVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 - 1)) + 1;
              *puVar1 = (uint)uVar10;
            }
            if ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0) break;
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) goto LAB_00fdee38;
          }
          plVar8 = (long *)*plVar8;
          std::__ndk1::
          __hash_table<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>
          ::remove(&local_60,plVar5 + 3);
          plVar11 = local_60;
          local_60 = (long *)0x0;
          if (plVar11 != (long *)0x0) {
            operator_delete(plVar11);
          }
        } while (plVar8 != (long *)0x0);
      }
LAB_00fdee38:
      if (plVar5[6] == 0) {
        plVar11 = (long *)*plVar5;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<v8::internal::EphemeronHashTable,std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::EphemeronHashTable,std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<v8::internal::EphemeronHashTable>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>>>
        ::remove(&local_60,*(undefined8 *)(this + 0x10),plVar5);
        plVar8 = local_60;
        local_60 = (long *)0x0;
        plVar5 = plVar11;
        if (plVar8 != (long *)0x0) {
          if (local_50 != '\0') {
            puVar3 = (void *)plVar8[5];
            while (puVar3 != (void *)0x0) {
              pvVar12 = (void *)*puVar3;
              operator_delete(puVar3);
              puVar3 = pvVar12;
            }
            goto LAB_00fdee8c;
          }
          goto LAB_00fded50;
        }
      }
      else {
        plVar5 = (long *)*plVar5;
      }
    }
    if (plVar5 == (long *)0x0) goto joined_r0x00fdeea4;
    lVar7 = *(long *)(this + 0x10);
  } while( true );
}

