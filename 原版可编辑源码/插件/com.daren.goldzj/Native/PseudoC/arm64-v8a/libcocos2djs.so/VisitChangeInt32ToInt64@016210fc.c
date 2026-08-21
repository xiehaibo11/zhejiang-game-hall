
/* v8::internal::compiler::InstructionSelector::VisitChangeInt32ToInt64(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitChangeInt32ToInt64
          (InstructionSelector *this,Node *param_1)

{
  uint uVar1;
  short sVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined4 uVar8;
  InstructionSequence *pIVar9;
  Node *pNVar10;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_78 [8];
  Node *local_70;
  uint local_58;
  char local_54;
  Constant aCStack_50 [16];
  
  pNVar10 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar10 = (Node *)(*(long *)pNVar10 + 0x10);
  }
  pNVar10 = *(Node **)pNVar10;
  sVar2 = *(short *)(*(long *)pNVar10 + 0x10);
  if (sVar2 == 0x1aa) {
    uVar3 = CanCover(this,param_1,pNVar10);
    if ((uVar3 & 1) != 0) {
      uVar4 = LoadRepresentationOf(*(Operator **)pNVar10);
      uVar7 = (uint)uVar4;
      uVar1 = uVar7 & 0xff;
      if (uVar1 - 1 < 2) {
        uVar1 = uVar7 >> 8 & 0xff;
        uVar8 = 0xeb;
        if (uVar1 == 4 || uVar1 == 2) {
          uVar8 = 0xec;
        }
        uVar6 = 5;
      }
      else if (uVar1 == 3) {
        uVar1 = uVar7 >> 8 & 0xff;
        uVar8 = 0xee;
        if (uVar1 == 4 || uVar1 == 2) {
          uVar8 = 0xef;
        }
        uVar6 = 6;
      }
      else {
        if (uVar1 != 4) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        uVar8 = 0xf1;
        uVar6 = 7;
      }
      EmitLoad(this,pNVar10,uVar8,uVar6,uVar4,param_1);
      return;
    }
    sVar2 = *(short *)(*(Operator **)pNVar10 + 0x10);
  }
  if (((sVar2 == 0x12d) && (uVar3 = CanCover(this,param_1,pNVar10), (uVar3 & 1) != 0)) &&
     (BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
      ::BinopMatcher(aBStack_78,pNVar10), local_54 != '\0')) {
    uVar3 = GetVirtualRegister(this,param_1);
    MarkAsDefined(this,param_1);
    uVar5 = GetVirtualRegister(this,local_70);
    MarkAsUsed(this,local_70);
    pIVar9 = *(InstructionSequence **)(this + 0x10);
    Constant::Constant(aCStack_50,local_58 & 0x1f);
    uVar4 = InstructionSequence::AddImmediate(pIVar9,aCStack_50);
    pIVar9 = *(InstructionSequence **)(this + 0x10);
    Constant::Constant(aCStack_50,0x20 - (local_58 & 0x1f));
    uVar6 = InstructionSequence::AddImmediate(pIVar9,aCStack_50);
    Emit(this,0x9a,(uVar3 & 0xffffffff) << 3 | 0xd800000001,(uVar5 & 0xffffffff) << 3 | 0x5800000001
         ,uVar4,uVar6,0,0);
  }
  else {
    FUN_0161f3b8(this,0x99,param_1);
  }
  return;
}

