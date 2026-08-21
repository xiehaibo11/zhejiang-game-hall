
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,
   unsigned int>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,
   unsigned int>,
   std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,
   std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>, unsigned
   int>, v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType> >, true>,
   std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,
   std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>, unsigned
   int>, std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType> >, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,
   unsigned int> >
   >::__emplace_unique_key_args<v8::internal::Signature<v8::internal::wasm::ValueType>,
   v8::internal::Signature<v8::internal::wasm::ValueType>&, unsigned
   int&>(v8::internal::Signature<v8::internal::wasm::ValueType> const&,
   v8::internal::Signature<v8::internal::wasm::ValueType>&, unsigned int&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
::
__emplace_unique_key_args<v8::internal::Signature<v8::internal::wasm::ValueType>,v8::internal::Signature<v8::internal::wasm::ValueType>&,unsigned_int&>
          (__hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
           *this,Signature *param_1,Signature *param_2,uint *param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  Zone *this_00;
  long *plVar5;
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
  *p_Var6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  char *pcVar12;
  byte *pbVar13;
  ulong unaff_x26;
  undefined2 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  
  uVar3 = v8::base::hash_combine(*(ulong *)(param_1 + 8),*(ulong *)param_1);
  pbVar13 = *(byte **)(param_1 + 0x10);
  if (pbVar13 != pbVar13 + *(long *)(param_1 + 8) + *(long *)param_1) {
    lVar16 = *(long *)param_1 + *(long *)(param_1 + 8);
    do {
      uVar4 = v8::base::hash_combine(0,(ulong)*pbVar13);
      uVar3 = v8::base::hash_value(uVar3);
      uVar3 = v8::base::hash_combine(uVar4,uVar3);
      lVar16 = lVar16 + -1;
      unaff_x26 = 0;
      pbVar13 = pbVar13 + 1;
    } while (lVar16 != 0);
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
    uVar8 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar8 < 2) {
      unaff_x26 = uVar4 - 1 & uVar3;
    }
    else {
      unaff_x26 = uVar3;
      if (uVar4 <= uVar3) {
        uVar9 = 0;
        if (uVar4 != 0) {
          uVar9 = uVar3 / uVar4;
        }
        unaff_x26 = uVar3 - uVar9 * uVar4;
      }
    }
    plVar7 = *(long **)(*(long *)this + unaff_x26 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      lVar16 = *(long *)param_1;
      lVar17 = *(long *)(param_1 + 8);
      do {
        uVar9 = plVar7[1];
        if (uVar9 != uVar3) {
          if (uVar8 < 2) {
            uVar9 = uVar9 & uVar4 - 1;
          }
          else if (uVar4 <= uVar9) {
            uVar2 = 0;
            if (uVar4 != 0) {
              uVar2 = uVar9 / uVar4;
            }
            if (uVar9 - uVar2 * uVar4 == unaff_x26) goto LAB_01603828;
            break;
          }
          if (uVar9 != unaff_x26) break;
        }
LAB_01603828:
        if ((Signature *)(plVar7 + 2) == param_1) {
          return plVar7;
        }
        if ((plVar7[3] == lVar17) && (plVar7[2] == lVar16)) {
          pcVar10 = (char *)plVar7[4];
          lVar11 = lVar16 + lVar17;
          pcVar12 = *(char **)(param_1 + 0x10);
          if (pcVar10 == pcVar10 + lVar17 + lVar16) {
            return plVar7;
          }
          while (*pcVar10 == *pcVar12) {
            pcVar10 = pcVar10 + 1;
            lVar11 = lVar11 + -1;
            pcVar12 = pcVar12 + 1;
            if (lVar11 == 0) {
              return plVar7;
            }
          }
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  this_00 = *(Zone **)(this + 0x20);
  plVar7 = *(long **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)plVar7) < 0x30) {
    plVar7 = (long *)v8::internal::Zone::NewExpand(this_00,0x30);
  }
  else {
    *(long **)(this_00 + 0x10) = plVar7 + 6;
  }
  lVar17 = *(long *)(param_2 + 8);
  lVar16 = *(long *)param_2;
  plVar7[4] = *(long *)(param_2 + 0x10);
  plVar7[3] = lVar17;
  plVar7[2] = lVar16;
  uVar1 = *param_3;
  *plVar7 = 0;
  plVar7[1] = uVar3;
  *(uint *)(plVar7 + 5) = uVar1;
  if ((uVar4 == 0) || (*(float *)(this + 0x30) * (float)uVar4 < (float)(*(long *)(this + 0x28) + 1))
     ) {
    uVar4 = (ulong)(uVar4 < 3 || (uVar4 & uVar4 - 1) != 0) | uVar4 << 1;
    uVar8 = (ulong)((float)(*(long *)(this + 0x28) + 1) / *(float *)(this + 0x30));
    if (uVar8 <= uVar4) {
      uVar8 = uVar4;
    }
    rehash(this,uVar8);
    uVar4 = *(ulong *)(this + 8);
    if ((uVar4 & uVar4 - 1) == 0) {
      unaff_x26 = uVar4 - 1 & uVar3;
    }
    else {
      unaff_x26 = uVar3;
      if (uVar4 <= uVar3) {
        uVar8 = 0;
        if (uVar4 != 0) {
          uVar8 = uVar3 / uVar4;
        }
        unaff_x26 = uVar3 - uVar8 * uVar4;
      }
    }
  }
  plVar5 = *(long **)(*(long *)this + unaff_x26 * 8);
  if (plVar5 == (long *)0x0) {
    p_Var6 = this + 0x18;
    *plVar7 = *(long *)p_Var6;
    *(long **)p_Var6 = plVar7;
    *(__hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
      **)(*(long *)this + unaff_x26 * 8) = p_Var6;
    if (*plVar7 != 0) {
      uVar3 = *(ulong *)(*plVar7 + 8);
      if ((uVar4 & uVar4 - 1) == 0) {
        uVar3 = uVar3 & uVar4 - 1;
      }
      else if (uVar4 <= uVar3) {
        uVar8 = 0;
        if (uVar4 != 0) {
          uVar8 = uVar3 / uVar4;
        }
        uVar3 = uVar3 - uVar8 * uVar4;
      }
      *(long **)(*(long *)this + uVar3 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar5;
    *plVar5 = (long)plVar7;
  }
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  return plVar7;
}

