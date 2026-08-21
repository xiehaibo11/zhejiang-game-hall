
/* v8::internal::InterpretedFrameInfo::InterpretedFrameInfo(int, int, bool,
   v8::internal::FrameInfoKind) */

void __thiscall
v8::internal::InterpretedFrameInfo::InterpretedFrameInfo
          (InterpretedFrameInfo *this,int param_1,int param_2,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = InterpreterFrameConstants::RegisterStackSlotCount(param_2);
  iVar3 = 2;
  if (param_5 != 1 && (param_4 & 1) == 0) {
    iVar3 = 0;
  }
  *(int *)this = iVar1;
  *(int *)(this + 4) = (iVar1 + iVar3) * 8;
  uVar2 = ShouldPadArguments(param_1);
  *(uint *)(this + 8) = *(int *)(this + 4) + ((uVar2 & 1) + param_1) * 8 + 0x30;
  return;
}

