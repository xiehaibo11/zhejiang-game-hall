
/* v8::internal::interpreter::BytecodeGenerator::BuildCallIteratorMethod(v8::internal::interpreter::Register,
   v8::internal::AstRawString const*, v8::internal::interpreter::RegisterList,
   v8::internal::interpreter::BytecodeLabel*, v8::internal::interpreter::BytecodeLabels*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildCallIteratorMethod
          (BytecodeGenerator *this,undefined4 param_2,undefined8 param_3,undefined8 param_4,
          BytecodeLabel *param_5,BytecodeLabels *param_6)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  BytecodeArrayBuilder *pBVar5;
  BytecodeLabel *pBVar6;
  
  iVar1 = *(int *)(this + 0x118);
  iVar2 = *(int *)(this + 0x11c);
  plVar3 = *(long **)(this + 0x120);
  if (iVar2 <= iVar1 + 1) {
    iVar2 = iVar1 + 1;
  }
  *(int *)(this + 0x118) = iVar1 + 1;
  *(int *)(this + 0x11c) = iVar2;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,iVar1);
  }
  uVar4 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),5);
  pBVar5 = (BytecodeArrayBuilder *)
           BytecodeArrayBuilder::LoadNamedProperty
                     ((BytecodeArrayBuilder *)(this + 0x18),param_2,param_3,uVar4);
  pBVar6 = (BytecodeLabel *)BytecodeLabels::New(param_6);
  pBVar5 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::JumpIfUndefinedOrNull(pBVar5,pBVar6);
  pBVar5 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar5,iVar1);
  uVar4 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),4);
  pBVar5 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::CallProperty(pBVar5,iVar1,param_4,uVar4);
  BytecodeArrayBuilder::Jump(pBVar5,param_5);
  plVar3 = *(long **)(this + 0x120);
  iVar2 = *(int *)(this + 0x118);
  *(int *)(this + 0x118) = iVar1;
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01518844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,CONCAT44(iVar2 - iVar1,iVar1));
    return;
  }
  return;
}

