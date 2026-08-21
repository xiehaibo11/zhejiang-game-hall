
/* v8::internal::compiler::CodeGenerator::GetStackCheckOffset() */

uint __thiscall v8::internal::compiler::CodeGenerator::GetStackCheckOffset(CodeGenerator *this)

{
  uint uVar1;
  
  if ((char)(*(long **)(this + 0x18))[2] != '\0') {
    uVar1 = *(int *)(this + 0x3c0) + *(int *)(**(long **)(this + 0x18) + 4) * -8;
    return uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  }
  return 0;
}

