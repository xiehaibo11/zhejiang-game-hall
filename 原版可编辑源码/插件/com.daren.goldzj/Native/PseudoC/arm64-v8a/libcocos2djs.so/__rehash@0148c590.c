
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,
   unsigned int>,
   std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,
   std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>, unsigned
   int>, v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType> >, true>,
   std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,
   std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>, unsigned
   int>, std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType> >, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,
   unsigned int> > >::__rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
::__rehash(__hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
           *this,ulong param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  Zone *this_00;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  undefined2 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  
  if (param_1 == 0) {
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
  }
  else {
    this_00 = *(Zone **)(this + 0x10);
    uVar6 = param_1 * 8;
    puVar5 = *(undefined8 **)(this_00 + 0x10);
    if (uVar6 < (ulong)(*(long *)(this_00 + 0x18) - (long)puVar5) ||
        uVar6 - (*(long *)(this_00 + 0x18) - (long)puVar5) == 0) {
      *(undefined8 **)(this_00 + 0x10) = puVar5 + param_1;
    }
    else {
      puVar5 = (undefined8 *)v8::internal::Zone::NewExpand(this_00,uVar6);
    }
    uVar6 = param_1 - 1;
    *(undefined8 **)this = puVar5;
    *(ulong *)(this + 8) = param_1;
    *puVar5 = 0;
    if (uVar6 != 0) {
      uVar8 = 1;
      do {
        *(undefined8 *)(*(long *)this + uVar8 * 8) = 0;
        uVar8 = uVar8 + 1;
      } while (param_1 != uVar8);
    }
    plVar9 = *(long **)(this + 0x18);
    if (plVar9 != (long *)0x0) {
      uVar8 = plVar9[1];
      uVar16 = CONCAT17(POPCOUNT((char)(param_1 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(param_1 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(param_1 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(param_1 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(param_1 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(param_1 >> 0x10
                                                                                    )),
                                                                     CONCAT11(POPCOUNT((char)(
                                                  param_1 >> 8)),POPCOUNT((char)param_1))))))));
      uVar15 = NEON_uaddlv(uVar16,1);
      uVar17 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15);
      if ((uVar17 & 0xffffffff) < 2) {
        uVar8 = uVar8 & uVar6;
      }
      else if (param_1 <= uVar8) {
        uVar11 = 0;
        if (param_1 != 0) {
          uVar11 = uVar8 / param_1;
        }
        uVar8 = uVar8 - uVar11 * param_1;
      }
      *(__hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
        **)(*(long *)this + uVar8 * 8) = this + 0x18;
      for (plVar10 = (long *)*plVar9; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        while( true ) {
          uVar11 = plVar10[1];
          if ((uVar17 & 0xffffffff) < 2) {
            uVar11 = uVar11 & uVar6;
          }
          else if (param_1 <= uVar11) {
            uVar1 = 0;
            if (param_1 != 0) {
              uVar1 = uVar11 / param_1;
            }
            uVar11 = uVar11 - uVar1 * param_1;
          }
          if (uVar11 == uVar8) break;
          if (*(long *)(*(long *)this + uVar11 * 8) == 0) {
            *(long **)(*(long *)this + uVar11 * 8) = plVar9;
            plVar3 = (long *)*plVar10;
            plVar9 = plVar10;
            uVar8 = uVar11;
          }
          else {
            plVar4 = (long *)*plVar10;
            plVar3 = plVar10;
            while (plVar2 = plVar4, plVar2 != (long *)0x0) {
              if (plVar10 != plVar2) {
                lVar14 = plVar10[3];
                if ((lVar14 != plVar2[3]) || (lVar7 = plVar10[2], lVar7 != plVar2[2])) break;
                pcVar12 = (char *)plVar10[4];
                if (pcVar12 != pcVar12 + lVar14 + lVar7) {
                  pcVar13 = (char *)plVar2[4];
                  lVar7 = lVar7 + lVar14;
                  do {
                    if (*pcVar12 != *pcVar13) goto LAB_0148c73c;
                    pcVar12 = pcVar12 + 1;
                    lVar7 = lVar7 + -1;
                    pcVar13 = pcVar13 + 1;
                  } while (lVar7 != 0);
                }
              }
              plVar3 = plVar2;
              plVar4 = (long *)*plVar2;
            }
LAB_0148c73c:
            *plVar9 = *plVar3;
            *plVar3 = **(long **)(*(long *)this + uVar11 * 8);
            **(undefined8 **)(*(long *)this + uVar11 * 8) = plVar10;
            plVar3 = (long *)*plVar9;
          }
          plVar10 = plVar3;
          if (plVar10 == (long *)0x0) {
            return;
          }
        }
        plVar9 = plVar10;
      }
    }
  }
  return;
}

