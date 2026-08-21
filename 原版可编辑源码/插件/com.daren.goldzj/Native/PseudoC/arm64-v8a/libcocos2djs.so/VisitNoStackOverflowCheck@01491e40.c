
/* v8::internal::AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::VisitNoStackOverflowCheck(v8::internal::AstNode*)
    */

void __thiscall
v8::internal::AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>::
VisitNoStackOverflowCheck
          (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer> *this,AstNode *param_1)

{
  bool bVar1;
  ulong uVar2;
  AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer> AVar3;
  int iVar4;
  int iVar5;
  AstNode *pAVar6;
  long lVar7;
  undefined8 *puVar8;
  
  switch(*(uint *)(param_1 + 4) & 0x3f) {
  case 1:
    goto switchD_01491e80_caseD_1;
  case 2:
    if (this[8] != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
      return;
    }
    pAVar6 = *(AstNode **)(param_1 + 0x18);
    uVar2 = GetCurrentStackPosition();
    if (*(ulong *)this <= uVar2) {
      VisitNoStackOverflowCheck(this,pAVar6);
      if (this[8] != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
        return;
      }
      pAVar6 = *(AstNode **)(param_1 + 0x20);
      goto LAB_014921ac;
    }
    goto LAB_014921bc;
  case 3:
    if (this[8] != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
      return;
    }
    pAVar6 = *(AstNode **)(param_1 + 0x20);
    goto LAB_014920b8;
  case 4:
    VisitForStatement(this,(ForStatement *)param_1);
    return;
  case 5:
    VisitForInStatement((ForInStatement *)this);
    return;
  case 6:
    VisitForOfStatement((ForOfStatement *)this);
    return;
  case 7:
    goto LAB_0149206c;
  case 8:
    VisitSwitchStatement(this,(SwitchStatement *)param_1);
    return;
  case 9:
  case 0xf:
    if (this[8] != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
      return;
    }
    pAVar6 = *(AstNode **)(param_1 + 8);
    goto LAB_014921ac;
  case 0xb:
    goto switchD_01491e80_caseD_b;
  case 0xc:
    VisitIfStatement((IfStatement *)this);
    return;
  case 0x10:
    if (this[8] != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
      return;
    }
    pAVar6 = *(AstNode **)(param_1 + 0x10);
    goto LAB_014920b8;
  case 0x11:
    if (this[8] != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
      return;
    }
    pAVar6 = *(AstNode **)(param_1 + 8);
LAB_014920b8:
    uVar2 = GetCurrentStackPosition();
    if (*(ulong *)this <= uVar2) {
      VisitNoStackOverflowCheck(this,pAVar6);
switchD_01491e80_caseD_1:
      if (this[8] != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
        return;
      }
      pAVar6 = *(AstNode **)(param_1 + 0x18);
LAB_014921ac:
      uVar2 = GetCurrentStackPosition();
      if (*(ulong *)this <= uVar2) {
        VisitNoStackOverflowCheck(this,pAVar6);
        return;
      }
    }
LAB_014921bc:
    this[8] = (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x1;
    break;
  case 0x12:
    if (this[8] != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
      return;
    }
    pAVar6 = *(AstNode **)(param_1 + 8);
    uVar2 = GetCurrentStackPosition();
    if (uVar2 < *(ulong *)this) goto LAB_014921bc;
    VisitNoStackOverflowCheck(this,pAVar6);
    goto switchD_01491e80_caseD_b;
  case 0x14:
    VisitInitializeClassMembersStatement(this,(InitializeClassMembersStatement *)param_1);
    return;
  case 0x16:
    VisitObjectLiteral(this,(ObjectLiteral *)param_1);
    return;
  case 0x17:
    if (0 < *(int *)(param_1 + 0x24)) {
      AVar3 = this[8];
      iVar5 = *(int *)(this + 0x18);
      lVar7 = 0;
      bVar1 = AVar3 == (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0;
      do {
        pAVar6 = *(AstNode **)(*(long *)(param_1 + 0x18) + lVar7 * 8);
        *(int *)(this + 0x18) = iVar5 + 1;
        if (bVar1) {
          uVar2 = GetCurrentStackPosition();
          if (uVar2 < *(ulong *)this) goto LAB_014923e8;
          VisitNoStackOverflowCheck(this,pAVar6);
          AVar3 = this[8];
        }
        iVar5 = *(int *)(this + 0x18) + -1;
        *(int *)(this + 0x18) = iVar5;
        if (AVar3 != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
          return;
        }
        lVar7 = lVar7 + 1;
        AVar3 = (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0;
        bVar1 = true;
      } while (lVar7 < *(int *)(param_1 + 0x24));
    }
    break;
  case 0x18:
  case 0x21:
    VisitAssignment((Assignment *)this);
    return;
  case 0x19:
  case 0x23:
  case 0x28:
  case 0x2b:
  case 0x30:
  case 0x33:
  case 0x34:
  case 0x36:
  case 0x37:
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
    if (this[8] == (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
      pAVar6 = *(AstNode **)(param_1 + 8);
LAB_01491e9c:
      uVar2 = GetCurrentStackPosition();
      if (uVar2 < *(ulong *)this) {
LAB_01491eac:
        this[8] = (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar6);
      }
    }
    goto LAB_0149231c;
  case 0x1a:
    VisitBinaryOperation((BinaryOperation *)this);
    return;
  case 0x1b:
    VisitNaryOperation(this,(NaryOperation *)param_1);
    return;
  case 0x1c:
    VisitCall(this,(Call *)param_1);
    return;
  case 0x1d:
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
    if (this[8] != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0)
    goto LAB_0149231c;
    pAVar6 = *(AstNode **)(param_1 + 8);
    uVar2 = GetCurrentStackPosition();
    if (uVar2 < *(ulong *)this) goto LAB_01491eac;
    VisitNoStackOverflowCheck(this,pAVar6);
    iVar5 = *(int *)(this + 0x18) + -1;
    *(int *)(this + 0x18) = iVar5;
    if (this[8] != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
      return;
    }
    if (*(int *)(param_1 + 0x1c) < 1) {
      return;
    }
    lVar7 = 0;
    while( true ) {
      pAVar6 = *(AstNode **)(*(long *)(param_1 + 0x10) + lVar7 * 8);
      *(int *)(this + 0x18) = iVar5 + 1;
      uVar2 = GetCurrentStackPosition();
      if (uVar2 < *(ulong *)this) break;
      VisitNoStackOverflowCheck(this,pAVar6);
      iVar5 = *(int *)(this + 0x18) + -1;
      *(int *)(this + 0x18) = iVar5;
      if (this[8] != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
        return;
      }
      lVar7 = lVar7 + 1;
      if (*(int *)(param_1 + 0x1c) <= lVar7) {
        return;
      }
    }
LAB_014923e8:
    iVar5 = *(int *)(this + 0x18);
    this[8] = (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x1;
    goto LAB_01492320;
  case 0x1e:
    if (0 < *(int *)(param_1 + 0x24)) {
      AVar3 = this[8];
      iVar5 = *(int *)(this + 0x18);
      lVar7 = 0;
      bVar1 = AVar3 == (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0;
      do {
        pAVar6 = *(AstNode **)(*(long *)(param_1 + 0x18) + lVar7 * 8);
        *(int *)(this + 0x18) = iVar5 + 1;
        if (bVar1) {
          uVar2 = GetCurrentStackPosition();
          if (uVar2 < *(ulong *)this) goto LAB_014923e8;
          VisitNoStackOverflowCheck(this,pAVar6);
          AVar3 = this[8];
        }
        iVar5 = *(int *)(this + 0x18) + -1;
        *(int *)(this + 0x18) = iVar5;
        if (AVar3 != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
          return;
        }
        lVar7 = lVar7 + 1;
        AVar3 = (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0;
        bVar1 = true;
      } while (lVar7 < *(int *)(param_1 + 0x24));
    }
    break;
  case 0x1f:
    AstFunctionLiteralIdReindexer::VisitClassLiteral
              ((AstFunctionLiteralIdReindexer *)this,(ClassLiteral *)param_1);
    return;
  case 0x20:
  case 0x2c:
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
    if (this[8] == (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
      pAVar6 = *(AstNode **)(param_1 + 8);
      uVar2 = GetCurrentStackPosition();
      if (uVar2 < *(ulong *)this) goto LAB_01491eac;
      VisitNoStackOverflowCheck(this,pAVar6);
      iVar5 = *(int *)(this + 0x18);
      *(int *)(this + 0x18) = iVar5 + -1;
      if (this[8] != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
        return;
      }
      *(int *)(this + 0x18) = iVar5;
      pAVar6 = *(AstNode **)(param_1 + 0x10);
      goto LAB_01491e9c;
    }
    goto LAB_0149231c;
  case 0x22:
    VisitConditional((Conditional *)this);
    return;
  case 0x24:
    param_1 = *(AstNode **)(param_1 + 8);
LAB_0149206c:
    VisitBlock(this,(Block *)param_1);
    return;
  case 0x26:
    VisitFunctionLiteral(this,(FunctionLiteral *)param_1);
    *(int *)(param_1 + 0x1c) = *(int *)(this + 0x1c) + *(int *)(param_1 + 0x1c);
    break;
  case 0x2d:
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
    if (this[8] == (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
      pAVar6 = *(AstNode **)(param_1 + 0x10);
      goto LAB_01491e9c;
    }
LAB_0149231c:
    iVar5 = *(int *)(this + 0x18);
LAB_01492320:
    *(int *)(this + 0x18) = iVar5 + -1;
    break;
  case 0x2e:
    VisitStoreInArrayLiteral((StoreInArrayLiteral *)this);
    return;
  case 0x31:
    iVar5 = *(int *)((long)*(undefined8 **)(param_1 + 0x10) + 0xc);
    if (iVar5 != 0) {
      puVar8 = (undefined8 *)**(undefined8 **)(param_1 + 0x10);
      AVar3 = this[8];
      pAVar6 = (AstNode *)*puVar8;
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
      if (AVar3 == (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
        uVar2 = GetCurrentStackPosition();
        if (uVar2 < *(ulong *)this) {
          AVar3 = (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x1;
          this[8] = (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x1;
        }
        else {
          VisitNoStackOverflowCheck(this,pAVar6);
          AVar3 = this[8];
        }
      }
      iVar4 = *(int *)(this + 0x18) + -1;
      *(int *)(this + 0x18) = iVar4;
      if ((AVar3 == (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) &&
         (iVar5 != 1)) {
        lVar7 = (long)iVar5 * 8 + -0x10;
        do {
          puVar8 = puVar8 + 1;
          pAVar6 = (AstNode *)*puVar8;
          *(int *)(this + 0x18) = iVar4 + 1;
          uVar2 = GetCurrentStackPosition();
          if (uVar2 < *(ulong *)this) {
            AVar3 = (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x1;
            this[8] = (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x1;
          }
          else {
            VisitNoStackOverflowCheck(this,pAVar6);
            AVar3 = this[8];
          }
          iVar4 = *(int *)(this + 0x18) + -1;
          *(int *)(this + 0x18) = iVar4;
        } while ((AVar3 == (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) &&
                (bVar1 = lVar7 != 0, lVar7 = lVar7 + -8, bVar1));
      }
    }
    break;
  case 0x38:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return;
switchD_01491e80_caseD_b:
  if (this[8] != (AstTraversalVisitor<v8::internal::AstFunctionLiteralIdReindexer>)0x0) {
    return;
  }
  pAVar6 = *(AstNode **)(param_1 + 0x10);
  goto LAB_014921ac;
}

