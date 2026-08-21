
/* std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,
   v8::internal::ProfileNode*>, void*>*>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,
   v8::internal::ProfileNode*>,
   std::__ndk1::__unordered_map_hasher<v8::internal::CodeEntryAndLineNumber,
   std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber, v8::internal::ProfileNode*>,
   v8::internal::ProfileNode::Hasher, true>,
   std::__ndk1::__unordered_map_equal<v8::internal::CodeEntryAndLineNumber,
   std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber, v8::internal::ProfileNode*>,
   v8::internal::ProfileNode::Equals, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,
   v8::internal::ProfileNode*> >
   >::find<v8::internal::CodeEntryAndLineNumber>(v8::internal::CodeEntryAndLineNumber const&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,std::__ndk1::__unordered_map_hasher<v8::internal::CodeEntryAndLineNumber,std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,v8::internal::ProfileNode::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::CodeEntryAndLineNumber,std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,v8::internal::ProfileNode::Equals,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>>>
::find<v8::internal::CodeEntryAndLineNumber>
          (__hash_table<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,std::__ndk1::__unordered_map_hasher<v8::internal::CodeEntryAndLineNumber,std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,v8::internal::ProfileNode::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::CodeEntryAndLineNumber,std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,v8::internal::ProfileNode::Equals,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>>>
           *this,CodeEntryAndLineNumber *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  int iVar12;
  CodeEntry *pCVar13;
  int iVar14;
  CodeEntry *this_00;
  undefined2 uVar15;
  undefined8 uVar16;
  
  this_00 = *(CodeEntry **)param_1;
  uVar2 = *(uint *)(param_1 + 8);
  uVar5 = v8::internal::CodeEntry::GetHash(this_00);
  uVar6 = *(ulong *)(this + 8);
  if (uVar6 != 0) {
    uVar1 = ~uVar2 + uVar2 * 0x8000;
    uVar1 = (uVar1 ^ uVar1 >> 0xc) * 5;
    uVar16 = CONCAT17(POPCOUNT((char)(uVar6 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar6 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar6 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar6 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar6 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar6 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar6 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar6))))
                                                ))));
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar1 = (uVar1 ^ uVar1 >> 4) * 0x809;
    uVar7 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    uVar5 = uVar5 ^ uVar1 >> 0x10 ^ uVar1 & 0x3fffffff;
    uVar8 = (ulong)uVar5;
    if (uVar7 < 2) {
      uVar9 = (ulong)((int)uVar6 - 1U & uVar5);
    }
    else {
      uVar9 = uVar8;
      if (uVar6 <= uVar8) {
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar9 = uVar8 / uVar6;
        }
        uVar9 = uVar8 - uVar9 * uVar6;
      }
    }
    plVar10 = *(long **)(*(long *)this + uVar9 * 8);
    if (plVar10 != (long *)0x0) {
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) {
        return (long *)0x0;
      }
      while (uVar11 = plVar10[1], uVar11 == uVar8) {
        pCVar13 = (CodeEntry *)plVar10[2];
        if (pCVar13 == this_00) {
          bVar4 = true;
joined_r0x011b0ebc:
          if ((*(uint *)(plVar10 + 3) == uVar2) && (bVar4)) {
            return plVar10;
          }
        }
        else if (*(int *)(pCVar13 + 0x20) == 0) {
          if ((*(long *)(pCVar13 + 8) == *(long *)(this_00 + 8)) &&
             (*(long *)(pCVar13 + 0x10) == *(long *)(this_00 + 0x10))) {
            iVar12 = *(int *)(pCVar13 + 0x18);
            iVar14 = *(int *)(this_00 + 0x18);
            goto LAB_011b0e78;
          }
        }
        else if (*(int *)(pCVar13 + 0x20) == *(int *)(this_00 + 0x20)) {
          iVar12 = *(int *)(pCVar13 + 0x24);
          iVar14 = *(int *)(this_00 + 0x24);
LAB_011b0e78:
          bVar4 = iVar12 == iVar14;
          goto joined_r0x011b0ebc;
        }
LAB_011b0e38:
        plVar10 = (long *)*plVar10;
        if (plVar10 == (long *)0x0) {
          return (long *)0x0;
        }
      }
      if (uVar7 < 2) {
        uVar11 = uVar11 & uVar6 - 1;
      }
      else if (uVar6 <= uVar11) {
        uVar3 = 0;
        if (uVar6 != 0) {
          uVar3 = uVar11 / uVar6;
        }
        uVar11 = uVar11 - uVar3 * uVar6;
      }
      if (uVar11 == uVar9) goto LAB_011b0e38;
    }
  }
  return (long *)0x0;
}

