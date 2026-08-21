
/* v8::internal::interpreter::BytecodeGenerator::VisitSetHomeObject(v8::internal::interpreter::Register,
   v8::internal::interpreter::Register, v8::internal::LiteralProperty*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitSetHomeObject
          (BytecodeGenerator *this,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FunctionLiteral::NeedsHomeObject(*(Expression **)(param_4 + 8));
  if ((uVar2 & 1) != 0) {
    uVar1 = 2;
    if ((*(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1) != 0) {
      uVar1 = 0xb;
    }
    uVar1 = FeedbackVectorSpec::AddSlot
                      ((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),uVar1);
    uVar3 = BytecodeArrayBuilder::LoadAccumulatorWithRegister
                      ((BytecodeArrayBuilder *)(this + 0x18),param_3);
    BytecodeArrayBuilder::StoreHomeObjectProperty
              (uVar3,param_2,uVar1,*(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1);
    return;
  }
  return;
}

