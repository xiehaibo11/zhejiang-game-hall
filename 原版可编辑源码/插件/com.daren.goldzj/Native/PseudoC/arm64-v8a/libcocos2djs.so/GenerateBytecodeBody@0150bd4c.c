
/* v8::internal::interpreter::BytecodeGenerator::GenerateBytecodeBody() */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::GenerateBytecodeBody(BytecodeGenerator *this)

{
  int iVar1;
  BytecodeGenerator BVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  BytecodeArrayBuilder *this_00;
  long *plVar8;
  byte bVar9;
  long lVar10;
  long lVar11;
  FunctionLiteral *this_01;
  ulong uVar12;
  BlockCoverageBuilder *pBVar13;
  AstNode *pAVar14;
  
  lVar10 = *(long *)(this + 0x1e0);
  lVar11 = *(long *)(lVar10 + 200);
  if (lVar11 != 0) {
    if ((*(byte *)(lVar10 + 0x81) & 1) == 0) {
      bVar9 = ~*(byte *)(lVar10 + 0x83) & 1;
    }
    else {
      bVar9 = 1;
    }
    BytecodeArrayBuilder::CreateArguments((BytecodeArrayBuilder *)(this + 0x18),bVar9);
    BuildVariableAssignment(this,lVar11,0x11,1,0);
    lVar10 = *(long *)(this + 0x1e0);
  }
  if (((*(byte *)(lVar10 + 0x83) >> 3 & 1) != 0) &&
     (lVar11 = *(long *)(*(long *)(lVar10 + 0x90) + (long)*(int *)(lVar10 + 0x9c) * 8 + -8),
     lVar11 != 0)) {
    BytecodeArrayBuilder::CreateArguments((BytecodeArrayBuilder *)(this + 0x18),2);
    BuildVariableAssignment(this,lVar11,0x11,1,0);
    lVar10 = *(long *)(this + 0x1e0);
  }
  lVar11 = *(long *)(lVar10 + 0xb8);
  if (lVar11 != 0) {
    uVar4 = Register::function_closure();
    BytecodeArrayBuilder::LoadAccumulatorWithRegister((BytecodeArrayBuilder *)(this + 0x18),uVar4);
    BuildVariableAssignment(this,lVar11,0x10,1,0);
    lVar10 = *(long *)(this + 0x1e0);
  }
  if ((*(long **)(lVar10 + 0xd8) != (long *)0x0) &&
     (lVar11 = **(long **)(lVar10 + 0xd8), lVar11 != 0)) {
    uVar4 = Register::function_closure();
    BytecodeArrayBuilder::LoadAccumulatorWithRegister((BytecodeArrayBuilder *)(this + 0x18),uVar4);
    BuildVariableAssignment(this,lVar11,0x10,1,0);
    lVar10 = *(long *)(this + 0x1e0);
  }
  lVar10 = *(long *)(lVar10 + 0xc0);
  if (lVar10 != 0) {
    uVar5 = FunctionLiteral::kind(*(FunctionLiteral **)(*(long *)(this + 0x1d0) + 0x10));
    if (((6 < (uVar5 & 0xff) - 10) && (1 < (uVar5 & 0xff) - 1)) &&
       ((*(ushort *)(lVar10 + 0x28) & 0x380) != 0x100)) {
      BytecodeArrayBuilder::LoadAccumulatorWithRegister
                ((BytecodeArrayBuilder *)(this + 0x18),*(undefined4 *)(this + 0x308));
      BuildVariableAssignment(this,lVar10,0x10,1,0);
    }
  }
  this_01 = *(FunctionLiteral **)(*(long *)(this + 0x1d0) + 0x10);
  uVar5 = FunctionLiteral::kind(this_01);
  if (((uVar5 & 0xff) - 10 < 7) || ((uVar5 & 0xff) - 1 < 2)) {
    BuildGeneratorObjectVariableInitialization(this);
  }
  if (FLAG_trace != '\0') {
    BytecodeArrayBuilder::CallRuntime((BytecodeArrayBuilder *)(this + 0x18),0x1b5);
  }
  if ((**(byte **)(this + 0x1d0) >> 1 & 1) != 0) {
    FeedbackVectorSpec::AddTypeProfileSlot((FeedbackVectorSpec *)(*(byte **)(this + 0x1d0) + 0x38));
    uVar5 = *(uint *)(*(long *)(this + 0x1e0) + 0x88);
    if (0 < (int)uVar5) {
      uVar12 = 0;
      do {
        uVar4 = BytecodeArrayBuilder::Parameter((BytecodeArrayBuilder *)(this + 0x18),(int)uVar12);
        this_00 = (BytecodeArrayBuilder *)
                  BytecodeArrayBuilder::LoadAccumulatorWithRegister
                            ((BytecodeArrayBuilder *)(this + 0x18),uVar4);
        BytecodeArrayBuilder::CollectTypeProfile
                  (this_00,*(int *)(*(long *)(*(long *)(*(long *)(this + 0x1e0) + 0x90) + uVar12 * 8
                                             ) + 0x24));
        uVar12 = uVar12 + 1;
      } while (uVar5 != uVar12);
    }
  }
  pBVar13 = *(BlockCoverageBuilder **)(this + 0x208);
  if ((pBVar13 != (BlockCoverageBuilder *)0x0) &&
     (iVar6 = BlockCoverageBuilder::AllocateBlockCoverageSlot(pBVar13,this_01,0), iVar6 != -1)) {
    BytecodeArrayBuilder::IncBlockCounter(*(BytecodeArrayBuilder **)(pBVar13 + 0x20),iVar6);
  }
  VisitDeclarations(this,(ThreadedListBase *)(*(long *)(this + 0x1e0) + 0x58));
  VisitModuleNamespaceImports(this);
  cVar3 = FunctionLiteral::kind(*(FunctionLiteral **)(*(long *)(this + 0x1d0) + 0x10));
  if ((byte)(cVar3 - 3U) < 2) {
    uVar12 = FunctionLiteral::requires_brand_initialization(this_01);
    if ((uVar12 & 1) != 0) {
      uVar4 = BytecodeArrayBuilder::Receiver((BytecodeArrayBuilder *)(this + 0x18));
      BuildPrivateBrandInitialization(this,uVar4);
    }
    if (((byte)this_01[6] >> 4 & 1) != 0) {
      uVar4 = Register::function_closure();
      uVar7 = BytecodeArrayBuilder::Receiver((BytecodeArrayBuilder *)(this + 0x18));
      BuildInstanceMemberInitialization(this,uVar4,uVar7);
    }
  }
  if (0 < *(int *)(this_01 + 0x3c)) {
    lVar10 = 0;
    do {
      iVar6 = *(int *)(this + 0x118);
      if (this[8] == (BytecodeGenerator)0x0) {
        pAVar14 = *(AstNode **)(*(long *)(this_01 + 0x30) + lVar10 * 8);
        uVar12 = GetCurrentStackPosition();
        if (uVar12 < *(ulong *)this) {
          this[8] = (BytecodeGenerator)0x1;
        }
        else {
          VisitNoStackOverflowCheck(this,pAVar14);
        }
      }
      BVar2 = this[0x1b2];
      plVar8 = *(long **)(this + 0x120);
      iVar1 = *(int *)(this + 0x118);
      *(int *)(this + 0x118) = iVar6;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x20))(plVar8,CONCAT44(iVar1 - iVar6,iVar6));
      }
    } while ((BVar2 == (BytecodeGenerator)0x0) &&
            (lVar10 = lVar10 + 1, lVar10 < *(int *)(this_01 + 0x3c)));
  }
  if (this[0x1b2] != (BytecodeGenerator)0x0) {
    return;
  }
  BytecodeArrayBuilder::LoadUndefined((BytecodeArrayBuilder *)(this + 0x18));
  BuildReturn(this,-1);
  return;
}

