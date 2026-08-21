
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<v8::internal::compiler::ObjectData*,
   v8::internal::compiler::BytecodeAnalysis*>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::ObjectData*,
   v8::internal::compiler::BytecodeAnalysis*>,
   std::__ndk1::__unordered_map_hasher<v8::internal::compiler::ObjectData*,
   std::__ndk1::__hash_value_type<v8::internal::compiler::ObjectData*,
   v8::internal::compiler::BytecodeAnalysis*>, v8::base::hash<v8::internal::compiler::ObjectData*>,
   true>, std::__ndk1::__unordered_map_equal<v8::internal::compiler::ObjectData*,
   std::__ndk1::__hash_value_type<v8::internal::compiler::ObjectData*,
   v8::internal::compiler::BytecodeAnalysis*>,
   std::__ndk1::equal_to<v8::internal::compiler::ObjectData*>, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::ObjectData*,
   v8::internal::compiler::BytecodeAnalysis*> >
   >::__emplace_unique_key_args<v8::internal::compiler::ObjectData*,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<v8::internal::compiler::ObjectData*
   const&>, std::__ndk1::tuple<> >(v8::internal::compiler::ObjectData* const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<v8::internal::compiler::ObjectData*
   const&>&&, std::__ndk1::tuple<>&&) */

