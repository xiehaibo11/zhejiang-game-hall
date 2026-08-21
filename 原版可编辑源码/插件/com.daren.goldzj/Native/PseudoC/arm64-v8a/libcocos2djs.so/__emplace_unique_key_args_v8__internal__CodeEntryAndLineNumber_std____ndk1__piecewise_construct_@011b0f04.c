
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,
   v8::internal::ProfileNode*>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,
   v8::internal::ProfileNode*>,
   std::__ndk1::__unordered_map_hasher<v8::internal::CodeEntryAndLineNumber,
   std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber, v8::internal::ProfileNode*>,
   v8::internal::ProfileNode::Hasher, true>,
   std::__ndk1::__unordered_map_equal<v8::internal::CodeEntryAndLineNumber,
   std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber, v8::internal::ProfileNode*>,
   v8::internal::ProfileNode::Equals, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,
   v8::internal::ProfileNode*> > >::__emplace_unique_key_args<v8::internal::CodeEntryAndLineNumber,
   std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<v8::internal::CodeEntryAndLineNumber&&>, std::__ndk1::tuple<>
   >(v8::internal::CodeEntryAndLineNumber const&, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<v8::internal::CodeEntryAndLineNumber&&>&&, std::__ndk1::tuple<>&&) */

long * std::__ndk1::
       __hash_table<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,std::__ndk1::__unordered_map_hasher<v8::internal::CodeEntryAndLineNumber,std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,v8::internal::ProfileNode::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::CodeEntryAndLineNumber,std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,v8::internal::ProfileNode::Equals,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>>>
       ::
       __emplace_unique_key_args<v8::internal::CodeEntryAndLineNumber,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::CodeEntryAndLineNumber&&>,std::__ndk1::tuple<>>
                 (CodeEntryAndLineNumber *param_1,piecewise_construct_t *param_2,tuple *param_3,
                 tuple *param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  CodeEntryAndLineNumber *pCVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  CodeEntry *pCVar12;
  int iVar13;
  long *plVar14;
  CodeEntry *this;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x25;
  undefined2 uVar17;
  undefined8 uVar18;
  long lVar19;
  
  this = *(CodeEntry **)param_2;
  uVar2 = *(uint *)(param_2 + 8);
  uVar5 = v8::internal::CodeEntry::GetHash(this);
  uVar1 = ~uVar2 + uVar2 * 0x8000;
  uVar1 = (uVar1 ^ uVar1 >> 0xc) * 5;
  uVar15 = *(ulong *)(param_1 + 8);
  uVar1 = (uVar1 ^ uVar1 >> 4) * 0x809;
  uVar1 = uVar5 ^ uVar1 >> 0x10 ^ uVar1 & 0x3fffffff;
  uVar16 = (ulong)uVar1;
  if (uVar15 != 0) {
    uVar18 = CONCAT17(POPCOUNT((char)(uVar15 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar15 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar15 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar15 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar15 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar15 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar15 
                                                  >> 8)),POPCOUNT((char)uVar15))))))));
    uVar17 = NEON_uaddlv(uVar18,1);
    uVar8 = CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar17) & 0xffffffff;
    if (uVar8 < 2) {
      unaff_x25 = (ulong)((int)uVar15 - 1U & uVar1);
    }
    else {
      unaff_x25 = uVar16;
      if (uVar15 <= uVar16) {
        uVar10 = 0;
        if (uVar15 != 0) {
          uVar10 = uVar16 / uVar15;
        }
        unaff_x25 = uVar16 - uVar10 * uVar15;
      }
    }
    plVar14 = *(long **)(*(long *)param_1 + unaff_x25 * 8);
    if (plVar14 != (long *)0x0) {
      for (plVar14 = (long *)*plVar14; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
        uVar10 = plVar14[1];
        if (uVar10 != uVar16) {
          if (uVar8 < 2) {
            uVar10 = uVar10 & uVar15 - 1;
          }
          else if (uVar15 <= uVar10) {
            uVar3 = 0;
            if (uVar15 != 0) {
              uVar3 = uVar10 / uVar15;
            }
            if (uVar10 - uVar3 * uVar15 == unaff_x25) goto LAB_011b1010;
            break;
          }
          if (uVar10 != unaff_x25) break;
        }
LAB_011b1010:
        pCVar12 = (CodeEntry *)plVar14[2];
        if (pCVar12 == this) {
          bVar4 = true;
        }
        else {
          if (*(int *)(pCVar12 + 0x20) == 0) {
            if ((*(long *)(pCVar12 + 8) == *(long *)(this + 8)) &&
               (*(long *)(pCVar12 + 0x10) == *(long *)(this + 0x10))) {
              iVar11 = *(int *)(pCVar12 + 0x18);
              iVar13 = *(int *)(this + 0x18);
              goto LAB_011b103c;
            }
          }
          else if (*(int *)(pCVar12 + 0x20) == *(int *)(this + 0x20)) {
            iVar11 = *(int *)(pCVar12 + 0x24);
            iVar13 = *(int *)(this + 0x24);
LAB_011b103c:
            bVar4 = iVar11 == iVar13;
            goto joined_r0x011b1078;
          }
          bVar4 = false;
        }
joined_r0x011b1078:
        if ((*(uint *)(plVar14 + 3) == uVar2) && (bVar4)) {
          return plVar14;
        }
      }
    }
  }
  plVar14 = operator_new(0x28);
  lVar19 = (*(long **)param_4)[1];
  lVar9 = **(long **)param_4;
  plVar14[4] = 0;
  *plVar14 = 0;
  plVar14[1] = uVar16;
  plVar14[3] = lVar19;
  plVar14[2] = lVar9;
  if ((uVar15 == 0) ||
     (*(float *)(param_1 + 0x20) * (float)uVar15 < (float)(*(long *)(param_1 + 0x18) + 1))) {
    uVar15 = (ulong)(uVar15 < 3 || (uVar15 & uVar15 - 1) != 0) | uVar15 << 1;
    uVar8 = (ulong)((float)(*(long *)(param_1 + 0x18) + 1) / *(float *)(param_1 + 0x20));
    if (uVar8 <= uVar15) {
      uVar8 = uVar15;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,std::__ndk1::__unordered_map_hasher<v8::internal::CodeEntryAndLineNumber,std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,v8::internal::ProfileNode::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::CodeEntryAndLineNumber,std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,v8::internal::ProfileNode::Equals,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>>>
            *)param_1,uVar8);
    uVar15 = *(ulong *)(param_1 + 8);
    if ((uVar15 & uVar15 - 1) == 0) {
      unaff_x25 = (ulong)((int)uVar15 - 1U & uVar1);
    }
    else {
      unaff_x25 = uVar16;
      if (uVar15 <= uVar16) {
        uVar8 = 0;
        if (uVar15 != 0) {
          uVar8 = uVar16 / uVar15;
        }
        unaff_x25 = uVar16 - uVar8 * uVar15;
      }
    }
  }
  lVar9 = *(long *)param_1;
  plVar6 = *(long **)(lVar9 + unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    pCVar7 = param_1 + 0x10;
    *plVar14 = *(long *)pCVar7;
    *(long **)pCVar7 = plVar14;
    *(CodeEntryAndLineNumber **)(lVar9 + unaff_x25 * 8) = pCVar7;
    if (*plVar14 == 0) goto LAB_011b11a8;
    uVar16 = *(ulong *)(*plVar14 + 8);
    if ((uVar15 & uVar15 - 1) == 0) {
      uVar16 = uVar16 & uVar15 - 1;
    }
    else if (uVar15 <= uVar16) {
      uVar8 = 0;
      if (uVar15 != 0) {
        uVar8 = uVar16 / uVar15;
      }
      uVar16 = uVar16 - uVar8 * uVar15;
    }
    plVar6 = (long *)(*(long *)param_1 + uVar16 * 8);
  }
  else {
    *plVar14 = *plVar6;
  }
  *plVar6 = (long)plVar14;
LAB_011b11a8:
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  return plVar14;
}

