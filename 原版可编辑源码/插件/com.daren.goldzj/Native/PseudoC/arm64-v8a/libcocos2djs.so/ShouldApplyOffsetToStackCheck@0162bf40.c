
/* v8::internal::compiler::CodeGenerator::ShouldApplyOffsetToStackCheck(v8::internal::compiler::Instruction*,
   unsigned int*) */

bool __thiscall
v8::internal::compiler::CodeGenerator::ShouldApplyOffsetToStackCheck
          (CodeGenerator *this,Instruction *param_1,uint *param_2)

{
  uint uVar1;
  
  if (*(uint *)param_1 >> 0x16 == 0) {
    if ((char)(*(long **)(this + 0x18))[2] == '\0') {
      uVar1 = 0;
    }
    else {
      uVar1 = *(int *)(this + 0x3c0) + *(int *)(**(long **)(this + 0x18) + 4) * -8;
      uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    }
    *param_2 = uVar1;
    return 0x100 < uVar1;
  }
  return false;
}

