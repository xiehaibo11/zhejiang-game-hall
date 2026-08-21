
/* v8::internal::AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>::VisitNoStackOverflowCheck(v8::internal::AstNode*)
    */

void __thiscall
v8::internal::AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>::VisitNoStackOverflowCheck
          (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor> *this,AstNode *param_1)

{
  bool bVar1;
  ulong uVar2;
  AstTraversalVisitor<v8::internal::SourceRangeAstVisitor> AVar3;
  int iVar4;
  int iVar5;
  AstNode *pAVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  
  switch(*(uint *)(param_1 + 4) & 0x3f) {
  case 0:
  case 0xd:
  case 0xe:
  case 0x13:
  case 0x15:
  case 0x25:
  case 0x27:
  case 0x29:
  case 0x2a:
  case 0x32:
  case 0x35:
    goto LAB_0115c1dc;
  case 1:
    uVar2 = SourceRangeAstVisitor::VisitNode((SourceRangeAstVisitor *)this,param_1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    goto LAB_0115c6ac;
  case 2:
    uVar2 = SourceRangeAstVisitor::VisitNode((SourceRangeAstVisitor *)this,param_1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
      return;
    }
    pAVar6 = *(AstNode **)(param_1 + 0x18);
    uVar2 = GetCurrentStackPosition();
    if (*(ulong *)this <= uVar2) {
      VisitNoStackOverflowCheck(this,pAVar6);
      if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
        return;
      }
      pAVar6 = *(AstNode **)(param_1 + 0x20);
      goto LAB_0115c6b8;
    }
    goto LAB_0115c6c8;
  case 3:
    uVar2 = SourceRangeAstVisitor::VisitNode((SourceRangeAstVisitor *)this,param_1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
      return;
    }
    pAVar6 = *(AstNode **)(param_1 + 0x20);
    goto LAB_0115c690;
  case 4:
    VisitForStatement(this,(ForStatement *)param_1);
    return;
  case 5:
  case 6:
    uVar2 = SourceRangeAstVisitor::VisitNode((SourceRangeAstVisitor *)this,param_1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
      return;
    }
    pAVar6 = *(AstNode **)(param_1 + 0x20);
    uVar2 = GetCurrentStackPosition();
    if (uVar2 < *(ulong *)this) goto LAB_0115c6c8;
    VisitNoStackOverflowCheck(this,pAVar6);
    if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
      return;
    }
    pAVar6 = *(AstNode **)(param_1 + 0x28);
    goto LAB_0115c690;
  case 7:
    SourceRangeAstVisitor::VisitBlock((SourceRangeAstVisitor *)this,(Block *)param_1);
    return;
  case 8:
    SourceRangeAstVisitor::VisitSwitchStatement
              ((SourceRangeAstVisitor *)this,(SwitchStatement *)param_1);
    return;
  case 9:
  case 0xf:
    uVar2 = SourceRangeAstVisitor::VisitNode((SourceRangeAstVisitor *)this,param_1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
      return;
    }
    pAVar6 = *(AstNode **)(param_1 + 8);
    goto LAB_0115c6b8;
  case 0xb:
    uVar2 = SourceRangeAstVisitor::VisitNode((SourceRangeAstVisitor *)this,param_1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    AVar3 = this[8];
    goto joined_r0x0115c474;
  case 0xc:
    uVar2 = SourceRangeAstVisitor::VisitNode((SourceRangeAstVisitor *)this,param_1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
      return;
    }
    pAVar6 = *(AstNode **)(param_1 + 8);
    uVar2 = GetCurrentStackPosition();
    if (uVar2 < *(ulong *)this) goto LAB_0115c6c8;
    VisitNoStackOverflowCheck(this,pAVar6);
    AVar3 = this[8];
    goto joined_r0x0115c42c;
  case 0x10:
    uVar2 = SourceRangeAstVisitor::VisitNode((SourceRangeAstVisitor *)this,param_1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    AVar3 = this[8];
joined_r0x0115c42c:
    if (AVar3 != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
      return;
    }
    pAVar6 = *(AstNode **)(param_1 + 0x10);
LAB_0115c690:
    uVar2 = GetCurrentStackPosition();
    if (*(ulong *)this <= uVar2) {
      VisitNoStackOverflowCheck(this,pAVar6);
LAB_0115c6ac:
      if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
        return;
      }
      pAVar6 = *(AstNode **)(param_1 + 0x18);
LAB_0115c6b8:
      uVar2 = GetCurrentStackPosition();
      if (*(ulong *)this <= uVar2) {
        VisitNoStackOverflowCheck(this,pAVar6);
        return;
      }
    }
LAB_0115c6c8:
    this[8] = (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x1;
    break;
  case 0x11:
    SourceRangeAstVisitor::VisitTryCatchStatement
              ((SourceRangeAstVisitor *)this,(TryCatchStatement *)param_1);
    return;
  case 0x12:
    uVar2 = SourceRangeAstVisitor::VisitNode((SourceRangeAstVisitor *)this,param_1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
      return;
    }
    pAVar6 = *(AstNode **)(param_1 + 8);
    uVar2 = GetCurrentStackPosition();
    if (uVar2 < *(ulong *)this) goto LAB_0115c6c8;
    VisitNoStackOverflowCheck(this,pAVar6);
    AVar3 = this[8];
joined_r0x0115c474:
    if (AVar3 != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
      return;
    }
    pAVar6 = *(AstNode **)(param_1 + 0x10);
    goto LAB_0115c6b8;
  case 0x14:
    uVar2 = SourceRangeAstVisitor::VisitNode((SourceRangeAstVisitor *)this,param_1);
    if (((uVar2 & 1) != 0) && (plVar7 = *(long **)(param_1 + 8), 0 < *(int *)((long)plVar7 + 0xc)))
    {
      lVar8 = 0;
      do {
        puVar10 = *(ulong **)(*plVar7 + lVar8 * 8);
        pAVar6 = (AstNode *)(*puVar10 & 0xfffffffffffffffc);
        AVar3 = this[8];
        if ((*(uint *)(pAVar6 + 4) & 0x3f) != 0x29) {
          if (AVar3 != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
            return;
          }
          uVar2 = GetCurrentStackPosition();
          if (uVar2 < *(ulong *)this) goto LAB_0115c6c8;
          VisitNoStackOverflowCheck(this,pAVar6);
          AVar3 = this[8];
        }
        if (AVar3 != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
          return;
        }
        pAVar6 = (AstNode *)puVar10[1];
        uVar2 = GetCurrentStackPosition();
        if (uVar2 < *(ulong *)this) goto LAB_0115c6c8;
        VisitNoStackOverflowCheck(this,pAVar6);
        if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
          return;
        }
        lVar8 = lVar8 + 1;
        if (*(int *)((long)plVar7 + 0xc) <= lVar8) {
          return;
        }
      } while( true );
    }
    break;
  case 0x16:
    VisitObjectLiteral(this,(ObjectLiteral *)param_1);
    return;
  case 0x17:
    uVar2 = SourceRangeAstVisitor::VisitNode((SourceRangeAstVisitor *)this,param_1);
    if (((uVar2 & 1) != 0) && (0 < *(int *)(param_1 + 0x24))) {
      AVar3 = this[8];
      iVar4 = *(int *)(this + 0x18);
      lVar8 = 0;
      bVar1 = AVar3 == (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0;
      do {
        pAVar6 = *(AstNode **)(*(long *)(param_1 + 0x18) + lVar8 * 8);
        *(int *)(this + 0x18) = iVar4 + 1;
        if (bVar1) {
          uVar2 = GetCurrentStackPosition();
          if (uVar2 < *(ulong *)this) goto LAB_0115c90c;
          VisitNoStackOverflowCheck(this,pAVar6);
          AVar3 = this[8];
        }
        iVar4 = *(int *)(this + 0x18) + -1;
        *(int *)(this + 0x18) = iVar4;
        if (AVar3 != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
          return;
        }
        lVar8 = lVar8 + 1;
        AVar3 = (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0;
        bVar1 = true;
      } while (lVar8 < *(int *)(param_1 + 0x24));
    }
    break;
  case 0x18:
  case 0x1a:
  case 0x20:
  case 0x2c:
    uVar2 = SourceRangeAstVisitor::VisitNode((SourceRangeAstVisitor *)this,param_1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
    if (this[8] == (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
      pAVar6 = *(AstNode **)(param_1 + 8);
      uVar2 = GetCurrentStackPosition();
      if (*(ulong *)this <= uVar2) {
        VisitNoStackOverflowCheck(this,pAVar6);
        iVar4 = *(int *)(this + 0x18);
        *(int *)(this + 0x18) = iVar4 + -1;
        if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
          return;
        }
        *(int *)(this + 0x18) = iVar4;
        pAVar6 = *(AstNode **)(param_1 + 0x10);
        goto LAB_0115c218;
      }
LAB_0115c270:
      this[8] = (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x1;
    }
    goto LAB_0115c278;
  case 0x19:
  case 0x23:
  case 0x28:
  case 0x2b:
  case 0x30:
  case 0x33:
  case 0x34:
  case 0x36:
  case 0x37:
    uVar2 = SourceRangeAstVisitor::VisitNode((SourceRangeAstVisitor *)this,param_1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
    if (this[8] == (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
      pAVar6 = *(AstNode **)(param_1 + 8);
LAB_0115c218:
      uVar2 = GetCurrentStackPosition();
      if (uVar2 < *(ulong *)this) goto LAB_0115c270;
      VisitNoStackOverflowCheck(this,pAVar6);
    }
    goto LAB_0115c278;
  case 0x1b:
    VisitNaryOperation(this,(NaryOperation *)param_1);
    return;
  case 0x1c:
    VisitCall(this,(Call *)param_1);
    return;
  case 0x1d:
    VisitCallNew(this,(CallNew *)param_1);
    return;
  case 0x1e:
    uVar2 = SourceRangeAstVisitor::VisitNode((SourceRangeAstVisitor *)this,param_1);
    if (((uVar2 & 1) != 0) && (0 < *(int *)(param_1 + 0x24))) {
      AVar3 = this[8];
      iVar4 = *(int *)(this + 0x18);
      lVar8 = 0;
      bVar1 = AVar3 == (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0;
      do {
        pAVar6 = *(AstNode **)(*(long *)(param_1 + 0x18) + lVar8 * 8);
        *(int *)(this + 0x18) = iVar4 + 1;
        if (bVar1) {
          uVar2 = GetCurrentStackPosition();
          if (uVar2 < *(ulong *)this) goto LAB_0115c90c;
          VisitNoStackOverflowCheck(this,pAVar6);
          AVar3 = this[8];
        }
        iVar4 = *(int *)(this + 0x18) + -1;
        *(int *)(this + 0x18) = iVar4;
        if (AVar3 != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
          return;
        }
        lVar8 = lVar8 + 1;
        AVar3 = (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0;
        bVar1 = true;
      } while (lVar8 < *(int *)(param_1 + 0x24));
    }
    break;
  case 0x1f:
    VisitClassLiteral(this,(ClassLiteral *)param_1);
    return;
  case 0x21:
    VisitAssignment(this,(Assignment *)param_1);
    return;
  case 0x22:
    VisitConditional(this,(Conditional *)param_1);
    return;
  case 0x24:
    uVar2 = SourceRangeAstVisitor::VisitNode((SourceRangeAstVisitor *)this,param_1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    SourceRangeAstVisitor::VisitBlock((SourceRangeAstVisitor *)this,*(Block **)(param_1 + 8));
    if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
      return;
    }
    param_1 = *(AstNode **)(param_1 + 0x10);
LAB_0115c1dc:
    SourceRangeAstVisitor::VisitNode((SourceRangeAstVisitor *)this,param_1);
    return;
  case 0x26:
    SourceRangeAstVisitor::VisitFunctionLiteral
              ((SourceRangeAstVisitor *)this,(FunctionLiteral *)param_1);
    return;
  case 0x2d:
    uVar2 = SourceRangeAstVisitor::VisitNode((SourceRangeAstVisitor *)this,param_1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
    if (this[8] == (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
      pAVar6 = *(AstNode **)(param_1 + 0x10);
      goto LAB_0115c218;
    }
    goto LAB_0115c278;
  case 0x2e:
    VisitStoreInArrayLiteral(this,(StoreInArrayLiteral *)param_1);
    return;
  case 0x2f:
    uVar2 = SourceRangeAstVisitor::VisitNode((SourceRangeAstVisitor *)this,param_1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
    SourceRangeAstVisitor::VisitNode((SourceRangeAstVisitor *)this,*(AstNode **)(param_1 + 8));
    iVar4 = *(int *)(this + 0x18);
    *(int *)(this + 0x18) = iVar4 + -1;
    if (this[8] != (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
      return;
    }
    *(int *)(this + 0x18) = iVar4;
    SourceRangeAstVisitor::VisitNode((SourceRangeAstVisitor *)this,*(AstNode **)(param_1 + 0x10));
LAB_0115c278:
    iVar4 = *(int *)(this + 0x18);
LAB_0115c27c:
    *(int *)(this + 0x18) = iVar4 + -1;
    break;
  case 0x31:
    uVar2 = SourceRangeAstVisitor::VisitNode((SourceRangeAstVisitor *)this,param_1);
    if ((uVar2 & 1) != 0) {
      iVar4 = *(int *)((long)*(undefined8 **)(param_1 + 0x10) + 0xc);
      if (iVar4 != 0) {
        puVar9 = (undefined8 *)**(undefined8 **)(param_1 + 0x10);
        AVar3 = this[8];
        pAVar6 = (AstNode *)*puVar9;
        *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
        if (AVar3 == (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) {
          uVar2 = GetCurrentStackPosition();
          if (uVar2 < *(ulong *)this) {
            AVar3 = (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x1;
            this[8] = (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x1;
          }
          else {
            VisitNoStackOverflowCheck(this,pAVar6);
            AVar3 = this[8];
          }
        }
        iVar5 = *(int *)(this + 0x18) + -1;
        *(int *)(this + 0x18) = iVar5;
        if ((AVar3 == (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) && (iVar4 != 1)
           ) {
          lVar8 = (long)iVar4 * 8 + -0x10;
          do {
            puVar9 = puVar9 + 1;
            pAVar6 = (AstNode *)*puVar9;
            *(int *)(this + 0x18) = iVar5 + 1;
            uVar2 = GetCurrentStackPosition();
            if (uVar2 < *(ulong *)this) {
              AVar3 = (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x1;
              this[8] = (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x1;
            }
            else {
              VisitNoStackOverflowCheck(this,pAVar6);
              AVar3 = this[8];
            }
            iVar5 = *(int *)(this + 0x18) + -1;
            *(int *)(this + 0x18) = iVar5;
          } while ((AVar3 == (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x0) &&
                  (bVar1 = lVar8 != 0, lVar8 = lVar8 + -8, bVar1));
        }
      }
    }
    break;
  case 0x38:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return;
LAB_0115c90c:
  iVar4 = *(int *)(this + 0x18);
  this[8] = (AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>)0x1;
  goto LAB_0115c27c;
}

