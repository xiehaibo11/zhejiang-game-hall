
/* v8::internal::interpreter::BytecodeGenerator::BuildGetIteratorRecord(v8::internal::interpreter::Register,
   v8::internal::interpreter::Register, v8::internal::IteratorType) */

undefined1  [16] __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildGetIteratorRecord
          (BytecodeGenerator *this,ulong param_2,undefined4 param_3,undefined4 param_4)

{
  BytecodeArrayBuilder *pBVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  BuildGetIterator(this,param_4);
  pBVar1 = (BytecodeArrayBuilder *)
           BytecodeArrayBuilder::StoreAccumulatorInRegister
                     ((BytecodeArrayBuilder *)(this + 0x18),param_3);
  uVar3 = *(undefined8 *)(*(long *)(this + 0x1d8) + 0x170);
  uVar2 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),5);
  pBVar1 = (BytecodeArrayBuilder *)
           BytecodeArrayBuilder::LoadNamedProperty(pBVar1,param_3,uVar3,uVar2);
  BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar1,param_2 & 0xffffffff);
  auVar4._4_4_ = param_3;
  auVar4._0_4_ = param_4;
  auVar4._8_8_ = param_2 & 0xffffffff;
  return auVar4;
}

