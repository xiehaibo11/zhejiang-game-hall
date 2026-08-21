
/* v8::internal::compiler::RegisterAllocatorVerifier::CreateForBlock(v8::internal::compiler::InstructionBlock
   const*) */

__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
* __thiscall
v8::internal::compiler::RegisterAllocatorVerifier::CreateForBlock
          (RegisterAllocatorVerifier *this,InstructionBlock *param_1)

{
  RegisterAllocatorVerifier *pRVar1;
  ulong uVar2;
  __tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
  *p_Var3;
  ulong uVar4;
  piecewise_construct_t *ppVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  Zone *pZVar9;
  undefined4 *puVar10;
  __tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
  *this_00;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  RegisterAllocatorVerifier *pRVar14;
  __tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
  *p_Var15;
  RegisterAllocatorVerifier *pRVar16;
  uint uVar17;
  ulong uVar18;
  __tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
  *p_Var19;
  long *plVar20;
  long *plVar21;
  piecewise_construct_t *ppVar22;
  ulong uVar23;
  piecewise_construct_t *local_78;
  undefined4 *puStack_70;
  
  pZVar9 = *(Zone **)this;
  iVar6 = *(int *)(param_1 + 100);
  this_00 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
              **)(pZVar9 + 0x10);
  if ((ulong)(*(long *)(pZVar9 + 0x18) - (long)this_00) < 0x48) {
    this_00 = (__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
               *)Zone::NewExpand(pZVar9,0x48);
  }
  else {
    *(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
      **)(pZVar9 + 0x10) = this_00 + 0x48;
  }
  uVar11 = *(undefined8 *)this;
  p_Var19 = this_00 + 8;
  *(undefined8 *)p_Var19 = 0;
  *(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
    **)this_00 = p_Var19;
  *(undefined8 *)(this_00 + 0x10) = uVar11;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x30) = uVar11;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x40) = uVar11;
  *(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
    **)(this_00 + 0x20) = this_00 + 0x28;
  ppVar22 = *(piecewise_construct_t **)(param_1 + 0x20);
  ppVar5 = *(piecewise_construct_t **)(param_1 + 0x28);
  lVar12 = (long)ppVar5 - (long)ppVar22 >> 2;
  if (lVar12 != 0) {
    if ((lVar12 == 1) && (*(long *)(param_1 + 0x48) == *(long *)(param_1 + 0x40))) {
      local_78 = ppVar22;
      lVar12 = std::__ndk1::
               __tree<std::__ndk1::__value_type<v8::internal::compiler::RpoNumber,v8::internal::compiler::BlockAssessments*>,std::__ndk1::__map_value_compare<v8::internal::compiler::RpoNumber,std::__ndk1::__value_type<v8::internal::compiler::RpoNumber,v8::internal::compiler::BlockAssessments*>,std::__ndk1::less<v8::internal::compiler::RpoNumber>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::RpoNumber,v8::internal::compiler::BlockAssessments*>>>
               ::
               __emplace_unique_key_args<v8::internal::compiler::RpoNumber,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::compiler::RpoNumber_const&>,std::__ndk1::tuple<>>
                         (this + 0x38,ppVar22,(tuple *)&DAT_01a5a609,(tuple *)&local_78);
      if (*(long *)(this_00 + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","map_.empty()");
      }
      plVar20 = *(long **)(lVar12 + 0x28);
      if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(other) != nullptr");
      }
      plVar21 = (long *)*plVar20;
      while (plVar21 != plVar20 + 1) {
        std::__ndk1::
        __tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
        ::
        __emplace_hint_unique_key_args<v8::internal::compiler::InstructionOperand,std::__ndk1::pair<v8::internal::compiler::InstructionOperand_const,v8::internal::compiler::Assessment*>const&>
                  (this_00,p_Var19,plVar21 + 4,plVar21 + 4);
        plVar13 = (long *)plVar21[1];
        if ((long *)plVar21[1] == (long *)0x0) {
          plVar13 = plVar21 + 2;
          bVar8 = (long *)*(long *)*plVar13 != plVar21;
          plVar21 = (long *)*plVar13;
          if (bVar8) {
            do {
              lVar12 = *plVar13;
              plVar13 = (long *)(lVar12 + 0x10);
              plVar21 = (long *)*plVar13;
            } while (*plVar21 != lVar12);
          }
        }
        else {
          do {
            plVar21 = plVar13;
            plVar13 = (long *)*plVar21;
          } while ((long *)*plVar21 != (long *)0x0);
        }
      }
    }
    else if (ppVar22 != ppVar5) {
      pRVar1 = this + 0x40;
      do {
        pRVar16 = *(RegisterAllocatorVerifier **)pRVar1;
        iVar7 = *(int *)ppVar22;
        pRVar14 = pRVar1;
        if (pRVar16 == (RegisterAllocatorVerifier *)0x0) {
LAB_01651c04:
          if (iVar7 < iVar6) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","pred_id >= current_block_id");
          }
          if (*(int *)(param_1 + 0x6c) < 0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","block->IsLoopHeader()");
          }
        }
        else {
          do {
            if (iVar7 <= *(int *)(pRVar16 + 0x20)) {
              pRVar14 = pRVar16;
            }
            pRVar16 = *(RegisterAllocatorVerifier **)
                       (pRVar16 + (ulong)(*(int *)(pRVar16 + 0x20) < iVar7) * 8);
          } while (pRVar16 != (RegisterAllocatorVerifier *)0x0);
          if ((pRVar14 == pRVar1) || (iVar7 < *(int *)(pRVar14 + 0x20))) goto LAB_01651c04;
          plVar20 = *(long **)(pRVar14 + 0x28);
          if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","(pred_assessments) != nullptr");
          }
          plVar21 = (long *)*plVar20;
          while (plVar21 != plVar20 + 1) {
            p_Var15 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                        **)p_Var19;
            uVar23 = plVar21[4];
            if (p_Var15 ==
                (__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                 *)0x0) {
LAB_01651d0c:
              pZVar9 = *(Zone **)this;
              puVar10 = *(undefined4 **)(pZVar9 + 0x10);
              if ((ulong)(*(long *)(pZVar9 + 0x18) - (long)puVar10) < 0x38) {
                puVar10 = (undefined4 *)Zone::NewExpand(pZVar9,0x38);
              }
              else {
                *(undefined4 **)(pZVar9 + 0x10) = puVar10 + 0xe;
              }
              uVar11 = *(undefined8 *)this;
              *puVar10 = 1;
              *(InstructionBlock **)(puVar10 + 2) = param_1;
              *(ulong *)(puVar10 + 4) = uVar23;
              *(undefined8 *)(puVar10 + 8) = 0;
              *(undefined4 **)(puVar10 + 6) = puVar10 + 8;
              *(undefined8 *)(puVar10 + 10) = uVar11;
              *(undefined8 *)(puVar10 + 0xc) = 0;
              local_78 = (piecewise_construct_t *)uVar23;
              puStack_70 = puVar10;
              std::__ndk1::
              __tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
              ::
              __emplace_unique_key_args<v8::internal::compiler::InstructionOperand,std::__ndk1::pair<v8::internal::compiler::InstructionOperand,v8::internal::compiler::PendingAssessment*>>
                        (this_00,(InstructionOperand *)&local_78,(pair *)&local_78);
              plVar13 = (long *)plVar21[1];
              if ((long *)plVar21[1] == (long *)0x0) goto LAB_01651d74;
LAB_01651d64:
              do {
                plVar21 = plVar13;
                plVar13 = (long *)*plVar21;
              } while (plVar13 != (long *)0x0);
            }
            else {
              uVar18 = 0x180;
              if (((uint)uVar23 >> 5 & 0xff) < 0xb || (uVar23 & 0x1c) != 4) {
                uVar18 = 0;
              }
              uVar2 = uVar23;
              if ((uVar23 & 4) != 0) {
                uVar2 = uVar23 & 0xffffffffffffe018 | uVar18 | 4;
              }
              uVar18 = *(ulong *)(p_Var15 + 0x20);
              uVar17 = (uint)uVar18;
              p_Var3 = p_Var19;
              while( true ) {
                if ((uVar17 >> 2 & 1) != 0) {
                  uVar4 = 0x180;
                  if (((uint)uVar18 >> 5 & 0xff) < 0xb || (uVar18 & 0x1c) != 4) {
                    uVar4 = 0;
                  }
                  uVar18 = uVar18 & 0xffffffffffffe018 | uVar4 | 4;
                }
                if (uVar18 >= uVar2) {
                  p_Var3 = p_Var15;
                }
                p_Var15 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                            **)(p_Var15 + (ulong)(uVar18 < uVar2) * 8);
                if (p_Var15 ==
                    (__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                     *)0x0) break;
                uVar18 = *(ulong *)(p_Var15 + 0x20);
                uVar17 = (uint)uVar18;
              }
              if (p_Var3 == p_Var19) goto LAB_01651d0c;
              uVar18 = *(ulong *)(p_Var3 + 0x20);
              if (((uint)uVar18 >> 2 & 1) != 0) {
                uVar4 = 0x180;
                if (((uint)uVar18 >> 5 & 0xff) < 0xb || (uVar18 & 0x1c) != 4) {
                  uVar4 = 0;
                }
                uVar18 = uVar18 & 0xffffffffffffe018 | uVar4 | 4;
              }
              if (uVar2 < uVar18) goto LAB_01651d0c;
              plVar13 = (long *)plVar21[1];
              if ((long *)plVar21[1] != (long *)0x0) goto LAB_01651d64;
LAB_01651d74:
              plVar13 = plVar21 + 2;
              bVar8 = (long *)*(long *)*plVar13 != plVar21;
              plVar21 = (long *)*plVar13;
              if (bVar8) {
                do {
                  lVar12 = *plVar13;
                  plVar13 = (long *)(lVar12 + 0x10);
                  plVar21 = (long *)*plVar13;
                } while (*plVar21 != lVar12);
              }
            }
          }
        }
        ppVar22 = ppVar22 + 4;
      } while (ppVar22 != ppVar5);
    }
  }
  return this_00;
}

