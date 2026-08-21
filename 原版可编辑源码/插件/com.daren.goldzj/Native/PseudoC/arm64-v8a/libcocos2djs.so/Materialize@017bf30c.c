
/* v8::internal::interpreter::BytecodeRegisterOptimizer::Materialize(v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*)
    */

void __thiscall
v8::internal::interpreter::BytecodeRegisterOptimizer::Materialize
          (BytecodeRegisterOptimizer *this,RegisterInfo *param_1)

{
  int iVar1;
  long *plVar2;
  RegisterInfo *pRVar3;
  
  pRVar3 = param_1;
  if (param_1[8] == (RegisterInfo)0x0) {
    do {
      pRVar3 = *(RegisterInfo **)(pRVar3 + 0x10);
    } while (pRVar3[8] == (RegisterInfo)0x0);
    iVar1 = *(int *)param_1;
    if (*(int *)pRVar3 == *(int *)(this + 8)) {
      (**(code **)(**(long **)(this + 0xa0) + 0x18))(*(long **)(this + 0xa0),iVar1);
    }
    else {
      plVar2 = *(long **)(this + 0xa0);
      if (iVar1 == *(int *)(this + 8)) {
        (**(code **)(*plVar2 + 0x10))();
      }
      else {
        (**(code **)(*plVar2 + 0x20))(plVar2,*(int *)pRVar3,iVar1);
      }
    }
    if (iVar1 != *(int *)(this + 8)) {
      if (iVar1 <= *(int *)(this + 0x1c)) {
        iVar1 = *(int *)(this + 0x1c);
      }
      *(int *)(this + 0x1c) = iVar1;
    }
    param_1[8] = (RegisterInfo)0x1;
  }
  return;
}

