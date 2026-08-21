
/* std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,
   unsigned int>, void*>*>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,
   unsigned int>,
   std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,
   std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>, unsigned
   int>, v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType> >, true>,
   std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,
   std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>, unsigned
   int>, std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType> >, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,
   unsigned int> > >::find<v8::internal::Signature<v8::internal::wasm::ValueType>
   >(v8::internal::Signature<v8::internal::wasm::ValueType> const&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
::find<v8::internal::Signature<v8::internal::wasm::ValueType>>
          (__hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
           *this,Signature *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  byte *pbVar12;
  long lVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  
  uVar3 = v8::base::hash_combine(*(ulong *)(param_1 + 8),*(ulong *)param_1);
  pbVar12 = *(byte **)(param_1 + 0x10);
  if (pbVar12 != pbVar12 + *(long *)(param_1 + 8) + *(long *)param_1) {
    lVar13 = *(long *)param_1 + *(long *)(param_1 + 8);
    do {
      uVar4 = v8::base::hash_combine(0,(ulong)*pbVar12);
      uVar3 = v8::base::hash_value(uVar3);
      uVar3 = v8::base::hash_combine(uVar4,uVar3);
      lVar13 = lVar13 + -1;
      pbVar12 = pbVar12 + 1;
    } while (lVar13 != 0);
  }
  uVar4 = *(ulong *)(this + 8);
  if (uVar4 != 0) {
    uVar15 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar4 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar4))))
                                                ))));
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar6 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar6 < 2) {
      uVar7 = uVar4 - 1 & uVar3;
    }
    else {
      uVar7 = uVar3;
      if (uVar4 <= uVar3) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar3 / uVar4;
        }
        uVar7 = uVar3 - uVar7 * uVar4;
      }
    }
    plVar8 = *(long **)(*(long *)this + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        return (long *)0x0;
      }
      lVar13 = *(long *)param_1;
      lVar1 = *(long *)(param_1 + 8);
      do {
        uVar9 = plVar8[1];
        if (uVar9 == uVar3) {
          if ((Signature *)(plVar8 + 2) == param_1) {
            return plVar8;
          }
          if ((plVar8[3] == lVar1) && (plVar8[2] == lVar13)) {
            pcVar10 = (char *)plVar8[4];
            pcVar5 = *(char **)(param_1 + 0x10);
            lVar11 = lVar13 + lVar1;
            if (pcVar10 == pcVar10 + lVar1 + lVar13) {
              return plVar8;
            }
            while (*pcVar10 == *pcVar5) {
              pcVar10 = pcVar10 + 1;
              lVar11 = lVar11 + -1;
              pcVar5 = pcVar5 + 1;
              if (lVar11 == 0) {
                return plVar8;
              }
            }
          }
        }
        else {
          if (uVar6 < 2) {
            uVar9 = uVar9 & uVar4 - 1;
          }
          else if (uVar4 <= uVar9) {
            uVar2 = 0;
            if (uVar4 != 0) {
              uVar2 = uVar9 / uVar4;
            }
            if (uVar9 - uVar2 * uVar4 != uVar7) {
              return (long *)0x0;
            }
            goto LAB_0148ce88;
          }
          if (uVar9 != uVar7) {
            return (long *)0x0;
          }
        }
LAB_0148ce88:
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}

