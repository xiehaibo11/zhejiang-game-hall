
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,
   unsigned int>,
   std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,
   std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>, unsigned
   int>, v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType> >, true>,
   std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,
   std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>, unsigned
   int>, std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType> >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,
   unsigned int> > >::__rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
::__rehash(__hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
           *this,ulong param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  long *plVar8;
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
    pvVar4 = *(void **)this;
    *(undefined8 *)this = 0;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
    *(undefined8 *)(this + 8) = 0;
  }
  else {
    if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar4 = operator_new(param_1 << 3);
    pvVar6 = *(void **)this;
    *(void **)this = pvVar4;
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
    }
    uVar7 = 0;
    *(ulong *)(this + 8) = param_1;
    do {
      *(undefined8 *)(*(long *)this + uVar7 * 8) = 0;
      uVar7 = uVar7 + 1;
    } while (param_1 != uVar7);
    plVar8 = *(long **)(this + 0x10);
    if (plVar8 != (long *)0x0) {
      uVar7 = plVar8[1];
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
        uVar7 = uVar7 & param_1 - 1;
      }
      else if (param_1 <= uVar7) {
        uVar11 = 0;
        if (param_1 != 0) {
          uVar11 = uVar7 / param_1;
        }
        uVar7 = uVar7 - uVar11 * param_1;
      }
      *(__hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
        **)(*(long *)this + uVar7 * 8) = this + 0x10;
      if ((long *)*plVar8 != (long *)0x0) {
        plVar9 = (long *)*plVar8;
        do {
          while (uVar11 = plVar9[1], (uVar17 & 0xffffffff) < 2) {
            uVar11 = uVar11 & param_1 - 1;
LAB_015fbf34:
            if (uVar11 != uVar7) goto LAB_015fbf3c;
LAB_015fbefc:
            plVar10 = (long *)*plVar9;
            plVar8 = plVar9;
            plVar9 = plVar10;
            if (plVar10 == (long *)0x0) {
              return;
            }
          }
          if (uVar11 < param_1) goto LAB_015fbf34;
          uVar1 = 0;
          if (param_1 != 0) {
            uVar1 = uVar11 / param_1;
          }
          uVar11 = uVar11 - uVar1 * param_1;
          if (uVar11 == uVar7) goto LAB_015fbefc;
LAB_015fbf3c:
          if (*(long *)(*(long *)this + uVar11 * 8) == 0) {
            *(long **)(*(long *)this + uVar11 * 8) = plVar8;
            plVar10 = (long *)*plVar9;
            uVar7 = uVar11;
          }
          else {
            plVar3 = (long *)*plVar9;
            plVar10 = plVar9;
            while (plVar2 = plVar3, plVar2 != (long *)0x0) {
              if (plVar9 != plVar2) {
                lVar14 = plVar9[3];
                if ((lVar14 != plVar2[3]) || (lVar5 = plVar9[2], lVar5 != plVar2[2])) break;
                pcVar12 = (char *)plVar9[4];
                if (pcVar12 != pcVar12 + lVar14 + lVar5) {
                  pcVar13 = (char *)plVar2[4];
                  lVar5 = lVar5 + lVar14;
                  do {
                    if (*pcVar12 != *pcVar13) goto LAB_015fbfec;
                    pcVar12 = pcVar12 + 1;
                    lVar5 = lVar5 + -1;
                    pcVar13 = pcVar13 + 1;
                  } while (lVar5 != 0);
                }
              }
              plVar10 = plVar2;
              plVar3 = (long *)*plVar2;
            }
LAB_015fbfec:
            *plVar8 = *plVar10;
            *plVar10 = **(long **)(*(long *)this + uVar11 * 8);
            **(undefined8 **)(*(long *)this + uVar11 * 8) = plVar9;
            plVar10 = (long *)*plVar8;
            plVar9 = plVar8;
          }
          plVar8 = plVar9;
          plVar9 = plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  return;
}

