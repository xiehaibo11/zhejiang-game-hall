
/* v8::internal::interpreter::BytecodeGenerator::BuildStoreNamedProperty(v8::internal::Expression
   const*, v8::internal::interpreter::Register, v8::internal::AstRawString const*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildStoreNamedProperty
          (BytecodeGenerator *this,Expression *param_1,undefined4 param_3,AstRawString *param_4)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (*(int *)(*(long *)(this + 0x300) + 0x18) == 1) {
    iVar4 = 0x7fffffff;
  }
  else {
    iVar4 = *(int *)(this + 0x118);
    iVar1 = *(int *)(this + 0x11c);
    plVar2 = *(long **)(this + 0x120);
    if (iVar1 <= iVar4 + 1) {
      iVar1 = iVar4 + 1;
    }
    *(int *)(this + 0x118) = iVar4 + 1;
    *(int *)(this + 0x11c) = iVar1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,iVar4);
    }
    BytecodeArrayBuilder::StoreAccumulatorInRegister((BytecodeArrayBuilder *)(this + 0x18),iVar4);
  }
  if (((FLAG_enable_one_shot_optimization == '\0') || (0 < *(int *)(this + 0x334))) ||
     ((*(int *)(*(long *)(*(long *)(this + 0x1d0) + 0x10) + 0x1c) != 0 &&
      ((*(byte *)(*(long *)(*(long *)(this + 0x1d0) + 0x10) + 6) >> 6 & 1) == 0)))) {
    uVar3 = GetCachedStoreICSlot(this,param_1,param_4);
    BytecodeArrayBuilder::StoreNamedProperty
              (this + 0x18,param_3,param_4,uVar3,*(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1);
  }
  else {
    BytecodeArrayBuilder::StoreNamedPropertyNoFeedback
              ((BytecodeArrayBuilder *)(this + 0x18),param_3,param_4,
               *(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1);
  }
  if (*(int *)(*(long *)(this + 0x300) + 0x18) == 1) {
    return;
  }
  BytecodeArrayBuilder::LoadAccumulatorWithRegister((BytecodeArrayBuilder *)(this + 0x18),iVar4);
  return;
}

