
/* v8::internal::Heap::EphemeronKeyWriteBarrierFromCode(unsigned long, unsigned long,
   v8::internal::Isolate*) */

void v8::internal::Heap::EphemeronKeyWriteBarrierFromCode
               (ulong param_1,ulong param_2,Isolate *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  void *pvVar8;
  ulong local_88;
  void *local_80;
  undefined8 uStack_78;
  void *local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar1 = *(uint *)param_2;
  if ((uVar1 != 3) && ((uVar1 & 1) != 0)) {
    if ((((param_1 & 1) == 0) || ((*(byte *)((param_1 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) &&
       ((*(byte *)((param_2 & 0xffffffff00000000 | (ulong)uVar1 & 0xfffffffffffc0000) + 8) & 0x18)
        != 0)) {
      local_60 = 0x3f800000;
      iVar7 = (int)((param_2 - param_1) + 0x3fffffff9 >> 2);
      iVar2 = iVar7 + -3;
      iVar7 = iVar7 + -2;
      if (-1 < iVar2) {
        iVar7 = iVar2;
      }
      uStack_78 = 0;
      local_80 = (void *)0x0;
      uStack_68 = 0;
      local_70 = (void *)0x0;
      local_88 = param_1;
      lVar6 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<v8::internal::EphemeronHashTable,std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::EphemeronHashTable,std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<v8::internal::EphemeronHashTable>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>>>
              ::
              __emplace_unique_key_args<v8::internal::EphemeronHashTable,std::__ndk1::pair<v8::internal::EphemeronHashTable_const,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>>
                        ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<v8::internal::EphemeronHashTable,std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::EphemeronHashTable,std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<v8::internal::EphemeronHashTable>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>>>
                          *)(param_3 + 0x8850),(EphemeronHashTable *)&local_88,(pair *)&local_88);
      pvVar4 = local_80;
      puVar5 = local_70;
      while (puVar5 != (void *)0x0) {
        pvVar8 = (void *)*puVar5;
        local_80 = pvVar4;
        operator_delete(puVar5);
        pvVar4 = local_80;
        puVar5 = pvVar8;
      }
      local_80 = (void *)0x0;
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
      local_88 = CONCAT44(local_88._4_4_,iVar7 >> 1);
      std::__ndk1::
      __hash_table<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>
      ::__emplace_unique_key_args<int,int>
                ((__hash_table<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>
                  *)(lVar6 + 0x18),(int *)&local_88,(int *)&local_88);
    }
    if (1 < *(int *)(*(IncrementalMarking **)(param_3 + 0x9078) + 0x58)) {
      IncrementalMarking::RecordWriteSlow
                (*(IncrementalMarking **)(param_3 + 0x9078),param_1,param_2,
                 param_2 & 0xffffffff00000000 | (ulong)uVar1 & 0xfffffffffffffffd);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

