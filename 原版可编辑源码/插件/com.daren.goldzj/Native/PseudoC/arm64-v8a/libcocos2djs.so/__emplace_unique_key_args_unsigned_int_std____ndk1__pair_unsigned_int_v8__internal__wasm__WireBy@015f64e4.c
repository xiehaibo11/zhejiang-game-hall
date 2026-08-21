
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   int, v8::internal::wasm::WireBytesRef>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned int,
   v8::internal::wasm::WireBytesRef>, std::__ndk1::__unordered_map_hasher<unsigned int,
   std::__ndk1::__hash_value_type<unsigned int, v8::internal::wasm::WireBytesRef>,
   std::__ndk1::hash<unsigned int>, true>, std::__ndk1::__unordered_map_equal<unsigned int,
   std::__ndk1::__hash_value_type<unsigned int, v8::internal::wasm::WireBytesRef>,
   std::__ndk1::equal_to<unsigned int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned int,
   v8::internal::wasm::WireBytesRef> > >::__emplace_unique_key_args<unsigned int,
   std::__ndk1::pair<unsigned int, v8::internal::wasm::WireBytesRef> >(unsigned int const&,
   std::__ndk1::pair<unsigned int, v8::internal::wasm::WireBytesRef>&&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::wasm::WireBytesRef>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::wasm::WireBytesRef>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::wasm::WireBytesRef>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::wasm::WireBytesRef>>>
::
__emplace_unique_key_args<unsigned_int,std::__ndk1::pair<unsigned_int,v8::internal::wasm::WireBytesRef>>
          (__hash_table<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::wasm::WireBytesRef>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::wasm::WireBytesRef>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::wasm::WireBytesRef>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::wasm::WireBytesRef>>>
           *this,uint *param_1,pair *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  __hash_table<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::wasm::WireBytesRef>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::wasm::WireBytesRef>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::wasm::WireBytesRef>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::wasm::WireBytesRef>>>
  *p_Var5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x24;
  undefined2 uVar12;
  
  uVar10 = *(ulong *)(this + 8);
  uVar1 = *param_1;
  uVar11 = (ulong)uVar1;
  if (uVar10 != 0) {
    uVar3 = CONCAT17(POPCOUNT((char)(uVar10 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar10 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar10 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar10 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar10 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar10 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar10 >>
                                                                                          8)),
                                                                           POPCOUNT((char)uVar10))))
                                               ))));
    uVar12 = NEON_uaddlv(uVar3,1);
    uVar6 = CONCAT62((int6)((ulong)uVar3 >> 0x10),uVar12) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x24 = (ulong)((int)uVar10 - 1U & uVar1);
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar8 * uVar10;
      }
    }
    plVar9 = *(long **)(*(long *)this + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar8 = plVar9[1];
        if (uVar8 != uVar11) {
          if (uVar6 < 2) {
            uVar8 = uVar8 & uVar10 - 1;
          }
          else if (uVar10 <= uVar8) {
            uVar2 = 0;
            if (uVar10 != 0) {
              uVar2 = uVar8 / uVar10;
            }
            if (uVar8 - uVar2 * uVar10 == unaff_x24) goto LAB_015f6570;
            break;
          }
          if (uVar8 != unaff_x24) break;
        }
LAB_015f6570:
        if (*(uint *)(plVar9 + 2) == uVar1) {
          return plVar9;
        }
      }
    }
  }
  plVar9 = operator_new(0x20);
  *(undefined4 *)(plVar9 + 2) = *(undefined4 *)param_2;
  uVar3 = *(undefined8 *)(param_2 + 4);
  *plVar9 = 0;
  plVar9[1] = uVar11;
  *(undefined8 *)((long)plVar9 + 0x14) = uVar3;
  if ((uVar10 == 0) ||
     (*(float *)(this + 0x20) * (float)uVar10 < (float)(*(long *)(this + 0x18) + 1))) {
    uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
    uVar6 = (ulong)((float)(*(long *)(this + 0x18) + 1) / *(float *)(this + 0x20));
    if (uVar6 <= uVar10) {
      uVar6 = uVar10;
    }
    rehash(this,uVar6);
    uVar10 = *(ulong *)(this + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar10 - 1U & uVar1);
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar6 * uVar10;
      }
    }
  }
  lVar7 = *(long *)this;
  plVar4 = *(long **)(lVar7 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    p_Var5 = this + 0x10;
    *plVar9 = *(long *)p_Var5;
    *(long **)p_Var5 = plVar9;
    *(__hash_table<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::wasm::WireBytesRef>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::wasm::WireBytesRef>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::wasm::WireBytesRef>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::wasm::WireBytesRef>>>
      **)(lVar7 + unaff_x24 * 8) = p_Var5;
    if (*plVar9 == 0) goto LAB_015f66cc;
    uVar11 = *(ulong *)(*plVar9 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar11 = uVar11 & uVar10 - 1;
    }
    else if (uVar10 <= uVar11) {
      uVar6 = 0;
      if (uVar10 != 0) {
        uVar6 = uVar11 / uVar10;
      }
      uVar11 = uVar11 - uVar6 * uVar10;
    }
    plVar4 = (long *)(*(long *)this + uVar11 * 8);
  }
  else {
    *plVar9 = *plVar4;
  }
  *plVar4 = (long)plVar9;
LAB_015f66cc:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return plVar9;
}

