
/* v8::internal::interpreter::BytecodeGenerator::BuildFillArrayWithIterator(v8::internal::interpreter::BytecodeGenerator::IteratorRecord,
   v8::internal::interpreter::Register, v8::internal::interpreter::Register,
   v8::internal::interpreter::Register, v8::internal::FeedbackSlot, v8::internal::FeedbackSlot,
   v8::internal::FeedbackSlot, v8::internal::FeedbackSlot) */

void v8::internal::interpreter::BytecodeGenerator::BuildFillArrayWithIterator
               (BytecodeGenerator *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
               undefined4 param_9,undefined4 param_10)

{
  long lVar1;
  undefined8 uVar2;
  BytecodeArrayBuilder *pBVar3;
  undefined8 uVar4;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined **local_e8;
  BytecodeArrayBuilder *local_e0;
  undefined8 **local_d8;
  undefined8 **local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 **local_98;
  undefined8 **ppuStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  long local_68;
  
  pBVar3 = (BytecodeArrayBuilder *)(param_1 + 0x18);
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_c0 = *(undefined8 *)(param_1 + 0x18);
  local_e8 = &PTR__LoopBuilder_01cc7128;
  local_98 = &local_98;
  uStack_c8 = 0;
  local_b8 = 0;
  local_a8 = 0;
  uStack_a0 = 0xffffffffffffffff;
  local_b0 = 0;
  local_88 = 0;
  local_78 = 0;
  local_f8 = param_2;
  local_f0 = param_3;
  local_e0 = pBVar3;
  local_d8 = &local_d8;
  local_d0 = &local_d8;
  ppuStack_90 = local_98;
  uStack_80 = local_c0;
  LoopBuilder::LoopHeader((LoopBuilder *)&local_e8);
  BuildIteratorNext(param_1,&local_f8,param_6);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x1d8) + 0xc0);
  uVar2 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(param_1 + 0x1d0) + 0x38),5);
  BytecodeArrayBuilder::LoadNamedProperty(pBVar3,param_6,uVar4,uVar2);
  BreakableControlFlowBuilder::EmitJumpIfTrue((BreakableControlFlowBuilder *)&local_e8,0,&local_d8);
  LoopBuilder::LoopBody((LoopBuilder *)&local_e8);
  pBVar3 = (BytecodeArrayBuilder *)
           BytecodeArrayBuilder::LoadNamedProperty
                     (pBVar3,param_6,*(undefined8 *)(*(long *)(param_1 + 0x1d8) + 0x1f8),param_7);
  pBVar3 = (BytecodeArrayBuilder *)
           BytecodeArrayBuilder::StoreInArrayLiteral(pBVar3,param_4,param_5,param_10);
  pBVar3 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::LoadAccumulatorWithRegister(pBVar3,param_5)
  ;
  pBVar3 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::UnaryOperation(pBVar3,0x33,param_9);
  BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar3,param_5);
  LoopBuilder::BindContinueTarget((LoopBuilder *)&local_e8);
  LoopBuilder::JumpToHeader((LoopBuilder *)&local_e8,*(int *)(param_1 + 0x334));
  LoopBuilder::~LoopBuilder((LoopBuilder *)&local_e8);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

