
/* v8::internal::interpreter::BytecodeGenerator::BuildLiteralCompareNil(v8::internal::Token::Value,
   v8::internal::interpreter::BytecodeArrayBuilder::NilValue) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildLiteralCompareNil
          (BytecodeGenerator *this,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  BytecodeArrayBuilder *this_00;
  BytecodeLabel *pBVar3;
  long lVar4;
  
  lVar4 = *(long *)(this + 0x300);
  if (*(int *)(lVar4 + 0x18) == 3) {
    iVar1 = *(int *)(lVar4 + 0x24);
    if (iVar1 == 2) {
      uVar2 = BytecodeLabels::New(*(BytecodeLabels **)(lVar4 + 0x28));
      this_00 = (BytecodeArrayBuilder *)
                BytecodeArrayBuilder::JumpIfNil
                          ((BytecodeArrayBuilder *)(this + 0x18),uVar2,param_2,param_3);
      pBVar3 = (BytecodeLabel *)BytecodeLabels::New(*(BytecodeLabels **)(lVar4 + 0x30));
      BytecodeArrayBuilder::Jump(this_00,pBVar3);
    }
    else if (iVar1 == 1) {
      uVar2 = BytecodeLabels::New(*(BytecodeLabels **)(lVar4 + 0x28));
      BytecodeArrayBuilder::JumpIfNil((BytecodeArrayBuilder *)(this + 0x18),uVar2,param_2,param_3);
    }
    else if (iVar1 == 0) {
      uVar2 = BytecodeLabels::New(*(BytecodeLabels **)(lVar4 + 0x30));
      BytecodeArrayBuilder::JumpIfNotNil
                ((BytecodeArrayBuilder *)(this + 0x18),uVar2,param_2,param_3);
    }
    *(undefined1 *)(lVar4 + 0x20) = 1;
    return;
  }
  BytecodeArrayBuilder::CompareNil((BytecodeArrayBuilder *)(this + 0x18),param_2,param_3);
  return;
}

