
/* v8::internal::interpreter::BytecodeGenerator::BuildClassLiteral(v8::internal::ClassLiteral*,
   v8::internal::interpreter::Register) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildClassLiteral
          (BytecodeGenerator *this,long param_1,int param_3)

{
  BytecodeArrayBuilder *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulong uVar13;
  BytecodeArrayBuilder *pBVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  int iVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  int iVar24;
  Zone *pZVar25;
  long lVar26;
  long *plVar27;
  ulong *puVar28;
  AstNode *pAVar29;
  long lVar30;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  void *local_b8;
  void *local_b0;
  undefined8 local_a8;
  Zone *pZStack_a0;
  ulong local_98;
  BytecodeGenerator *local_90;
  int local_88;
  undefined8 local_80;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  this_00 = (BytecodeArrayBuilder *)(this + 0x18);
  uVar13 = BytecodeArrayBuilder::AllocateDeferredConstantPoolEntry();
  plVar21 = *(long **)(this + 0x2b8);
  if (plVar21 < *(long **)(this + 0x2c0)) {
    *plVar21 = param_1;
    plVar21[1] = uVar13;
    *(long *)(this + 0x2b8) = *(long *)(this + 0x2b8) + 0x10;
  }
  else {
    lVar18 = (long)plVar21 - *(long *)(this + 0x2b0) >> 4;
    uVar19 = lVar18 + 1;
    if (uVar19 >> 0x1b != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar26 = (long)*(long **)(this + 0x2c0) - *(long *)(this + 0x2b0);
    uVar22 = lVar26 >> 3;
    if (uVar19 <= uVar22) {
      uVar19 = uVar22;
    }
    if (0x3fffffe < (ulong)(lVar26 >> 4)) {
      uVar19 = 0x7ffffff;
    }
    if (uVar19 == 0) {
      lVar26 = 0;
    }
    else {
      pZVar25 = *(Zone **)(this + 0x2c8);
      uVar22 = uVar19 * 0x10;
      lVar26 = *(long *)(pZVar25 + 0x10);
      if (uVar22 < (ulong)(*(long *)(pZVar25 + 0x18) - lVar26) ||
          uVar22 - (*(long *)(pZVar25 + 0x18) - lVar26) == 0) {
        *(ulong *)(pZVar25 + 0x10) = lVar26 + uVar22;
      }
      else {
        lVar26 = Zone::NewExpand(pZVar25,uVar22);
      }
    }
    plVar21 = (long *)(lVar26 + lVar18 * 0x10);
    *plVar21 = param_1;
    plVar21[1] = uVar13;
    lVar23 = *(long *)(this + 0x2b0);
    plVar27 = plVar21;
    for (lVar18 = *(long *)(this + 0x2b8); lVar18 != lVar23; lVar18 = lVar18 + -0x10) {
      lVar30 = *(long *)(lVar18 + -0x10);
      plVar27[-1] = *(long *)(lVar18 + -8);
      plVar27[-2] = lVar30;
      plVar27 = plVar27 + -2;
    }
    *(long **)(this + 0x2b0) = plVar27;
    *(long **)(this + 0x2b8) = plVar21 + 2;
    *(ulong *)(this + 0x2c0) = lVar26 + uVar19 * 0x10;
  }
  VisitDeclarations(this,(ThreadedListBase *)(*(long *)(param_1 + 0x10) + 0x58));
  iVar2 = *(int *)(this + 0x118);
  iVar17 = *(int *)(this + 0x11c);
  plVar21 = *(long **)(this + 0x120);
  if (iVar17 <= iVar2 + 1) {
    iVar17 = iVar2 + 1;
  }
  *(int *)(this + 0x118) = iVar2 + 1;
  *(int *)(this + 0x11c) = iVar17;
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 0x10))(plVar21,iVar2);
  }
  uVar19 = *(ulong *)(*(long *)(param_1 + 0x10) + 0x88) & 0xfffffffffffffff8;
  if ((uVar19 != 0) && (*(long *)(uVar19 + 0x28) != 0)) {
    iVar10 = *(int *)(this + 0x118);
    iVar17 = *(int *)(this + 0x11c);
    plVar21 = *(long **)(this + 0x120);
    if (iVar17 <= iVar10 + 1) {
      iVar17 = iVar10 + 1;
    }
    *(int *)(this + 0x118) = iVar10 + 1;
    *(int *)(this + 0x11c) = iVar17;
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 0x10))(plVar21,iVar10);
    }
    lVar18 = *(long *)(*(long *)(param_1 + 0x10) + 0x90);
    if (lVar18 == 0) {
      puVar15 = (undefined8 *)(*(long *)(this + 0x1d8) + 0x110);
    }
    else {
      puVar15 = (undefined8 *)(lVar18 + 8);
    }
    pBVar14 = (BytecodeArrayBuilder *)
              BytecodeArrayBuilder::LoadLiteral(this_00,(AstRawString *)*puVar15);
    pBVar14 = (BytecodeArrayBuilder *)
              BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar14,iVar10);
    BytecodeArrayBuilder::CallRuntime(pBVar14,0x15b,iVar10);
    uVar19 = *(ulong *)(*(long *)(param_1 + 0x10) + 0x88) & 0xfffffffffffffff8;
    if (uVar19 == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = *(undefined8 *)(uVar19 + 0x28);
    }
    BuildVariableAssignment(this,uVar16,0x10,1,0);
  }
  pZVar25 = *(Zone **)(this + 0x10);
  local_c0 = Literal::Match;
  local_d0 = *(undefined8 **)(pZVar25 + 0x10);
  if ((ulong)(*(long *)(pZVar25 + 0x18) - (long)local_d0) < 0xc0) {
    local_d0 = (undefined8 *)Zone::NewExpand(pZVar25,0xc0);
  }
  else {
    *(undefined8 **)(pZVar25 + 0x10) = local_d0 + 0x18;
  }
  if (local_d0 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Out of memory: HashMap::Initialize");
  }
  local_c8 = 8;
  *local_d0 = 0;
  uVar19 = 1;
  lVar18 = 0x18;
  do {
    uVar19 = uVar19 + 1;
    *(undefined8 *)((long)local_d0 + lVar18) = 0;
    lVar18 = lVar18 + 0x18;
  } while (uVar19 < 8);
  local_c4 = 0;
  local_a8 = 0;
  local_b8 = (void *)0x0;
  local_b0 = (void *)0x0;
  plVar21 = *(long **)(param_1 + 0x30);
  pZStack_a0 = pZVar25;
  if (0 < *(int *)((long)plVar21 + 0xc)) {
    lVar18 = 0;
    do {
      puVar28 = *(ulong **)(*plVar21 + lVar18 * 8);
      switch((char)puVar28[2]) {
      case '\0':
        break;
      case '\x01':
        uVar19 = *puVar28 & 0xfffffffffffffffc;
        if ((*(uint *)(uVar19 + 4) & 0x3f) != 0x29) {
          uVar19 = 0;
        }
        puVar15 = (undefined8 *)FUN_01511ffc(&local_d0,uVar19);
        *puVar15 = puVar28;
        break;
      case '\x02':
        uVar19 = *puVar28 & 0xfffffffffffffffc;
        if ((*(uint *)(uVar19 + 4) & 0x3f) != 0x29) {
          uVar19 = 0;
        }
        lVar26 = FUN_01511ffc(&local_d0,uVar19);
        *(ulong **)(lVar26 + 8) = puVar28;
        break;
      case '\x03':
        iVar24 = *(int *)(this + 0x118);
        iVar10 = *(int *)(this + 0x11c);
        plVar21 = *(long **)(this + 0x120);
        iVar17 = iVar24 + 1;
        if (iVar10 <= iVar17) {
          iVar10 = iVar24 + 1;
        }
        *(int *)(this + 0x118) = iVar17;
        *(int *)(this + 0x11c) = iVar10;
        if (plVar21 != (long *)0x0) {
          (**(code **)(*plVar21 + 0x10))(plVar21,iVar24);
          iVar17 = *(int *)(this + 0x118);
        }
        local_98 = *(ulong *)(this + 0x300);
        uVar19 = *puVar28;
        local_80 = 2;
        *(ulong **)(this + 0x300) = &local_98;
        local_90 = this;
        local_88 = iVar17;
        if (this[8] == (BytecodeGenerator)0x0) {
          uVar22 = GetCurrentStackPosition();
          if (uVar22 < *(ulong *)this) {
            this[8] = (BytecodeGenerator)0x1;
          }
          else {
            VisitNoStackOverflowCheck(this,(AstNode *)(uVar19 & 0xfffffffffffffffc));
          }
        }
        BytecodeArrayBuilder::StoreAccumulatorInRegister(this_00,iVar24);
        *(ulong *)(local_90 + 0x300) = local_98;
        plVar21 = *(long **)(local_90 + 0x120);
        iVar17 = *(int *)(local_90 + 0x118);
        *(int *)(local_90 + 0x118) = local_88;
        if (plVar21 != (long *)0x0) {
          (**(code **)(*plVar21 + 0x20))(plVar21,CONCAT44(iVar17 - local_88,local_88));
        }
        uVar19 = *puVar28 & 0xfffffffffffffffc;
        if ((*(uint *)(uVar19 + 4) & 0x3f) != 0x29) {
          uVar19 = 0;
        }
        pBVar14 = (BytecodeArrayBuilder *)
                  BytecodeArrayBuilder::LoadLiteral(this_00,*(AstRawString **)(uVar19 + 8));
        pBVar14 = (BytecodeArrayBuilder *)
                  BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar14,iVar24);
        BytecodeArrayBuilder::CallRuntime(pBVar14,0x15a,iVar24);
        BuildVariableAssignment(this,puVar28[3],0x10,1,0);
        plVar21 = *(long **)(this + 0x120);
        iVar17 = *(int *)(this + 0x118);
        *(int *)(this + 0x118) = iVar24;
        if (plVar21 != (long *)0x0) {
          (**(code **)(*plVar21 + 0x20))(plVar21,CONCAT44(iVar17 - iVar24,iVar24));
        }
        break;
      default:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      plVar21 = *(long **)(param_1 + 0x30);
      lVar18 = lVar18 + 1;
    } while (lVar18 < *(int *)((long)plVar21 + 0xc));
  }
  iVar24 = *(int *)(this + 0x118);
  iVar10 = *(int *)(this + 0x11c);
  plVar21 = *(long **)(this + 0x120);
  iVar17 = iVar24 + 1;
  if (iVar10 <= iVar17) {
    iVar10 = iVar24 + 1;
  }
  *(int *)(this + 0x118) = iVar17;
  *(int *)(this + 0x11c) = iVar10;
  if (plVar21 == (long *)0x0) {
    plVar21 = (long *)0x0;
    iVar20 = iVar17;
  }
  else {
    (**(code **)(*plVar21 + 0x10))(plVar21,iVar24);
    iVar10 = *(int *)(this + 0x11c);
    plVar21 = *(long **)(this + 0x120);
    iVar20 = *(int *)(this + 0x118);
  }
  if (iVar10 <= iVar20 + 1) {
    iVar10 = iVar20 + 1;
  }
  *(int *)(this + 0x118) = iVar20 + 1;
  *(int *)(this + 0x11c) = iVar10;
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 0x10))(plVar21,iVar20);
  }
  if (iVar20 == iVar17) {
    iVar3 = *(int *)(this + 0x118);
    iVar10 = *(int *)(this + 0x11c);
    plVar21 = *(long **)(this + 0x120);
    if (iVar10 <= iVar3 + 1) {
      iVar10 = iVar3 + 1;
    }
    *(int *)(this + 0x118) = iVar3 + 1;
    *(int *)(this + 0x11c) = iVar10;
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 0x10))(plVar21,iVar3);
    }
    if (iVar3 == iVar24 + 2) {
      pAVar29 = *(AstNode **)(param_1 + 0x18);
      if (pAVar29 == (AstNode *)0x0) {
        BytecodeArrayBuilder::LoadTheHole(this_00);
      }
      else {
        local_98 = *(ulong *)(this + 0x300);
        local_88 = *(int *)(this + 0x118);
        local_80 = 2;
        *(ulong **)(this + 0x300) = &local_98;
        local_90 = this;
        if (this[8] == (BytecodeGenerator)0x0) {
          uVar19 = GetCurrentStackPosition();
          if (uVar19 < *(ulong *)this) {
            this[8] = (BytecodeGenerator)0x1;
          }
          else {
            VisitNoStackOverflowCheck(this,pAVar29);
          }
        }
        *(ulong *)(local_90 + 0x300) = local_98;
        plVar21 = *(long **)(local_90 + 0x120);
        iVar10 = *(int *)(local_90 + 0x118);
        *(int *)(local_90 + 0x118) = local_88;
        if (plVar21 != (long *)0x0) {
          (**(code **)(*plVar21 + 0x20))(plVar21,CONCAT44(iVar10 - local_88,local_88));
        }
      }
      BytecodeArrayBuilder::StoreAccumulatorInRegister(this_00,iVar3);
      VisitFunctionLiteral(this,*(FunctionLiteral **)(param_1 + 0x20));
      pBVar14 = (BytecodeArrayBuilder *)
                BytecodeArrayBuilder::StoreAccumulatorInRegister(this_00,iVar2);
      pBVar14 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::MoveRegister(pBVar14,iVar2,iVar20);
      pBVar14 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::LoadConstantPoolEntry(pBVar14,uVar13);
      BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar14,iVar24);
      plVar21 = *(long **)(param_1 + 0x28);
      if (*(int *)((long)plVar21 + 0xc) < 1) {
        iVar10 = 3;
      }
      else {
        lVar18 = 0;
        iVar10 = 3;
        do {
          puVar28 = *(ulong **)(*plVar21 + lVar18 * 8);
          if ((*puVar28 & 3) != 0) {
            iVar3 = *(int *)(this + 0x118);
            iVar20 = *(int *)(this + 0x11c);
            plVar21 = *(long **)(this + 0x120);
            if (iVar20 <= iVar3 + 1) {
              iVar20 = iVar3 + 1;
            }
            *(int *)(this + 0x118) = iVar3 + 1;
            *(int *)(this + 0x11c) = iVar20;
            if (plVar21 != (long *)0x0) {
              (**(code **)(*plVar21 + 0x10))(plVar21,iVar3);
            }
            iVar20 = iVar10 + 1;
            iVar1 = 0;
            if (iVar10 != -1) {
              iVar1 = iVar10 + iVar24;
            }
            if (iVar3 != iVar1) goto LAB_01511fd4;
            iVar10 = *(int *)(*puVar28 & 0xfffffffffffffffc);
            if (iVar10 != -1) {
              this[0x1c0] = (BytecodeGenerator)0x2;
              *(int *)(this + 0x1c4) = iVar10;
            }
            BuildLoadPropertyKey(this,puVar28,iVar3);
            if (*(byte *)((long)puVar28 + 0x11) != 0) {
              iVar10 = *(int *)(this + 0x31c);
              if (iVar10 == -1) {
                iVar10 = FeedbackVectorSpec::AddSlot
                                   (*(FeedbackVectorSpec **)(this + 800),
                                    *(undefined4 *)(this + 0x318));
                *(int *)(this + 0x31c) = iVar10;
              }
              local_98 = local_98 & 0xffffffffffffff00;
              local_90 = (BytecodeGenerator *)0xffffffffffffffff;
              pBVar14 = (BytecodeArrayBuilder *)
                        BytecodeArrayBuilder::LoadLiteral
                                  (this_00,*(AstRawString **)(*(long *)(this + 0x1d8) + 0x1a0));
              pBVar14 = (BytecodeArrayBuilder *)
                        BytecodeArrayBuilder::CompareOperation(pBVar14,0x36,iVar3,iVar10);
              pBVar14 = (BytecodeArrayBuilder *)
                        BytecodeArrayBuilder::JumpIfFalse(pBVar14,1,&local_98);
              pBVar14 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::CallRuntime(pBVar14,0x2a);
              BytecodeArrayBuilder::Bind(pBVar14,(BytecodeLabel *)&local_98);
            }
            iVar10 = iVar20;
            if ((byte)puVar28[2] == 3) {
              BytecodeArrayBuilder::LoadAccumulatorWithRegister(this_00,iVar3);
              BuildVariableAssignment(this,puVar28[3],0x10,1,0);
            }
          }
          if ((byte)puVar28[2] != 3) {
            iVar3 = *(int *)(this + 0x118);
            iVar20 = *(int *)(this + 0x11c);
            plVar21 = *(long **)(this + 0x120);
            if (iVar20 <= iVar3 + 1) {
              iVar20 = iVar3 + 1;
            }
            *(int *)(this + 0x118) = iVar3 + 1;
            *(int *)(this + 0x11c) = iVar20;
            if (plVar21 != (long *)0x0) {
              (**(code **)(*plVar21 + 0x10))(plVar21,iVar3);
            }
            iVar20 = iVar10 + 1;
            iVar1 = 0;
            if (iVar10 != -1) {
              iVar1 = iVar10 + iVar24;
            }
            if (iVar3 != iVar1) goto LAB_01511fd4;
            local_98 = *(ulong *)(this + 0x300);
            pAVar29 = (AstNode *)puVar28[1];
            local_88 = *(int *)(this + 0x118);
            local_80 = 2;
            *(ulong **)(this + 0x300) = &local_98;
            local_90 = this;
            if (this[8] == (BytecodeGenerator)0x0) {
              uVar13 = GetCurrentStackPosition();
              if (uVar13 < *(ulong *)this) {
                this[8] = (BytecodeGenerator)0x1;
              }
              else {
                VisitNoStackOverflowCheck(this,pAVar29);
              }
            }
            BytecodeArrayBuilder::StoreAccumulatorInRegister(this_00,iVar3);
            *(ulong *)(local_90 + 0x300) = local_98;
            plVar21 = *(long **)(local_90 + 0x120);
            iVar3 = *(int *)(local_90 + 0x118);
            *(int *)(local_90 + 0x118) = local_88;
            iVar10 = iVar20;
            if (plVar21 != (long *)0x0) {
              (**(code **)(*plVar21 + 0x20))(plVar21,CONCAT44(iVar3 - local_88,local_88));
            }
          }
          plVar21 = *(long **)(param_1 + 0x28);
          lVar18 = lVar18 + 1;
        } while (lVar18 < *(int *)((long)plVar21 + 0xc));
      }
      BytecodeArrayBuilder::CallRuntime(this_00,0x22,CONCAT44(iVar10,iVar24));
      plVar21 = *(long **)(this + 0x120);
      iVar10 = *(int *)(this + 0x118);
      *(int *)(this + 0x118) = iVar24;
      if (plVar21 == (long *)0x0) {
        iVar10 = *(int *)(this + 0x11c);
        if (*(int *)(this + 0x11c) <= iVar17) {
          iVar10 = iVar17;
        }
        *(int *)(this + 0x118) = iVar17;
        *(int *)(this + 0x11c) = iVar10;
      }
      else {
        (**(code **)(*plVar21 + 0x20))(plVar21,CONCAT44(iVar10 - iVar24,iVar24));
        iVar24 = *(int *)(this + 0x118);
        iVar17 = *(int *)(this + 0x11c);
        plVar21 = *(long **)(this + 0x120);
        if (iVar17 <= iVar24 + 1) {
          iVar17 = iVar24 + 1;
        }
        *(int *)(this + 0x118) = iVar24 + 1;
        *(int *)(this + 0x11c) = iVar17;
        if (plVar21 != (long *)0x0) {
          (**(code **)(*plVar21 + 0x10))(plVar21,iVar24);
        }
      }
      BytecodeArrayBuilder::StoreAccumulatorInRegister(this_00,iVar24);
      lVar18 = *(long *)(*(long *)(param_1 + 0x10) + 0x90);
      if ((lVar18 != 0) && ((*(byte *)(lVar18 + 0x29) >> 3 & 1) != 0)) {
        BytecodeArrayBuilder::LoadAccumulatorWithRegister(this_00,iVar2);
        BuildVariableAssignment(this,lVar18,0x10,1,0);
      }
      pvVar7 = local_b8;
      pvVar8 = local_b0;
      if (((*(byte *)(param_1 + 5) >> 2 & 1) != 0) &&
         (plVar21 = *(long **)(param_1 + 0x30), 0 < *(int *)((long)plVar21 + 0xc))) {
        lVar18 = 0;
        do {
          lVar26 = *(long *)(*plVar21 + lVar18 * 8);
          if (*(char *)(lVar26 + 0x10) == '\0') {
            local_98 = *(ulong *)(this + 0x300);
            iVar17 = *(int *)(this + 0x118);
            pAVar29 = *(AstNode **)(lVar26 + 8);
            local_80 = 2;
            *(ulong **)(this + 0x300) = &local_98;
            local_90 = this;
            local_88 = iVar17;
            if (this[8] == (BytecodeGenerator)0x0) {
              uVar13 = GetCurrentStackPosition();
              if (uVar13 < *(ulong *)this) {
                this[8] = (BytecodeGenerator)0x1;
              }
              else {
                VisitNoStackOverflowCheck(this,pAVar29);
              }
            }
            *(ulong *)(local_90 + 0x300) = local_98;
            plVar21 = *(long **)(local_90 + 0x120);
            iVar10 = *(int *)(local_90 + 0x118);
            *(int *)(local_90 + 0x118) = local_88;
            if (plVar21 != (long *)0x0) {
              (**(code **)(*plVar21 + 0x20))(plVar21,CONCAT44(iVar10 - local_88,local_88));
            }
            BuildVariableAssignment(this,*(undefined8 *)(lVar26 + 0x18),0x10,1,0);
            if ((*(char *)(lVar26 + 0x12) != '\0') && (*(char *)(lVar26 + 0x10) == '\0')) {
              sVar5 = *(short *)(*(long *)(lVar26 + 0x18) + 0x28);
              uVar13 = FunctionLiteral::NeedsHomeObject(*(Expression **)(lVar26 + 8));
              if ((uVar13 & 1) != 0) {
                iVar3 = *(int *)(this + 0x118);
                iVar20 = *(int *)(this + 0x11c);
                plVar21 = *(long **)(this + 0x120);
                iVar10 = iVar2;
                if (-1 < sVar5) {
                  iVar10 = iVar24;
                }
                if (iVar20 <= iVar3 + 1) {
                  iVar20 = iVar3 + 1;
                }
                *(int *)(this + 0x118) = iVar3 + 1;
                *(int *)(this + 0x11c) = iVar20;
                if (plVar21 != (long *)0x0) {
                  (**(code **)(*plVar21 + 0x10))(plVar21,iVar3);
                }
                BytecodeArrayBuilder::StoreAccumulatorInRegister(this_00,iVar3);
                uVar13 = FunctionLiteral::NeedsHomeObject(*(Expression **)(lVar26 + 8));
                if ((uVar13 & 1) != 0) {
                  uVar11 = 2;
                  if ((*(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1) != 0) {
                    uVar11 = 0xb;
                  }
                  uVar11 = FeedbackVectorSpec::AddSlot
                                     ((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),uVar11)
                  ;
                  uVar16 = BytecodeArrayBuilder::LoadAccumulatorWithRegister(this_00,iVar10);
                  BytecodeArrayBuilder::StoreHomeObjectProperty
                            (uVar16,iVar3,uVar11,*(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1);
                }
              }
            }
            plVar21 = *(long **)(this + 0x120);
            iVar10 = *(int *)(this + 0x118);
            *(int *)(this + 0x118) = iVar17;
            if (plVar21 != (long *)0x0) {
              (**(code **)(*plVar21 + 0x20))(plVar21,CONCAT44(iVar10 - iVar17,iVar17));
            }
          }
          plVar21 = *(long **)(param_1 + 0x30);
          lVar18 = lVar18 + 1;
          pvVar7 = local_b8;
          pvVar8 = local_b0;
        } while (lVar18 < *(int *)((long)plVar21 + 0xc));
      }
      for (; pvVar9 = local_b0, pvVar7 != local_b0; pvVar7 = (void *)((long)pvVar7 + 0x10)) {
        uVar4 = *(uint *)(this + 0x118);
        plVar27 = *(long **)((long)pvVar7 + 8);
        plVar21 = *(long **)(this + 0x120);
        iVar17 = uVar4 + 2;
        iVar10 = *(int *)(this + 0x11c);
        if (*(int *)(this + 0x11c) <= iVar17) {
          iVar10 = iVar17;
        }
        uVar13 = (ulong)uVar4 | 0x200000000;
        *(int *)(this + 0x118) = iVar17;
        *(int *)(this + 0x11c) = iVar10;
        local_b0 = pvVar8;
        if (plVar21 != (long *)0x0) {
          (**(code **)(*plVar21 + 0x18))(plVar21,uVar13);
        }
        lVar26 = *plVar27;
        lVar23 = plVar27[1];
        lVar18 = lVar23;
        if (lVar26 != 0) {
          lVar18 = lVar26;
        }
        iVar17 = iVar24;
        if (*(char *)(lVar18 + 0x11) != '\0') {
          iVar17 = iVar2;
        }
        VisitLiteralAccessor(this,iVar17,lVar26,(ulong)uVar4);
        VisitLiteralAccessor(this,iVar17,lVar23,uVar4 + 1);
        BytecodeArrayBuilder::CallRuntime(this_00,0xd8,uVar13);
        BuildVariableAssignment(this,*(undefined8 *)(lVar18 + 0x18),0x10,1,0);
        plVar21 = *(long **)(this + 0x120);
        iVar17 = *(int *)(this + 0x118);
        *(uint *)(this + 0x118) = uVar4;
        if (plVar21 != (long *)0x0) {
          (**(code **)(*plVar21 + 0x20))(plVar21,CONCAT44(iVar17 - uVar4,uVar4));
        }
        pvVar8 = local_b0;
        local_b0 = pvVar9;
      }
      local_b0 = pvVar8;
      if (*(Expression **)(param_1 + 0x40) != (Expression *)0x0) {
        uVar11 = VisitForRegisterValue(this,*(Expression **)(param_1 + 0x40));
        uVar13 = FunctionLiteral::NeedsHomeObject(*(Expression **)(param_1 + 0x40));
        if ((uVar13 & 1) != 0) {
          uVar12 = 2;
          if ((*(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1) != 0) {
            uVar12 = 0xb;
          }
          uVar12 = FeedbackVectorSpec::AddSlot
                             ((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),uVar12);
          uVar16 = BytecodeArrayBuilder::LoadAccumulatorWithRegister(this_00,iVar24);
          BytecodeArrayBuilder::StoreHomeObjectProperty
                    (uVar16,uVar11,uVar12,*(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1);
        }
        uVar12 = 2;
        if ((*(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1) != 0) {
          uVar12 = 0xb;
        }
        uVar12 = FeedbackVectorSpec::AddSlot
                           ((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),uVar12);
        pBVar14 = (BytecodeArrayBuilder *)
                  BytecodeArrayBuilder::LoadAccumulatorWithRegister(this_00,uVar11);
        pBVar14 = (BytecodeArrayBuilder *)
                  BytecodeArrayBuilder::StoreClassFieldsInitializer(pBVar14,iVar2,uVar12);
        BytecodeArrayBuilder::LoadAccumulatorWithRegister(pBVar14,iVar2);
      }
      if (*(long *)(param_1 + 0x38) != 0) {
        if (param_3 != 0x7fffffff) {
          iVar10 = *(int *)(this + 0x118);
          iVar17 = *(int *)(this + 0x11c);
          plVar21 = *(long **)(this + 0x120);
          if (iVar17 <= iVar10 + 1) {
            iVar17 = iVar10 + 1;
          }
          *(int *)(this + 0x118) = iVar10 + 1;
          *(int *)(this + 0x11c) = iVar17;
          if (plVar21 != (long *)0x0) {
            (**(code **)(*plVar21 + 0x10))(plVar21,iVar10);
          }
          pBVar14 = (BytecodeArrayBuilder *)
                    BytecodeArrayBuilder::LoadLiteral
                              (this_00,*(AstRawString **)(*(long *)(this + 0x1d8) + 0x158));
          BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar14,iVar10);
          uVar11 = FeedbackVectorSpec::AddSlot
                             ((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),0x11);
          pBVar14 = (BytecodeArrayBuilder *)
                    BytecodeArrayBuilder::LoadAccumulatorWithRegister(this_00,param_3);
          BytecodeArrayBuilder::StoreDataPropertyInLiteral(pBVar14,iVar2,iVar10,0,uVar11);
        }
        uVar4 = *(uint *)(this + 0x118);
        uVar13 = (ulong)uVar4;
        iVar17 = *(int *)(this + 0x11c);
        plVar21 = *(long **)(this + 0x120);
        if (iVar17 <= (int)(uVar4 + 1)) {
          iVar17 = uVar4 + 1;
        }
        *(uint *)(this + 0x118) = uVar4 + 1;
        *(int *)(this + 0x11c) = iVar17;
        if (plVar21 != (long *)0x0) {
          (**(code **)(*plVar21 + 0x18))(plVar21,uVar13 | 0x100000000);
        }
        uVar11 = VisitForRegisterValue(this,*(Expression **)(param_1 + 0x38));
        uVar19 = FunctionLiteral::NeedsHomeObject(*(Expression **)(param_1 + 0x38));
        if ((uVar19 & 1) != 0) {
          uVar12 = 2;
          if ((*(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1) != 0) {
            uVar12 = 0xb;
          }
          uVar12 = FeedbackVectorSpec::AddSlot
                             ((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),uVar12);
          uVar16 = BytecodeArrayBuilder::LoadAccumulatorWithRegister(this_00,iVar2);
          BytecodeArrayBuilder::StoreHomeObjectProperty
                    (uVar16,uVar11,uVar12,*(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1);
        }
        pBVar14 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::MoveRegister(this_00,iVar2,uVar13);
        uVar16 = FeedbackVectorSpec::AddSlot
                           ((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),4);
        BytecodeArrayBuilder::CallProperty(pBVar14,uVar11,uVar13 | 0x100000000,uVar16);
      }
      BytecodeArrayBuilder::LoadAccumulatorWithRegister(this_00,iVar2);
      if (local_b8 != (void *)0x0) {
        local_b0 = local_b8;
        operator_delete(local_b8);
      }
      if (*(long *)(lVar6 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
LAB_01511fd4:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","reg.index() == reg_list->last_register().index()");
}

