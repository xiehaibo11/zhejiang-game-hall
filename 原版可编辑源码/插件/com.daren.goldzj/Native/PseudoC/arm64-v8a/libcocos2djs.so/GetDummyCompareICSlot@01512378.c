
/* v8::internal::interpreter::BytecodeGenerator::GetDummyCompareICSlot() */

int __thiscall
v8::internal::interpreter::BytecodeGenerator::GetDummyCompareICSlot(BytecodeGenerator *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x31c);
  if (iVar1 == -1) {
    iVar1 = FeedbackVectorSpec::AddSlot
                      (*(FeedbackVectorSpec **)(this + 800),*(undefined4 *)(this + 0x318));
    *(int *)(this + 0x31c) = iVar1;
  }
  return iVar1;
}

