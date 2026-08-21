
/* v8::internal::FullEvacuator::Finalize() */

void __thiscall v8::internal::FullEvacuator::Finalize(FullEvacuator *this)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<v8::internal::EphemeronHashTable,std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::EphemeronHashTable,std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<v8::internal::EphemeronHashTable>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>>>
  *this_00;
  long *plVar5;
  long *plVar6;
  void *pvVar7;
  undefined1 auVar8 [16];
  int local_94;
  void *local_90;
  void *pvStack_88;
  undefined8 *puStack_80;
  void *local_78;
  undefined8 local_70;
  undefined4 local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  Evacuator::Finalize((Evacuator *)this);
  plVar6 = *(long **)(this + 0x168);
  if (plVar6 != (long *)0x0) {
    do {
      local_90 = (void *)plVar6[2];
      this_00 = *(__hash_table<std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<v8::internal::EphemeronHashTable,std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::EphemeronHashTable,std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<v8::internal::EphemeronHashTable>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>>>
                  **)(this + 8);
      puStack_80 = (undefined8 *)0x0;
      pvStack_88 = (void *)0x0;
      local_70 = 0;
      local_78 = (void *)0x0;
      local_68 = (undefined4)plVar6[7];
      std::__ndk1::
      __hash_table<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>
      ::rehash((__hash_table<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>
                *)&pvStack_88,plVar6[4]);
      for (plVar5 = (long *)plVar6[5]; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        std::__ndk1::
        __hash_table<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>
        ::__emplace_unique_key_args<int,int_const&>
                  ((__hash_table<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>
                    *)&pvStack_88,(int *)(plVar5 + 2),(int *)(plVar5 + 2));
      }
      auVar8 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<v8::internal::EphemeronHashTable,std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::EphemeronHashTable,std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<v8::internal::EphemeronHashTable>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>>>
               ::
               __emplace_unique_key_args<v8::internal::EphemeronHashTable,std::__ndk1::pair<v8::internal::EphemeronHashTable_const,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>>
                         (this_00,(EphemeronHashTable *)&local_90,(pair *)&local_90);
      lVar4 = auVar8._0_8_;
      pvVar2 = pvStack_88;
      puVar3 = local_78;
      while (puVar3 != (void *)0x0) {
        pvVar7 = (void *)*puVar3;
        pvStack_88 = pvVar2;
        operator_delete(puVar3);
        pvVar2 = pvStack_88;
        puVar3 = pvVar7;
      }
      pvStack_88 = (void *)0x0;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
      if ((auVar8._8_8_ & 0xff) == 0) {
        pvStack_88 = (void *)0x0;
        local_90 = (void *)0x0;
        local_78 = (void *)0x0;
        puStack_80 = (undefined8 *)0x0;
        local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(lVar4 + 0x38));
        std::__ndk1::
        __hash_table<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>
        ::rehash((__hash_table<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>
                  *)&local_90,*(ulong *)(lVar4 + 0x20));
        for (plVar5 = *(long **)(lVar4 + 0x28); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
          std::__ndk1::
          __hash_table<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>
          ::__emplace_unique_key_args<int,int_const&>
                    ((__hash_table<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>
                      *)&local_90,(int *)(plVar5 + 2),(int *)(plVar5 + 2));
        }
        for (plVar5 = (long *)plVar6[5]; pvVar2 = local_90, puVar3 = puStack_80,
            plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
          local_94 = *(int *)(plVar5 + 2);
          std::__ndk1::
          __hash_table<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>
          ::__emplace_unique_key_args<int,int_const&>
                    ((__hash_table<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>
                      *)&local_90,&local_94,&local_94);
        }
        while (puVar3 != (void *)0x0) {
          pvVar7 = (void *)*puVar3;
          local_90 = pvVar2;
          operator_delete(puVar3);
          pvVar2 = local_90;
          puVar3 = pvVar7;
        }
        local_90 = (void *)0x0;
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2);
        }
      }
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

