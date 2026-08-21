
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::pair<bool,
   v8::internal::Signature<v8::internal::wasm::ValueType> >, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::pair<bool,
   v8::internal::Signature<v8::internal::wasm::ValueType> >, v8::base::hash<std::__ndk1::pair<bool,
   v8::internal::Signature<v8::internal::wasm::ValueType> > >,
   std::__ndk1::equal_to<std::__ndk1::pair<bool,
   v8::internal::Signature<v8::internal::wasm::ValueType> > >,
   std::__ndk1::allocator<std::__ndk1::pair<bool,
   v8::internal::Signature<v8::internal::wasm::ValueType> > >
   >::__emplace_unique_key_args<std::__ndk1::pair<bool,
   v8::internal::Signature<v8::internal::wasm::ValueType> >, std::__ndk1::pair<bool,
   v8::internal::Signature<v8::internal::wasm::ValueType> > const&>(std::__ndk1::pair<bool,
   v8::internal::Signature<v8::internal::wasm::ValueType> > const&, std::__ndk1::pair<bool,
   v8::internal::Signature<v8::internal::wasm::ValueType> > const&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,v8::base::hash<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,std::__ndk1::equal_to<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,std::__ndk1::allocator<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>>
::
__emplace_unique_key_args<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>const&>
          (__hash_table<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,v8::base::hash<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,std::__ndk1::equal_to<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,std::__ndk1::allocator<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>>
           *this,pair *param_1,pair *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  __hash_table<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,v8::base::hash<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,std::__ndk1::equal_to<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,std::__ndk1::allocator<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>>
  *p_Var5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  char *pcVar11;
  byte *pbVar12;
  ulong unaff_x25;
  undefined2 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  uVar2 = v8::base::hash_combine(*(ulong *)(param_1 + 0x10),*(ulong *)(param_1 + 8));
  pbVar12 = *(byte **)(param_1 + 0x18);
  if (pbVar12 != pbVar12 + *(long *)(param_1 + 0x10) + *(long *)(param_1 + 8)) {
    lVar8 = *(long *)(param_1 + 8) + *(long *)(param_1 + 0x10);
    do {
      uVar3 = v8::base::hash_combine(0,(ulong)*pbVar12);
      uVar2 = v8::base::hash_value(uVar2);
      uVar2 = v8::base::hash_combine(uVar3,uVar2);
      lVar8 = lVar8 + -1;
      unaff_x25 = 0;
      pbVar12 = pbVar12 + 1;
    } while (lVar8 != 0);
  }
  uVar2 = v8::base::hash_combine(0,uVar2);
  uVar2 = v8::base::hash_combine(uVar2,(ulong)(byte)*param_1);
  uVar3 = *(ulong *)(this + 8);
  if (uVar3 != 0) {
    uVar14 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar3 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar3))))
                                                ))));
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar7 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar7 < 2) {
      unaff_x25 = uVar3 - 1 & uVar2;
    }
    else {
      unaff_x25 = uVar2;
      if (uVar3 <= uVar2) {
        uVar9 = 0;
        if (uVar3 != 0) {
          uVar9 = uVar2 / uVar3;
        }
        unaff_x25 = uVar2 - uVar9 * uVar3;
      }
    }
    plVar6 = *(long **)(*(long *)this + unaff_x25 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      lVar8 = *(long *)(param_1 + 8);
      lVar15 = *(long *)(param_1 + 0x10);
      do {
        uVar9 = plVar6[1];
        if (uVar9 != uVar2) {
          if (uVar7 < 2) {
            uVar9 = uVar9 & uVar3 - 1;
          }
          else if (uVar3 <= uVar9) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar9 / uVar3;
            }
            if (uVar9 - uVar1 * uVar3 == unaff_x25) goto LAB_015e9304;
            break;
          }
          if (uVar9 != unaff_x25) break;
        }
LAB_015e9304:
        if (*(pair *)(plVar6 + 2) == *param_1) {
          if ((pair *)(plVar6 + 2) == param_1) {
            return plVar6;
          }
          if ((plVar6[4] == lVar15) && (plVar6[3] == lVar8)) {
            pcVar10 = (char *)plVar6[5];
            lVar16 = lVar8 + lVar15;
            pcVar11 = *(char **)(param_1 + 0x18);
            if (pcVar10 == pcVar10 + lVar15 + lVar8) {
              return plVar6;
            }
            while (*pcVar10 == *pcVar11) {
              pcVar10 = pcVar10 + 1;
              lVar16 = lVar16 + -1;
              pcVar11 = pcVar11 + 1;
              if (lVar16 == 0) {
                return plVar6;
              }
            }
          }
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  plVar6 = operator_new(0x30);
  lVar15 = *(long *)(param_2 + 8);
  lVar8 = *(long *)param_2;
  lVar17 = *(long *)(param_2 + 0x18);
  lVar16 = *(long *)(param_2 + 0x10);
  *plVar6 = 0;
  plVar6[1] = uVar2;
  plVar6[3] = lVar15;
  plVar6[2] = lVar8;
  plVar6[5] = lVar17;
  plVar6[4] = lVar16;
  if ((uVar3 == 0) || (*(float *)(this + 0x20) * (float)uVar3 < (float)(*(long *)(this + 0x18) + 1))
     ) {
    uVar3 = (ulong)(uVar3 < 3 || (uVar3 & uVar3 - 1) != 0) | uVar3 << 1;
    uVar7 = (ulong)((float)(*(long *)(this + 0x18) + 1) / *(float *)(this + 0x20));
    if (uVar7 <= uVar3) {
      uVar7 = uVar3;
    }
    rehash(this,uVar7);
    uVar3 = *(ulong *)(this + 8);
    if ((uVar3 & uVar3 - 1) == 0) {
      unaff_x25 = uVar3 - 1 & uVar2;
    }
    else {
      unaff_x25 = uVar2;
      if (uVar3 <= uVar2) {
        uVar7 = 0;
        if (uVar3 != 0) {
          uVar7 = uVar2 / uVar3;
        }
        unaff_x25 = uVar2 - uVar7 * uVar3;
      }
    }
  }
  lVar8 = *(long *)this;
  plVar4 = *(long **)(lVar8 + unaff_x25 * 8);
  if (plVar4 == (long *)0x0) {
    p_Var5 = this + 0x10;
    *plVar6 = *(long *)p_Var5;
    *(long **)p_Var5 = plVar6;
    *(__hash_table<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,v8::base::hash<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,std::__ndk1::equal_to<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,std::__ndk1::allocator<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>>
      **)(lVar8 + unaff_x25 * 8) = p_Var5;
    if (*plVar6 == 0) goto LAB_015e9480;
    uVar2 = *(ulong *)(*plVar6 + 8);
    if ((uVar3 & uVar3 - 1) == 0) {
      uVar2 = uVar2 & uVar3 - 1;
    }
    else if (uVar3 <= uVar2) {
      uVar7 = 0;
      if (uVar3 != 0) {
        uVar7 = uVar2 / uVar3;
      }
      uVar2 = uVar2 - uVar7 * uVar3;
    }
    plVar4 = (long *)(*(long *)this + uVar2 * 8);
  }
  else {
    *plVar6 = *plVar4;
  }
  *plVar4 = (long)plVar6;
LAB_015e9480:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return plVar6;
}

