
/* v8::internal::interpreter::BytecodeGenerator::BuildCreateArrayLiteral(v8::internal::ZoneList<v8::internal::Expression*>
   const*, v8::internal::ArrayLiteral*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildCreateArrayLiteral
          (BytecodeGenerator *this,ZoneList *param_1,ArrayLiteral *param_2)

{
  FeedbackVectorSpec *pFVar1;
  FeedbackVectorSpec *pFVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  byte bVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  BytecodeArrayBuilder *pBVar20;
  undefined8 uVar21;
  BytecodeArrayBuilder *pBVar22;
  undefined8 in_x7;
  int iVar23;
  long lVar24;
  Zone *this_00;
  undefined8 *puVar25;
  ulong uVar26;
  long lVar27;
  undefined8 *puVar28;
  AstNode *pAVar29;
  Expression *pEVar30;
  undefined8 uVar31;
  long lVar32;
  ulong uVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined8 local_c8;
  ulong local_a8;
  undefined8 local_98;
  BytecodeGenerator *pBStack_90;
  int local_88;
  undefined8 local_80;
  long local_78;
  
  uVar10 = tpidr_el0;
  local_78 = *(long *)(uVar10 + 0x28);
  iVar5 = *(int *)(this + 0x118);
  iVar15 = *(int *)(this + 0x11c);
  plVar16 = *(long **)(this + 0x120);
  iVar23 = iVar5 + 1;
  if (iVar15 <= iVar23) {
    iVar15 = iVar5 + 1;
  }
  *(int *)(this + 0x118) = iVar23;
  *(int *)(this + 0x11c) = iVar15;
  plVar17 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x10))(plVar16,iVar5);
    iVar23 = *(int *)(this + 0x118);
    iVar15 = *(int *)(this + 0x11c);
    plVar17 = *(long **)(this + 0x120);
  }
  if (iVar15 <= iVar23 + 1) {
    iVar15 = iVar23 + 1;
  }
  *(int *)(this + 0x118) = iVar23 + 1;
  *(int *)(this + 0x11c) = iVar15;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x10))(plVar17,iVar23);
  }
  puVar28 = *(undefined8 **)param_1;
  iVar15 = *(int *)(param_1 + 0xc);
  pFVar1 = (FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38);
  puVar3 = puVar28 + iVar15;
  if ((iVar15 == 0) || (pAVar29 = (AstNode *)*puVar28, (*(uint *)(pAVar29 + 4) & 0x3f) != 0x2d)) {
    if (param_2 == (ArrayLiteral *)0x0) {
      iVar15 = FeedbackVectorSpec::AddSlot(pFVar1,0x13);
      pBVar20 = (BytecodeArrayBuilder *)
                BytecodeArrayBuilder::CreateEmptyArrayLiteral
                          ((BytecodeArrayBuilder *)(this + 0x18),iVar15);
      BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar20,iVar23);
      pBVar20 = (BytecodeArrayBuilder *)
                BytecodeArrayBuilder::LoadLiteral((BytecodeArrayBuilder *)(this + 0x18),0);
      BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar20,iVar5);
      goto joined_r0x01514d24;
    }
    bVar12 = ArrayLiteral::IsFastCloningSupported(param_2);
    uVar18 = CreateArrayLiteralFlags::Encode
                       ((bool)(bVar12 & 1),
                        *(uint *)(param_2 + 4) >> 5 & 4 |
                        (uint)((*(uint *)(param_2 + 8) & 0x7fffffff) == 1));
    if ((FLAG_enable_one_shot_optimization == '\0') || (0 < *(int *)(this + 0x334))) {
      bVar12 = 0;
LAB_01514ca8:
      uVar19 = uVar10;
      if (iVar15 != 0) {
        uVar19 = BytecodeArrayBuilder::AllocateDeferredConstantPoolEntry();
        puVar25 = *(undefined8 **)(this + 0x298);
        if (puVar25 < *(undefined8 **)(this + 0x2a0)) {
          *puVar25 = param_2;
          puVar25[1] = uVar19;
          *(long *)(this + 0x298) = *(long *)(this + 0x298) + 0x10;
        }
        else {
          lVar32 = (long)puVar25 - *(long *)(this + 0x290) >> 4;
          uVar33 = lVar32 + 1;
          if (uVar33 >> 0x1b != 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          lVar24 = (long)*(undefined8 **)(this + 0x2a0) - *(long *)(this + 0x290);
          uVar26 = lVar24 >> 3;
          if (uVar33 <= uVar26) {
            uVar33 = uVar26;
          }
          if (0x3fffffe < (ulong)(lVar24 >> 4)) {
            uVar33 = 0x7ffffff;
          }
          if (uVar33 == 0) {
            lVar24 = 0;
          }
          else {
            this_00 = *(Zone **)(this + 0x2a8);
            uVar26 = uVar33 * 0x10;
            lVar24 = *(long *)(this_00 + 0x10);
            if (uVar26 < (ulong)(*(long *)(this_00 + 0x18) - lVar24) ||
                uVar26 - (*(long *)(this_00 + 0x18) - lVar24) == 0) {
              *(ulong *)(this_00 + 0x10) = lVar24 + uVar26;
            }
            else {
              lVar24 = Zone::NewExpand(this_00,uVar26);
            }
          }
          puVar25 = (undefined8 *)(lVar24 + lVar32 * 0x10);
          *puVar25 = param_2;
          puVar25[1] = uVar19;
          lVar27 = *(long *)(this + 0x290);
          puVar11 = puVar25;
          for (lVar32 = *(long *)(this + 0x298); lVar32 != lVar27; lVar32 = lVar32 + -0x10) {
            uVar21 = *(undefined8 *)(lVar32 + -0x10);
            puVar11[-1] = *(undefined8 *)(lVar32 + -8);
            puVar11[-2] = uVar21;
            puVar11 = puVar11 + -2;
          }
          *(undefined8 **)(this + 0x290) = puVar11;
          *(undefined8 **)(this + 0x298) = puVar25 + 2;
          *(ulong *)(this + 0x2a0) = lVar24 + uVar33 * 0x10;
        }
      }
      if (bVar12 != 0) goto LAB_01514ec8;
      iVar14 = FeedbackVectorSpec::AddSlot
                         ((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),0x13);
      if (iVar15 == 0) {
        BytecodeArrayBuilder::CreateEmptyArrayLiteral((BytecodeArrayBuilder *)(this + 0x18),iVar14);
      }
      else {
        BytecodeArrayBuilder::CreateArrayLiteral
                  ((BytecodeArrayBuilder *)(this + 0x18),uVar19,iVar14,(uint)uVar18 & 0xff);
      }
    }
    else {
      if (*(int *)(*(long *)(*(long *)(this + 0x1d0) + 0x10) + 0x1c) == 0) {
        bVar12 = 1;
        if (iVar15 == 0) goto LAB_01514db0;
        goto LAB_01514ca8;
      }
      bVar12 = *(byte *)(*(long *)(*(long *)(this + 0x1d0) + 0x10) + 6) >> 6 & 1;
      if (iVar15 != 0) goto LAB_01514ca8;
LAB_01514db0:
      bVar4 = bVar12 == 0;
      bVar12 = 0;
      if (bVar4) goto LAB_01514ca8;
      uVar19 = BytecodeArrayBuilder::EmptyArrayBoilerplateDescriptionConstantPoolEntry();
LAB_01514ec8:
      uVar6 = *(uint *)(this + 0x118);
      plVar16 = *(long **)(this + 0x120);
      iVar15 = uVar6 + 2;
      iVar14 = *(int *)(this + 0x11c);
      if (*(int *)(this + 0x11c) <= iVar15) {
        iVar14 = iVar15;
      }
      uVar33 = (ulong)uVar6 | 0x200000000;
      *(int *)(this + 0x118) = iVar15;
      *(int *)(this + 0x11c) = iVar14;
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x18))(plVar16,uVar33);
      }
      pBVar20 = (BytecodeArrayBuilder *)
                BytecodeArrayBuilder::LoadConstantPoolEntry
                          ((BytecodeArrayBuilder *)(this + 0x18),uVar19);
      pBVar20 = (BytecodeArrayBuilder *)
                BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar20,(ulong)uVar6);
      pBVar20 = (BytecodeArrayBuilder *)
                BytecodeArrayBuilder::LoadLiteral(pBVar20,(uVar18 & 0xff) << 1);
      pBVar20 = (BytecodeArrayBuilder *)
                BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar20,uVar6 + 1);
      BytecodeArrayBuilder::CallRuntime(pBVar20,0xbb,uVar33);
    }
    pBVar20 = (BytecodeArrayBuilder *)(this + 0x18);
    BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar20,iVar23);
    puVar25 = puVar28 + *(uint *)(param_2 + 0xc);
    if ((int)*(uint *)(param_2 + 0xc) < 0) {
      puVar25 = puVar3;
    }
    if (puVar28 == puVar25) {
      dVar34 = 0.0;
      iVar15 = -1;
    }
    else {
      iVar14 = 0;
      lVar32 = 0;
      iVar15 = -1;
      do {
        pEVar30 = (Expression *)*puVar28;
        uVar18 = Expression::IsCompileTimeValue(pEVar30);
        if ((uVar18 & 1) == 0) {
          pBVar22 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::LoadLiteral(pBVar20,lVar32);
          BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar22,iVar5);
          local_98 = *(undefined8 *)(this + 0x300);
          local_88 = *(int *)(this + 0x118);
          local_80 = 2;
          *(undefined8 **)(this + 0x300) = &local_98;
          pBStack_90 = this;
          if (this[8] == (BytecodeGenerator)0x0) {
            uVar18 = GetCurrentStackPosition();
            if (uVar18 < *(ulong *)this) {
              this[8] = (BytecodeGenerator)0x1;
            }
            else {
              VisitNoStackOverflowCheck(this,(AstNode *)pEVar30);
            }
          }
          *(undefined8 *)(pBStack_90 + 0x300) = local_98;
          plVar16 = *(long **)(pBStack_90 + 0x120);
          iVar7 = *(int *)(pBStack_90 + 0x118);
          *(int *)(pBStack_90 + 0x118) = local_88;
          if (plVar16 != (long *)0x0) {
            (**(code **)(*plVar16 + 0x20))(plVar16,CONCAT44(iVar7 - local_88,local_88));
          }
          if (iVar15 == -1) {
            iVar15 = FeedbackVectorSpec::AddSlot(pFVar1,0xe);
          }
          BytecodeArrayBuilder::StoreInArrayLiteral(pBVar20,iVar23,iVar5,iVar15);
        }
        puVar28 = puVar28 + 1;
        lVar32 = lVar32 + 2;
        iVar14 = iVar14 + 1;
      } while (puVar25 != puVar28);
      dVar34 = (double)iVar14;
      puVar28 = puVar25;
    }
    if (puVar28 == puVar3) goto LAB_01515448;
    pBVar20 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::LoadLiteral(pBVar20,dVar34);
    BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar20,iVar5);
  }
  else {
    local_98 = *(undefined8 *)(this + 0x300);
    local_88 = *(int *)(this + 0x118);
    local_80 = 2;
    *(undefined8 **)(this + 0x300) = &local_98;
    pBStack_90 = this;
    if (this[8] == (BytecodeGenerator)0x0) {
      uVar18 = GetCurrentStackPosition();
      if (uVar18 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar29);
      }
    }
    *(undefined8 *)(pBStack_90 + 0x300) = local_98;
    plVar16 = *(long **)(pBStack_90 + 0x120);
    iVar14 = *(int *)(pBStack_90 + 0x118);
    *(int *)(pBStack_90 + 0x118) = local_88;
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 0x20))(plVar16,CONCAT44(iVar14 - local_88,local_88));
    }
    pBVar20 = (BytecodeArrayBuilder *)
              BytecodeArrayBuilder::CreateArrayFromIterable((BytecodeArrayBuilder *)(this + 0x18));
    BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar20,iVar23);
    puVar28 = puVar28 + 1;
    if (iVar15 != 1) {
      uVar31 = *(undefined8 *)(*(long *)(this + 0x1d8) + 0x140);
      uVar21 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),5)
      ;
      pBVar20 = (BytecodeArrayBuilder *)
                BytecodeArrayBuilder::LoadNamedProperty
                          ((BytecodeArrayBuilder *)(this + 0x18),iVar23,uVar31,uVar21);
      BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar20,iVar5);
    }
joined_r0x01514d24:
    iVar15 = -1;
  }
  if (puVar28 != puVar3) {
    pBVar20 = (BytecodeArrayBuilder *)(this + 0x18);
    pFVar2 = (FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38);
    iVar14 = -1;
    local_c8 = 0xffffffff;
    do {
      pEVar30 = (Expression *)*puVar28;
      if ((*(uint *)(pEVar30 + 4) & 0x3f) == 0x2d) {
        iVar7 = *(int *)(this + 0x118);
        iVar8 = **(int **)(pEVar30 + 0x10);
        if (iVar8 != -1) {
          this[0x1c0] = (BytecodeGenerator)0x2;
          *(int *)(this + 0x1c4) = iVar8;
        }
        local_98 = *(undefined8 *)(this + 0x300);
        pAVar29 = *(AstNode **)(pEVar30 + 0x10);
        local_80 = 2;
        *(undefined8 **)(this + 0x300) = &local_98;
        pBStack_90 = this;
        local_88 = iVar7;
        if (this[8] == (BytecodeGenerator)0x0) {
          uVar18 = GetCurrentStackPosition();
          if (uVar18 < *(ulong *)this) {
            this[8] = (BytecodeGenerator)0x1;
          }
          else {
            VisitNoStackOverflowCheck(this,pAVar29);
          }
        }
        *(undefined8 *)(pBStack_90 + 0x300) = local_98;
        plVar16 = *(long **)(pBStack_90 + 0x120);
        iVar8 = *(int *)(pBStack_90 + 0x118);
        *(int *)(pBStack_90 + 0x118) = local_88;
        if (plVar16 != (long *)0x0) {
          (**(code **)(*plVar16 + 0x20))(plVar16,CONCAT44(iVar8 - local_88,local_88));
        }
        auVar35 = BuildGetIteratorRecord(this,0);
        iVar9 = *(int *)(this + 0x118);
        iVar8 = *(int *)(this + 0x11c);
        plVar16 = *(long **)(this + 0x120);
        if (iVar8 <= iVar9 + 1) {
          iVar8 = iVar9 + 1;
        }
        *(int *)(this + 0x118) = iVar9 + 1;
        *(int *)(this + 0x11c) = iVar8;
        if (plVar16 != (long *)0x0) {
          (**(code **)(*plVar16 + 0x10))(plVar16,iVar9);
        }
        uVar13 = FeedbackVectorSpec::AddSlot
                           ((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),5);
        FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),5);
        if (iVar14 == -1) {
          iVar14 = FeedbackVectorSpec::AddSlot(pFVar2,0xf);
        }
        if (iVar15 == -1) {
          iVar15 = FeedbackVectorSpec::AddSlot(pFVar1,0xe);
        }
        local_a8 = local_a8 & 0xffffffff00000000 | auVar35._8_8_ & 0xffffffff;
        BuildFillArrayWithIterator
                  (this,auVar35._0_8_,local_a8,iVar23,iVar5,iVar9,uVar13,in_x7,iVar14,iVar15);
        plVar16 = *(long **)(this + 0x120);
        iVar8 = *(int *)(this + 0x118);
        *(int *)(this + 0x118) = iVar7;
        if (plVar16 != (long *)0x0) {
          (**(code **)(*plVar16 + 0x20))(plVar16,CONCAT44(iVar8 - iVar7,iVar7));
        }
      }
      else {
        uVar18 = Expression::IsTheHoleLiteral(pEVar30);
        if ((uVar18 & 1) == 0) {
          local_98 = *(undefined8 *)(this + 0x300);
          local_88 = *(int *)(this + 0x118);
          local_80 = 2;
          *(undefined8 **)(this + 0x300) = &local_98;
          pBStack_90 = this;
          if (this[8] == (BytecodeGenerator)0x0) {
            uVar18 = GetCurrentStackPosition();
            if (uVar18 < *(ulong *)this) {
              this[8] = (BytecodeGenerator)0x1;
            }
            else {
              VisitNoStackOverflowCheck(this,(AstNode *)pEVar30);
            }
          }
          *(undefined8 *)(pBStack_90 + 0x300) = local_98;
          plVar16 = *(long **)(pBStack_90 + 0x120);
          iVar7 = *(int *)(pBStack_90 + 0x118);
          *(int *)(pBStack_90 + 0x118) = local_88;
          if (plVar16 != (long *)0x0) {
            (**(code **)(*plVar16 + 0x20))(plVar16,CONCAT44(iVar7 - local_88,local_88));
          }
          if (iVar15 == -1) {
            iVar15 = FeedbackVectorSpec::AddSlot(pFVar1,0xe);
          }
          pBVar22 = (BytecodeArrayBuilder *)
                    BytecodeArrayBuilder::StoreInArrayLiteral(pBVar20,iVar23,iVar5,iVar15);
          BytecodeArrayBuilder::LoadAccumulatorWithRegister(pBVar22,iVar5);
          if (puVar3 + -1 != puVar28) {
            if (iVar14 == -1) {
              iVar14 = FeedbackVectorSpec::AddSlot(pFVar2,0xf);
            }
            pBVar22 = (BytecodeArrayBuilder *)
                      BytecodeArrayBuilder::UnaryOperation(pBVar20,0x33,iVar14);
            BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar22,iVar5);
          }
        }
        else {
          uVar21 = *(undefined8 *)(*(long *)(this + 0x1d8) + 0x140);
          pBVar22 = (BytecodeArrayBuilder *)
                    BytecodeArrayBuilder::LoadAccumulatorWithRegister(pBVar20,iVar5);
          if (iVar14 == -1) {
            iVar14 = FeedbackVectorSpec::AddSlot(pFVar2,0xf);
          }
          pBVar22 = (BytecodeArrayBuilder *)
                    BytecodeArrayBuilder::UnaryOperation(pBVar22,0x33,iVar14);
          uVar31 = BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar22,iVar5);
          if ((int)local_c8 == -1) {
            local_c8 = FeedbackVectorSpec::AddSlot(pFVar2,0xb);
          }
          BytecodeArrayBuilder::StoreNamedProperty(uVar31,iVar23,uVar21,local_c8,1);
        }
      }
      puVar28 = puVar28 + 1;
    } while (puVar3 != puVar28);
  }
LAB_01515448:
  BytecodeArrayBuilder::LoadAccumulatorWithRegister((BytecodeArrayBuilder *)(this + 0x18),iVar23);
  plVar16 = *(long **)(this + 0x120);
  iVar23 = *(int *)(this + 0x118);
  *(int *)(this + 0x118) = iVar5;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x20))(plVar16,CONCAT44(iVar23 - iVar5,iVar5));
  }
  if (*(long *)(uVar10 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

