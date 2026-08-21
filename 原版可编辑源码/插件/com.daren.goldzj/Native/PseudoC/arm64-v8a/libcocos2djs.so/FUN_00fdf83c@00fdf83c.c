
void FUN_00fdf83c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  Instruction IVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  Instruction *this;
  long lVar5;
  
  this = (Instruction *)*param_3;
  if (*(char *)(param_3 + 1) == '\x02') {
    if (this[3] != (Instruction)0x18) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","instr->IsLdrLiteralW()");
    }
    lVar5 = param_3[3];
    puVar2 = (uint *)v8::internal::Instruction::ImmPCOffsetTarget(this);
    puVar4 = (undefined8 *)(lVar5 - 1U & 0xffffffff00000000 | (ulong)*puVar2);
  }
  else {
    IVar1 = this[3];
    puVar4 = (undefined8 *)v8::internal::Instruction::ImmPCOffsetTarget(this);
    if (IVar1 == (Instruction)0x58) {
      puVar4 = (undefined8 *)*puVar4;
    }
  }
  if (((*(byte *)(((ulong)puVar4 & 0xfffffffffffc0000) + 8) & 0x18) != 0) &&
     (uVar3 = (**(code **)(*param_1 + 0xb0))(param_1), (uVar3 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "Heap::InYoungGeneration(heap_object) implies IsMarked(heap_object)");
  }
  return;
}

