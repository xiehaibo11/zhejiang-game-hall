
/* v8::internal::interpreter::BytecodeGenerator::BuildVariableLoad(v8::internal::Variable*,
   v8::internal::HoleCheckMode, v8::internal::TypeofMode) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildVariableLoad
          (BytecodeGenerator *this,undefined8 *param_1,int param_3,int param_4)

{
  ushort uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  
  uVar1 = *(ushort *)(param_1 + 5);
  if (((uVar1 >> 7 ^ 0xffff) & 7) == 0) {
    return;
  }
  switch(uVar1 >> 7 & 7) {
  default:
    if (param_1[1] == *(long *)(*(long *)(this + 0x1d8) + 0x1f0)) {
      BytecodeArrayBuilder::LoadUndefined((BytecodeArrayBuilder *)(this + 0x18));
      return;
    }
  case 6:
    uVar7 = GetCachedLoadGlobalICSlot(this,param_4,param_1);
    BytecodeArrayBuilder::LoadGlobal((BytecodeArrayBuilder *)(this + 0x18),param_1[1],uVar7,param_4)
    ;
    return;
  case 1:
    if (*(int *)(param_1 + 4) == -1) {
      uVar4 = BytecodeArrayBuilder::Receiver((BytecodeArrayBuilder *)(this + 0x18));
    }
    else {
      uVar4 = BytecodeArrayBuilder::Parameter
                        ((BytecodeArrayBuilder *)(this + 0x18),*(int *)(param_1 + 4));
    }
    goto LAB_01512ce4;
  case 2:
    uVar4 = BytecodeArrayBuilder::Local((BytecodeArrayBuilder *)(this + 0x18),*(int *)(param_1 + 4))
    ;
LAB_01512ce4:
    BytecodeArrayBuilder::LoadAccumulatorWithRegister((BytecodeArrayBuilder *)(this + 0x18),uVar4);
    break;
  case 3:
    iVar3 = Scope::ContextChainLength(*(Scope **)(*(long *)(this + 0x2f8) + 8),(Scope *)*param_1);
    lVar8 = *(long *)(this + 0x2f8);
    lVar2 = lVar8;
    iVar5 = iVar3;
    if (iVar3 <= *(int *)(lVar8 + 0x1c)) {
      for (; 0 < iVar5; iVar5 = iVar5 + -1) {
        lVar2 = *(long *)(lVar2 + 0x10);
      }
      if (lVar2 != 0) {
        iVar3 = 0;
        lVar8 = lVar2;
      }
    }
    BytecodeArrayBuilder::LoadContextSlot
              ((BytecodeArrayBuilder *)(this + 0x18),*(undefined4 *)(lVar8 + 0x18),
               *(undefined4 *)(param_1 + 4),iVar3,*(ushort *)(param_1 + 5) >> 0xe & 1);
    if (param_3 != 0) {
      return;
    }
    goto LAB_01512c0c;
  case 4:
    if ((uVar1 & 0xf) == 5) {
      uVar6 = Scope::ContextChainLengthUntilOutermostSloppyEval(*(Scope **)(this + 0x1e8));
      uVar4 = 6;
      if (param_4 == 0) {
        uVar4 = 7;
      }
      uVar7 = FeedbackVectorSpec::AddSlot
                        ((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),uVar4);
      BytecodeArrayBuilder::LoadLookupGlobalSlot
                ((BytecodeArrayBuilder *)(this + 0x18),param_1[1],param_4,uVar7,uVar6);
      return;
    }
    if ((uVar1 & 0xf) != 6) {
      BytecodeArrayBuilder::LoadLookupSlot((BytecodeArrayBuilder *)(this + 0x18),param_1[1],param_4)
      ;
      return;
    }
    puVar9 = (undefined8 *)param_1[2];
    uVar4 = Scope::ContextChainLength(*(Scope **)(*(long *)(this + 0x2f8) + 8),(Scope *)*puVar9);
    BytecodeArrayBuilder::LoadLookupContextSlot
              ((BytecodeArrayBuilder *)(this + 0x18),param_1[1],param_4,*(undefined4 *)(puVar9 + 4),
               uVar4);
    break;
  case 5:
    iVar5 = Scope::ContextChainLength(*(Scope **)(*(long *)(this + 0x2f8) + 8),(Scope *)*param_1);
    BytecodeArrayBuilder::LoadModuleVariable
              ((BytecodeArrayBuilder *)(this + 0x18),*(int *)(param_1 + 4),iVar5);
  }
  if (param_3 != 0) {
    return;
  }
LAB_01512c0c:
  if ((*(ushort *)(param_1 + 5) & 0x70) != 0x20) {
    BytecodeArrayBuilder::ThrowReferenceErrorIfHole
              ((BytecodeArrayBuilder *)(this + 0x18),(AstRawString *)param_1[1]);
    return;
  }
  BytecodeArrayBuilder::ThrowSuperNotCalledIfHole((BytecodeArrayBuilder *)(this + 0x18));
  return;
}

