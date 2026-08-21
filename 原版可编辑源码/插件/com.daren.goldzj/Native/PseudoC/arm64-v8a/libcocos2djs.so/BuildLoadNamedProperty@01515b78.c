
/* v8::internal::interpreter::BytecodeGenerator::BuildLoadNamedProperty(v8::internal::Expression
   const*, v8::internal::interpreter::Register, v8::internal::AstRawString const*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildLoadNamedProperty
          (BytecodeGenerator *this,Expression *param_1,undefined4 param_3,AstRawString *param_4)

{
  undefined8 uVar1;
  
  if (((FLAG_enable_one_shot_optimization != '\0') && (*(int *)(this + 0x334) < 1)) &&
     ((*(int *)(*(long *)(*(long *)(this + 0x1d0) + 0x10) + 0x1c) == 0 ||
      ((*(byte *)(*(long *)(*(long *)(this + 0x1d0) + 0x10) + 6) >> 6 & 1) != 0)))) {
    BytecodeArrayBuilder::LoadNamedPropertyNoFeedback
              ((BytecodeArrayBuilder *)(this + 0x18),param_3,param_4);
    return;
  }
  uVar1 = GetCachedLoadICSlot(this,param_1,param_4);
  BytecodeArrayBuilder::LoadNamedProperty
            ((BytecodeArrayBuilder *)(this + 0x18),param_3,param_4,uVar1);
  return;
}

