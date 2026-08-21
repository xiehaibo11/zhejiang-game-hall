
/* v8::internal::compiler::CodeGenerator::FinishFrame(v8::internal::compiler::Frame*) */

void __thiscall
v8::internal::compiler::CodeGenerator::FinishFrame(CodeGenerator *this,Frame *param_1)

{
  int iVar1;
  long lVar2;
  
  Frame::AlignFrame(param_1,0x10);
  lVar2 = **(long **)(this + 0x20);
  iVar1 = CountSetBits(*(ulong *)(lVar2 + 0x38),0x40);
  if (iVar1 != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar1;
  }
  iVar1 = CountSetBits(*(ulong *)(lVar2 + 0x30),0x40);
  if (iVar1 != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar1;
  }
  return;
}

