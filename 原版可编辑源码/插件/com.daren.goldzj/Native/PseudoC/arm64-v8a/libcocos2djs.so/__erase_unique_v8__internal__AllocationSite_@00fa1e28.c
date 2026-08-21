
/* unsigned long
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite, unsigned
   long>, std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,
   std::__ndk1::__hash_value_type<v8::internal::AllocationSite, unsigned long>,
   v8::internal::Object::Hasher, true>,
   std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,
   std::__ndk1::__hash_value_type<v8::internal::AllocationSite, unsigned long>,
   std::__ndk1::equal_to<v8::internal::AllocationSite>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite, unsigned
   long> > >::__erase_unique<v8::internal::AllocationSite>(v8::internal::AllocationSite const&) */

ulong __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
::__erase_unique<v8::internal::AllocationSite>
          (__hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
           *this,AllocationSite *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  void *local_40 [3];
  long local_28;
  ulong uVar12;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  uVar5 = *(ulong *)(this + 8);
  if (uVar5 != 0) {
    uVar1 = *(uint *)param_1;
    uVar6 = (ulong)uVar1;
    uVar11 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar5 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar5 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar5))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar12 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10);
    if ((uVar12 & 0xffffffff) < 2) {
      uVar7 = (ulong)((int)uVar5 - 1U & uVar1);
    }
    else {
      uVar7 = uVar6;
      if (uVar5 <= uVar6) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        uVar7 = uVar6 - uVar7 * uVar5;
      }
    }
    plVar8 = *(long **)(*(long *)this + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == uVar6) {
          if (*(uint *)(plVar8 + 2) == uVar1) {
            remove(local_40);
            pvVar4 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar4 != (void *)0x0) {
              operator_delete(pvVar4);
            }
            uVar5 = 1;
            goto LAB_00fa1ef8;
          }
        }
        else {
          if ((uVar12 & 0xffffffff) < 2) {
            uVar9 = uVar9 & uVar5 - 1;
          }
          else if (uVar5 <= uVar9) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar9 / uVar5;
            }
            uVar9 = uVar9 - uVar2 * uVar5;
          }
          if (uVar9 != uVar7) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  uVar5 = 0;
LAB_00fa1ef8:
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}