ObjectData *
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::ObjectData*,v8::internal::compiler::BytecodeAnalysis*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::ObjectData*,std::__ndk1::__hash_value_type<v8::internal::compiler::ObjectData*,v8::internal::compiler::BytecodeAnalysis*>,v8::base::hash<v8::internal::compiler::ObjectData*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::ObjectData*,std::__ndk1::__hash_value_type<v8::internal::compiler::ObjectData*,v8::internal::compiler::BytecodeAnalysis*>,std::__ndk1::equal_to<v8::internal::compiler::ObjectData*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::ObjectData*,v8::internal::compiler::BytecodeAnalysis*>>>
::
__emplace_unique_key_args<v8::internal::compiler::ObjectData*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::compiler::ObjectData*const&>,std::__ndk1::tuple<>>
          (ObjectData **param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  ObjectData *pOVar1;
  Zone *this;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ObjectData **ppOVar5;
  ulong uVar6;
  ObjectData *pOVar7;
  ObjectData *pOVar8;
  ObjectData *pOVar9;
  ObjectData *unaff_x25;
  undefined2 uVar10;
  
  pOVar1 = (ObjectData *)v8::base::hash_value(*(ulong *)param_2);
  pOVar9 = param_1[1];
  if (pOVar9 != (ObjectData *)0x0) {
    uVar3 = CONCAT17(POPCOUNT((char)((ulong)pOVar9 >> 0x38)),
                     CONCAT16(POPCOUNT((char)((ulong)pOVar9 >> 0x30)),
                              CONCAT15(POPCOUNT((char)((ulong)pOVar9 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)((ulong)pOVar9 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)((ulong)pOVar9 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)((ulong)pOVar9 >>
                                                                                 0x10)),
                                                                  CONCAT11(POPCOUNT((char)((ulong)
                                                  pOVar9 >> 8)),POPCOUNT((char)pOVar9))))))));
    uVar10 = NEON_uaddlv(uVar3,1);
    uVar2 = CONCAT62((int6)((ulong)uVar3 >> 0x10),uVar10) & 0xffffffff;
    if (uVar2 < 2) {
      unaff_x25 = (ObjectData *)((ulong)(pOVar9 + -1) & (ulong)pOVar1);
    }
    else {
      unaff_x25 = pOVar1;
      if (pOVar9 <= pOVar1) {
        uVar6 = 0;
        if (pOVar9 != (ObjectData *)0x0) {
          uVar6 = (ulong)pOVar1 / (ulong)pOVar9;
        }
        unaff_x25 = pOVar1 + -(uVar6 * (long)pOVar9);
      }
    }
    if (*(long **)(*param_1 + (long)unaff_x25 * 8) != (long *)0x0) {
      for (pOVar8 = (ObjectData *)**(long **)(*param_1 + (long)unaff_x25 * 8);
          pOVar8 != (ObjectData *)0x0; pOVar8 = *(ObjectData **)pOVar8) {
        pOVar7 = *(ObjectData **)(pOVar8 + 8);
        if (pOVar7 != pOVar1) {
          if (uVar2 < 2) {
            pOVar7 = (ObjectData *)((ulong)pOVar7 & (ulong)(pOVar9 + -1));
          }
          else if (pOVar9 <= pOVar7) {
            uVar6 = 0;
            if (pOVar9 != (ObjectData *)0x0) {
              uVar6 = (ulong)pOVar7 / (ulong)pOVar9;
            }
            if (pOVar7 + -(uVar6 * (long)pOVar9) == unaff_x25) goto LAB_0173d954;
            break;
          }
          if (pOVar7 != unaff_x25) break;
        }
LAB_0173d954:
        if (*(long *)(pOVar8 + 0x10) == *(long *)param_2) {
          return pOVar8;
        }
      }
    }
  }
  this = (Zone *)param_1[4];
  pOVar8 = *(ObjectData **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)pOVar8) < 0x20) {
    pOVar8 = (ObjectData *)v8::internal::Zone::NewExpand(this,0x20);
  }
  else {
    *(ObjectData **)(this + 0x10) = pOVar8 + 0x20;
  }
  uVar3 = **(undefined8 **)param_4;
  *(undefined8 *)pOVar8 = 0;
  *(ObjectData **)(pOVar8 + 8) = pOVar1;
  *(undefined8 *)(pOVar8 + 0x10) = uVar3;
  *(undefined8 *)(pOVar8 + 0x18) = 0;
  if ((pOVar9 == (ObjectData *)0x0) ||
     (*(float *)(param_1 + 6) * (float)pOVar9 < (float)(param_1[5] + 1))) {
    uVar2 = (ulong)(pOVar9 < (ObjectData *)0x3 || ((ulong)pOVar9 & (ulong)(pOVar9 + -1)) != 0) |
            (long)pOVar9 << 1;
    uVar6 = (ulong)((float)(param_1[5] + 1) / *(float *)(param_1 + 6));
    if (uVar6 <= uVar2) {
      uVar6 = uVar2;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::ObjectData*,v8::internal::compiler::BytecodeAnalysis*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::ObjectData*,std::__ndk1::__hash_value_type<v8::internal::compiler::ObjectData*,v8::internal::compiler::BytecodeAnalysis*>,v8::base::hash<v8::internal::compiler::ObjectData*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::ObjectData*,std::__ndk1::__hash_value_type<v8::internal::compiler::ObjectData*,v8::internal::compiler::BytecodeAnalysis*>,std::__ndk1::equal_to<v8::internal::compiler::ObjectData*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::ObjectData*,v8::internal::compiler::BytecodeAnalysis*>>>
            *)param_1,uVar6);
    pOVar9 = param_1[1];
    if (((ulong)pOVar9 & (ulong)(pOVar9 + -1)) == 0) {
      unaff_x25 = (ObjectData *)((ulong)(pOVar9 + -1) & (ulong)pOVar1);
    }
    else {
      unaff_x25 = pOVar1;
      if (pOVar9 <= pOVar1) {
        uVar2 = 0;
        if (pOVar9 != (ObjectData *)0x0) {
          uVar2 = (ulong)pOVar1 / (ulong)pOVar9;
        }
        unaff_x25 = pOVar1 + -(uVar2 * (long)pOVar9);
      }
    }
  }
  puVar4 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
  if (puVar4 == (undefined8 *)0x0) {
    ppOVar5 = param_1 + 3;
    *(ObjectData **)pOVar8 = *ppOVar5;
    *ppOVar5 = pOVar8;
    *(ObjectData ***)(*param_1 + (long)unaff_x25 * 8) = ppOVar5;
    if (*(long *)pOVar8 != 0) {
      pOVar1 = *(ObjectData **)(*(long *)pOVar8 + 8);
      if (((ulong)pOVar9 & (ulong)(pOVar9 + -1)) == 0) {
        pOVar1 = (ObjectData *)((ulong)pOVar1 & (ulong)(pOVar9 + -1));
      }
      else if (pOVar9 <= pOVar1) {
        uVar2 = 0;
        if (pOVar9 != (ObjectData *)0x0) {
          uVar2 = (ulong)pOVar1 / (ulong)pOVar9;
        }
        pOVar1 = pOVar1 + -(uVar2 * (long)pOVar9);
      }
      *(ObjectData **)(*param_1 + (long)pOVar1 * 8) = pOVar8;
    }
  }
  else {
    *(undefined8 *)pOVar8 = *puVar4;
    *puVar4 = pOVar8;
  }
  param_1[5] = param_1[5] + 1;
  return pOVar8;
}

