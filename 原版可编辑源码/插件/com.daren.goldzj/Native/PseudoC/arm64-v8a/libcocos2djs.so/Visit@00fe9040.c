
/* v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)0>::Visit(v8::internal::HeapObject,
   int) */

undefined8
v8::internal::EvacuateNewSpacePageVisitor<(v8::internal::PageEvacuationMode)0>::Visit
          (long param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  AllocationSite *pAVar5;
  ulong uVar6;
  long lVar7;
  ulong local_48 [2];
  ulong *local_38;
  
  lVar7 = *(long *)(param_1 + 8);
  if ((FLAG_allocation_site_pretenuring != '\0') &&
     ((*(ushort *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1)) + 7) | 2) == 0x423
     )) {
    pAVar5 = *(AllocationSite **)(param_1 + 0x20);
    uVar6 = param_2 - 1;
    local_38 = (ulong *)param_2;
    iVar2 = HeapObject::SizeFromMap((HeapObject *)&local_38);
    piVar1 = (int *)(uVar6 + (long)iVar2);
    uVar3 = uVar6 & 0xfffffffffffc0000;
    if ((((uVar3 == ((ulong)(piVar1 + 1) & 0xfffffffffffc0000)) &&
         (*piVar1 == *(int *)(lVar7 + -0x7b78))) &&
        (((*(byte *)(uVar3 + 10) >> 3 & 1) == 0 ||
         (((uVar4 = *(ulong *)(*(long *)(uVar3 + 0x58) + 0x80), *(ulong *)(uVar3 + 0x20) <= uVar4 &&
           (uVar4 <= uVar6)) && (uVar4 < *(ulong *)(uVar3 + 0x28))))))) &&
       (param_2 = (long)iVar2 + param_2, (int)param_2 != 0)) {
      local_38 = local_48;
      local_48[0] = param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 3);
      lVar7 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
              ::
              __emplace_unique_key_args<v8::internal::AllocationSite,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::AllocationSite&&>,std::__ndk1::tuple<>>
                        (pAVar5,(piecewise_construct_t *)local_48,(tuple *)&DAT_019c5885,
                         (tuple *)&local_38);
      *(long *)(lVar7 + 0x18) = *(long *)(lVar7 + 0x18) + 1;
    }
  }
  return 1;
}

