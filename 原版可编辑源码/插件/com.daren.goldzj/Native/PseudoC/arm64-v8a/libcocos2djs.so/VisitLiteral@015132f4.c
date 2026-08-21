
/* v8::internal::interpreter::BytecodeGenerator::VisitLiteral(v8::internal::Literal*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitLiteral(BytecodeGenerator *this,Literal *param_1)

{
  byte bVar1;
  long lVar2;
  undefined4 uVar3;
  
  if (*(int *)(*(long *)(this + 0x300) + 0x18) != 1) {
    switch(*(uint *)(param_1 + 4) >> 7 & 0xf) {
    case 0:
      BytecodeArrayBuilder::LoadLiteral
                ((BytecodeArrayBuilder *)(this + 0x18),(long)*(int *)(param_1 + 8) << 1);
      return;
    case 1:
      BytecodeArrayBuilder::LoadLiteral
                ((BytecodeArrayBuilder *)(this + 0x18),*(double *)(param_1 + 8));
      return;
    case 2:
      BytecodeArrayBuilder::LoadLiteral(this + 0x18,*(undefined8 *)(param_1 + 8));
      return;
    case 3:
      BytecodeArrayBuilder::LoadLiteral
                ((BytecodeArrayBuilder *)(this + 0x18),*(AstRawString **)(param_1 + 8));
      lVar2 = *(long *)(this + 0x300);
      uVar3 = 2;
      break;
    case 4:
      BytecodeArrayBuilder::LoadLiteral((BytecodeArrayBuilder *)(this + 0x18),param_1[8]);
      return;
    case 5:
      bVar1 = Literal::ToBooleanIsTrue(param_1);
      BytecodeArrayBuilder::LoadBoolean((BytecodeArrayBuilder *)(this + 0x18),(bool)(bVar1 & 1));
      lVar2 = *(long *)(this + 0x300);
      uVar3 = 1;
      break;
    case 6:
      BytecodeArrayBuilder::LoadUndefined((BytecodeArrayBuilder *)(this + 0x18));
      return;
    case 7:
      BytecodeArrayBuilder::LoadNull((BytecodeArrayBuilder *)(this + 0x18));
      return;
    case 8:
      BytecodeArrayBuilder::LoadTheHole((BytecodeArrayBuilder *)(this + 0x18));
      return;
    default:
      goto switchD_01513344_default;
    }
    *(undefined4 *)(lVar2 + 0x1c) = uVar3;
  }
switchD_01513344_default:
  return;
}

