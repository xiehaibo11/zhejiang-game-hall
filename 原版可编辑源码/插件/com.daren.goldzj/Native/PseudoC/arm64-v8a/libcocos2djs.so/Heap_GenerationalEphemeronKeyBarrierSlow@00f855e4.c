
/* v8::internal::Heap_GenerationalEphemeronKeyBarrierSlow(v8::internal::Heap*,
   v8::internal::EphemeronHashTable, unsigned long) */

void v8::internal::Heap_GenerationalEphemeronKeyBarrierSlow
               (__hash_table<std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<v8::internal::EphemeronHashTable,std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::EphemeronHashTable,std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<v8::internal::EphemeronHashTable>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>>>
                *param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  void *pvVar7;
  long local_68;
  void *local_60;
  undefined8 uStack_58;
  void *local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar6 = (int)((param_3 - param_2) + 0x3fffffff9U >> 2);
  iVar1 = iVar6 + -3;
  iVar6 = iVar6 + -2;
  if (-1 < iVar1) {
    iVar6 = iVar1;
  }
  uStack_58 = 0;
  local_60 = (void *)0x0;
  uStack_48 = 0;
  local_50 = (void *)0x0;
  local_40 = 0x3f800000;
  local_68 = param_2;
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<v8::internal::EphemeronHashTable,std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::EphemeronHashTable,std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<v8::internal::EphemeronHashTable>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>>>
          ::
          __emplace_unique_key_args<v8::internal::EphemeronHashTable,std::__ndk1::pair<v8::internal::EphemeronHashTable_const,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>>
                    (param_1,(EphemeronHashTable *)&local_68,(pair *)&local_68);
  pvVar3 = local_60;
  puVar4 = local_50;
  while (puVar4 != (void *)0x0) {
    pvVar7 = (void *)*puVar4;
    local_60 = pvVar3;
    operator_delete(puVar4);
    pvVar3 = local_60;
    puVar4 = pvVar7;
  }
  local_60 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  local_68 = CONCAT44(local_68._4_4_,iVar6 >> 1);
  std::__ndk1::
  __hash_table<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>::
  __emplace_unique_key_args<int,int>
            ((__hash_table<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>
              *)(lVar5 + 0x18),(int *)&local_68,(int *)&local_68);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

