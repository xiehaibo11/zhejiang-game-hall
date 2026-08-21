
/* void 
   v8::internal::BodyDescriptorBase::IterateEphemeron<v8::internal::IterateAndScavengePromotedObjectsVisitor>(v8::internal::HeapObject,
   int, int, int, v8::internal::IterateAndScavengePromotedObjectsVisitor*) */

void v8::internal::BodyDescriptorBase::
     IterateEphemeron<v8::internal::IterateAndScavengePromotedObjectsVisitor>
               (long param_1,int param_2,int param_3,int param_4,long *param_5)

{
  uint *puVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  void *pvVar6;
  int local_7c;
  long local_78;
  void *local_70;
  undefined8 uStack_68;
  void *local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar1 = (uint *)(param_1 + -1 + (long)param_3);
  lVar5 = param_1 + -1 + (long)param_4;
  (**(code **)(*param_5 + 0x10))(param_5,param_1,lVar5,lVar5 + 4);
  if (((*puVar1 & 1) == 0) ||
     ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffc0000) + 8) & 0x18) ==
      0)) {
    (**(code **)(*param_5 + 0x10))(param_5,param_1,puVar1,puVar1 + 1);
  }
  else {
    uStack_68 = 0;
    local_70 = (void *)0x0;
    uStack_58 = 0;
    local_60 = (void *)0x0;
    local_50 = 0x3f800000;
    local_7c = param_2;
    local_78 = param_1;
    lVar5 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<v8::internal::EphemeronHashTable,std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::EphemeronHashTable,std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<v8::internal::EphemeronHashTable>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>>>
            ::
            __emplace_unique_key_args<v8::internal::EphemeronHashTable,std::__ndk1::pair<v8::internal::EphemeronHashTable_const,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>>
                      ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<v8::internal::EphemeronHashTable,std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::EphemeronHashTable,std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<v8::internal::EphemeronHashTable>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::EphemeronHashTable,std::__ndk1::unordered_set<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>>>>
                        *)(param_5[1] + 0x2b8),(EphemeronHashTable *)&local_78,(pair *)&local_78);
    pvVar3 = local_70;
    puVar4 = local_60;
    while (puVar4 != (void *)0x0) {
      pvVar6 = (void *)*puVar4;
      local_70 = pvVar3;
      operator_delete(puVar4);
      pvVar3 = local_70;
      puVar4 = pvVar6;
    }
    local_70 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    std::__ndk1::
    __hash_table<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>
    ::__emplace_unique_key_args<int,int_const&>
              ((__hash_table<int,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<int>>
                *)(lVar5 + 0x18),&local_7c,&local_7c);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

