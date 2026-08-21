
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,
   v8::internal::ProfileNode*>,
   std::__ndk1::__unordered_map_hasher<v8::internal::CodeEntryAndLineNumber,
   std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber, v8::internal::ProfileNode*>,
   v8::internal::ProfileNode::Hasher, true>,
   std::__ndk1::__unordered_map_equal<v8::internal::CodeEntryAndLineNumber,
   std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber, v8::internal::ProfileNode*>,
   v8::internal::ProfileNode::Equals, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,
   v8::internal::ProfileNode*> > >::__rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,std::__ndk1::__unordered_map_hasher<v8::internal::CodeEntryAndLineNumber,std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,v8::internal::ProfileNode::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::CodeEntryAndLineNumber,std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,v8::internal::ProfileNode::Equals,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>>>
::__rehash(__hash_table<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,std::__ndk1::__unordered_map_hasher<v8::internal::CodeEntryAndLineNumber,std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,v8::internal::ProfileNode::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::CodeEntryAndLineNumber,std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,v8::internal::ProfileNode::Equals,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>>>
           *this,ulong param_1)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  void *pvVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
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
    pvVar8 = *(void **)this;
    *(void **)this = pvVar4;
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
    }
    uVar9 = 0;
    *(ulong *)(this + 8) = param_1;
    do {
      *(undefined8 *)(*(long *)this + uVar9 * 8) = 0;
      uVar9 = uVar9 + 1;
    } while (param_1 != uVar9);
    plVar10 = *(long **)(this + 0x10);
    if (plVar10 != (long *)0x0) {
      uVar9 = plVar10[1];
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
        uVar9 = uVar9 & param_1 - 1;
      }
      else if (param_1 <= uVar9) {
        uVar12 = 0;
        if (param_1 != 0) {
          uVar12 = uVar9 / param_1;
        }
        uVar9 = uVar9 - uVar12 * param_1;
      }
      *(__hash_table<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,std::__ndk1::__unordered_map_hasher<v8::internal::CodeEntryAndLineNumber,std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,v8::internal::ProfileNode::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::CodeEntryAndLineNumber,std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>,v8::internal::ProfileNode::Equals,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::CodeEntryAndLineNumber,v8::internal::ProfileNode*>>>
        **)(*(long *)this + uVar9 * 8) = this + 0x10;
      if ((long *)*plVar10 != (long *)0x0) {
        plVar11 = (long *)*plVar10;
        do {
          uVar12 = plVar11[1];
          if ((uVar17 & 0xffffffff) < 2) {
            uVar12 = uVar12 & param_1 - 1;
          }
          else if (param_1 <= uVar12) {
            uVar1 = 0;
            if (param_1 != 0) {
              uVar1 = uVar12 / param_1;
            }
            uVar12 = uVar12 - uVar1 * param_1;
          }
          if (uVar12 != uVar9) {
            plVar14 = plVar11;
            if (*(long *)(*(long *)this + uVar12 * 8) == 0) {
              *(long **)(*(long *)this + uVar12 * 8) = plVar10;
              uVar9 = uVar12;
            }
            else {
              while (plVar13 = plVar14, plVar14 = (long *)*plVar13, plVar14 != (long *)0x0) {
                lVar5 = plVar11[2];
                lVar7 = plVar14[2];
                if (lVar5 == lVar7) {
                  bVar2 = true;
                }
                else {
                  if (*(int *)(lVar5 + 0x20) == 0) {
                    if ((*(long *)(lVar5 + 8) != *(long *)(lVar7 + 8)) ||
                       (*(long *)(lVar5 + 0x10) != *(long *)(lVar7 + 0x10))) break;
                    iVar3 = *(int *)(lVar5 + 0x18);
                    iVar6 = *(int *)(lVar7 + 0x18);
                  }
                  else {
                    if (*(int *)(lVar5 + 0x20) != *(int *)(lVar7 + 0x20)) break;
                    iVar3 = *(int *)(lVar5 + 0x24);
                    iVar6 = *(int *)(lVar7 + 0x24);
                  }
                  bVar2 = iVar3 == iVar6;
                }
                if (((int)plVar11[3] != (int)plVar14[3]) || (!bVar2)) break;
              }
              *plVar10 = (long)plVar14;
              *plVar13 = **(long **)(*(long *)this + uVar12 * 8);
              **(undefined8 **)(*(long *)this + uVar12 * 8) = plVar11;
              plVar11 = plVar10;
            }
          }
          plVar14 = (long *)*plVar11;
          plVar10 = plVar11;
          plVar11 = plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  return;
}

