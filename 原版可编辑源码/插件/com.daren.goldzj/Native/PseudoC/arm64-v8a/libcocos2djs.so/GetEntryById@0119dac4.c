
/* v8::internal::HeapSnapshot::GetEntryById(unsigned int) */

long __thiscall v8::internal::HeapSnapshot::GetEntryById(HeapSnapshot *this,uint param_1)

{
  __hash_table<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>>>
  *this_00;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  HeapEntry *pHVar9;
  HeapEntry *pHVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  HeapEntry *local_50;
  uint local_44;
  
  uVar8 = (ulong)param_1;
  this_00 = (__hash_table<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>>>
             *)(this + 0x148);
  if (*(long *)(this + 0x160) == 0) {
    if (*(long *)(this + 0x130) == *(long *)(this + 0x138)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","is_complete()");
    }
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>>>
    ::rehash(this_00,(long)((float)*(ulong *)(this + 0xf8) / *(float *)(this + 0x168)));
    lVar1 = *(long *)(this + 0xd8);
    if (*(long *)(this + 0xe0) != lVar1) {
      uVar3 = *(ulong *)(this + 0xf0);
      pHVar10 = (HeapEntry *)(*(long *)(lVar1 + (uVar3 / 0x66) * 8) + (uVar3 % 0x66) * 0x28);
      pHVar9 = (HeapEntry *)
               (*(long *)(lVar1 + ((*(long *)(this + 0xf8) + uVar3) / 0x66) * 8) +
               ((*(long *)(this + 0xf8) + uVar3) % 0x66) * 0x28);
      if (pHVar9 != pHVar10) {
        plVar6 = (long *)(lVar1 + (uVar3 / 0x66) * 8);
        do {
          local_44 = *(uint *)(pHVar10 + 0x20);
          local_50 = pHVar10;
          std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>>>
          ::__emplace_unique_key_args<unsigned_int,unsigned_int,v8::internal::HeapEntry*>
                    (this_00,&local_44,&local_44,&local_50);
          pHVar10 = pHVar10 + 0x28;
          if ((long)pHVar10 - *plVar6 == 0xff0) {
            plVar6 = plVar6 + 1;
            pHVar10 = (HeapEntry *)*plVar6;
          }
        } while (pHVar9 != pHVar10);
      }
    }
  }
  uVar3 = *(ulong *)(this + 0x150);
  if (uVar3 != 0) {
    uVar12 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar3 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar3))))
                                                ))));
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar4 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar4 < 2) {
      uVar5 = (ulong)((int)uVar3 - 1U & param_1);
    }
    else {
      uVar5 = uVar8;
      if (uVar3 <= uVar8) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar8 / uVar3;
        }
        uVar5 = uVar8 - uVar5 * uVar3;
      }
    }
    plVar6 = *(long **)(*(long *)this_00 + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar7 = plVar6[1];
        if (uVar7 == uVar8) {
          if (*(uint *)(plVar6 + 2) == param_1) {
            return plVar6[3];
          }
        }
        else {
          if (uVar4 < 2) {
            uVar7 = uVar7 & uVar3 - 1;
          }
          else if (uVar3 <= uVar7) {
            uVar2 = 0;
            if (uVar3 != 0) {
              uVar2 = uVar7 / uVar3;
            }
            uVar7 = uVar7 - uVar2 * uVar3;
          }
          if (uVar7 != uVar5) {
            return 0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  return 0;
}

