
/* v8::internal::compiler::BytecodeAnalysis::Analyze() */

void __thiscall v8::internal::compiler::BytecodeAnalysis::Analyze(BytecodeAnalysis *this)

{
  BytecodeLivenessMap *pBVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long *plVar19;
  long *plVar20;
  int extraout_var;
  undefined4 *puVar21;
  ulong *puVar22;
  long lVar23;
  undefined8 *puVar24;
  int iVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  int *piVar32;
  int local_20c;
  long local_1e8;
  undefined **local_1e0;
  undefined8 local_1d8;
  locale alStack_1d0 [8];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined **local_180 [17];
  undefined8 local_f8;
  undefined4 local_f0;
  iterator aiStack_e8 [56];
  long *local_b0;
  int local_a8;
  long local_98;
  long local_90;
  int local_78;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  lVar23 = *(long *)(this + 0x20);
  lVar31 = *(long *)(this + 0x28);
  uVar17 = 0;
  if (lVar31 - lVar23 != 0) {
    uVar17 = (lVar31 - lVar23) * 0x20 - 1;
  }
  uVar26 = *(long *)(this + 0x50) + *(long *)(this + 0x48);
  if (uVar17 == uVar26) {
    std::__ndk1::
    deque<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry>>
    ::__add_back_capacity
              ((deque<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry>>
                *)(this + 0x18));
    lVar23 = *(long *)(this + 0x20);
    lVar31 = *(long *)(this + 0x28);
    uVar26 = *(long *)(this + 0x48) + *(long *)(this + 0x50);
  }
  if (lVar31 == lVar23) {
    puVar21 = (undefined4 *)0x0;
  }
  else {
    puVar21 = (undefined4 *)
              (*(long *)(lVar23 + (uVar26 >> 5 & 0x7fffffffffffff8)) + (uVar26 & 0xff) * 0x10);
  }
  *(undefined8 *)(puVar21 + 2) = 0;
  *puVar21 = 0xffffffff;
  *(long *)(this + 0x50) = *(long *)(this + 0x50) + 1;
  local_1e8 = 0;
  iVar25 = *(int *)(this + 0x10);
  local_20c = -1;
  interpreter::BytecodeArrayRandomIterator::BytecodeArrayRandomIterator
            ((BytecodeArrayRandomIterator *)&local_b0,*(undefined8 *)this,*(undefined8 *)(this + 8))
  ;
  local_78 = (int)((ulong)(local_90 - local_98) >> 2) + -1;
  interpreter::BytecodeArrayRandomIterator::UpdateOffsetFromIndex
            ((BytecodeArrayRandomIterator *)&local_b0);
  uVar17 = interpreter::BytecodeArrayRandomIterator::IsValid
                     ((BytecodeArrayRandomIterator *)&local_b0);
  if ((uVar17 & 1) != 0) {
    local_20c = -1;
    do {
      uVar8 = interpreter::BytecodeArrayAccessor::current_bytecode
                        ((BytecodeArrayAccessor *)&local_b0);
      iVar15 = local_a8;
      if ((uVar8 & 0xff) == 0x8a) {
        iVar14 = interpreter::BytecodeArrayAccessor::current_bytecode_size
                           ((BytecodeArrayAccessor *)&local_b0);
        iVar13 = interpreter::BytecodeArrayAccessor::GetJumpTargetOffset
                           ((BytecodeArrayAccessor *)&local_b0);
        PushLoop(this,iVar13,iVar14 + iVar15);
        if (iVar15 == iVar25) {
          *(int *)(this + 0xe8) = iVar13;
        }
        if (this[0x14] != (BytecodeAnalysis)0x0) {
          local_1e0 = (undefined **)CONCAT44(local_1e0._4_4_,local_78);
          if (*(int **)(this + 0x70) < *(int **)(this + 0x78)) {
            **(int **)(this + 0x70) = local_78;
            *(long *)(this + 0x70) = *(long *)(this + 0x70) + 4;
          }
          else {
            std::__ndk1::vector<int,v8::internal::ZoneAllocator<int>>::__push_back_slow_path<int>
                      ((vector<int,v8::internal::ZoneAllocator<int>> *)(this + 0x68),
                       (int *)&local_1e0);
          }
          goto LAB_0166bf18;
        }
      }
      else {
        if ((uVar8 & 0xff) == 0xaf) {
          local_20c = local_78;
        }
        if (*(ulong *)(this + 0x50) < 2) {
          if ((uVar8 & 0xff) == 0xb0) {
            uVar17 = interpreter::BytecodeArrayAccessor::GetUnsignedImmediateOperand
                               ((BytecodeArrayAccessor *)&local_b0,3);
            iVar14 = interpreter::BytecodeArrayAccessor::current_bytecode_size
                               ((BytecodeArrayAccessor *)&local_b0);
            uVar11 = iVar14 + iVar15;
            local_1e0 = (undefined **)(uVar17 & 0xffffffff | (ulong)uVar11 << 0x20);
            local_1d8 = (undefined **)CONCAT44(local_1d8._4_4_,uVar11);
            puVar24 = *(undefined8 **)(this + 0x90);
            if (puVar24 < *(undefined8 **)(this + 0x98)) {
              *(uint *)(puVar24 + 1) = uVar11;
              *puVar24 = local_1e0;
              *(long *)(this + 0x90) = *(long *)(this + 0x90) + 0xc;
            }
            else {
              std::__ndk1::
              vector<v8::internal::compiler::ResumeJumpTarget,v8::internal::ZoneAllocator<v8::internal::compiler::ResumeJumpTarget>>
              ::__push_back_slow_path<v8::internal::compiler::ResumeJumpTarget>
                        ((vector<v8::internal::compiler::ResumeJumpTarget,v8::internal::ZoneAllocator<v8::internal::compiler::ResumeJumpTarget>>
                          *)(this + 0x88),(ResumeJumpTarget *)&local_1e0);
            }
          }
        }
        else {
          uVar26 = (*(ulong *)(this + 0x50) + *(long *)(this + 0x48)) - 1;
          lVar23 = *(long *)(*(long *)(this + 0x20) + (uVar26 >> 5 & 0x7fffffffffffff8));
          uVar17 = (ulong)uVar8 & 0xff;
          iVar14 = *(int *)(interpreter::Bytecodes::kOperandCount + uVar17 * 4);
          lVar31 = *(long *)(lVar23 + (uVar26 & 0xff) * 0x10 + 8);
          if (0 < iVar14) {
            iVar13 = 0;
            lVar29 = *(long *)(interpreter::Bytecodes::kOperandTypes + uVar17 * 8);
            do {
              switch(*(undefined1 *)(lVar29 + iVar13)) {
              case 0xc:
                iVar9 = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                                  ((BytecodeArrayAccessor *)&local_b0,iVar13);
                local_1e0 = (undefined **)CONCAT44(local_1e0._4_4_,iVar9);
                lVar30 = *(long *)(lVar31 + 0x10);
                if (iVar9 < 0) {
                  uVar17 = interpreter::Register::ToParameterIndex
                                     ((Register *)&local_1e0,*(int *)(lVar31 + 8));
                  uVar11 = (uint)uVar17;
                  if (*(int *)(lVar30 + 4) != 1) goto LAB_0166b968;
LAB_0166b874:
                  puVar22 = (ulong *)(lVar30 + 8);
                }
                else {
                  uVar11 = *(int *)(lVar31 + 8) + iVar9;
                  uVar17 = (ulong)uVar11;
                  if (*(int *)(lVar30 + 4) == 1) goto LAB_0166b874;
LAB_0166b968:
                  uVar2 = uVar11 + 0x3f;
                  if (-1 < (int)uVar11) {
                    uVar2 = uVar11;
                  }
                  uVar17 = (ulong)uVar11;
                  puVar22 = (ulong *)(*(long *)(lVar30 + 8) + (long)((int)uVar2 >> 6) * 8);
                }
                *puVar22 = *puVar22 | 1L << (uVar17 & 0x3f);
                break;
              case 0xd:
                uVar16 = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                                   ((BytecodeArrayAccessor *)&local_b0,iVar13);
                uVar10 = interpreter::BytecodeArrayAccessor::GetRegisterCountOperand
                                   ((BytecodeArrayAccessor *)&local_b0,iVar13 + 1);
                BytecodeLoopAssignments::AddList
                          ((BytecodeLoopAssignments *)(lVar31 + 8),uVar16,uVar10);
                iVar13 = iVar13 + 1;
                break;
              case 0xe:
                iVar9 = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                                  ((BytecodeArrayAccessor *)&local_b0,iVar13);
                local_1e0 = (undefined **)CONCAT44(local_1e0._4_4_,iVar9);
                lVar30 = *(long *)(lVar31 + 0x10);
                if (iVar9 < 0) {
                  uVar17 = interpreter::Register::ToParameterIndex
                                     ((Register *)&local_1e0,*(int *)(lVar31 + 8));
                  if (*(int *)(lVar30 + 4) == 1) {
                    puVar22 = (ulong *)(lVar30 + 8);
                  }
                  else {
                    iVar12 = (int)uVar17;
                    iVar9 = iVar12 + 0x3f;
                    if (-1 < iVar12) {
                      iVar9 = iVar12;
                    }
                    uVar17 = uVar17 & 0xffffffff;
                    puVar22 = (ulong *)(*(long *)(lVar30 + 8) + (long)(iVar9 >> 6) * 8);
                  }
                  *puVar22 = *puVar22 | 1L << (uVar17 & 0x3f);
                  lVar30 = *(long *)(lVar31 + 0x10);
                  iVar9 = interpreter::Register::ToParameterIndex
                                    ((Register *)&local_1e0,*(int *)(lVar31 + 8));
                  uVar11 = iVar9 + 1;
                  if (*(int *)(lVar30 + 4) == 1) goto LAB_0166bb00;
LAB_0166bbb0:
                  uVar2 = uVar11 + 0x3f;
                  if (-1 < (int)uVar11) {
                    uVar2 = uVar11;
                  }
                  uVar17 = (ulong)uVar11;
                  puVar22 = (ulong *)(*(long *)(lVar30 + 8) + (long)((int)uVar2 >> 6) * 8);
                }
                else {
                  uVar11 = *(int *)(lVar31 + 8) + iVar9;
                  if (*(int *)(lVar30 + 4) == 1) {
                    puVar22 = (ulong *)(lVar30 + 8);
                  }
                  else {
                    uVar2 = uVar11 + 0x3f;
                    if (-1 < (int)uVar11) {
                      uVar2 = uVar11;
                    }
                    puVar22 = (ulong *)(*(long *)(lVar30 + 8) + (long)((int)uVar2 >> 6) * 8);
                  }
                  *puVar22 = *puVar22 | 1L << ((ulong)uVar11 & 0x3f);
                  lVar30 = *(long *)(lVar31 + 0x10);
                  uVar11 = iVar9 + *(int *)(lVar31 + 8) + 1;
                  if (*(int *)(lVar30 + 4) != 1) goto LAB_0166ba8c;
LAB_0166b800:
                  uVar17 = (ulong)uVar11;
                  puVar22 = (ulong *)(lVar30 + 8);
                }
                goto LAB_0166b804;
              case 0xf:
                iVar9 = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                                  ((BytecodeArrayAccessor *)&local_b0,iVar13);
                local_1e0 = (undefined **)CONCAT44(local_1e0._4_4_,iVar9);
                lVar30 = *(long *)(lVar31 + 0x10);
                if (iVar9 < 0) {
                  uVar17 = interpreter::Register::ToParameterIndex
                                     ((Register *)&local_1e0,*(int *)(lVar31 + 8));
                  if (*(int *)(lVar30 + 4) == 1) {
                    puVar22 = (ulong *)(lVar30 + 8);
                  }
                  else {
                    iVar12 = (int)uVar17;
                    iVar9 = iVar12 + 0x3f;
                    if (-1 < iVar12) {
                      iVar9 = iVar12;
                    }
                    uVar17 = uVar17 & 0xffffffff;
                    puVar22 = (ulong *)(*(long *)(lVar30 + 8) + (long)(iVar9 >> 6) * 8);
                  }
                  *puVar22 = *puVar22 | 1L << (uVar17 & 0x3f);
                  lVar30 = *(long *)(lVar31 + 0x10);
                  iVar9 = interpreter::Register::ToParameterIndex
                                    ((Register *)&local_1e0,*(int *)(lVar31 + 8));
                  uVar11 = iVar9 + 1;
                  if (*(int *)(lVar30 + 4) == 1) {
                    puVar22 = (ulong *)(lVar30 + 8);
                  }
                  else {
                    uVar2 = iVar9 + 0x40;
                    if (-1 < (int)uVar11) {
                      uVar2 = uVar11;
                    }
                    puVar22 = (ulong *)(*(long *)(lVar30 + 8) + (long)((int)uVar2 >> 6) * 8);
                  }
                  *puVar22 = *puVar22 | 1L << ((ulong)uVar11 & 0x3f);
                  lVar30 = *(long *)(lVar31 + 0x10);
                  iVar9 = interpreter::Register::ToParameterIndex
                                    ((Register *)&local_1e0,*(int *)(lVar31 + 8));
                  uVar11 = iVar9 + 2;
                  if (*(int *)(lVar30 + 4) != 1) goto LAB_0166bbb0;
LAB_0166bb00:
                  uVar17 = (ulong)uVar11;
                  puVar22 = (ulong *)(lVar30 + 8);
                }
                else {
                  uVar11 = *(int *)(lVar31 + 8) + iVar9;
                  if (*(int *)(lVar30 + 4) == 1) {
                    puVar22 = (ulong *)(lVar30 + 8);
                  }
                  else {
                    uVar2 = uVar11 + 0x3f;
                    if (-1 < (int)uVar11) {
                      uVar2 = uVar11;
                    }
                    puVar22 = (ulong *)(*(long *)(lVar30 + 8) + (long)((int)uVar2 >> 6) * 8);
                  }
                  *puVar22 = *puVar22 | 1L << ((ulong)uVar11 & 0x3f);
                  lVar30 = *(long *)(lVar31 + 0x10);
                  iVar12 = iVar9 + *(int *)(lVar31 + 8);
                  uVar11 = iVar12 + 1;
                  if (*(int *)(lVar30 + 4) == 1) {
                    puVar22 = (ulong *)(lVar30 + 8);
                  }
                  else {
                    uVar2 = iVar12 + 0x40;
                    if (-1 < (int)uVar11) {
                      uVar2 = uVar11;
                    }
                    puVar22 = (ulong *)(*(long *)(lVar30 + 8) + (long)((int)uVar2 >> 6) * 8);
                  }
                  *puVar22 = *puVar22 | 1L << ((ulong)uVar11 & 0x3f);
                  lVar30 = *(long *)(lVar31 + 0x10);
                  uVar11 = iVar9 + *(int *)(lVar31 + 8) + 2;
                  if (*(int *)(lVar30 + 4) == 1) goto LAB_0166b800;
LAB_0166ba8c:
                  uVar2 = uVar11 + 0x3f;
                  if (-1 < (int)uVar11) {
                    uVar2 = uVar11;
                  }
                  uVar17 = (ulong)uVar11;
                  puVar22 = (ulong *)(*(long *)(lVar30 + 8) + (long)((int)uVar2 >> 6) * 8);
                }
LAB_0166b804:
                *puVar22 = *puVar22 | 1L << (uVar17 & 0x3f);
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 < iVar14);
          }
          if ((uVar8 & 0xff) == 0xb0) {
            uVar17 = interpreter::BytecodeArrayAccessor::GetUnsignedImmediateOperand
                               ((BytecodeArrayAccessor *)&local_b0,3);
            iVar14 = interpreter::BytecodeArrayAccessor::current_bytecode_size
                               ((BytecodeArrayAccessor *)&local_b0);
            uVar11 = iVar14 + iVar15;
            local_1e0 = (undefined **)(uVar17 & 0xffffffff | (ulong)uVar11 << 0x20);
            local_1d8 = (undefined **)CONCAT44(local_1d8._4_4_,uVar11);
            puVar24 = *(undefined8 **)(lVar31 + 0x20);
            if (puVar24 == *(undefined8 **)(lVar31 + 0x28)) {
              std::__ndk1::
              vector<v8::internal::compiler::ResumeJumpTarget,v8::internal::ZoneAllocator<v8::internal::compiler::ResumeJumpTarget>>
              ::__push_back_slow_path<v8::internal::compiler::ResumeJumpTarget_const&>
                        ((vector<v8::internal::compiler::ResumeJumpTarget,v8::internal::ZoneAllocator<v8::internal::compiler::ResumeJumpTarget>>
                          *)(lVar31 + 0x18),(ResumeJumpTarget *)&local_1e0);
            }
            else {
              *(uint *)(puVar24 + 1) = uVar11;
              *puVar24 = local_1e0;
              *(long *)(lVar31 + 0x20) = *(long *)(lVar31 + 0x20) + 0xc;
            }
          }
          if (iVar15 == *(int *)(lVar23 + (uVar26 & 0xff) * 0x10)) {
            lVar29 = *(long *)(this + 0x28);
            lVar30 = *(long *)(this + 0x50);
            uVar17 = lVar30 - 1;
            lVar23 = 0;
            if (lVar29 - *(long *)(this + 0x20) != 0) {
              lVar23 = (lVar29 - *(long *)(this + 0x20)) * 0x20 + -1;
            }
            *(ulong *)(this + 0x50) = uVar17;
            if (0x1ff < (lVar23 - (lVar30 + *(long *)(this + 0x48))) + 1U) {
              puVar24 = *(undefined8 **)(lVar29 + -8);
              if ((*(long *)(this + 0x60) == 0) || (*(ulong *)(*(long *)(this + 0x60) + 8) < 0x101))
              {
                puVar24[1] = 0x100;
                *puVar24 = *(undefined8 *)(this + 0x60);
                lVar29 = *(long *)(this + 0x28);
                uVar17 = *(ulong *)(this + 0x50);
                *(undefined8 **)(this + 0x60) = puVar24;
              }
              *(long *)(this + 0x28) = lVar29 + -8;
            }
            if (uVar17 < 2) {
              puVar3 = *(undefined4 **)(lVar31 + 0x20);
              for (puVar21 = *(undefined4 **)(lVar31 + 0x18); puVar21 != puVar3;
                  puVar21 = puVar21 + 3) {
                local_1e0 = (undefined **)CONCAT44(iVar15,*puVar21);
                local_1d8._4_4_ = (undefined4)((ulong)local_1d8 >> 0x20);
                local_1d8 = (undefined **)CONCAT44(local_1d8._4_4_,puVar21[1]);
                puVar24 = *(undefined8 **)(this + 0x90);
                if (puVar24 < *(undefined8 **)(this + 0x98)) {
                  *(undefined4 *)(puVar24 + 1) = puVar21[1];
                  *puVar24 = local_1e0;
                  *(long *)(this + 0x90) = *(long *)(this + 0x90) + 0xc;
                }
                else {
                  std::__ndk1::
                  vector<v8::internal::compiler::ResumeJumpTarget,v8::internal::ZoneAllocator<v8::internal::compiler::ResumeJumpTarget>>
                  ::__push_back_slow_path<v8::internal::compiler::ResumeJumpTarget>
                            ((vector<v8::internal::compiler::ResumeJumpTarget,v8::internal::ZoneAllocator<v8::internal::compiler::ResumeJumpTarget>>
                              *)(this + 0x88),(ResumeJumpTarget *)&local_1e0);
                }
              }
            }
            else {
              uVar17 = (uVar17 + *(long *)(this + 0x48)) - 1;
              lVar30 = *(long *)(*(long *)(*(long *)(this + 0x20) +
                                          (uVar17 >> 5 & 0x7fffffffffffff8)) +
                                 (uVar17 & 0xff) * 0x10 + 8);
              lVar29 = *(long *)(lVar31 + 0x10);
              lVar23 = *(long *)(lVar30 + 0x10);
              if (*(int *)(lVar23 + 4) == 1) {
                *(ulong *)(lVar23 + 8) = *(ulong *)(lVar23 + 8) | *(ulong *)(lVar29 + 8);
              }
              else if (0 < *(int *)(lVar23 + 4)) {
                lVar28 = 0;
                do {
                  lVar27 = lVar28 * 8;
                  lVar28 = lVar28 + 1;
                  *(ulong *)(*(long *)(lVar23 + 8) + lVar27) =
                       *(ulong *)(*(long *)(lVar23 + 8) + lVar27) |
                       *(ulong *)(*(long *)(lVar29 + 8) + lVar27);
                } while (lVar28 < *(int *)(lVar23 + 4));
              }
              puVar21 = *(undefined4 **)(lVar31 + 0x18);
              puVar3 = *(undefined4 **)(lVar31 + 0x20);
              if (puVar21 != puVar3) {
                do {
                  local_1e0 = (undefined **)CONCAT44(iVar15,*puVar21);
                  local_1d8 = (undefined **)CONCAT44(local_1d8._4_4_,puVar21[1]);
                  puVar24 = *(undefined8 **)(lVar30 + 0x20);
                  if (puVar24 == *(undefined8 **)(lVar30 + 0x28)) {
                    std::__ndk1::
                    vector<v8::internal::compiler::ResumeJumpTarget,v8::internal::ZoneAllocator<v8::internal::compiler::ResumeJumpTarget>>
                    ::__push_back_slow_path<v8::internal::compiler::ResumeJumpTarget_const&>
                              ((vector<v8::internal::compiler::ResumeJumpTarget,v8::internal::ZoneAllocator<v8::internal::compiler::ResumeJumpTarget>>
                                *)(lVar30 + 0x18),(ResumeJumpTarget *)&local_1e0);
                  }
                  else {
                    *(undefined4 *)(puVar24 + 1) = puVar21[1];
                    *puVar24 = local_1e0;
                    *(long *)(lVar30 + 0x20) = *(long *)(lVar30 + 0x20) + 0xc;
                  }
                  puVar21 = puVar21 + 3;
                } while (puVar21 != puVar3);
              }
            }
          }
        }
LAB_0166bf18:
        if (this[0x14] != (BytecodeAnalysis)0x0) {
          iVar13 = *(int *)(**(long **)this + 0x13);
          iVar14 = iVar13 + 7;
          if (-1 < iVar13) {
            iVar14 = iVar13;
          }
          uVar18 = BytecodeLivenessMap::InitializeLiveness
                             ((BytecodeLivenessMap *)(this + 0xf0),iVar15,iVar14 >> 3,
                              *(Zone **)(this + 8));
          FUN_0166c660((ulong)uVar8,uVar18,&local_1e8,&local_b0,*(undefined8 *)this,
                       (BytecodeLivenessMap *)(this + 0xf0));
        }
      }
      local_78 = local_78 + -1;
      interpreter::BytecodeArrayRandomIterator::UpdateOffsetFromIndex
                ((BytecodeArrayRandomIterator *)&local_b0);
      uVar17 = interpreter::BytecodeArrayRandomIterator::IsValid
                         ((BytecodeArrayRandomIterator *)&local_b0);
    } while ((uVar17 & 1) != 0);
  }
  if (this[0x14] != (BytecodeAnalysis)0x0) {
    piVar32 = *(int **)(this + 0x68);
    piVar4 = *(int **)(this + 0x70);
    if (piVar32 != piVar4) {
      pBVar1 = (BytecodeLivenessMap *)(this + 0xf0);
      do {
        local_78 = *piVar32;
        interpreter::BytecodeArrayRandomIterator::UpdateOffsetFromIndex
                  ((BytecodeArrayRandomIterator *)&local_b0);
        iVar15 = interpreter::BytecodeArrayAccessor::GetJumpTargetOffset
                           ((BytecodeArrayAccessor *)&local_b0);
        iVar25 = local_a8;
        plVar19 = (long *)BytecodeLivenessMap::GetLiveness(pBVar1,iVar15);
        plVar20 = (long *)BytecodeLivenessMap::GetLiveness(pBVar1,iVar25);
        lVar23 = plVar20[1];
        lVar31 = *plVar19;
        if (*(int *)(lVar23 + 0xc) == 1) {
          uVar26 = *(ulong *)(lVar23 + 0x10);
          uVar17 = *(ulong *)(lVar31 + 0x10) | uVar26;
          *(ulong *)(lVar23 + 0x10) = uVar17;
          if (uVar17 != uVar26) {
LAB_0166c06c:
            lVar23 = *plVar20;
            iVar25 = *(int *)(lVar23 + 0xc);
            lVar31 = *(long *)(plVar20[1] + 0x10);
            if (iVar25 == 1) {
              *(long *)(lVar23 + 0x10) = lVar31;
            }
            else {
              uVar8 = *(uint *)(plVar20[1] + 0xc);
              if (uVar8 == 1) {
                **(long **)(lVar23 + 0x10) = lVar31;
                if (1 < *(int *)(lVar23 + 0xc)) {
                  lVar31 = 1;
                  do {
                    *(undefined8 *)(*(long *)(lVar23 + 0x10) + lVar31 * 8) = 0;
                    lVar31 = lVar31 + 1;
                  } while (lVar31 < *(int *)(lVar23 + 0xc));
                }
              }
              else {
                if (0 < (int)uVar8) {
                  lVar29 = 0;
                  do {
                    *(undefined8 *)(*(long *)(lVar23 + 0x10) + lVar29) =
                         *(undefined8 *)(lVar31 + lVar29);
                    lVar29 = lVar29 + 8;
                  } while ((ulong)uVar8 * 8 - lVar29 != 0);
                  iVar25 = *(int *)(lVar23 + 0xc);
                }
                if ((int)uVar8 < iVar25) {
                  lVar31 = (long)(int)uVar8;
                  do {
                    *(undefined8 *)(*(long *)(lVar23 + 0x10) + lVar31 * 8) = 0;
                    lVar31 = lVar31 + 1;
                  } while (lVar31 < *(int *)(lVar23 + 0xc));
                }
              }
            }
            lVar23 = *plVar20;
            local_78 = local_78 + -1;
            local_1e8 = lVar23;
            interpreter::BytecodeArrayRandomIterator::UpdateOffsetFromIndex
                      ((BytecodeArrayRandomIterator *)&local_b0);
            iVar25 = local_a8;
            uVar16 = interpreter::BytecodeArrayAccessor::current_bytecode
                               ((BytecodeArrayAccessor *)&local_b0);
            while (iVar15 < iVar25) {
              uVar18 = BytecodeLivenessMap::GetLiveness(pBVar1,local_a8);
              FUN_0166c660(uVar16,uVar18,&local_1e8,&local_b0,*(undefined8 *)this,pBVar1);
              local_78 = local_78 + -1;
              interpreter::BytecodeArrayRandomIterator::UpdateOffsetFromIndex
                        ((BytecodeArrayRandomIterator *)&local_b0);
              iVar25 = local_a8;
              uVar16 = interpreter::BytecodeArrayAccessor::current_bytecode
                                 ((BytecodeArrayAccessor *)&local_b0);
              lVar23 = local_1e8;
            }
            FUN_0166c760(uVar16,plVar19[1],lVar23,&local_b0,*(undefined8 *)this,pBVar1);
          }
        }
        else if (0 < *(int *)(lVar23 + 0xc)) {
          lVar30 = *(long *)(lVar23 + 0x10);
          lVar29 = 0;
          bVar6 = false;
          do {
            lVar28 = lVar29 * 8;
            uVar17 = *(ulong *)(lVar30 + lVar28);
            lVar29 = lVar29 + 1;
            *(ulong *)(lVar30 + lVar28) = *(ulong *)(*(long *)(lVar31 + 0x10) + lVar28) | uVar17;
            lVar30 = *(long *)(lVar23 + 0x10);
            bVar6 = (bool)(bVar6 | *(ulong *)(lVar30 + lVar28) != uVar17);
          } while (lVar29 < *(int *)(lVar23 + 0xc));
          if (bVar6) goto LAB_0166c06c;
        }
        piVar32 = piVar32 + 1;
      } while (piVar32 != piVar4);
    }
    if (local_20c != -1) {
      local_78 = local_20c;
      interpreter::BytecodeArrayRandomIterator::UpdateOffsetFromIndex
                ((BytecodeArrayRandomIterator *)&local_b0);
      pBVar1 = (BytecodeLivenessMap *)(this + 0xf0);
      plVar19 = (long *)BytecodeLivenessMap::GetLiveness(pBVar1,local_a8);
      interpreter::BytecodeArrayAccessor::GetJumpTableTargetOffsets();
      interpreter::JumpTableTargetOffsets::begin();
      interpreter::JumpTableTargetOffsets::end();
      uVar17 = interpreter::JumpTableTargetOffsets::iterator::operator!=
                         ((iterator *)&local_1e0,aiStack_e8);
      if ((uVar17 & 1) != 0) {
        bVar6 = false;
        do {
          interpreter::JumpTableTargetOffsets::iterator::operator*((iterator *)&local_1e0);
          lVar31 = plVar19[1];
          plVar20 = (long *)BytecodeLivenessMap::GetLiveness(pBVar1,extraout_var);
          lVar23 = *plVar20;
          if (*(int *)(lVar31 + 0xc) == 1) {
            uVar26 = *(ulong *)(lVar31 + 0x10);
            uVar17 = *(ulong *)(lVar23 + 0x10) | uVar26;
            *(ulong *)(lVar31 + 0x10) = uVar17;
            if (uVar17 != uVar26) {
LAB_0166c210:
              bVar6 = true;
            }
          }
          else if (0 < *(int *)(lVar31 + 0xc)) {
            lVar30 = *(long *)(lVar31 + 0x10);
            lVar29 = 0;
            bVar7 = false;
            do {
              lVar28 = lVar29 * 8;
              uVar17 = *(ulong *)(lVar30 + lVar28);
              lVar29 = lVar29 + 1;
              *(ulong *)(lVar30 + lVar28) = *(ulong *)(*(long *)(lVar23 + 0x10) + lVar28) | uVar17;
              lVar30 = *(long *)(lVar31 + 0x10);
              bVar7 = (bool)(bVar7 | *(ulong *)(lVar30 + lVar28) != uVar17);
            } while (lVar29 < *(int *)(lVar31 + 0xc));
            if (bVar7) goto LAB_0166c210;
          }
          interpreter::JumpTableTargetOffsets::iterator::operator++((iterator *)&local_1e0);
          uVar17 = interpreter::JumpTableTargetOffsets::iterator::operator!=
                             ((iterator *)&local_1e0,aiStack_e8);
        } while ((uVar17 & 1) != 0);
        if (bVar6) {
          lVar23 = *plVar19;
          iVar25 = *(int *)(lVar23 + 0xc);
          lVar31 = *(long *)(plVar19[1] + 0x10);
          if (iVar25 == 1) {
            *(long *)(lVar23 + 0x10) = lVar31;
          }
          else {
            uVar8 = *(uint *)(plVar19[1] + 0xc);
            if (uVar8 == 1) {
              **(long **)(lVar23 + 0x10) = lVar31;
              if (1 < *(int *)(lVar23 + 0xc)) {
                lVar31 = 1;
                do {
                  *(undefined8 *)(*(long *)(lVar23 + 0x10) + lVar31 * 8) = 0;
                  lVar31 = lVar31 + 1;
                } while (lVar31 < *(int *)(lVar23 + 0xc));
              }
            }
            else {
              if (0 < (int)uVar8) {
                lVar29 = 0;
                do {
                  *(undefined8 *)(*(long *)(lVar23 + 0x10) + lVar29) =
                       *(undefined8 *)(lVar31 + lVar29);
                  lVar29 = lVar29 + 8;
                } while ((ulong)uVar8 * 8 - lVar29 != 0);
                iVar25 = *(int *)(lVar23 + 0xc);
              }
              if ((int)uVar8 < iVar25) {
                lVar31 = (long)(int)uVar8;
                do {
                  *(undefined8 *)(*(long *)(lVar23 + 0x10) + lVar31 * 8) = 0;
                  lVar31 = lVar31 + 1;
                } while (lVar31 < *(int *)(lVar23 + 0xc));
              }
            }
          }
          FUN_0166cbec(0xaf,*plVar19,&local_b0);
          local_1e8 = *plVar19;
          while( true ) {
            local_78 = local_78 + -1;
            interpreter::BytecodeArrayRandomIterator::UpdateOffsetFromIndex
                      ((BytecodeArrayRandomIterator *)&local_b0);
            uVar17 = interpreter::BytecodeArrayRandomIterator::IsValid
                               ((BytecodeArrayRandomIterator *)&local_b0);
            if ((uVar17 & 1) == 0) break;
            uVar16 = interpreter::BytecodeArrayAccessor::current_bytecode
                               ((BytecodeArrayAccessor *)&local_b0);
            uVar18 = BytecodeLivenessMap::GetLiveness(pBVar1,local_a8);
            FUN_0166c660(uVar16,uVar18,&local_1e8,&local_b0,*(undefined8 *)this,pBVar1);
          }
        }
      }
    }
    if (FLAG_trace_environment_liveness != '\0') {
      local_1e0 = (undefined **)0x1ca1178;
      local_180[0] = (undefined **)0x1ca11a0;
      std::__ndk1::ios_base::init((ios_base *)local_180,(AndroidLogStream *)&local_1d8);
      local_f0 = 0xffffffff;
      local_1d8 = &PTR__basic_streambuf_01c671a8;
      local_f8 = 0;
      local_1e0 = &PTR__StdoutStream_01ca1128;
      local_180[0] = &PTR__StdoutStream_01ca1150;
      std::__ndk1::locale::locale(alStack_1d0);
      local_1d8 = &PTR__AndroidLogStream_01cbc008;
      local_198 = 0;
      uStack_190 = 0;
      uStack_1a0 = 0;
      local_1a8 = 0;
      uStack_1b0 = 0;
      local_1b8 = 0;
      uStack_1c0 = 0;
      local_1c8 = 0;
      local_188 = 0;
      PrintLivenessTo(this,(basic_ostream *)&local_1e0);
      local_1e0 = &PTR__StdoutStream_01ca1128;
      local_180[0] = &PTR__StdoutStream_01ca1150;
      AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_1d8);
      std::__ndk1::ios_base::~ios_base((ios_base *)local_180);
    }
  }
  plVar19 = local_b0;
  if (local_98 != 0) {
    local_90 = local_98;
  }
  local_b0 = (long *)0x0;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x48))();
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

