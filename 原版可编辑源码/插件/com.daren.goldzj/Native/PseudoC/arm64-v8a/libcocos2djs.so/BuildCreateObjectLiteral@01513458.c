
/* v8::internal::interpreter::BytecodeGenerator::BuildCreateObjectLiteral(v8::internal::interpreter::Register,
   unsigned char, unsigned long) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildCreateObjectLiteral
          (BytecodeGenerator *this,undefined4 param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  BytecodeArrayBuilder *pBVar4;
  long *plVar5;
  ulong uVar6;
  
  if (((FLAG_enable_one_shot_optimization == '\0') || (0 < *(int *)(this + 0x334))) ||
     ((*(int *)(*(long *)(*(long *)(this + 0x1d0) + 0x10) + 0x1c) != 0 &&
      ((*(byte *)(*(long *)(*(long *)(this + 0x1d0) + 0x10) + 6) >> 6 & 1) == 0)))) {
    iVar3 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),0x13)
    ;
    pBVar4 = (BytecodeArrayBuilder *)
             BytecodeArrayBuilder::CreateObjectLiteral
                       ((BytecodeArrayBuilder *)(this + 0x18),param_4,iVar3,(uint)param_3 & 0xff);
  }
  else {
    uVar2 = *(uint *)(this + 0x118);
    plVar5 = *(long **)(this + 0x120);
    iVar3 = uVar2 + 2;
    iVar1 = *(int *)(this + 0x11c);
    if (*(int *)(this + 0x11c) <= iVar3) {
      iVar1 = iVar3;
    }
    uVar6 = (ulong)uVar2 | 0x200000000;
    *(int *)(this + 0x118) = iVar3;
    *(int *)(this + 0x11c) = iVar1;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5,uVar6);
    }
    pBVar4 = (BytecodeArrayBuilder *)
             BytecodeArrayBuilder::LoadConstantPoolEntry
                       ((BytecodeArrayBuilder *)(this + 0x18),param_4);
    pBVar4 = (BytecodeArrayBuilder *)
             BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar4,(ulong)uVar2);
    pBVar4 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::LoadLiteral(pBVar4,(param_3 & 0xff) << 1)
    ;
    pBVar4 = (BytecodeArrayBuilder *)
             BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar4,uVar2 + 1);
    pBVar4 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::CallRuntime(pBVar4,0xbd,uVar6);
  }
  BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar4,param_2);
  return;
}

