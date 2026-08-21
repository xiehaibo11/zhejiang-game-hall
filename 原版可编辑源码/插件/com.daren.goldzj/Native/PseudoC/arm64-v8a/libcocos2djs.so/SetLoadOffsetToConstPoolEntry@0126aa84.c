
/* v8::internal::ConstantPool::SetLoadOffsetToConstPoolEntry(int, v8::internal::Instruction*,
   v8::internal::ConstantPoolKey const&) */

void v8::internal::ConstantPool::SetLoadOffsetToConstPoolEntry
               (int param_1,Instruction *param_2,ConstantPoolKey *param_3)

{
  Instruction::SetImmPCOffsetTarget
            ((Instruction *)(*(long *)(*(long *)(ulong)(uint)param_1 + 0x10) + (long)(int)param_2),
             (AssemblerOptions *)(*(long *)(ulong)(uint)param_1 + 0xa0),(Instruction *)param_3);
  return;
}

