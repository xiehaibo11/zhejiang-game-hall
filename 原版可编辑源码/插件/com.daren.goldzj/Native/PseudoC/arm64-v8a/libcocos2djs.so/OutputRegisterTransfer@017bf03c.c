
/* v8::internal::interpreter::BytecodeRegisterOptimizer::OutputRegisterTransfer(v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*,
   v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*) */

void __thiscall
v8::internal::interpreter::BytecodeRegisterOptimizer::OutputRegisterTransfer
          (BytecodeRegisterOptimizer *this,RegisterInfo *param_1,RegisterInfo *param_2)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = *(int *)param_2;
  if (*(int *)param_1 == *(int *)(this + 8)) {
    (**(code **)(**(long **)(this + 0xa0) + 0x18))(*(long **)(this + 0xa0),iVar1);
  }
  else {
    plVar2 = *(long **)(this + 0xa0);
    if (iVar1 == *(int *)(this + 8)) {
      (**(code **)(*plVar2 + 0x10))();
    }
    else {
      (**(code **)(*plVar2 + 0x20))(plVar2,*(int *)param_1,iVar1);
    }
  }
  if (iVar1 != *(int *)(this + 8)) {
    if (iVar1 <= *(int *)(this + 0x1c)) {
      iVar1 = *(int *)(this + 0x1c);
    }
    *(int *)(this + 0x1c) = iVar1;
  }
  param_2[8] = (RegisterInfo)0x1;
  return;
}

