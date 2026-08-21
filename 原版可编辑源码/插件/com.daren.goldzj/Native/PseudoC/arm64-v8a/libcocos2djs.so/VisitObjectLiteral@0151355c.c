
/* v8::internal::interpreter::BytecodeGenerator::VisitObjectLiteral(v8::internal::ObjectLiteral*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitObjectLiteral
          (BytecodeGenerator *this,ObjectLiteral *param_1)

{
  BytecodeArrayBuilder *pBVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  long lVar8;
  byte bVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  BytecodeArrayBuilder *pBVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  Expression *pEVar21;
  long lVar22;
  Zone *pZVar23;
  ObjectLiteralProperty *this_00;
  LiteralProperty *this_01;
  AstNode *pAVar24;
  undefined8 *puVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  Zone *pZStack_a0;
  undefined8 local_98;
  BytecodeGenerator *pBStack_90;
  int local_88;
  undefined8 local_80;
  long local_78;
  
  lVar8 = tpidr_el0;
  local_78 = *(long *)(lVar8 + 0x28);
  ObjectLiteral::InitDepthAndFlags(param_1);
  uVar10 = *(uint *)(param_1 + 4);
  if ((((uVar10 >> 9 & 1) == 0) && (*(int *)(param_1 + 0xc) == 0)) &&
     (*(int *)(param_1 + 0x24) == 0 && (uVar10 & 0x1000) == 0)) {
    BytecodeArrayBuilder::CreateEmptyObjectLiteral((BytecodeArrayBuilder *)(this + 0x18));
    goto LAB_015146f4;
  }
  uVar3 = *(uint *)(param_1 + 8);
  bVar9 = ObjectLiteral::IsFastCloningSupported(param_1);
  uVar10 = CreateObjectLiteralFlags::Encode
                     (uVar10 >> 8 & 8 | uVar10 >> 5 & 4 | uVar10 >> 8 & 0x10 |
                      (uint)((uVar3 & 0x7fffffff) == 1),(bool)(bVar9 & 1));
  iVar4 = *(int *)(this + 0x118);
  iVar12 = *(int *)(this + 0x11c);
  plVar13 = *(long **)(this + 0x120);
  if (iVar12 <= iVar4 + 1) {
    iVar12 = iVar4 + 1;
  }
  *(int *)(this + 0x118) = iVar4 + 1;
  *(int *)(this + 0x11c) = iVar12;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x10))(plVar13,iVar4);
  }
  cVar7 = *(char *)(**(long **)(param_1 + 0x18) + 0x10);
  if (cVar7 == '\x06') {
    iVar12 = *(int *)(this + 0x118);
    uVar11 = VisitForRegisterValue(this,*(Expression **)(**(long **)(param_1 + 0x18) + 8));
    uVar14 = FeedbackVectorSpec::AddSlot
                       ((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),0x16);
    BytecodeArrayBuilder::CloneObject
              ((BytecodeArrayBuilder *)(this + 0x18),uVar11,uVar10 & 0xff,uVar14);
    BytecodeArrayBuilder::StoreAccumulatorInRegister((BytecodeArrayBuilder *)(this + 0x18),iVar4);
    plVar13 = *(long **)(this + 0x120);
    iVar5 = *(int *)(this + 0x118);
    *(int *)(this + 0x118) = iVar12;
    if (plVar13 == (long *)0x0) {
      uVar26 = 1;
    }
    else {
      (**(code **)(*plVar13 + 0x20))(plVar13,CONCAT44(iVar5 - iVar12,iVar12));
      uVar26 = 1;
    }
  }
  else {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar14 = BytecodeArrayBuilder::EmptyObjectBoilerplateDescriptionConstantPoolEntry();
    }
    else {
      uVar14 = BytecodeArrayBuilder::AllocateDeferredConstantPoolEntry();
      puVar19 = *(undefined8 **)(this + 0x278);
      if (puVar19 < *(undefined8 **)(this + 0x280)) {
        *puVar19 = param_1;
        puVar19[1] = uVar14;
        *(long *)(this + 0x278) = *(long *)(this + 0x278) + 0x10;
      }
      else {
        lVar20 = (long)puVar19 - *(long *)(this + 0x270) >> 4;
        uVar26 = lVar20 + 1;
        if (uVar26 >> 0x1b != 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar17 = (long)*(undefined8 **)(this + 0x280) - *(long *)(this + 0x270);
        uVar18 = lVar17 >> 3;
        if (uVar26 <= uVar18) {
          uVar26 = uVar18;
        }
        if (0x3fffffe < (ulong)(lVar17 >> 4)) {
          uVar26 = 0x7ffffff;
        }
        if (uVar26 == 0) {
          lVar17 = 0;
        }
        else {
          pZVar23 = *(Zone **)(this + 0x288);
          uVar18 = uVar26 * 0x10;
          lVar17 = *(long *)(pZVar23 + 0x10);
          if (uVar18 < (ulong)(*(long *)(pZVar23 + 0x18) - lVar17) ||
              uVar18 - (*(long *)(pZVar23 + 0x18) - lVar17) == 0) {
            *(ulong *)(pZVar23 + 0x10) = lVar17 + uVar18;
          }
          else {
            lVar17 = Zone::NewExpand(pZVar23,uVar18);
          }
        }
        puVar19 = (undefined8 *)(lVar17 + lVar20 * 0x10);
        *puVar19 = param_1;
        puVar19[1] = uVar14;
        lVar22 = *(long *)(this + 0x270);
        puVar25 = puVar19;
        for (lVar20 = *(long *)(this + 0x278); lVar20 != lVar22; lVar20 = lVar20 + -0x10) {
          uVar27 = *(undefined8 *)(lVar20 + -0x10);
          puVar25[-1] = *(undefined8 *)(lVar20 + -8);
          puVar25[-2] = uVar27;
          puVar25 = puVar25 + -2;
        }
        *(undefined8 **)(this + 0x270) = puVar25;
        *(undefined8 **)(this + 0x278) = puVar19 + 2;
        *(ulong *)(this + 0x280) = lVar17 + uVar26 * 0x10;
      }
    }
    BuildCreateObjectLiteral(this,iVar4,uVar10,uVar14);
    uVar26 = 0;
  }
  pZVar23 = *(Zone **)(this + 0x10);
  local_c0 = Literal::Match;
  local_d0 = *(undefined8 **)(pZVar23 + 0x10);
  if ((ulong)(*(long *)(pZVar23 + 0x18) - (long)local_d0) < 0xc0) {
    local_d0 = (undefined8 *)Zone::NewExpand(pZVar23,0xc0);
  }
  else {
    *(undefined8 **)(pZVar23 + 0x10) = local_d0 + 0x18;
  }
  if (local_d0 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Out of memory: HashMap::Initialize");
  }
  local_c8 = 8;
  *local_d0 = 0;
  uVar18 = 1;
  lVar20 = 0x18;
  do {
    uVar18 = uVar18 + 1;
    *(undefined8 *)((long)local_d0 + lVar20) = 0;
    lVar20 = lVar20 + 0x18;
  } while (uVar18 < 8);
  local_c4 = 0;
  local_a8 = 0;
  local_b8 = (undefined8 *)0x0;
  local_b0 = (undefined8 *)0x0;
  iVar12 = *(int *)(param_1 + 0x24);
  pZStack_a0 = pZVar23;
  if ((int)uVar26 < iVar12) {
    this_00 = *(ObjectLiteralProperty **)(*(long *)(param_1 + 0x18) + uVar26 * 8);
    uVar18 = *(ulong *)this_00;
    if ((uVar18 & 3) == 0) {
      pBVar1 = (BytecodeArrayBuilder *)(this + 0x18);
      do {
        uVar26 = uVar26 + 1;
        if (cVar7 == '\x06') {
LAB_015138c4:
          pEVar21 = (Expression *)(uVar18 & 0xfffffffffffffffc);
          iVar12 = *(int *)(this + 0x118);
          if ((*(uint *)(pEVar21 + 4) & 0x3f) != 0x29) {
            pEVar21 = (Expression *)0x0;
          }
          switch(this_00[0x10]) {
          case (ObjectLiteralProperty)0x0:
          case (ObjectLiteralProperty)0x1:
          case (ObjectLiteralProperty)0x2:
            uVar18 = Expression::IsStringLiteral(pEVar21);
            if ((uVar18 & 1) == 0) {
              uVar10 = *(uint *)(this + 0x118);
              uVar18 = (ulong)uVar10;
              plVar13 = *(long **)(this + 0x120);
              iVar5 = uVar10 + 3;
              iVar6 = *(int *)(this + 0x11c);
              if (*(int *)(this + 0x11c) <= iVar5) {
                iVar6 = iVar5;
              }
              *(int *)(this + 0x118) = iVar5;
              *(int *)(this + 0x11c) = iVar6;
              if (plVar13 != (long *)0x0) {
                (**(code **)(*plVar13 + 0x18))(plVar13,uVar18 | 0x300000000);
              }
              BytecodeArrayBuilder::MoveRegister(pBVar1,iVar4,uVar18);
              pAVar24 = (AstNode *)(*(ulong *)this_00 & 0xfffffffffffffffc);
              iVar5 = *(int *)pAVar24;
              if ((iVar5 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
                this[0x1c0] = (BytecodeGenerator)0x1;
                *(int *)(this + 0x1c4) = iVar5;
                pAVar24 = (AstNode *)(*(ulong *)this_00 & 0xfffffffffffffffc);
              }
              local_98 = *(undefined8 *)(this + 0x300);
              local_88 = *(int *)(this + 0x118);
              local_80 = 2;
              *(undefined8 **)(this + 0x300) = &local_98;
              pBStack_90 = this;
              if (this[8] == (BytecodeGenerator)0x0) {
                uVar15 = GetCurrentStackPosition();
                if (uVar15 < *(ulong *)this) {
                  this[8] = (BytecodeGenerator)0x1;
                }
                else {
                  VisitNoStackOverflowCheck(this,pAVar24);
                }
              }
              BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar1,uVar10 + 1);
              *(undefined8 *)(pBStack_90 + 0x300) = local_98;
              plVar13 = *(long **)(pBStack_90 + 0x120);
              iVar5 = *(int *)(pBStack_90 + 0x118);
              *(int *)(pBStack_90 + 0x118) = local_88;
              if (plVar13 != (long *)0x0) {
                (**(code **)(*plVar13 + 0x20))(plVar13,CONCAT44(iVar5 - local_88,local_88));
              }
              pAVar24 = *(AstNode **)(this_00 + 8);
              iVar5 = *(int *)pAVar24;
              if ((iVar5 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
                this[0x1c0] = (BytecodeGenerator)0x1;
                *(int *)(this + 0x1c4) = iVar5;
                pAVar24 = *(AstNode **)(this_00 + 8);
              }
              local_98 = *(undefined8 *)(this + 0x300);
              local_88 = *(int *)(this + 0x118);
              local_80 = 2;
              *(undefined8 **)(this + 0x300) = &local_98;
              pBStack_90 = this;
              if (this[8] == (BytecodeGenerator)0x0) {
                uVar15 = GetCurrentStackPosition();
                if (uVar15 < *(ulong *)this) {
                  this[8] = (BytecodeGenerator)0x1;
                }
                else {
                  VisitNoStackOverflowCheck(this,pAVar24);
                }
              }
              BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar1,uVar10 + 2);
              *(undefined8 *)(pBStack_90 + 0x300) = local_98;
              plVar13 = *(long **)(pBStack_90 + 0x120);
              iVar5 = *(int *)(pBStack_90 + 0x118);
              *(int *)(pBStack_90 + 0x118) = local_88;
              if (plVar13 != (long *)0x0) {
                (**(code **)(*plVar13 + 0x20))(plVar13,CONCAT44(iVar5 - local_88,local_88));
              }
              uVar15 = ObjectLiteralProperty::emit_store(this_00);
              if ((uVar15 & 1) != 0) {
                BytecodeArrayBuilder::CallRuntime(pBVar1,0xfc,uVar18 | 0x300000000);
                uVar18 = FunctionLiteral::NeedsHomeObject(*(Expression **)(this_00 + 8));
                if ((uVar18 & 1) != 0) {
                  uVar11 = 2;
                  if ((*(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1) != 0) {
                    uVar11 = 0xb;
                  }
                  uVar11 = FeedbackVectorSpec::AddSlot
                                     ((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),uVar11)
                  ;
                  uVar14 = BytecodeArrayBuilder::LoadAccumulatorWithRegister(pBVar1,iVar4);
                  BytecodeArrayBuilder::StoreHomeObjectProperty
                            (uVar14,uVar10 + 2,uVar11,
                             *(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1);
                }
              }
            }
            else {
              uVar18 = ObjectLiteralProperty::emit_store(this_00);
              pAVar24 = *(AstNode **)(this_00 + 8);
              iVar5 = *(int *)pAVar24;
              if ((iVar5 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
                this[0x1c0] = (BytecodeGenerator)0x1;
                *(int *)(this + 0x1c4) = iVar5;
                pAVar24 = *(AstNode **)(this_00 + 8);
              }
              if ((uVar18 & 1) == 0) {
                local_98 = *(undefined8 *)(this + 0x300);
                local_88 = *(int *)(this + 0x118);
                local_80 = 1;
                *(undefined8 **)(this + 0x300) = &local_98;
                pBStack_90 = this;
                if (this[8] == (BytecodeGenerator)0x0) {
                  uVar18 = GetCurrentStackPosition();
                  if (uVar18 < *(ulong *)this) {
                    this[8] = (BytecodeGenerator)0x1;
                  }
                  else {
                    VisitNoStackOverflowCheck(this,pAVar24);
                  }
                }
                *(undefined8 *)(pBStack_90 + 0x300) = local_98;
                plVar13 = *(long **)(pBStack_90 + 0x120);
                iVar5 = *(int *)(pBStack_90 + 0x118);
                *(int *)(pBStack_90 + 0x118) = local_88;
                if (plVar13 != (long *)0x0) {
                  lVar20 = *plVar13;
                  uVar14 = CONCAT44(iVar5 - local_88,local_88);
                  goto LAB_01513e80;
                }
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
                    VisitNoStackOverflowCheck(this,pAVar24);
                  }
                }
                *(undefined8 *)(pBStack_90 + 0x300) = local_98;
                plVar13 = *(long **)(pBStack_90 + 0x120);
                iVar5 = *(int *)(pBStack_90 + 0x118);
                *(int *)(pBStack_90 + 0x118) = local_88;
                if (plVar13 != (long *)0x0) {
                  (**(code **)(*plVar13 + 0x20))(plVar13,CONCAT44(iVar5 - local_88,local_88));
                }
                uVar11 = FeedbackVectorSpec::AddSlot
                                   ((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),0xc);
                uVar18 = FunctionLiteral::NeedsHomeObject(*(Expression **)(this_00 + 8));
                if ((uVar18 & 1) == 0) {
                  BytecodeArrayBuilder::StoreNamedOwnProperty
                            (pBVar1,iVar4,*(undefined8 *)(pEVar21 + 8),uVar11);
                }
                else {
                  iVar6 = *(int *)(this + 0x118);
                  iVar5 = *(int *)(this + 0x11c);
                  plVar13 = *(long **)(this + 0x120);
                  if (iVar5 <= iVar6 + 1) {
                    iVar5 = iVar6 + 1;
                  }
                  *(int *)(this + 0x118) = iVar6 + 1;
                  *(int *)(this + 0x11c) = iVar5;
                  if (plVar13 != (long *)0x0) {
                    (**(code **)(*plVar13 + 0x10))(plVar13,iVar6);
                  }
                  BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar1,iVar6);
                  BytecodeArrayBuilder::StoreNamedOwnProperty
                            (pBVar1,iVar4,*(undefined8 *)(pEVar21 + 8),uVar11);
                  uVar18 = FunctionLiteral::NeedsHomeObject(*(Expression **)(this_00 + 8));
                  if ((uVar18 & 1) != 0) {
                    uVar11 = 2;
                    if ((*(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1) != 0) {
                      uVar11 = 0xb;
                    }
                    uVar11 = FeedbackVectorSpec::AddSlot
                                       ((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),
                                        uVar11);
                    uVar14 = BytecodeArrayBuilder::LoadAccumulatorWithRegister(pBVar1,iVar4);
                    BytecodeArrayBuilder::StoreHomeObjectProperty
                              (uVar14,iVar6,uVar11,*(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1);
                  }
                  plVar13 = *(long **)(this + 0x120);
                  iVar5 = *(int *)(this + 0x118);
                  *(int *)(this + 0x118) = iVar6;
                  if (plVar13 == (long *)0x0) {
                    *(int *)(this + 0x118) = iVar12;
                    goto LAB_01513f1c;
                  }
                  lVar20 = *plVar13;
                  uVar14 = CONCAT44(iVar5 - iVar6,iVar6);
LAB_01513e80:
                  (**(code **)(lVar20 + 0x20))(plVar13,uVar14);
                }
              }
            }
            break;
          case (ObjectLiteralProperty)0x3:
            uVar18 = ObjectLiteralProperty::emit_store(this_00);
            if ((uVar18 & 1) != 0) {
              puVar19 = (undefined8 *)FUN_01514768(&local_d0,pEVar21);
              *puVar19 = this_00;
            }
            break;
          case (ObjectLiteralProperty)0x4:
            uVar18 = ObjectLiteralProperty::emit_store(this_00);
            if ((uVar18 & 1) != 0) {
              lVar20 = FUN_01514768(&local_d0,pEVar21);
              *(ObjectLiteralProperty **)(lVar20 + 8) = this_00;
            }
            break;
          case (ObjectLiteralProperty)0x5:
            uVar18 = Expression::IsNullLiteral(*(Expression **)(this_00 + 8));
            if ((uVar18 & 1) == 0) {
              uVar10 = *(uint *)(this + 0x118);
              uVar18 = (ulong)uVar10;
              plVar13 = *(long **)(this + 0x120);
              iVar5 = uVar10 + 2;
              iVar6 = *(int *)(this + 0x11c);
              if (*(int *)(this + 0x11c) <= iVar5) {
                iVar6 = iVar5;
              }
              *(int *)(this + 0x118) = iVar5;
              *(int *)(this + 0x11c) = iVar6;
              if (plVar13 != (long *)0x0) {
                (**(code **)(*plVar13 + 0x18))(plVar13,uVar18 | 0x200000000);
              }
              BytecodeArrayBuilder::MoveRegister(pBVar1,iVar4,uVar18);
              pAVar24 = *(AstNode **)(this_00 + 8);
              iVar5 = *(int *)pAVar24;
              if ((iVar5 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
                this[0x1c0] = (BytecodeGenerator)0x1;
                *(int *)(this + 0x1c4) = iVar5;
                pAVar24 = *(AstNode **)(this_00 + 8);
              }
              local_98 = *(undefined8 *)(this + 0x300);
              local_88 = *(int *)(this + 0x118);
              local_80 = 2;
              *(undefined8 **)(this + 0x300) = &local_98;
              pBStack_90 = this;
              if (this[8] == (BytecodeGenerator)0x0) {
                uVar15 = GetCurrentStackPosition();
                if (uVar15 < *(ulong *)this) {
                  this[8] = (BytecodeGenerator)0x1;
                }
                else {
                  VisitNoStackOverflowCheck(this,pAVar24);
                }
              }
              BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar1,uVar10 + 1);
              *(undefined8 *)(pBStack_90 + 0x300) = local_98;
              plVar13 = *(long **)(pBStack_90 + 0x120);
              iVar5 = *(int *)(pBStack_90 + 0x118);
              *(int *)(pBStack_90 + 0x118) = local_88;
              if (plVar13 != (long *)0x0) {
                (**(code **)(*plVar13 + 0x20))(plVar13,CONCAT44(iVar5 - local_88,local_88));
              }
              BytecodeArrayBuilder::CallRuntime(pBVar1,0xe6,uVar18 | 0x200000000);
            }
            break;
          case (ObjectLiteralProperty)0x6:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          plVar13 = *(long **)(this + 0x120);
          iVar5 = *(int *)(this + 0x118);
          *(int *)(this + 0x118) = iVar12;
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0x20))(plVar13,CONCAT44(iVar5 - iVar12,iVar12));
          }
        }
        else {
          uVar18 = ObjectLiteralProperty::IsCompileTimeValue(this_00);
          if ((uVar18 & 1) == 0) {
            uVar18 = *(ulong *)this_00;
            goto LAB_015138c4;
          }
        }
LAB_01513f1c:
        iVar12 = *(int *)(param_1 + 0x24);
        if (iVar12 <= (int)uVar26) break;
        this_00 = *(ObjectLiteralProperty **)(*(long *)(param_1 + 0x18) + uVar26 * 8);
        uVar18 = *(ulong *)this_00;
      } while ((uVar18 & 3) == 0);
    }
    puVar19 = local_b0;
    if (local_b8 != local_b0) {
      pBVar1 = (BytecodeArrayBuilder *)(this + 0x18);
      puVar25 = local_b8;
      do {
        uVar10 = *(uint *)(this + 0x118);
        uVar18 = (ulong)uVar10;
        pAVar24 = (AstNode *)*puVar25;
        puVar2 = (undefined8 *)puVar25[1];
        plVar13 = *(long **)(this + 0x120);
        iVar12 = uVar10 + 5;
        iVar5 = *(int *)(this + 0x11c);
        if (*(int *)(this + 0x11c) <= iVar12) {
          iVar5 = iVar12;
        }
        *(int *)(this + 0x118) = iVar12;
        *(int *)(this + 0x11c) = iVar5;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x18))(plVar13,uVar18 | 0x500000000);
        }
        BytecodeArrayBuilder::MoveRegister(pBVar1,iVar4,uVar18);
        local_98 = *(undefined8 *)(this + 0x300);
        local_88 = *(int *)(this + 0x118);
        local_80 = 2;
        *(undefined8 **)(this + 0x300) = &local_98;
        pBStack_90 = this;
        if (this[8] == (BytecodeGenerator)0x0) {
          uVar15 = GetCurrentStackPosition();
          if (uVar15 < *(ulong *)this) {
            this[8] = (BytecodeGenerator)0x1;
          }
          else {
            VisitNoStackOverflowCheck(this,pAVar24);
          }
        }
        BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar1,uVar10 + 1);
        *(undefined8 *)(pBStack_90 + 0x300) = local_98;
        plVar13 = *(long **)(pBStack_90 + 0x120);
        iVar12 = *(int *)(pBStack_90 + 0x118);
        *(int *)(pBStack_90 + 0x118) = local_88;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x20))(plVar13,CONCAT44(iVar12 - local_88,local_88));
        }
        VisitLiteralAccessor(this,iVar4,*puVar2,uVar10 + 2);
        VisitLiteralAccessor(this,iVar4,puVar2[1],uVar10 + 3);
        pBVar16 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::LoadLiteral(pBVar1,0);
        pBVar16 = (BytecodeArrayBuilder *)
                  BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar16,uVar10 + 4);
        BytecodeArrayBuilder::CallRuntime(pBVar16,0xd9,uVar18 | 0x500000000);
        plVar13 = *(long **)(this + 0x120);
        iVar12 = *(int *)(this + 0x118);
        *(uint *)(this + 0x118) = uVar10;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x20))(plVar13,CONCAT44(iVar12 - uVar10,uVar10));
        }
        puVar25 = puVar25 + 2;
      } while (puVar25 != puVar19);
      iVar12 = *(int *)(param_1 + 0x24);
    }
    if ((int)uVar26 < iVar12) {
LAB_01514104:
      pBVar1 = (BytecodeArrayBuilder *)(this + 0x18);
      uVar26 = uVar26 & 0xffffffff;
      do {
        uVar10 = *(uint *)(this + 0x118);
        uVar18 = (ulong)uVar10;
        this_01 = *(LiteralProperty **)(*(long *)(param_1 + 0x18) + uVar26 * 8);
        switch(this_01[0x10]) {
        case (LiteralProperty)0x0:
        case (LiteralProperty)0x1:
        case (LiteralProperty)0x2:
          iVar12 = *(int *)(this + 0x11c);
          plVar13 = *(long **)(this + 0x120);
          *(uint *)(this + 0x118) = uVar10 + 1;
          if (iVar12 <= (int)(uVar10 + 1)) {
            iVar12 = uVar10 + 1;
          }
          *(int *)(this + 0x11c) = iVar12;
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0x10))(plVar13,uVar18);
          }
          BuildLoadPropertyKey(this,this_01,uVar18);
          pEVar21 = *(Expression **)(this_01 + 8);
          iVar12 = *(int *)pEVar21;
          if ((iVar12 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
            this[0x1c0] = (BytecodeGenerator)0x1;
            *(int *)(this + 0x1c4) = iVar12;
            pEVar21 = *(Expression **)(this_01 + 8);
          }
          if (((*(uint *)(pEVar21 + 4) & 0x3f) == 0x1f) && (*(long *)(pEVar21 + 0x38) != 0)) {
            iVar12 = *(int *)(this + 0x118);
            iVar5 = *(int *)(this + 0x11c);
            plVar13 = *(long **)(this + 0x120);
            if (iVar5 <= iVar12 + 1) {
              iVar5 = iVar12 + 1;
            }
            *(int *)(this + 0x118) = iVar12 + 1;
            *(int *)(this + 0x11c) = iVar5;
            if (plVar13 != (long *)0x0) {
              (**(code **)(*plVar13 + 0x10))(plVar13,iVar12);
            }
            lVar20 = *(long *)(this_01 + 8);
            if ((*(uint *)(lVar20 + 4) & 0x3f) != 0x1f) {
              lVar20 = 0;
            }
            VisitClassLiteral(this,lVar20,uVar18);
            BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar1,iVar12);
          }
          else {
            iVar12 = VisitForRegisterValue(this,pEVar21);
          }
          uVar15 = FunctionLiteral::NeedsHomeObject(*(Expression **)(this_01 + 8));
          if ((uVar15 & 1) != 0) {
            uVar11 = 2;
            if ((*(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1) != 0) {
              uVar11 = 0xb;
            }
            uVar11 = FeedbackVectorSpec::AddSlot
                               ((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),uVar11);
            uVar14 = BytecodeArrayBuilder::LoadAccumulatorWithRegister(pBVar1,iVar4);
            BytecodeArrayBuilder::StoreHomeObjectProperty
                      (uVar14,iVar12,uVar11,*(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1);
          }
          uVar15 = LiteralProperty::NeedsSetFunctionName(this_01);
          uVar11 = FeedbackVectorSpec::AddSlot
                             ((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),0x11);
          pBVar16 = (BytecodeArrayBuilder *)
                    BytecodeArrayBuilder::LoadAccumulatorWithRegister(pBVar1,iVar12);
          uVar14 = 2;
          if ((uVar15 & 1) == 0) {
            uVar14 = 0;
          }
          BytecodeArrayBuilder::StoreDataPropertyInLiteral(pBVar16,iVar4,uVar18,uVar14,uVar11);
          break;
        case (LiteralProperty)0x3:
        case (LiteralProperty)0x4:
          plVar13 = *(long **)(this + 0x120);
          iVar12 = uVar10 + 4;
          *(int *)(this + 0x118) = iVar12;
          iVar5 = *(int *)(this + 0x11c);
          if (*(int *)(this + 0x11c) <= iVar12) {
            iVar5 = iVar12;
          }
          *(int *)(this + 0x11c) = iVar5;
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0x18))(plVar13,uVar18 | 0x400000000);
          }
          BytecodeArrayBuilder::MoveRegister(pBVar1,iVar4,uVar18);
          BuildLoadPropertyKey(this,this_01,uVar10 + 1);
          pAVar24 = *(AstNode **)(this_01 + 8);
          iVar12 = *(int *)pAVar24;
          if ((iVar12 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
            this[0x1c0] = (BytecodeGenerator)0x1;
            *(int *)(this + 0x1c4) = iVar12;
            pAVar24 = *(AstNode **)(this_01 + 8);
          }
          local_98 = *(undefined8 *)(this + 0x300);
          local_88 = *(int *)(this + 0x118);
          local_80 = 2;
          *(undefined8 **)(this + 0x300) = &local_98;
          pBStack_90 = this;
          if (this[8] == (BytecodeGenerator)0x0) {
            uVar15 = GetCurrentStackPosition();
            if (uVar15 < *(ulong *)this) {
              this[8] = (BytecodeGenerator)0x1;
            }
            else {
              VisitNoStackOverflowCheck(this,pAVar24);
            }
          }
          BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar1,uVar10 + 2);
          *(undefined8 *)(pBStack_90 + 0x300) = local_98;
          plVar13 = *(long **)(pBStack_90 + 0x120);
          iVar12 = *(int *)(pBStack_90 + 0x118);
          *(int *)(pBStack_90 + 0x118) = local_88;
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0x20))(plVar13,CONCAT44(iVar12 - local_88,local_88));
          }
          uVar15 = FunctionLiteral::NeedsHomeObject(*(Expression **)(this_01 + 8));
          if ((uVar15 & 1) != 0) {
            uVar11 = 2;
            if ((*(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1) != 0) {
              uVar11 = 0xb;
            }
            uVar11 = FeedbackVectorSpec::AddSlot
                               ((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),uVar11);
            uVar14 = BytecodeArrayBuilder::LoadAccumulatorWithRegister(pBVar1,iVar4);
            BytecodeArrayBuilder::StoreHomeObjectProperty
                      (uVar14,uVar10 + 2,uVar11,*(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1);
          }
          pBVar16 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::LoadLiteral(pBVar1,0);
          BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar16,uVar10 + 3);
          uVar18 = uVar18 | 0x400000000;
          uVar11 = 0xdb;
          if (this_01[0x10] != (LiteralProperty)0x3) {
            uVar11 = 0xdc;
          }
LAB_015145ec:
          BytecodeArrayBuilder::CallRuntime(pBVar1,uVar11,uVar18);
          break;
        case (LiteralProperty)0x5:
          uVar18 = Expression::IsNullLiteral(*(Expression **)(this_01 + 8));
          if ((uVar18 & 1) == 0) {
            uVar3 = *(uint *)(this + 0x118);
            uVar18 = (ulong)uVar3;
            plVar13 = *(long **)(this + 0x120);
            iVar12 = uVar3 + 2;
            iVar5 = *(int *)(this + 0x11c);
            if (*(int *)(this + 0x11c) <= iVar12) {
              iVar5 = iVar12;
            }
            *(int *)(this + 0x118) = iVar12;
            *(int *)(this + 0x11c) = iVar5;
            if (plVar13 != (long *)0x0) {
              (**(code **)(*plVar13 + 0x18))(plVar13,uVar18 | 0x200000000);
            }
            BytecodeArrayBuilder::MoveRegister(pBVar1,iVar4,uVar18);
            pAVar24 = *(AstNode **)(this_01 + 8);
            iVar12 = *(int *)pAVar24;
            if ((iVar12 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
              this[0x1c0] = (BytecodeGenerator)0x1;
              *(int *)(this + 0x1c4) = iVar12;
              pAVar24 = *(AstNode **)(this_01 + 8);
            }
            local_98 = *(undefined8 *)(this + 0x300);
            local_88 = *(int *)(this + 0x118);
            local_80 = 2;
            *(undefined8 **)(this + 0x300) = &local_98;
            pBStack_90 = this;
            if (this[8] == (BytecodeGenerator)0x0) {
              uVar15 = GetCurrentStackPosition();
              if (uVar15 < *(ulong *)this) {
                this[8] = (BytecodeGenerator)0x1;
              }
              else {
                VisitNoStackOverflowCheck(this,pAVar24);
              }
            }
            BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar1,uVar3 + 1);
            *(undefined8 *)(pBStack_90 + 0x300) = local_98;
            plVar13 = *(long **)(pBStack_90 + 0x120);
            iVar12 = *(int *)(pBStack_90 + 0x118);
            *(int *)(pBStack_90 + 0x118) = local_88;
            if (plVar13 != (long *)0x0) {
              (**(code **)(*plVar13 + 0x20))(plVar13,CONCAT44(iVar12 - local_88,local_88));
            }
            uVar18 = uVar18 | 0x200000000;
            uVar11 = 0xe6;
            goto LAB_015145ec;
          }
          break;
        case (LiteralProperty)0x6:
          plVar13 = *(long **)(this + 0x120);
          iVar12 = uVar10 + 2;
          *(int *)(this + 0x118) = iVar12;
          iVar5 = *(int *)(this + 0x11c);
          if (*(int *)(this + 0x11c) <= iVar12) {
            iVar5 = iVar12;
          }
          *(int *)(this + 0x11c) = iVar5;
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0x18))(plVar13,uVar18 | 0x200000000);
          }
          BytecodeArrayBuilder::MoveRegister(pBVar1,iVar4,uVar18);
          pAVar24 = *(AstNode **)(this_01 + 8);
          iVar12 = *(int *)pAVar24;
          if ((iVar12 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
            this[0x1c0] = (BytecodeGenerator)0x1;
            *(int *)(this + 0x1c4) = iVar12;
            pAVar24 = *(AstNode **)(this_01 + 8);
          }
          local_98 = *(undefined8 *)(this + 0x300);
          local_88 = *(int *)(this + 0x118);
          local_80 = 2;
          *(undefined8 **)(this + 0x300) = &local_98;
          pBStack_90 = this;
          if (this[8] == (BytecodeGenerator)0x0) {
            uVar15 = GetCurrentStackPosition();
            if (uVar15 < *(ulong *)this) {
              this[8] = (BytecodeGenerator)0x1;
            }
            else {
              VisitNoStackOverflowCheck(this,pAVar24);
            }
          }
          BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar1,uVar10 + 1);
          *(undefined8 *)(pBStack_90 + 0x300) = local_98;
          plVar13 = *(long **)(pBStack_90 + 0x120);
          iVar12 = *(int *)(pBStack_90 + 0x118);
          *(int *)(pBStack_90 + 0x118) = local_88;
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0x20))(plVar13,CONCAT44(iVar12 - local_88,local_88));
          }
          BytecodeArrayBuilder::CallRuntime(pBVar1,0x1ee,uVar18 | 0x200000000);
        }
        plVar13 = *(long **)(this + 0x120);
        iVar12 = *(int *)(this + 0x118);
        *(uint *)(this + 0x118) = uVar10;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x20))(plVar13,CONCAT44(iVar12 - uVar10,uVar10));
        }
        uVar26 = uVar26 + 1;
      } while ((int)uVar26 < *(int *)(param_1 + 0x24));
    }
  }
  else if ((int)uVar26 < iVar12) goto LAB_01514104;
  BytecodeArrayBuilder::LoadAccumulatorWithRegister((BytecodeArrayBuilder *)(this + 0x18),iVar4);
  if (local_b8 != (undefined8 *)0x0) {
    local_b0 = local_b8;
    operator_delete(local_b8);
  }
LAB_015146f4:
  if (*(long *)(lVar8 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

