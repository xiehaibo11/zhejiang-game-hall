
/* v8::internal::interpreter::BytecodeGenerator::BuildIteratorNext(v8::internal::interpreter::BytecodeGenerator::IteratorRecord
   const&, v8::internal::interpreter::Register) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildIteratorNext
          (BytecodeGenerator *this,int *param_1,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  BytecodeArrayBuilder *pBVar4;
  BytecodeLabel local_50 [8];
  undefined8 local_48;
  
  uVar1 = param_1[1];
  iVar2 = param_1[2];
  uVar3 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),4);
  BytecodeArrayBuilder::CallProperty
            ((BytecodeArrayBuilder *)(this + 0x18),iVar2,(ulong)uVar1 | 0x100000000,uVar3);
  if (*param_1 == 1) {
    BuildAwait(this,-1);
  }
  local_50[0] = (BytecodeLabel)0x0;
  local_48 = 0xffffffffffffffff;
  pBVar4 = (BytecodeArrayBuilder *)
           BytecodeArrayBuilder::StoreAccumulatorInRegister
                     ((BytecodeArrayBuilder *)(this + 0x18),param_3);
  pBVar4 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::JumpIfJSReceiver(pBVar4,local_50);
  pBVar4 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::CallRuntime(pBVar4,0xac,param_3);
  BytecodeArrayBuilder::Bind(pBVar4,local_50);
  return;
}

